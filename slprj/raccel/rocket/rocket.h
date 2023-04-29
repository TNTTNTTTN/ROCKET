#ifndef RTW_HEADER_rocket_h_
#define RTW_HEADER_rocket_h_
#ifndef rocket_COMMON_INCLUDES_
#define rocket_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "rocket_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_zcfcn.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "zero_crossing_types.h"
#define MODEL_NAME rocket
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (92) 
#define NUM_ZC_EVENTS (2) 
#ifndef NCSTATES
#define NCSTATES (26)   
#elif NCSTATES != 26
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T gyn0we22d3 [ 4 ] ; } obigtil5rb ; typedef struct {
real_T d1ftndfkkq [ 4 ] ; } f13je40avc ; typedef struct { real_T bddenpbj44 [
3 ] ; real_T j3chrhjiaz [ 4 ] ; real_T bcei5zmgyw [ 4 ] ; real_T kbvgah11h4 [
3 ] ; real_T ktldt1hqeb ; real_T out1on52mc ; real_T micobu3txc [ 2 ] ;
real_T jjxpsmwl0v ; real_T fuxhodf3mu ; real_T jt2nv2x55d ; real_T eebvsq3orw
; real_T oe1w2iyrzq ; real_T ft5rioowtz ; real_T pctl5dpy2a ; real_T
jlrhitwsl3 ; real_T b32c2bmvzy ; real_T kiugw5nowc ; real_T lu4c5m5miz [ 3 ]
; real_T p5pzpcjivt [ 3 ] ; real_T gqnaxv0aej [ 3 ] ; real_T ka2g0opaq2 [ 3 ]
; real_T av4akdfzex [ 2 ] ; real_T jgmu4cntnu ; real_T k3ye1bhxk2 ; real_T
e5tg3nwa3z ; real_T pprc2sojtl [ 3 ] ; real_T ci3xiiiq0s [ 3 ] ; real_T
isxhmienjx [ 3 ] ; real_T dddupokjkf [ 3 ] ; real_T nhnd355lne [ 3 ] ; real_T
pns4nzqi1p [ 3 ] ; real_T jhzk1r5ytp [ 3 ] ; real_T npdusycoqq [ 4 ] ; real_T
g0enzwg25a ; real_T kf1r1nnbbf [ 3 ] ; real_T lpdd0pji14 [ 3 ] ; real_T
bfjh5ttx5d [ 3 ] ; real_T hu3jcyazau [ 3 ] ; real_T ehvbzgdsbd ; real_T
e0hgmf3lna ; real_T ogv2dj34t1 ; real_T em3qj5mb0j ; real_T eksqltc5ph ;
real_T glh0kmcn3e ; real_T jck3hj2yfb [ 3 ] ; real_T maxfhqa4qg [ 3 ] ;
real_T hbw54wmb5r [ 3 ] ; real_T afjzospe3i ; real_T i1thalf1qu ; real_T
psxkx0n5lg ; real_T adlczhpcf0 ; real_T kh2ct1ob1u ; real_T dwcu5hang5 ;
real_T djkkpuffgh [ 4 ] ; real_T b3yc2a2cys ; real_T ctw4uaxlhl ; real_T
ozhmixpt0c ; real_T iu2eelcpow ; real_T djl30gp1b4 ; real_T hmomc5la5h ;
real_T jwlhh05nrl ; real_T abyj52ypkw ; real_T knmsqw3rgl ; real_T jtu1si03zo
; real_T fl3gaw21bb ; real_T lihuprkth2 [ 3 ] ; real_T j0fqbrtyfa [ 3 ] ;
real_T dq02rtfmik [ 3 ] ; real_T esotkl5ybw [ 3 ] ; real_T ov1zz1vxro [ 3 ] ;
real_T jaglcqtvdh [ 4 ] ; real_T mc4dbinm3s [ 4 ] ; real_T aqc2hj2iie [ 3 ] ;
real_T ccejaqny4t [ 3 ] ; real_T leuq35xwty [ 4 ] ; real_T korcar35qr [ 3 ] ;
real_T clq34byw1m [ 3 ] ; real_T i1pnkhcd3l ; real_T ljrcglqxb4 [ 3 ] ;
real_T jgw3y31v4u [ 3 ] ; real_T k1llhfc00r [ 4 ] ; real_T pkf2l5jxjr [ 3 ] ;
real_T lpgqziebnn ; real_T eyeiubd2vv ; real_T gqkpyu5i5o [ 3 ] ; real_T
ftabaiwbi3 [ 3 ] ; boolean_T ocb3p2twiw ; boolean_T np4lv05ekc ; obigtil5rb
o5ix2pm1ra ; f13je40avc lvjpidban0 ; f13je40avc csfv2saeka ; obigtil5rb
cdh0cejsfe ; } B ; typedef struct { real_T dmvm0z2smx ; real_T d1gtmzxjii ;
real_T boeci1vi3z ; real_T he1p5oblay ; real_T om55dr0bos ; real_T dz5pc5rmg1
[ 3 ] ; real_T adt5wroeub ; real_T fw0j3r1gk5 [ 3 ] ; struct { void *
LoggedData ; } nosnhapu1c ; struct { void * LoggedData ; } bswbwt4ukq ;
struct { void * LoggedData ; } nu0qdvojpw ; struct { void * LoggedData ; }
nahin55f4t ; struct { void * LoggedData ; } mqhqt2k5nz ; struct { void *
LoggedData ; } asbv3nl5av ; struct { void * LoggedData ; } grbxxfawub ;
struct { void * LoggedData ; } l3vu5nm0b1 ; struct { void * LoggedData ; }
jytvlcl332 ; struct { void * AQHandles ; } cdq51tck1j ; struct { void *
AQHandles ; } px2txhk5gj ; struct { void * AQHandles ; } ix2gzz3wzl ; struct
{ void * AQHandles ; } cpjt4iqhpn ; struct { void * LoggedData ; } a2nwsvvaz5
; struct { void * LoggedData ; } n15tqejf2w ; struct { void * LoggedData ; }
ox3gz35nvt ; struct { void * LoggedData ; } al4p0bjv3s ; struct { void *
LoggedData ; } el2frlnru4 ; struct { void * LoggedData ; } jib05m3xfm ;
struct { void * LoggedData ; } pucefzdgcx ; struct { void * LoggedData ; }
hhxayauo4o ; struct { void * LoggedData ; } gkgonhpb5l ; struct { void *
LoggedData ; } c3hvopinv3 ; struct { void * LoggedData ; } pgy5ncolwh ;
struct { void * LoggedData ; } juag1oua3w ; struct { void * LoggedData ; }
kqsfsyalmg ; struct { void * LoggedData ; } e20omtmcb2 ; struct { void *
LoggedData ; } ea15lsddsg ; struct { void * LoggedData ; } b4vsxh42hg ;
struct { void * LoggedData ; } bm4ucfgt1t ; struct { void * LoggedData ; }
mu0sralyne ; struct { void * LoggedData ; } iyy4cwby4u ; struct { void *
LoggedData ; } eqdwq5f1hz ; struct { void * LoggedData ; } aeiqyucda5 ;
struct { void * LoggedData ; } iqrfe4fcq4 ; struct { void * LoggedData ; }
kiz5oepj3l ; struct { void * LoggedData ; } boeow2bm22 ; struct { void *
LoggedData ; } czlr4qphqs ; struct { void * LoggedData ; } g4mvca1i43 ;
struct { void * LoggedData ; } d2qklu544f ; struct { void * LoggedData ; }
h4l1hzspby ; struct { void * LoggedData ; } bb4lkbm1md ; struct { void *
LoggedData ; } hxd5gr441n ; int_T k03ujfya4r ; int_T paojkwi1rt ; int_T
ao2ofrlfpp ; int_T lzsej45r0o ; int_T lkyqridsbk [ 3 ] ; int_T jken40hs34 [ 3
] ; int_T ev445lj5pd ; int_T fwb1s0siq2 ; boolean_T edvcjysz1h ; boolean_T
llssf3xx0w ; boolean_T gatfaphjb0 ; boolean_T nqvdwzkqqv ; boolean_T
bbvvmnonjv ; boolean_T mxc4xdmhnf ; boolean_T ai5tkm230r ; } DW ; typedef
struct { real_T fsftytietz [ 3 ] ; real_T gmn5v5nip3 [ 4 ] ; real_T
gei0u4b2jn [ 4 ] ; real_T osil5rla0l [ 3 ] ; real_T bkkkgiqcw4 ; real_T
kyfu3phbiu [ 3 ] ; real_T iq0o54ir35 [ 3 ] ; real_T ormll3qjai ; real_T
kkd13wjx0s [ 4 ] ; } X ; typedef struct { real_T fsftytietz [ 3 ] ; real_T
gmn5v5nip3 [ 4 ] ; real_T gei0u4b2jn [ 4 ] ; real_T osil5rla0l [ 3 ] ; real_T
bkkkgiqcw4 ; real_T kyfu3phbiu [ 3 ] ; real_T iq0o54ir35 [ 3 ] ; real_T
ormll3qjai ; real_T kkd13wjx0s [ 4 ] ; } XDot ; typedef struct { boolean_T
fsftytietz [ 3 ] ; boolean_T gmn5v5nip3 [ 4 ] ; boolean_T gei0u4b2jn [ 4 ] ;
boolean_T osil5rla0l [ 3 ] ; boolean_T bkkkgiqcw4 ; boolean_T kyfu3phbiu [ 3
] ; boolean_T iq0o54ir35 [ 3 ] ; boolean_T ormll3qjai ; boolean_T kkd13wjx0s
[ 4 ] ; } XDis ; typedef struct { real_T fsftytietz [ 3 ] ; real_T gmn5v5nip3
[ 4 ] ; real_T gei0u4b2jn [ 4 ] ; real_T osil5rla0l [ 3 ] ; real_T bkkkgiqcw4
; real_T kyfu3phbiu [ 3 ] ; real_T iq0o54ir35 [ 3 ] ; real_T ormll3qjai ;
real_T kkd13wjx0s [ 4 ] ; } CStateAbsTol ; typedef struct { real_T fsftytietz
[ 3 ] ; real_T gmn5v5nip3 [ 4 ] ; real_T gei0u4b2jn [ 4 ] ; real_T osil5rla0l
[ 3 ] ; real_T bkkkgiqcw4 ; real_T kyfu3phbiu [ 3 ] ; real_T iq0o54ir35 [ 3 ]
; real_T ormll3qjai ; real_T kkd13wjx0s [ 4 ] ; } CXPtMin ; typedef struct {
real_T fsftytietz [ 3 ] ; real_T gmn5v5nip3 [ 4 ] ; real_T gei0u4b2jn [ 4 ] ;
real_T osil5rla0l [ 3 ] ; real_T bkkkgiqcw4 ; real_T kyfu3phbiu [ 3 ] ;
real_T iq0o54ir35 [ 3 ] ; real_T ormll3qjai ; real_T kkd13wjx0s [ 4 ] ; }
CXPtMax ; typedef struct { real_T gtdxlk3nnd ; real_T gsvebxcatd ; real_T
phsaw4ntne ; real_T iwlk4vs1tw ; real_T claokks1yu ; real_T a4srdcmqym ;
real_T od3fwagtsv ; real_T cjxzs3d554 ; real_T pbhjnyximh ; real_T kwigqdxqo1
[ 3 ] ; real_T l0prbj1uc4 [ 3 ] ; real_T mkk0hq0tzu [ 3 ] ; real_T dl4wft0zqc
[ 3 ] ; real_T p0vzctnqz2 [ 3 ] ; real_T mak1wgbaka ; real_T cfx05bryit ;
real_T kpb0kxbm42 ; real_T n252nuyick ; real_T dhdqbkvjjj ; real_T ftlorg4bbd
; real_T km3xrkmikc ; } ZCV ; typedef struct { ZCSigState no0o2yoxb1 ;
ZCSigState ppykmjpmgc ; } PrevZCX ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct P_ { real_T Attinit [ 4 ] ; real_T Bt1 ; real_T
Bt2 ; real_T Isp1s ; real_T Isp1v ; real_T Isp2 ; real_T Kp1 ; real_T Kp2 ;
real_T Mf1 ; real_T Mf2 ; real_T Mp1 ; real_T Mp2 ; real_T Ms3 ; real_T Msfl1
; real_T Msfl2 ; real_T Posinit [ 3 ] ; real_T Rmean ; real_T Rotinit [ 3 ] ;
real_T Vinit [ 3 ] ; real_T lx1s ; real_T lx2s ; real_T lx3s ; real_T ly1 ;
real_T ly2 ; real_T ly3 ; real_T mu ; real_T wie ; real_T
LowPassFilterDiscreteorContinuous_K ; real_T
LowPassFilterDiscreteorContinuous1_K ; real_T
LowPassFilterDiscreteorContinuous_T ; real_T
LowPassFilterDiscreteorContinuous1_T ; real_T CompareToConstant_const ;
real_T CompareToConstant_const_fyftrk53il ; real_T
LowPassFilterDiscreteorContinuous_init_option ; real_T
LowPassFilterDiscreteorContinuous1_init_option ; real_T Constant_Value ;
real_T Constant_Value_lyipl5atta ; real_T Integrator4_IC [ 4 ] ; real_T
Gain2_Gain ; real_T Gain1_Gain ; real_T Integrator_UpperSat ; real_T
Integrator_LowerSat ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat
; real_T Gain_Gain ; real_T Gain3_Gain ; real_T
Integrator_UpperSat_h00nuw44zs ; real_T Integrator_LowerSat_mewh5v15vs ;
real_T Saturation_UpperSat_egkpxdd2hd ; real_T Saturation_LowerSat_kcdgs05bz3
; real_T Integrator_IC ; real_T Switch1_Threshold ; real_T
Integrator4_IC_jlsgyxjuqf [ 4 ] ; real_T Constant4_Value ; real_T
Constant1_Value ; real_T Constant2_Value ; real_T Constant3_Value ; real_T
Constant4_Value_eqvxhcrvd4 ; real_T Constant5_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern P rtP ; extern mxArray * mr_rocket_GetDWork
( ) ; extern void mr_rocket_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_rocket_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * rocket_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
