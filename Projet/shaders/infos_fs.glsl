#version 460
#define UBO_APPLICATION_BINDING 0
layout (location = 0) out vec4 pixel_color;

//matches buffer_structures.hpp
layout(binding = UBO_APPLICATION_BINDING, std140) uniform UBO_APPLICATION
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

in vec2 tex_coord;

//layout(binding = 0) uniform sampler2D tex_score;

void main() 
{
    uint total_score = player_score.x + player_score.y + player_score.z + player_score.w;
    float player1_score_ratio = float(player_score.x) / float(total_score);
    float player2_score_ratio = float(player_score.y) / float(total_score);
    float player3_score_ratio = float(player_score.z) / float(total_score);
    float player4_score_ratio = float(player_score.w) / float(total_score);
    if (tex_coord.x < player1_score_ratio)
    {
        pixel_color = player_color[0];
    }
    else if (tex_coord.x < player1_score_ratio + player2_score_ratio)
    {
        pixel_color = player_color[1];
    }
    else if (tex_coord.x < player1_score_ratio + player2_score_ratio + player3_score_ratio)
    {
        pixel_color = player_color[2];
    }
    else if (tex_coord.x < player1_score_ratio + player2_score_ratio + player3_score_ratio + player4_score_ratio)
    {
        pixel_color = player_color[3];
    }
    //for timer
    else if (tex_coord.x > 1.0f && tex_coord.x - (physics_params.w / map_size.w)>1.0f)
    {
        pixel_color = vec4(0.f, 0.f, 0.f, 1.0f);
    }
    else if (tex_coord.x > 1.0f && tex_coord.x - (physics_params.w / map_size.w)<1.0f)
    {
        pixel_color = vec4(1.f, 1.f, 1.f, 1.0f);
    }
    else
    {
        pixel_color = player_color[4];
    }
}

