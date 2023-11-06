#include "game.hpp"

Game::Game()
{
	m_shader_map = new ShaderGLSL("shader_map");
	m_shader_environment = new ShaderGLSL("shader_background");
	m_shader_blob_raymarcher = new ShaderGLSL("shader_blob");
	m_shader_info = new ShaderGLSL("shader_infos");

	m_shader_compute_v = new ShaderGLSL("shader_compute_v");
	m_shader_compute_p = new ShaderGLSL("shader_compute_p");
	m_shader_compute_paint = new ShaderGLSL("shader_compute_paint");
	m_shader_count_score = new ShaderGLSL("shader_count_score");
	
	//Init all shaders here
	for (int i = 0; i < 4; i++)
		m_player[i].set_id(i);
	
	//.xy = normal, .z=timestamp (for cool graphics effect), .w = playerID (or empty)
	m_tex_map.set_format_params({ GL_RGBA32F,GL_RGBA,GL_FLOAT,4 },1,false);
	m_tex_map.set_filtering_params(GL_NEAREST, GL_NEAREST,0.0f,GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE);
	m_tex_map.create_empty(uvec2(16,16));
	m_tex_map.set_slot(TEXTURE_MAP);

	m_blobs_SSBO.allocate(1);
	m_blobs_SSBO.set_target_and_slot(GL_SHADER_STORAGE_BUFFER, SSBO_BLOBS_DATA_BINDING);

	m_score_SSBO.allocate(sizeof(uvec4));
	m_score_SSBO.set_target_and_slot(GL_SHADER_STORAGE_BUFFER, SSBO_SCORE_BINDING);

	m_map_color_empty = vec3(0.5f);

	m_map_quality = 2;

	m_time_limit_s = 60.0f;
	m_player_count = 2;
	m_blobs_per_player = 16;
	m_player_input_magnitude = 1000.0f;

	m_ground_friction = 0.01f;
	m_fluid_friction = 3.0f; //todo changed for smoothing
	m_bounce_coef = 0.8f;

	m_blob_mass = 1.0f;
	m_gravity_amplitude = 1.0f;
	m_delta_t_s = 0.004f;

	// m_k_repulse = 1.0f;
	// m_d_eq = 2.0f;
	// m_k_attract = 0.5f;
	// m_d_attract = 3.0f;
	// m_rendering_radius = 3.0f;

	m_k_repulse = 1.0f;
	m_d_eq = 9.0f;
	m_k_attract = .5f;
	m_d_attract = 3.f;
	m_rendering_radius = 10.0f;
	init_game();
}


void Game::load_cubemap(std::string base_path, std::string base_name)
{
	m_tex_environment.set_format_params({ GL_RGB8,GL_RGB ,GL_UNSIGNED_BYTE ,3 });
	m_tex_environment.create_from_file((base_path + "data/"+ base_name + "/").c_str(), ".jpg", false);
	m_tex_environment.set_filtering_params();
	m_tex_environment.set_slot(TEXTURE_ENVIRONMENT);
}


void Game::load_shaders(std::string base_path)
{
	m_shader_map->add_shader(GL_VERTEX_SHADER, base_path, "shaders/map_vs.glsl");
	m_shader_map->add_shader(GL_FRAGMENT_SHADER, base_path, "shaders/map_fs.glsl");
	m_shader_map->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_map);

	m_shader_environment->add_shader(GL_VERTEX_SHADER, base_path, "shaders/environment_vs.glsl");
	m_shader_environment->add_shader(GL_FRAGMENT_SHADER, base_path, "shaders/environment_fs.glsl");
	m_shader_environment->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_environment);

	m_shader_blob_raymarcher->add_shader(GL_VERTEX_SHADER, base_path, "shaders/blob_vs.glsl"); //changed
	m_shader_blob_raymarcher->add_shader(GL_FRAGMENT_SHADER, base_path, "shaders/blob_fs.glsl");
	m_shader_blob_raymarcher->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_blob_raymarcher);
	
	m_shader_info->add_shader(GL_VERTEX_SHADER, base_path, "shaders/infos_vs.glsl"); //changed
	m_shader_info->add_shader(GL_FRAGMENT_SHADER, base_path, "shaders/infos_fs.glsl");
	m_shader_info->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_info);
	
	m_shader_compute_v->add_shader(GL_COMPUTE_SHADER, base_path, "shaders/blob_speed_cs.glsl");
	m_shader_compute_v->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_compute_v);

	m_shader_compute_p->add_shader(GL_COMPUTE_SHADER, base_path, "shaders/blob_physics_cs.glsl");
	m_shader_compute_p->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_compute_p);

	m_shader_compute_paint->add_shader(GL_COMPUTE_SHADER, base_path, "shaders/map_paint_cs.glsl");
	m_shader_compute_paint->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_compute_paint);
	
	m_shader_count_score->add_shader(GL_COMPUTE_SHADER, base_path, "shaders/score_cs.glsl");
	m_shader_count_score->compile_and_link_to_program();
	ContextHelper::add_shader_to_hot_reload(m_shader_count_score);
}



void Game::init_game()
{
	m_work_group_1d_count = 32;
	//Map resolution
	if (m_map_quality == 0)//Bad
	{
		m_map_resolution = uvec2(512,320);
		m_work_group_2d_count = uvec2(32, 20); //map_resolution / 16
		m_cell_length = 4.0f;
		m_map_offset = -vec2(m_map_resolution) * m_cell_length * 0.5f;
	}
	else if (m_map_quality == 1)//Normal
	{
		m_map_resolution = uvec2(1024,640);
		m_work_group_2d_count = uvec2(64, 40);
		m_cell_length = 2.0f;
		m_map_offset = -vec2(m_map_resolution) * m_cell_length * 0.5f;
	}
	else //if (m_map_quality == 2)//Good
	{
		m_map_resolution = uvec2(2048,1280);
		m_work_group_2d_count = uvec2(128, 80);
		m_cell_length = 1.0f;
		m_map_offset = -vec2(m_map_resolution) * m_cell_length * 0.5f;
	}

	reset_map_texture();
	reset_blobs_state();
	reset_score();
	m_time_game_s = 0.0f;
}


void Game::reset_map_texture()
{
	m_tex_map.re_create_empty(m_map_resolution);
	m_tex_map.bind_to_image();
	//.xy = normal, .z=timestamp (for cool graphics effect), .w = playerID (or empty)
	float clear_value[] = { 0.0f, 0.0f, 0.0f, EMPTY_ID_FLOAT };
	glClearTexImage(m_tex_map.m_tex_id, 0, GL_RGBA, GL_FLOAT, &clear_value);
}

void Game::reset_blobs_state()
{
	m_total_blob_count = m_blobs_per_player * m_player_count;
	m_blobs_SSBO.re_allocate(m_total_blob_count * sizeof(Blob));

	for (int i = 0; i < m_player_count; i++)
	{
		Blob* blobs_data_ptr = m_player[i].get_init_blobs_data(m_map_offset, m_blobs_per_player);
		//Write in SSBO the chunk associated for blobs of a player
		m_blobs_SSBO.write_to_gpu(blobs_data_ptr, i * m_blobs_per_player * sizeof(Blob), m_blobs_per_player * sizeof(Blob));
		delete[] blobs_data_ptr;
	}
}


void Game::reset_score()
{
	uvec4 scores = uvec4(0);
	m_score_SSBO.write_to_gpu(&scores);
}

void Game::readback_scores()
{
	uvec4 scores;
	m_score_SSBO.read_from_gpu(&scores);
	for (int i = 0; i < 4; i++)
		m_player[i].set_score(scores[i]);
}

void Game::console_print_scores()
{
	std::cout << "Scores:";
	for (int i = 0; i < m_player_count; i++)
		std::cout << "    P" << i<<": "<<m_player[i].get_score();
	std::cout << std::endl;
}


void Game::write_params_to_application_struct(ApplicationUboDataStructure& app_ubo)
{
	for (int i = 0; i < m_player_count; i++)
		m_player[i].write_params_to_application_struct(app_ubo);


	app_ubo.blob_physics_params.x = m_ground_friction;
	app_ubo.blob_physics_params.y = m_fluid_friction;
	app_ubo.blob_physics_params.z = m_bounce_coef;
	app_ubo.blob_physics_params.w = m_rendering_radius;

	app_ubo.blob_repulsion_params.x = m_k_repulse;
	app_ubo.blob_repulsion_params.y = m_d_eq;
	app_ubo.blob_repulsion_params.z = m_k_attract;
	app_ubo.blob_repulsion_params.w = m_d_attract;

	app_ubo.physics_params.x = m_gravity_amplitude;
	app_ubo.physics_params.y = m_blob_mass;
	app_ubo.physics_params.z = m_delta_t_s;
	app_ubo.physics_params.w = m_time_game_s;

	app_ubo.map_dim.x = m_map_resolution.x;
	app_ubo.map_dim.y = m_map_resolution.y;
	app_ubo.map_dim.z = m_total_blob_count;
	app_ubo.map_dim.w = m_player_count;

	app_ubo.map_size.x = m_map_offset.x;
	app_ubo.map_size.y = m_map_offset.y;
	app_ubo.map_size.z = m_cell_length;
	app_ubo.map_size.w = m_time_limit_s;

	app_ubo.player_color[4].x = m_map_color_empty.x;
	app_ubo.player_color[4].y = m_map_color_empty.y;
	app_ubo.player_color[4].z = m_map_color_empty.z;
	app_ubo.player_color[4].w = 0.0f;//not used
}



void Game::poll_players_input()
{
	for (int i = 0; i < m_player_count; i++)
		m_player[i].poll_direction(m_player_input_magnitude);
}


void Game::draw_map()
{
	vao_dummy.use_vao();
	m_shader_map->use_shader_program();
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);//2 triangle to draw a quad of the scene
	glFlush();
	m_shader_environment->use_shader_program();
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);//2 triangle to cover the screen and use cubemap for background
	glFlush();

	//TODO CHANGER DE PLACE + le calcul n'est pas bon car m_delta_t_s n'est pas le temps reel d'une frame
	m_time_game_s += m_delta_t_s;
	if (m_time_game_s > m_time_limit_s)
	{
		m_game_status = 0;//Game finished
		m_time_game_s = 0.0f;
		console_print_scores();
	}
}

void Game::draw_blob()
{
	vao_dummy.use_vao();
	m_shader_blob_raymarcher->use_shader_program();
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);//2 triangle to draw a quad of the scene
	glFlush();
}

void Game::draw_infos()
{
	vao_dummy.use_vao();
	m_shader_info->use_shader_program();
	glDrawArrays(GL_TRIANGLES, 0, 12);//4 triangle to draw 2 quad of the ui
	glFlush();
}


void Game::compute_blob_speed()
{
	m_shader_compute_v->use_shader_program();
	const int dispatch_count = (m_total_blob_count - 1) / (32)+1;
	glDispatchCompute(dispatch_count, 1, 1);
	glFlush();
	glMemoryBarrier(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT);//Sync barrier to ensure CS finished (since it is writing to an Image)
	//	when uncommented makes map disapear idk why
	//glDisable(GL_DEPTH_TEST);
}


void Game::compute_blob_position()
{
	m_shader_compute_p->use_shader_program();
	const int dispatch_count = (m_total_blob_count - 1) / 32 + 1;
	glDispatchCompute(dispatch_count, 1, 1);
	glFlush();
	glMemoryBarrier(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT);//Sync barrier to ensure CS finished (since it is writing to an Image)
}

void Game::compute_map_paint()
{
	m_shader_compute_paint->use_shader_program();
	const uvec2 dispatch_count = (m_tex_map.m_size - uvec2(1,1)) / (m_work_group_2d_count)+uvec2(1, 1);
	glDispatchCompute(dispatch_count.x, dispatch_count.y, 1);//Dispatch that covers screen 
	glFlush();
	glMemoryBarrier(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT);//Sync barrier to ensure CS finished (since it is writing to an Image)
}

void Game::compute_score()
{
	reset_score();
	m_shader_count_score->use_shader_program();
	const uvec2 dispatch_count = (m_tex_map.m_size - uvec2(1,1)) / uvec2(16,16)+uvec2(1, 1); //dont work with m_work_group_2d_count ??
	glDispatchCompute(dispatch_count.x, dispatch_count.y, 1);//Dispatch that covers screen 
	glFlush();
	glMemoryBarrier(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT);//Sync barrier to ensure CS finished (since it is writing to an Image)

}

void Game::gui(ApplicationUboDataStructure& app_ubo)
{
	if (ImGui::Button("Start Game"))
	{
		init_game();
		m_game_status = 1;//Game started
	}
	ImGui::ColorEdit3("Map color empty", &(m_map_color_empty.x));
	ImGui::Text("Map quality");
	ImGui::RadioButton("Bad", &m_map_quality, 0);
	ImGui::SameLine();
	ImGui::RadioButton("Normal", &m_map_quality, 1);
	ImGui::SameLine();
	ImGui::RadioButton("Good", &m_map_quality, 2);

	if (ImGui::TreeNode("Gameplay"))
	{
		int player_count = m_player_count;
		ImGui::SliderInt("Players count", &(player_count), 1, 4);
		m_player_count = player_count;
		int blobs_per_player = m_blobs_per_player;
		ImGui::SliderInt("Blobs count per player", &(blobs_per_player), 1, 512);
		m_blobs_per_player = blobs_per_player;
		ImGui::SliderFloat("Time limit (sec)", &(m_time_limit_s), 10.0f, 300.0f);
		ImGui::SliderFloat("Acceleration multiplier", &(m_player_input_magnitude), 100.f, 5000.0f);
		ImGui::TreePop();
	}
	if (ImGui::TreeNode("Players color"))
	{
		for (int i = 0; i < m_player_count; i++)
			m_player[i].gui();
		ImGui::TreePop();
	}
	//Parameters for Debug/Tuning only 
	if (ImGui::TreeNode("Blob Physics"))
	{
		ImGui::SliderFloat("Ground friction", &(m_ground_friction), 0.0f, 0.1f);
		ImGui::SliderFloat("Fluid friction", &(m_fluid_friction), .5f, 10.f); //todo changed for smoothing
		ImGui::SliderFloat("Bounce factor", &(m_bounce_coef), 0.0f, 1.0f);
		ImGui::TreePop();
	}
	if (ImGui::TreeNode("Blob attraction/repulsion"))
	{
		/*ImGui::SliderFloat("Repulsion amplitude", &(m_k_repulse), 0.1f, 2.0f);
		ImGui::SliderFloat("Equilibrium length", &(m_d_eq), 0.0f, 2.0f);

		ImGui::SliderFloat("Attraction amplitude", &(m_k_attract), 0.1f, 2.0f);
		ImGui::SliderFloat("Attraction length", &(m_d_attract), 2.0f, 4.0f);

		ImGui::SliderFloat("Rendering radius", &(m_rendering_radius), 2.0f,10.0f);*/
		
		ImGui::SliderFloat("Repulsion amplitude", &(m_k_repulse), .1f, 2.0f);
		ImGui::SliderFloat("Equilibrium length", &(m_d_eq), 0.0f, 75.0f);

		ImGui::SliderFloat("Attraction amplitude", &(m_k_attract), .1f, 5.0f);
		ImGui::SliderFloat("Attraction length", &(m_d_attract), 2.0f, 40.0f);

		ImGui::SliderFloat("Rendering radius", &(m_rendering_radius), 2.0f,30.0f);
		ImGui::TreePop();
	}
	if (ImGui::TreeNode("Game physics "))
	{
		ImGui::SliderFloat("Blob mass", &(m_blob_mass), 0.5f, 2.0f);
		ImGui::SliderFloat("Gravity amplitude", &(m_gravity_amplitude), 0.1f, 10.0f);
		ImGui::SliderFloat("Delta time (sec)", &(m_delta_t_s), 0.001f, 0.010f);
		ImGui::TreePop();
	}
}