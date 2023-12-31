#define GLFW_INCLUDE_NONE
#define TINYOBJLOADER_C_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define GLM_FORCE_LEFT_HANDED // because of OpenGL NDC
#include <GLFW/glfw3.h>
#include <glad/gl.h>
#include <glm/glm.hpp>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <iostream>
#include <thread>
#include <tiny_obj_loader_c.h>
#include <stb_image_write.h>
#include "helpers/helpers_common.hpp"
#include "buffer_structures.hpp"

#include "player.hpp"
#include "game.hpp"

#define FOLDER_ROOT "../"


int main(int argc, char* argv[]) {

	ContextHelper::init_context_all(1440, 900, "Paint War",8,0);
	ContextHelper::print_opengl_info();

	//Projection matrix
	ProjectionMatrix proj;
	proj.set_viewport_resolution(ContextHelper::resolution);
	proj.set_perspective(50.0f, 0.1f, 5000.0f);//maybe to adjust to scene
	//WorldView matrix
	Trackball cam; // Maybe this class will be modified to have a "walk" mode (forced just above the ground)
	cam.set_camera(2000.0f,vec3(0.f),90.f,-89.0f);
	cam.set_params(0.1f);


	Game game;
	game.load_shaders(FOLDER_ROOT);
	game.load_cubemap(FOLDER_ROOT,"cubemap_snow");



	//UBO init
	ApplicationUboDataStructure app_ubo_data;
	GPUBuffer application_ubo;
	application_ubo.allocate(sizeof(ApplicationUboDataStructure));
	application_ubo.set_target_and_slot(GL_UNIFORM_BUFFER, UBO_APPLICATION_BINDING);

	app_ubo_data.sun_light = vec4(1.0f, 0.0f, 0.0f, 1.0f);

	//OpenglFlags
	glClearColor(0.0f,0.0f, 0.0f,1.0f); // background is black
	//glEnable(GL_CULL_FACE);
	//glCullFace(GL_BACK);
	//glFrontFace(GL_CCW);;
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glEnable(GL_TEXTURE_CUBE_MAP_SEAMLESS);
	while (ContextHelper::should_not_close_window()) //main/render loop
	{
		ContextHelper::begin_frame();
		if (ContextHelper::window_resized)
		{
			glViewport(0, 0, ContextHelper::resolution.x, ContextHelper::resolution.y);
		}
		proj.set_viewport_resolution(ContextHelper::resolution);
		cam.flush();

		//Flush Application UBO
		app_ubo_data.proj = proj.m_proj;
		app_ubo_data.inv_proj = glm::inverse(proj.m_proj);
		app_ubo_data.w_v = cam.m_w_v;
		app_ubo_data.w_v_p = proj.m_proj * cam.m_w_v;
		app_ubo_data.inv_w_v_p = glm::inverse(app_ubo_data.w_v_p);
		app_ubo_data.cam_pos = vec4(cam.m_pos, ContextHelper::time_from_start_s);
		game.write_params_to_application_struct(app_ubo_data);
		application_ubo.write_to_gpu(&app_ubo_data);


		game.poll_players_input();


		for (float i = ContextHelper::time_from_start_s; i < ContextHelper::time_from_start_s + ContextHelper::time_frame_s; i += app_ubo_data.physics_params.z)
		{
			game.compute_blob_speed();
			game.compute_blob_position();
		}

		//game.compute_map_paint();
		game.compute_score();
		//game.readback_scores();
		//game.console_print_scores();

		//glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);//Sets the screen as the rendering target
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//clear Frambuffer channel + Z-buffer
		game.draw_map();
		game.draw_blob();
		game.draw_infos();

		glFinish();//Force wait for GPU to finish jobs, since the post_process shader will read from rendered textures


		//ImGui interface starts here
		ImGui::Begin("Parameters");
		static float theta_light = 30.0f;
		static float phi_light = 20.0f;
		float ct = glm::cos(glm::radians(theta_light));
		float st = glm::sin(glm::radians(theta_light));
		float cp = glm::cos(glm::radians(phi_light));
		float sp = glm::sin(glm::radians(phi_light));
		app_ubo_data.sun_light.x = cp * ct;
		app_ubo_data.sun_light.y = sp;
		app_ubo_data.sun_light.z = cp * st;

		if (ImGui::TreeNode("General"))
		{
			static float font_scale = 1.0f;
			ImGui::SetWindowFontScale(font_scale);
			ImGui::SliderFloat("text scale", &font_scale, 0.5f, 4.0f);
			
			ImGui::Text(("Camera position: " + std::to_string(cam.m_pos.x) + " " + std::to_string(cam.m_pos.y) + " " + std::to_string(cam.m_pos.z) + " ").c_str());
			ImGui::Text(("Camera direction: " + std::to_string(cam.m_w_v[0].z) + " " + std::to_string(cam.m_w_v[1].z) + " " + std::to_string(cam.m_w_v[2].z) + " ").c_str());
			ImGui::TreePop();
		}
		if (ImGui::TreeNode("Sun"))
		{
		ImGui::SliderFloat("Sun light theta", &(theta_light),0.0f,180.0f);
		ImGui::SliderFloat("Sun light phi", &(phi_light), 0.0f, 179.9f);
		ImGui::Text(("Sun light direction: " + std::to_string(app_ubo_data.sun_light.x) + " " + std::to_string(app_ubo_data.sun_light.y) + " " + std::to_string(app_ubo_data.sun_light.z) + " ").c_str());
		ImGui::SliderFloat("Sun light intensity", &app_ubo_data.sun_light.w, 0.0f, 2.0f);
		ImGui::TreePop();
		}
		game.gui(app_ubo_data);

		ImGui::End();

		ContextHelper::end_frame();//glfwSwapBuffers [hookpoint for profiler/debugger]
	}
	ContextHelper::destroy_context_all();

	return EXIT_SUCCESS;
}
