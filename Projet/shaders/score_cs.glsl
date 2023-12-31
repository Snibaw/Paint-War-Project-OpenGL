#version 460
layout (local_size_x = 16, local_size_y = 16,local_size_z = 1) in;

//matches buffer_structures.hpp
layout(binding = 0, std140) uniform UBO_APPLICATION
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

//Access SSBOs in shader as follow;
struct Blob {//Mind GPU alignment !
	vec4 p;//.xyz: pos, .w: playerID
	vec4 v;//speed
};

layout(std430, binding = 0) buffer SSBO_BLOBS_DATA
{
	Blob blob_data[];
};
layout(std430, binding = 1) readonly buffer SSBO_SCORE
{
	uvec4 player_score;
};

layout(binding = 0, rgba32f) uniform image2D tex_map;

void main() {
    //check if the thread is in the map
    if (map_dim.x <= gl_GlobalInvocationID.x || map_dim.y <= gl_GlobalInvocationID.y) {
        return;
    }


    
    //add 1 to player score if the color of the texel is the same as the player
    if (imageLoad(tex_map, ivec2(gl_GlobalInvocationID.xy)) == (player_color[4])) {
        return;
    }
    else if (imageLoad(tex_map, ivec2(gl_GlobalInvocationID.xy)) == (player_color[0])) {
        atomicAdd(player_score.x, 1);
    }
    else if (imageLoad(tex_map, ivec2(gl_GlobalInvocationID.xy)) == (player_color[1])) {
        atomicAdd(player_score.y, 1);
    }
    else if (imageLoad(tex_map, ivec2(gl_GlobalInvocationID.xy)) == (player_color[2])) {
        atomicAdd(player_score.z, 1);
    }
    else if (imageLoad(tex_map, ivec2(gl_GlobalInvocationID.xy)) == (player_color[3])) {
        atomicAdd(player_score.w, 1);
    }
}
