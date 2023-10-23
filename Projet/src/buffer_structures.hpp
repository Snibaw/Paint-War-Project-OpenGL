#ifndef BUFFER_STRUCTURES
#define BUFFER_STRUCTURES

#include <glm/glm.hpp>

#define uint uint32_t // for compatibility with GLSL
using namespace glm;

//structures for uniform buffers (UBOs) require proper 16 byte alignment (std140 layout)
//structures for shader storage buffers (SSBOs) require only 4 byte alignment (std430 layout)
//more at https://www.khronos.org/opengl/wiki/Interface_Block_(GLSL)#Memory_layout

//Texture channels ID:
#define TEXTURE_MAP 0 //containing ID of player controling the cell
/*Access map Image to write in shaders as follow
layout(binding = 0, rgba32f) uniform image2D tex_map;
*/


#define TEXTURE_ENVIRONMENT 1//cubemap

//GLSL: layout(binding = 0, std140) uniform UBO_APPLICATION
#define UBO_APPLICATION_BINDING 0
struct ApplicationUboDataStructure
{
	//General
	mat4 proj; //projection matrix (view to eye)
	mat4 inv_proj; //inverse projection matrix (eye to view)
	mat4 w_v; //world to view matrix
	mat4 w_v_p; //world to eye matrix
	mat4 inv_w_v_p; //eye to world matrix
	vec4 cam_pos;//camera position in world space, .w: time
	//PLayers
	vec4 player_color[5]; // 4 player + 1 empty
	vec4 player_direction[4];
	//Blobs
	vec4 blob_physics_params; //.x: m_ground_friction, .y: m_fluid_friction, .z: m_bounce_coef, .w: m_rendering_radius 
	vec4 blob_repulsion_params;//.x: m_k_repulse, .y: m_d_eq, .z: m_k_attract, .w: m_d_attract
	//General physics
	vec4 physics_params; //.x: m_gravity_amplitude, .y: m_blob_mass, .z: m_delta_t_s, .w: m_time_game_s
	//Map
	uvec4 map_dim; //.x:map_dimension.x, .y:map_dimension.y, .z: m_total_blob_count, .w:m_player_count
	vec4 map_size; //.x:map_offset.x, .y:map_offset.y, .z:m_cell_length, .w: m_time_limit_s
	//Light
	vec4 sun_light;//.xyz: direction, .w:intensity
};


#define SSBO_BLOBS_DATA_BINDING 0
//SSBO as an array  of struct Blob (of size m_total_blob_count)
struct Blob {//Mind GPU alignment !
	vec4 p;//.xyz: pos, .w: playerID
	vec4 v;//speed
};

#define SSBO_SCORE_BINDING 1
//SSBO as a uvec4 (.x = score P0, ....)


/*Access SSBOs in shader as follow;
struct Blob {//Mind GPU alignment !
	vec4 p;//.xyz: pos, .w: playerID
	vec4 v;//speed
};

layout(std430, binding = 0) readonly buffer SSBO_BLOBS_DATA
{
	Blob blob_data[];
};
layout(std430, binding = 1) readonly buffer SSBO_SCORE
{
	uvec4 player_score;
};

main()
{
blob_data[2].v = ....
player_score[0] = ....
}

*/



#endif

