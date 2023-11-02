#version 460
layout (local_size_x = 32, local_size_y = 1,local_size_z = 1) in;

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

layout(std430, binding = 0) restrict buffer SSBO_BLOBS_DATA
{
	Blob blob_data[];
};
layout(std430, binding = 1) readonly buffer SSBO_SCORE
{
	uvec4 player_score;
};
layout(binding = 0, rgba32f) uniform writeonly image2D tex_map;

void main(){
    uint pid = gl_GlobalInvocationID.x;

    if (pid >= map_dim.z) return;
    
    //change blob position of the players using their speed
    vec3 p = blob_data[pid].p.xyz;
    vec3 v = blob_data[pid].v.xyz;

    p = p + v * physics_params.z;

    float wall = blob_physics_params.w*0.5;
    if (p.y < wall)// ground test
    {
        v.y *= -blob_physics_params.z;// reverse speed with bounce
        p.y = wall;//set position to floor
    }

    //.X walls
    wall = map_size.x + blob_physics_params.w*0.5;
    if (p.x < wall)// ground test
    {
        v.x *= -blob_physics_params.z;
        p.x = wall;
    }
    wall = -map_size.x - blob_physics_params.w*0.5;
    if (p.x > wall)// ground test
    {
        v.x *= -blob_physics_params.z;// reverse speed with bounce
        p.x = wall;
    }

    //.Z walls
    wall = map_size.y + blob_physics_params.w*0.5;
    if (p.z < wall)// ground test
    {
        v.z *= -blob_physics_params.z;// reverse speed with bounce
        p.z = wall;
    }
    wall = -map_size.y - blob_physics_params.w*0.5;
    if (p.z > wall)// ground test
    {
        v.z *= -blob_physics_params.z;// reverse speed with bounce
        p.z = wall;
    }
    blob_data[pid].p.xyz = p;
    blob_data[pid].v.xyz = v;



        
    //to put in map_paint_cs
    //put color of blob in map
    
    
    float radius = sqrt(max(0.0,blob_physics_params.w*blob_physics_params.w -p.y*p.y ))/ map_size.z ;
    float radius_sq = radius * radius;
    vec2 center = (p.xz -map_size.xy) /map_size.z;
    uint id = uint(blob_data[gl_GlobalInvocationID.x].p.w);
    if (radius>0.0)
    {
        for (float x = center.x - radius; x <= center.x + radius; x += 1.0) 
        for (float y = center.y - radius; y <= center.y + radius; y += 1.0) 
        {
            vec2 diff = vec2(x, y) - center;
                if (dot(diff,diff) <= radius_sq) //compare squared radius: avoid sqrt
                {
                    imageStore(tex_map, ivec2(map_dim.x - x, map_dim.y - y), player_color[id]);
                }
        }
    }

}