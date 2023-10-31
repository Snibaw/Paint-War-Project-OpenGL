#version 460
layout (location = 0) out vec4 pixel_color;

in vec3 dir_ws;

layout(binding = 1) uniform samplerCube envmap;

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

layout(std430, binding = 0) readonly buffer SSBO_BLOBS_DATA
{
	Blob blob_data[];
};
layout(std430, binding = 1) readonly buffer SSBO_SCORE
{
	uvec4 player_score;
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

//from https://www.youtube.com/watch?v=Cp5WWtMoeKg
float smooth_min(float a, float b, float k)
{
    float h = max(k-abs(a-b),0.0)/k;
    //return min( a, b ) - h*h*k*(1.0/4.0);

    return min(a,b)-h*h*h*k*(1.0/6.0);
}

float scene(vec3 pos)//The scene we consider in this TP
{
	float u = sphere(pos,blob_data[0].p.xyz,blob_physics_params.w);
    
    for (int i=0; i< blob_data.length(); i++)
    {
        //u = min(u,sphere(pos,blob_data[i].p.xyz,blob_physics_params.w));
        //todo dont forget to change k
        u = smooth_min(u,sphere(pos,blob_data[i].p.xyz,blob_physics_params.w),blob_physics_params.y);
    }
	return u;
}



//Ray marching algorithm taking origin and (normalized) ray direction as input
//It returns the position of the intersection found, 
//if no intersection, it returns background_vector_code to be flagged as background later
//The marching makes use of scene(position), which defines the distance field of the scene
//Returns position in WS when reaching the "zero" of the SDF
vec3 ray_marching(vec3 ray_ori,vec3 ray_dir,out bool back)
{
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
    //commit de loris float lum = abs(dot(dir,normalize(cam_pos.xyz-intersection)))/2.;
    //demander pourquoi la map n'est pas prise en compte
    if (b) discard;
    vec3 normal = get_scene_normal(intersection);
    vec3 light_dir = normalize(sun_light.xyz);
    
    // This is the cut off point for the specular. 
#define SPECULAR_THRESHOLD 0.5

// This gives the specular its soft edge. Lower = softer
#define SPECULAR_PRE_CLAMP_MULTIPLIER 50.0

// The specular will never be brighter than this.
#define SPECULAR_MULTIPLIER 0.5

// If this gets smaller, the white specular gets 
// bigger.
#define SPECULAR_POWER 5.0

// Amount of reflection at edge of blob
// Simulates fresnel I guess.
#define MAX_REFLECTION 0.95

// Amount of reflection at center of blob. 
// Simulates fresnel I guess.
#define MIN_REFLECTION 0.0

#define REFLECTION_POWER 1.5
    // I wasn't sure how this was done, so Google to the rescue! 
   	// https://en.wikibooks.org/wiki/GLSL_Programming/GLUT/Specular_Highlights
    // I've noticed that sometimes I get black lines here though...
    float specularReflectionRaw;
    if (dot(normal, light_dir) < 0.0) {
        specularReflectionRaw = 0.0;
    } else {
        specularReflectionRaw = pow(dot(reflect(-light_dir, normal), vec3(0.0, 0.0, 1.0)), SPECULAR_POWER);
    }
    float specularReflection = specularReflectionRaw;
    specularReflection -= SPECULAR_THRESHOLD;
    specularReflection *= SPECULAR_PRE_CLAMP_MULTIPLIER;
    specularReflection = clamp(specularReflection, 0.0, 1.0);
    vec4 spec = vec4(1, 1, 1, 0.0) * specularReflection * SPECULAR_MULTIPLIER;

    // Sample the cube map!
    vec4 tex = texture(envmap, normal);
    
    //give the blob at min distnace from pos
    int index = 0;
    for (int i =0; i< blob_data.length(); i++)
    {
        if (length(intersection-blob_data[i].p.xyz)<length(intersection-blob_data[index].p.xyz))
        {
            index = i;
        }
    }
    // Get the colour of the blob as a vec4.
    vec4 col = vec4(player_color[int(blob_data[index].p.w)].xyz, 1.0);
    // get a random float between 0 and 1
    float rand = fract(sin(dot(intersection, vec3(12.9898, 78.233, 45.5432))) * 43758.5453);
    // Add a random offset to the colour.
    //col += vec4(-rand, rand, rand, 0.0) * 0.3;
    // Get the alpha of the blob.
    float player_alpha = player_color[int(blob_data[index].p.w)].w;
    // Add a random offset to the alpha.
    //player_alpha = index / float(blob_data.length());
    
    // SSS Multiplier. 
    float lighting = dot(light_dir, normal);
    float sss = (lighting * 0.3 + 0.7) * (1.0 - player_alpha * 0.6);
    
    // k mixes texure and a solid colour
    // If k is 0.0, then the texture is a solid colour.
    float k = MIN_REFLECTION + pow(1.0 - player_alpha, REFLECTION_POWER) * (MAX_REFLECTION - MIN_REFLECTION);
    float ik = 1.0 - k; // "Inverse" of k, just to save letters!
    col = (tex * k + vec4(ik, ik, ik, ik) * sss) * col;
    
    // Calculate final output
    pixel_color = (spec + col) * 1;
	pixel_color.a = 1.;
	
    gl_FragDepth = get_ndc_depth(intersection);

    // fragColor = vec4(h, h, h, 1.0);
    
    // fragColor = vec4(normal, 1.0);
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