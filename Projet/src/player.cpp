#include "player.hpp"

KeyMapping PLAYERS_MAPPING_QWERTY[4] = {
	{GLFW_KEY_LEFT,GLFW_KEY_RIGHT,GLFW_KEY_UP,GLFW_KEY_DOWN},//P1 mapping
	{GLFW_KEY_A,GLFW_KEY_D,GLFW_KEY_W,GLFW_KEY_S},//P2 mapping
	{GLFW_KEY_J,GLFW_KEY_L,GLFW_KEY_I,GLFW_KEY_K},//P3 mapping
	{GLFW_KEY_KP_4,GLFW_KEY_KP_6,GLFW_KEY_KP_8,GLFW_KEY_KP_5}//P3 mapping
};

vec4 DEFAUL_COLORS[4] =
{
	vec4(1.0f,0.0f,0.0f,.1f),//P1 color
	vec4(0.0f,1.0f,0.0f,.1f),//P2 color
	vec4(0.0f,0.0f,1.0f,.1f),//P3 color
	vec4(1.0f,1.0f,0.0f,.1f)//P4 color
};


Player::Player()
{
	m_id = 0;
	m_color = DEFAUL_COLORS[m_id];
	m_direction = vec4(0.0f, 0.0f, 0.0f,1.0f);
	m_score = 0;
}

void Player::set_id(int id)
{
	m_id = id;
	m_color = DEFAUL_COLORS[m_id];
}


void Player::poll_direction(float magnitude)
{
	float lr = 0.0f;//1.0: right, -1.0: left //x_ws axis
	float ud = 0.0f;//1.0: up, -1.0: down //z_ws axis

	if (glfwGetKey(ContextHelper::window, PLAYERS_MAPPING_QWERTY[m_id].left) == GLFW_PRESS)
		lr = -1.0f;
	if (glfwGetKey(ContextHelper::window, PLAYERS_MAPPING_QWERTY[m_id].right) == GLFW_PRESS)
		lr = 1.0f;
	if (glfwGetKey(ContextHelper::window, PLAYERS_MAPPING_QWERTY[m_id].up) == GLFW_PRESS)
		ud = 1.0f;
	if (glfwGetKey(ContextHelper::window, PLAYERS_MAPPING_QWERTY[m_id].down) == GLFW_PRESS)
		ud = -1.0f;

	if (lr != 0.0f || ud != 0.0f)//avoid normalizing null vector !
		m_direction = vec4(lr, 0.0f, ud, magnitude);
	else
		m_direction = vec4(0.0f, 0.0f, 0.0f, magnitude);
}

void Player::set_score(std::uint32_t score)
{
	m_score = score;
}

std::uint32_t Player::get_score()
{
	return m_score;
}

Blob* Player::get_init_blobs_data(vec2 start_offset_ws, int blob_count_player)
{
	Blob* blob_data = new Blob[blob_count_player];//array of blob structure for a player
	for(int blob_id = 0; blob_id< blob_count_player; blob_id++)
	{ 
	float float_blob_id = float(blob_id) / blob_count_player;
	//blob rain effect at start !
	vec3 pos = vec3(start_offset_ws.x*0.75f, -(float_blob_id+0.5f) * start_offset_ws.x / 10.0f, start_offset_ws.y*0.75f);

	if (m_id == 0 || m_id == 1)
		pos.x *= -1.0f;
	if (m_id == 0 || m_id == 3)
		pos.z *= -1.0f;

	//Spiral effect
	float angle = 2.0f * glm::pi<float>() * float_blob_id *2.0f + m_id;//two rotations
	float spread = (1.0f - float_blob_id) * start_offset_ws.y *0.2f;
	pos.x += glm::cos(angle) * spread;
	pos.z += glm::sin(angle) * spread;

	blob_data[blob_id].p = vec4(pos.x, pos.y, pos.z, float(m_id));//map bounds overflow not tested !
	blob_data[blob_id].v = vec4(0.0f);
	}
	return blob_data;
}


void Player::write_params_to_application_struct(ApplicationUboDataStructure& app_ubo)
{
	app_ubo.player_color[m_id] = m_color;
	app_ubo.player_direction[m_id] = m_direction;
}

void Player::gui()
{
	ImGui::ColorEdit3(("Player " + std::to_string(m_id)).c_str(), &(m_color.x));
}