#ifndef PLAYER_CLASS
#define PLAYER_CLASS

#include"buffer_structures.hpp"
#include "helpers/helpers_common.hpp"
#include <GLFW/glfw3.h>

struct KeyMapping {
	int left;
	int right;
	int up;
	int down;
};


extern KeyMapping PLAYERS_MAPPING_QWERTY[4];
extern vec4 DEFAUL_COLORS[4];


class Player {

public:
	Player();
	void set_id(int id);
	Blob* get_init_blobs_data(vec2 start_offset_ws, int blob_count_player);//each player starts in a "corner"
	void poll_direction(float magnitude);
	void write_params_to_application_struct(ApplicationUboDataStructure& app_ubo);
	void set_score(std::uint32_t score);
	std::uint32_t get_score();
	void gui();

	
private:

	std::uint32_t m_score;
	int m_id;
	vec4 m_color;

	vec4 m_direction;//From key .xyz = normalized vector, .w = magnitude
};

#endif

