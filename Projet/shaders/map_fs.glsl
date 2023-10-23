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

in vec2 tex_coord;
in vec3 pos_ws;

layout(binding = 0) uniform sampler2D tex_map;

//remove when deleting color writing test
layout(binding = 0, rgba32f) uniform image2D img_map;

void main() 
{
    vec4 data = texture(tex_map,tex_coord);
    vec3 n = vec3(data.x,sqrt(max(0.0,1.0-data.x*data.x - data.z*data.z)),data.z);
    float timestamp = data.z;
    int player_id = int(data.w);

    vec3 color = player_color[player_id].rgb;

    //texture write test
    if (gl_FragCoord.x>150 && gl_FragCoord.x<170 && gl_FragCoord.y>150 && gl_FragCoord.y<170)//center of brush is at screen coords (160,160)
    {
        ivec2 texel_coord = ivec2(tex_coord * map_dim.xy);
        imageStore(img_map,texel_coord,vec4(0.0,0.0,0.0,1.0));
    }



    pixel_color = vec4(color,1.0);
}

