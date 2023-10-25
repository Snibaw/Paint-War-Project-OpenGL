#ifndef GAME_CLASS
#define GAME_CLASS

#include "player.hpp"
#include"buffer_structures.hpp"
#include "helpers/helpers_common.hpp"
#include <GLFW/glfw3.h>

#define EMPTY_ID_FLOAT 4.0f // 0.0f = P1, 1.0f = P2, 2.0f = P3, 3.0f = P4, 4.0f = empty

class Game {//One instance

public:
	Game();
	void load_shaders(std::string base_path);
	void load_cubemap(std::string base_path, std::string base_name);

	void init_game();//To call when (re-) starting a game


	void write_params_to_application_struct(ApplicationUboDataStructure& app_ubo);
	
	void poll_players_input();
	void readback_scores();
	void console_print_scores();

	void draw_map();
	void draw_blob();
	void draw_infos();

	void compute_blob_speed();
	void compute_blob_position();
	void compute_map_paint();
	void compute_score();

	void gui(ApplicationUboDataStructure& app_ubo);

private:
	void reset_score();
	void reset_map_texture();
	void reset_blobs_state();


	//Drawing shaders
	ShaderGLSL* m_shader_map;//texture2D on ground
	ShaderGLSL* m_shader_environment;//cubemap
	ShaderGLSL* m_shader_info;//score & time 2D bars
	ShaderGLSL* m_shader_blob_raymarcher;//blob renderer
	
	//Compute shaders
	ShaderGLSL* m_shader_compute_v;//compute speed from forces for each blob
	ShaderGLSL* m_shader_compute_p;//compute position and collisions from speed for each blob
	ShaderGLSL* m_shader_compute_paint;//update map with paint under blobs, for each texel
	ShaderGLSL* m_shader_count_score;//update score by adding all painted texels

	//Ressources
	VertexArrayObject vao_dummy;
	Texture2D m_tex_map;//.xy = normal, .z=timestamp (for cool graphics effect), .w = playerID (or empty)
	Cubemap m_tex_environment;
	GPUBuffer m_score_SSBO;//small SSBO for the score of each player
	GPUBuffer m_blobs_SSBO;//SSBO for storing blobs parameters (Blob struct)

	//map
	//controls resolution of map (thus texels to paint)
	int m_map_quality; //1 = BAD, 2 = NORMAL, 3 = GOOD
	vec3 m_map_color_empty;
	//game setups
	float m_time_limit_s;
	std::uint32_t m_player_count;//<=4
	std::uint32_t m_blobs_per_player;
	float m_player_input_magnitude;//how strong blobs accelerate

	//physics setups
	float m_ground_friction;//f_g = m_ground_friction in direction opposing acceleration if on ground
	float m_fluid_friction;// f_f = m_fluid_friction * velocity in direction opposing acceleration
	float m_bounce_coef;//When hitting a wall, "wall" component of speed is reversed with that factor  
	

	float m_blob_mass;//inertia
	float m_gravity_amplitude;//in direction -y
	float m_delta_t_s;//simulation time-step in second

	//blob attraction/repulsion Force setups
	
		//We build (in shader) piece-wise linear Force profiles for blob-to-blob interaction
		//  B0--D--B1: B0 at distance D from B1

		float m_k_repulse;//amplitude of repulsion factor
		float m_d_eq;//equilibrium length (not force)
		//Case 1: B0 and B1 to different players, we want blobs to repulse when too close (<D), no attraction
		//	D = 0 => F = k_repulse (If we consider B0, then the direction is normalize(B0<---B1))
		//  D = d_eq => F = 0 (null vector)
		//  D > d_eq => F = 0 (null vector) 

		float m_k_attract;//amplitude of attraction factor
		float m_d_attract;//distance at max attraction force
		//Case2: B0 and B1 to the same players, we want blobs to repulse when too close (<D), but to attract at bigger range
		//	D = 0 => F = k_repulse (in direction normalize(B0<---B1), if we consider B0)
		//  D = d_eq => F = 0 (null vector)
		//  D = d_attract => F = -k_attract (in direction normalize(B0<---B1), if we consider B0)
		//  D = 2.0f*d_attract - d_eq => F = 0 (null vector)
		//  D > 2.0f*d_attract - d_eq => F = 0 (null vector)
		float m_rendering_radius;//Radius used for rendering (and coloring), should be > m_d_eq

	//parameters not exposed in GUI
	int m_game_status;//0 = not playing, 1 = playing
	float m_time_game_s;
	std::uint32_t m_total_blob_count;

	Player m_player[4];
	float m_cell_length;
	vec2 m_map_offset;
	uvec2 m_map_resolution;
	uvec2 m_work_group_2d_count;//supposes 16x16x1 workgroup size for 2D computes
	int m_work_group_1d_count;
};

#endif

