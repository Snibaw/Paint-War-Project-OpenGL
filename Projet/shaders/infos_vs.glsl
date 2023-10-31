#version 460
#define UBO_APPLICATION_BINDING 0
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


out vec2 tex_coord;

void main() {
    if (gl_VertexID == 0) {
        gl_Position = vec4(-0.2, 0.95, 0.0, 1.0); // Top-left corner
        tex_coord = vec2(0.0, 1.0);
    }
    else if (gl_VertexID == 1) {
        gl_Position = vec4(.2, .95, 0.0, 1.0); // Top-right corner
        tex_coord = vec2(1.0, 1.0);
    }
    else if (gl_VertexID == 2) {
        gl_Position = vec4(-.2, .9, 0.0, 1.0); // Bottom-left corner
        tex_coord = vec2(0.0, 0.0);
    }
    else if (gl_VertexID == 3){
        gl_Position = vec4(.2, .9, 0.0, 1.0); // Bottom-right corner
        tex_coord = vec2(1.0, 0.0);
    }
    else if (gl_VertexID == 4) {
        gl_Position = vec4(-.2, .9, 0.0, 1.0); // Bottom-left corner
        tex_coord = vec2(0.0, 0.0);
    }
    else if (gl_VertexID == 5) {
        gl_Position = vec4(.2, .95, 0.0, 1.0); // Top-right corner
        tex_coord = vec2(1.0, 1.0);
    }
    else if (gl_VertexID == 6) {
        gl_Position = vec4(0.3, 0.95, 0.0, 1.0); // Top-left corner
        tex_coord = vec2(1.0, 1.0);
    }
    else if (gl_VertexID == 7) {
        gl_Position = vec4(.5, .95, 0.0, 1.0); // Top-right corner
        tex_coord = vec2(2.0, 1.0);
    }
    else if (gl_VertexID == 8) {
        gl_Position = vec4(.3, .9, 0.0, 1.0); // Bottom-left corner
        tex_coord = vec2(1.0, 0.0);
    }
    else if (gl_VertexID == 9) {
        gl_Position = vec4(.3, .9, 0.0, 1.0); // Bottom-left corner
        tex_coord = vec2(1.0, 0.0);
    }
    else if (gl_VertexID == 10){
        gl_Position = vec4(.5, .9, 0.0, 1.0); // Bottom-right corner
        tex_coord = vec2(2.0, 0.0);
    }
    else if (gl_VertexID == 11) {
        gl_Position = vec4(.5, .95, 0.0, 1.0); // Top-right corner
        tex_coord = vec2(2.0, 1.0);
    }
}

