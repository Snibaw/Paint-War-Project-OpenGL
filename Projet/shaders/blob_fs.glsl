#version 460
layout (location = 0) out vec4 pixel_color;

in vec3 dir_ws;
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



float get_ndc_depth(vec3 intersection);
vec3 get_scene_normal(vec3 p);


#define MAX_STEPS 400
#define MIN_DISTANCE 0.1
#define MAX_DISTANCE 5000.0
#define MAX_GRADIENT 0.9
void write_background(vec3 dir);
//function defining the scene as a SDF, it returns a distance (or pseudo-distance) to the implicit surface

float sphere(vec3 pos,vec3 center, float radius)
{
    return length(pos-center) -radius ;
}

float scene(vec3 pos)//The scene we consider in this TP
{
	float u = sphere(pos,vec3(100.,50.,0.),50.0);

    u = min(u,sphere(pos,vec3(60.,50.,0.),50.0));
	return u;
}



//Ray marching algorithm taking origin and (normalized) ray direction as input
//It returns the position of the intersection found, 
//if no intersection, it returns background_vector_code to be flagged as background later
//The marching makes use of scene(position), which defines the distance field of the scene
//Returns position in WS when reaching the "zero" of the SDF
vec3 ray_marching(vec3 ray_ori,vec3 ray_dir,out bool back)
{
	//Write raymarcher here
    back = false;
    float t=0.0;
    vec3 pos;
    for (int i=0; i<MAX_STEPS; i++)
    {
        pos = ray_ori + t*ray_dir;
        float d = scene(pos)*MAX_GRADIENT;
        if (d<MIN_DISTANCE)
        {
            return(pos);
        }
        if (t>MAX_DISTANCE)
        {
            back = true;
            break;
        }
        t+=d;
    }
    return vec3(pos);//returns background
}



void main() 
{
    vec3 dir = normalize(dir_ws);
    bool b;
    vec3 intersection = ray_marching(cam_pos.xyz,dir,b);
    float lum = abs(dot(dir,normalize(cam_pos.xyz-intersection)))/2.;
    if (b) discard;
    pixel_color = vec4(0.5*lum,0.,0.,1.0);
    gl_FragDepth = get_ndc_depth(intersection);
}
////////////////////////////////////////////////////////////////////////////////////



void write_background(vec3 dir)
{
    pixel_color = vec4(0.3,0.5,0.0, 1.0);//color fragment
    gl_FragDepth = 1.0;//background
}

float get_ndc_depth(vec3 intersection)
{
float z_vs = dot(intersection-cam_pos.xyz,vec3(w_v[0].z,w_v[1].z,w_v[2].z));
return 0.5+0.5*(z_vs*proj[2][2]+proj[3][2])/z_vs;
}

vec3 get_scene_normal(vec3 p) // for function f(p)
{
    const float h = 0.0001; // replace by an appropriate value
    const vec2 k = vec2(1.0,-1.0);
    return normalize( k.xyy*scene( p + k.xyy*h ) + 
                      k.yyx*scene( p + k.yyx*h ) + 
                      k.yxy*scene( p + k.yxy*h ) + 
                      k.xxx*scene( p + k.xxx*h ) );
}







