#ifndef RTW_HEADER_rocket_h_
#define RTW_HEADER_rocket_h_
#ifndef rocket_COMMON_INCLUDES_
#define rocket_COMMON_INCLUDES_
#include <stdlib.h>
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
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME rocket
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (8) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
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
typedef struct { real_T i1thalf1qu ; real_T adlczhpcf0 ; real_T kh2ct1ob1u ;
real_T hmomc5la5h ; real_T go3xmtztvz ; real_T iu2eelcpow ; real_T djl30gp1b4
; real_T gfgessygkf [ 3 ] ; } B ; typedef struct { struct { void * LoggedData
; } i51btng5an ; struct { void * LoggedData ; } f1bvfkwrx1 ; boolean_T
bbvvmnonjv ; boolean_T gatfaphjb0 ; boolean_T nqvdwzkqqv ; } DW ; typedef
struct { real_T dhdqbkvjjj ; real_T kpb0kxbm42 ; real_T n252nuyick ; } ZCV ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Bt1 ; real_T Bt2 ; real_T Isp1s ; real_T Isp1v ; real_T Mf1 ; real_T
Mf2 ; real_T Ms1 ; real_T Ms2 ; real_T Msfl1 ; real_T Rmean ; real_T lx1 ;
real_T ly1 ; real_T Switch1_Threshold ; real_T Constant4_Value ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_rocket_GetDWork ( ) ; extern void
mr_rocket_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_rocket_GetSimStateDisallowedBlocks ( ) ; extern const
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
