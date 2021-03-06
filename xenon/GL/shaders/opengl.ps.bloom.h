#if 0
//
// Generated by 2.0.21076.0
//
//   fxc /Fh opengl.ps.bloom.h /Tps_3_0 opengl.hlsl /Eps_bloom
//
//
// Parameters:
//
//   sampler2D texture0;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   texture0     s0       1
//

// Shader type: pixel 

xps_3_0
defconst texture0, sampler2d, object, [1, 1], s0
config AutoSerialize=false
config AutoResource=false
config PsMaxReg=4
// PsExportColorCount=1
// PsSampleControl=both

dcl_texcoord r0.xy
dcl_texcoord1 r1.xy
dcl_color_centroid r2

def c252, 0, 0, 0, 0
def c253, 0, 0, 0, 0
def c254, 0, 0, 0, 0
def c255, 4, 1, 0.25, 0


    exec
    mul r4.yz, r0.xxy, c255.x
    add r4.xw, r4.yz, c255.y
    tfetch2D r1, r4.xw, tf0
    tfetch2D r2, r4.yw, tf0
    tfetch2D r3, r0.xy, tf0
    tfetch2D r0, r4.xz, tf0
    alloc colors
    exece
    add r0, r3, r0
    add r0, r0, r2
    add r0, r0, r1
    mul oC0, r0, c255.z

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xps_ps_bloom[] =
{
    0x102a1100, 0x000000dc, 0x000000dc, 0x00000000, 0x00000024, 0x00000088, 
    0x000000b0, 0x00000000, 0x00000000, 0x00000060, 0x0000001c, 0x00000053, 
    0xffff0300, 0x00000001, 0x0000001c, 0x00000000, 0x0000004c, 0x00000030, 
    0x00030000, 0x00010000, 0x0000003c, 0x00000000, 0x74657874, 0x75726530, 
    0x00ababab, 0x0004000c, 0x00010001, 0x00010000, 0x00000000, 0x70735f33, 
    0x5f300032, 0x2e302e32, 0x31303736, 0x2e3000ab, 0x00000000, 0x00000001, 
    0x00000000, 0x00000000, 0x00000014, 0x01fc0010, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000040, 0x0000009c, 0x10000400, 0x00000008, 
    0x00000000, 0x00002063, 0x00030007, 0x00000001, 0x00003050, 0x00003151, 
    0x0000f2a0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x40800000, 0x3f800000, 0x3e800000, 0x00000000, 0x05506002, 
    0x00001200, 0xc4000000, 0x00004008, 0x00002200, 0x00000000, 0xc8060004, 
    0x00bc6c00, 0xa100ff00, 0xc8090004, 0x00c5b100, 0xa004ff00, 0x30081081, 
    0x1f1ff688, 0x00004000, 0x74082081, 0x1f1ff688, 0x00004000, 0x10083001, 
    0x1f1ff688, 0x00004000, 0x20080081, 0x1f1ff688, 0x00004000, 0xc80f0000, 
    0x00000000, 0xe0030000, 0xc80f0000, 0x00000000, 0xe0000200, 0xc80f0000, 
    0x00000000, 0xe0000100, 0xc80f8000, 0x0000c600, 0xa100ff00, 0x00000000, 
    0x00000000, 0x00000000
};
