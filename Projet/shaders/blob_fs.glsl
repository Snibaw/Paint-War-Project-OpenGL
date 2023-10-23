#version 460
layout (location = 0) out vec4 pixel_pos_ws;
layout (location = 1) out vec4 pixel_normal_ws;

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
float mistery(vec3 p);//mystery SDF as a neural network !!!
float get_shadow(vec3 ray_ori, vec3 ray_dir);
vec3 BACKGROUND_VECTOR_CODE = vec3(999.9);


#define MAX_STEPS 400
#define MIN_DISTANCE 0.0001
#define MAX_DISTANCE 100.0
#define MAX_GRADIENT 0.4
void write_background(vec3 dir);
//function defining the scene as a SDF, it returns a distance (or pseudo-distance) to the implicit surface
float scene(vec3 pos)//The scene we consider in this TP
{
	float ground_platform = max(abs(pos.y + 0.78 + 0.25) - 0.25, length(pos.xz) - 2.0);
	return min(ground_platform, mistery(pos));
}



//Ray marching algorithm taking origin and (normalized) ray direction as input
//It returns the position of the intersection found, 
//if no intersection, it returns background_vector_code to be flagged as background later
//The marching makes use of scene(position), which defines the distance field of the scene
//Returns position in WS when reaching the "zero" of the SDF
vec3 ray_marching(vec3 ray_ori,vec3 ray_dir)
{
	//Write raymarcher here
    float t=0.0;
    for (int i=0; i<MAX_STEPS; i++)
    {
        vec3 pos = ray_ori + t*ray_dir;
        float d = scene(pos)*MAX_GRADIENT;
        if (d<MIN_DISTANCE)
        {
            return(pos);
        }
        if (t>MAX_DISTANCE)
        {
            break;
        }
        t+=d;
    }
    return vec3(BACKGROUND_VECTOR_CODE);//returns background
}



void main() 
{
    vec3 dir = normalize(dir_ws);

    vec3 intersection = ray_marching(cam_pos.xyz,dir);

    if (intersection == BACKGROUND_VECTOR_CODE)//test if background
        write_background(dir);//Fill G-Buffer differently if background
    else
        {
        pixel_pos_ws = vec4(intersection,0.0);
        pixel_normal_ws = vec4(get_scene_normal(intersection),0.0);
        gl_FragDepth = get_ndc_depth(intersection);
        }
}
////////////////////////////////////////////////////////////////////////////////////



void write_background(vec3 dir)
{
    pixel_pos_ws = vec4(BACKGROUND_VECTOR_CODE, 1.0);//color fragment
    pixel_normal_ws = vec4(dir,0.0);
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


float get_shadow(vec3 ray_ori,vec3 ray_dir)
{

    float res = 1.0;
    float t = MIN_DISTANCE*2.0;
    for( int i=0; i<MAX_STEPS && t<MAX_DISTANCE; i++ )
    {
        float h = scene(ray_ori + ray_dir*t);
        if( h<MIN_DISTANCE*0.5)
            return 0.0;
        res = min( res, 16.0*h/t );
        t += MAX_GRADIENT*h;
    }
    return res;
}





float mistery(vec3 p) {
    p = p.xzy;
    //sdf is undefined outside the unit sphere, uncomment to witness the abominations



    if (length(p) > 1.) {
        return length(p)-.8;
    }
vec4 f0_0=sin(p.y*vec4(-.3803,2.7998,2.0724,-4.0411)+p.z*vec4(.8788,.0754,-4.6201,4.0286)+p.x*vec4(-5.3695,-.8346,2.4934,-2.6543)+vec4(-.7978,-10.1683,-.6392,-6.5949));
vec4 f0_1=sin(p.y*vec4(-.1948,5.5582,-4.3564,-.1888)+p.z*vec4(-3.1240,4.6515,4.6520,-2.8152)+p.x*vec4(-2.2915,1.8377,-2.9710,5.3639)+vec4(-5.4091,4.0248,5.8908,6.8737));
vec4 f0_2=sin(p.y*vec4(1.6108,.3271,.6891,3.4881)+p.z*vec4(-2.2072,.2814,5.1146,-.4810)+p.x*vec4(.0391,-4.3107,1.6640,.4633)+vec4(11.2483,10.7478,-1.6260,1.4881));
vec4 f0_3=sin(p.y*vec4(-2.0058,5.1086,-.0305,1.0080)+p.z*vec4(2.2780,.9382,.8148,4.1697)+p.x*vec4(-1.8564,-1.0156,-1.3620,-.6708)+vec4(-10.9215,5.2775,6.4153,3.9497));
vec4 f1_0=sin(mat4(.5253,.4079,-.0928,-.2443,.5293,-.0268,-.5536,.2947,.1953,.1193,-.0953,-.3459,-.4601,-.0649,-.8546,-.2243)*f0_0+
    mat4(-.5791,.3157,.9973,-.5803,.1614,.1478,.2069,.0085,.1680,-.0408,.5296,.0105,.2729,.0596,-.6735,-.0351)*f0_1+
    mat4(-.7074,-.2952,.1928,-.9279,-.8055,-.5073,-.0318,1.0241,-.2437,.2344,.1797,-.0850,.6140,.7037,-.5227,.0976)*f0_2+
    mat4(-.3414,-.0472,1.0172,-.2536,.3582,-.0317,.2112,.0360,-1.0470,-.2184,1.1888,-.1687,.4030,-.1640,.4573,-.6660)*f0_3+
    vec4(3.7366,1.7928,1.5038,.8581))/1.0000+f0_0;
vec4 f1_1=sin(mat4(-.4692,.1602,.0428,.2372,-.0681,.1608,-.6406,.7579,.1897,-.4395,-.4697,-.0799,-.3863,.1295,-.1458,.1533)*f0_0+
    mat4(.1158,-.1265,.3361,-.5336,.1429,.3125,-.0363,.0131,.2291,.1743,.1319,-.0273,-.0224,.0932,-.3248,-.0866)*f0_1+
    mat4(-.8900,.7631,.0162,-.7870,.3371,.1465,.0414,.0436,-.4608,.4989,.4364,.4840,.0325,.0652,-.6014,-.1074)*f0_2+
    mat4(.0650,.1781,.1258,-.1145,-.2263,.9088,.1209,.0161,-.2016,-.7491,.1746,-1.5457,-.0858,-.5826,-.2744,-.1074)*f0_3+
    vec4(3.6875,-3.3444,3.6827,-2.3652))/1.0000+f0_1;
vec4 f1_2=sin(mat4(.2524,-.1160,.3500,-.0286,.7637,.4130,.3661,-.1741,.1181,.2221,.2527,.3289,.8332,.4123,-.7870,-.1590)*f0_0+
    mat4(-.0701,-.0780,.2038,.6319,.1289,.1768,.1686,.1154,-.7175,-.6502,.7519,.1148,.3737,.0714,.1142,-.2354)*f0_1+
    mat4(.2168,.7014,-.5249,.1491,.2959,.0441,-.0838,-.0018,.1389,.0580,-.1277,.1900,.2638,-.1677,.6929,.1059)*f0_2+
    mat4(-.4197,.8154,.2036,-.4303,-.3103,.0403,.4887,-.6708,-.0851,-.4983,-1.6313,-.2418,.2278,-.2386,-.0765,.4988)*f0_3+
    vec4(2.8786,-.2246,1.9498,3.4700))/1.0000+f0_2;
vec4 f1_3=sin(mat4(-.2126,-.0511,.5479,.3645,-.5027,.8795,.7708,.7253,-.1497,-.0527,.2782,-.5507,.0442,.8792,-.3477,.0162)*f0_0+
    mat4(-.3971,-.2279,.0973,.1162,-.1707,.1962,-.0862,.3884,-.2285,-.8774,.4810,.1938,-.0381,-.2597,.1786,.1711)*f0_1+
    mat4(-.7184,-.2501,.2898,.0618,.7255,.0248,-.8227,-.3710,-.0206,-.0860,-.1713,1.0602,-.1027,.4214,.4204,.4396)*f0_2+
    mat4(-.3569,.0638,-.0405,-.0544,-.4467,.2266,.0568,.2428,.1757,-.5920,-.2584,-.4434,-.3481,-.2977,.1038,-.2688)*f0_3+
    vec4(3.2289,-3.5662,-3.3404,-2.1396))/1.0000+f0_3;
vec4 f2_0=sin(mat4(-.2857,-.2225,-.7712,.2125,.6066,-.6357,.9234,.3052,.1530,-.0624,-.2239,.3246,.2779,.4704,-.8536,-.8051)*f1_0+
    mat4(.2945,.5714,.4293,.4975,-.0040,-.4861,.6897,.0881,-.0702,-.1626,1.2571,.8553,-.1469,.1246,-1.1810,-.3315)*f1_1+
    mat4(.2294,-.0624,-.0569,.0597,.2110,.5533,.4193,-.7542,.0041,-.1001,-.6877,.1746,-.7548,-1.0985,.4968,.0976)*f1_2+
    mat4(-1.1804,.1852,-.6350,-.3561,.1990,-.0338,1.5481,.2920,-.9100,-.9618,-.2326,.8787,-.2889,.1813,-.0528,.3400)*f1_3+
    vec4(.6013,1.6252,-3.5057,-1.5871))/1.4142+f1_0;
vec4 f2_1=sin(mat4(.2981,.0630,-.4027,-.6500,.4330,.0937,-.4071,-.2809,.5209,.3780,.0961,-.3818,-.2351,.0725,.3972,-.6356)*f1_0+
    mat4(-.5070,1.2983,.0092,-.0197,.1715,.1299,-.2374,.0946,-.3620,.0600,-.3302,.0440,.2718,-.0739,-.2795,.1456)*f1_1+
    mat4(-.0375,.0657,-.6586,.7724,-.3999,.3689,-.1534,.8162,-.1673,.2134,-.9195,.5101,-.3598,.9217,-.4648,1.0165)*f1_2+
    mat4(-.1455,-.4155,.0984,-.7944,.4149,-.4805,.6260,-.6343,-.3480,1.9092,-.5953,-.4386,.2758,-.3094,-.0590,.6057)*f1_3+
    vec4(3.3993,-1.5303,-1.2502,-2.3651))/1.4142+f1_1;
vec4 f2_2=sin(mat4(-.0247,-.2620,-.7042,-.3435,.0475,-.3733,-.9855,-.5036,-.5203,-.1520,-.4306,-.2720,.3530,-.9489,-.4500,.2742)*f1_0+
    mat4(-.8218,-.4249,-.3501,-.6753,-.3216,-.1069,-.5419,.8947,-.0393,.4126,.0400,-1.0693,-.1489,.2558,.2725,.9802)*f1_1+
    mat4(-.8906,1.4741,.9358,1.1571,.8198,.6655,.3476,.1215,-.2331,.1799,-.0754,.9942,-1.0682,.0680,-.7715,-.0627)*f1_2+
    mat4(1.0728,-.5694,.7830,-.4072,.3921,-.4477,.2910,-1.5228,-.9976,.4120,1.1875,.4505,-.0340,-.3195,-.5512,.0776)*f1_3+
    vec4(-1.0078,1.8334,4.3803,2.4340))/1.4142+f1_2;
vec4 f2_3=sin(mat4(-.8900,.2987,.0802,.5881,1.2230,-.0520,-.4276,.0104,-.1655,.3652,.5277,-.3864,-.8327,.6471,-.0826,.8159)*f1_0+
    mat4(.4258,1.3459,-1.1609,-.6889,-.0078,-.0521,-.0938,-.4846,1.1115,.1084,-.0264,-1.2647,-.7431,-.7305,-.4942,.4700)*f1_1+
    mat4(.0510,-1.3577,-.8596,-.5338,.5555,-.7374,-.3673,.3263,-.1927,-.5965,-.4393,1.4361,.9797,.6410,.3998,-.9308)*f1_2+
    mat4(-.7410,.4317,1.3149,.7591,.2476,.4190,.4855,.0504,.6101,.2490,.9412,-1.1768,.5198,-.1078,.5007,-.3580)*f1_3+
    vec4(-5.9466,2.2163,-2.1197,3.6278))/1.4142+f1_3;
return dot(f2_0,vec4(.0757,.0952,-.0475,.0795))+
    dot(f2_1,vec4(-.0803,.0425,-.1172,.0503))+
    dot(f2_2,vec4(.0882,-.0661,-.0186,-.0185))+
    dot(f2_3,vec4(-.0632,.0416,.0467,.0293))+ 0.191;
    }