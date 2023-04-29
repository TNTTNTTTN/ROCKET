#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "rocket_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "rocket.h"
#include "rocket_capi.h"
#include "rocket_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 9 , TARGET_STRING (
"rocket/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 10 , TARGET_STRING ( "rocket/MATLAB Function2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 2 , 11 , TARGET_STRING ( "rocket/MATLAB Function4" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 3 , 13 , TARGET_STRING (
"rocket/MATLAB Function7" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , {
4 , 14 , TARGET_STRING ( "rocket/MATLAB Function8" ) , TARGET_STRING ( "" ) ,
0 , 0 , 4 , 0 , 0 } , { 5 , 15 , TARGET_STRING ( "rocket/MATLAB Function9" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"rocket/Integrator4" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 7 , 0
, TARGET_STRING ( "rocket/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 }
, { 8 , 1 , TARGET_STRING ( "rocket/Acceleration Conversion/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 2 , TARGET_STRING (
"rocket/Acceleration Conversion/MATLAB Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 10 , 3 , TARGET_STRING (
"rocket/Acceleration Conversion/MATLAB Function2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 11 , 4 , TARGET_STRING (
"rocket/Acceleration Conversion/MATLAB Function5" ) , TARGET_STRING ( "" ) ,
4 , 0 , 1 , 0 , 0 } , { 12 , 4 , TARGET_STRING (
"rocket/Acceleration Conversion/MATLAB Function5" ) , TARGET_STRING ( "" ) ,
5 , 0 , 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0
, 2 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Derivative1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 0 } , { 16 , 0 , TARGET_STRING ( "rocket/Acceleration Conversion/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 ,
0 , 0 } , { 18 , 0 , TARGET_STRING ( "rocket/Acceleration Conversion/Gain3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0
, 2 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 21 , 0 , TARGET_STRING ( "rocket/Acceleration Conversion/Add" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 0 } , { 23 , 0 , TARGET_STRING ( "rocket/Acceleration Conversion/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 ,
0 , 0 } , { 25 , 0 , TARGET_STRING ( "rocket/Acceleration Conversion/Sum2" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 5 , TARGET_STRING (
"rocket/Attitude Conversion/MATLAB Function2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 27 , 16 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/MATLAB Function1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/Product" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/Sign" ) , TARGET_STRING ( "" ) , 0 , 0 ,
2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"rocket/Quat&angular_vel P2 control1/Add" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 33 , 24 , TARGET_STRING (
"rocket/Rocket Dynamics/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 34 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/K" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/K"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/1//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 17 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0
, 5 , 0 , 0 } , { 41 , 18 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 42 , 19 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 43 , 20 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 44 , 21 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 45 , 22 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function7" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 46 , 23 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/MATLAB Function8" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 5
, 0 , 0 } , { 48 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 49 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 3
, 0 , 0 } , { 50 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator3" ) , TARGET_STRING ( "" ) , 0 , 0 , 5
, 0 , 0 } , { 51 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator4" ) , TARGET_STRING ( "" ) , 0 , 0 , 3
, 0 , 0 } , { 52 , 25 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/MATLAB Function" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 53 , 25 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/MATLAB Function" ) , TARGET_STRING ( ""
) , 1 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Time constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Time constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Probe"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 62 , 28 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Clock" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 64 , 29 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Gain" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Add" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 2 } , { 66 , 29 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 69 , 30 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Clock" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 71 , 31 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Gain" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Add" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 2 } , { 73 , 31 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Sum1" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Switch1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Switch3" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 2 } , { 79 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Data Type Conversion2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 90 , TARGET_STRING ( "rocket/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 91 , TARGET_STRING (
"rocket/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 92 ,
TARGET_STRING ( "rocket/Constant4" ) , TARGET_STRING ( "Value" ) , 0 , 2 , 0
} , { 93 , TARGET_STRING ( "rocket/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 3 , 0 } , { 94 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)" ) ,
TARGET_STRING ( "K" ) , 0 , 2 , 0 } , { 95 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)" ) ,
TARGET_STRING ( "T" ) , 0 , 2 , 0 } , { 96 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)" ) ,
TARGET_STRING ( "init_option" ) , 0 , 2 , 0 } , { 97 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1" )
, TARGET_STRING ( "K" ) , 0 , 2 , 0 } , { 98 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1" )
, TARGET_STRING ( "T" ) , 0 , 2 , 0 } , { 99 , TARGET_STRING (
"rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1" )
, TARGET_STRING ( "init_option" ) , 0 , 2 , 0 } , { 100 , TARGET_STRING (
"rocket/Acceleration Conversion/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 2 ,
0 } , { 101 , TARGET_STRING ( "rocket/Acceleration Conversion/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 102 , TARGET_STRING (
"rocket/Acceleration Conversion/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 2 ,
0 } , { 103 , TARGET_STRING ( "rocket/Acceleration Conversion/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 104 , TARGET_STRING (
"rocket/Acceleration Conversion/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 2 , 0 } , { 105 , TARGET_STRING (
"rocket/Rocket Dynamics/EoM/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 3 , 0 } , { 106 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 2 , 0 } , { 107 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 2 , 0 } , { 108 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 1/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 109 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Constant4" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 110 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Constant5" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 111 , TARGET_STRING (
"rocket/Rocket Dynamics/Thrust system/Scene 2/Switch1" ) , TARGET_STRING (
"Threshold" ) , 0 , 2 , 0 } , { 112 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 113 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 2 , 0 } , { 114 ,
TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 2 , 0 } , { 115 ,
TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 2 , 0 } , { 116 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 2 , 0 } , { 117 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Enable//disable time constant/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 118 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 2 , 0 } , { 119 ,
TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 2 , 0 } , { 120 ,
TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 2 , 0 } , { 121 , TARGET_STRING (
 "rocket/Acceleration Conversion/Low-Pass Filter (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Continuous/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static
const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 122 , TARGET_STRING (
"Attinit" ) , 0 , 3 , 0 } , { 123 , TARGET_STRING ( "Bt1" ) , 0 , 2 , 0 } , {
124 , TARGET_STRING ( "Bt2" ) , 0 , 2 , 0 } , { 125 , TARGET_STRING ( "Isp1s"
) , 0 , 2 , 0 } , { 126 , TARGET_STRING ( "Isp1v" ) , 0 , 2 , 0 } , { 127 ,
TARGET_STRING ( "Isp2" ) , 0 , 2 , 0 } , { 128 , TARGET_STRING ( "Kp1" ) , 0
, 2 , 0 } , { 129 , TARGET_STRING ( "Kp2" ) , 0 , 2 , 0 } , { 130 ,
TARGET_STRING ( "Mf1" ) , 0 , 2 , 0 } , { 131 , TARGET_STRING ( "Mf2" ) , 0 ,
2 , 0 } , { 132 , TARGET_STRING ( "Mp1" ) , 0 , 2 , 0 } , { 133 ,
TARGET_STRING ( "Mp2" ) , 0 , 2 , 0 } , { 134 , TARGET_STRING ( "Ms3" ) , 0 ,
2 , 0 } , { 135 , TARGET_STRING ( "Msfl1" ) , 0 , 2 , 0 } , { 136 ,
TARGET_STRING ( "Msfl2" ) , 0 , 2 , 0 } , { 137 , TARGET_STRING ( "Posinit" )
, 0 , 5 , 0 } , { 138 , TARGET_STRING ( "Rmean" ) , 0 , 2 , 0 } , { 139 ,
TARGET_STRING ( "Rotinit" ) , 0 , 5 , 0 } , { 140 , TARGET_STRING ( "Vinit" )
, 0 , 5 , 0 } , { 141 , TARGET_STRING ( "lx1s" ) , 0 , 2 , 0 } , { 142 ,
TARGET_STRING ( "lx2s" ) , 0 , 2 , 0 } , { 143 , TARGET_STRING ( "lx3s" ) , 0
, 2 , 0 } , { 144 , TARGET_STRING ( "ly1" ) , 0 , 2 , 0 } , { 145 ,
TARGET_STRING ( "ly2" ) , 0 , 2 , 0 } , { 146 , TARGET_STRING ( "ly3" ) , 0 ,
2 , 0 } , { 147 , TARGET_STRING ( "mu" ) , 0 , 2 , 0 } , { 148 ,
TARGET_STRING ( "wie" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . cdh0cejsfe . gyn0we22d3 [ 0 ] , &
rtB . jgw3y31v4u [ 0 ] , & rtB . i1pnkhcd3l , & rtB . csfv2saeka . d1ftndfkkq
[ 0 ] , & rtB . clq34byw1m [ 0 ] , & rtB . korcar35qr [ 0 ] , & rtB .
j3chrhjiaz [ 0 ] , & rtB . afjzospe3i , & rtB . ftabaiwbi3 [ 0 ] , & rtB .
gqkpyu5i5o [ 0 ] , & rtB . eyeiubd2vv , & rtB . pkf2l5jxjr [ 0 ] , & rtB .
lpgqziebnn , & rtB . eebvsq3orw , & rtB . pprc2sojtl [ 0 ] , & rtB .
ka2g0opaq2 [ 0 ] , & rtB . oe1w2iyrzq , & rtB . out1on52mc , & rtB .
ci3xiiiq0s [ 0 ] , & rtB . ehvbzgdsbd , & rtB . lu4c5m5miz [ 0 ] , & rtB .
p5pzpcjivt [ 0 ] , & rtB . gqnaxv0aej [ 0 ] , & rtB . ktldt1hqeb , & rtB .
kiugw5nowc , & rtB . jhzk1r5ytp [ 0 ] , & rtB . k1llhfc00r [ 0 ] , & rtB .
leuq35xwty [ 0 ] , & rtB . npdusycoqq [ 0 ] , & rtB . bfjh5ttx5d [ 0 ] , &
rtB . kf1r1nnbbf [ 0 ] , & rtB . g0enzwg25a , & rtB . hu3jcyazau [ 0 ] , &
rtB . esotkl5ybw [ 0 ] , & rtB . ft5rioowtz , & rtB . em3qj5mb0j , & rtB .
ogv2dj34t1 , & rtB . isxhmienjx [ 0 ] , & rtB . maxfhqa4qg [ 0 ] , & rtB .
jck3hj2yfb [ 0 ] , & rtB . ccejaqny4t [ 0 ] , & rtB . aqc2hj2iie [ 0 ] , &
rtB . mc4dbinm3s [ 0 ] , & rtB . jaglcqtvdh [ 0 ] , & rtB . ov1zz1vxro [ 0 ]
, & rtB . lvjpidban0 . d1ftndfkkq [ 0 ] , & rtB . o5ix2pm1ra . gyn0we22d3 [ 0
] , & rtB . bddenpbj44 [ 0 ] , & rtB . lpdd0pji14 [ 0 ] , & rtB . bcei5zmgyw
[ 0 ] , & rtB . kbvgah11h4 [ 0 ] , & rtB . djkkpuffgh [ 0 ] , & rtB .
j0fqbrtyfa [ 0 ] , & rtB . dq02rtfmik [ 0 ] , & rtB . jjxpsmwl0v , & rtB .
e0hgmf3lna , & rtB . micobu3txc [ 0 ] , & rtB . fuxhodf3mu , & rtB .
jgmu4cntnu , & rtB . glh0kmcn3e , & rtB . av4akdfzex [ 0 ] , & rtB .
k3ye1bhxk2 , & rtB . fl3gaw21bb , & rtB . i1thalf1qu , & rtB . knmsqw3rgl , &
rtB . iu2eelcpow , & rtB . jtu1si03zo , & rtB . b3yc2a2cys , & rtB .
ctw4uaxlhl , & rtB . abyj52ypkw , & rtB . psxkx0n5lg , & rtB . hmomc5la5h , &
rtB . djl30gp1b4 , & rtB . jwlhh05nrl , & rtB . adlczhpcf0 , & rtB .
dwcu5hang5 , & rtB . kh2ct1ob1u , & rtB . ozhmixpt0c , & rtB . ocb3p2twiw , &
rtB . eksqltc5ph , & rtB . jt2nv2x55d , & rtB . pctl5dpy2a , & rtB .
jlrhitwsl3 , & rtB . b32c2bmvzy , & rtB . np4lv05ekc , & rtB . hbw54wmb5r [ 0
] , & rtB . e5tg3nwa3z , & rtB . dddupokjkf [ 0 ] , & rtB . nhnd355lne [ 0 ]
, & rtB . pns4nzqi1p [ 0 ] , & rtP . Constant1_Value , & rtP .
Constant2_Value , & rtP . Constant4_Value , & rtP . Integrator4_IC [ 0 ] , &
rtP . LowPassFilterDiscreteorContinuous_K , & rtP .
LowPassFilterDiscreteorContinuous_T , & rtP .
LowPassFilterDiscreteorContinuous_init_option , & rtP .
LowPassFilterDiscreteorContinuous1_K , & rtP .
LowPassFilterDiscreteorContinuous1_T , & rtP .
LowPassFilterDiscreteorContinuous1_init_option , & rtP . Gain_Gain , & rtP .
Gain1_Gain , & rtP . Gain2_Gain , & rtP . Gain3_Gain , & rtP . Integrator_IC
, & rtP . Integrator4_IC_jlsgyxjuqf [ 0 ] , & rtP . CompareToConstant_const ,
& rtP . CompareToConstant_const_fyftrk53il , & rtP . Constant3_Value , & rtP
. Constant4_Value_eqvxhcrvd4 , & rtP . Constant5_Value , & rtP .
Switch1_Threshold , & rtP . Constant_Value , & rtP . Integrator_UpperSat , &
rtP . Integrator_LowerSat , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Constant_Value_lyipl5atta , & rtP .
Integrator_UpperSat_h00nuw44zs , & rtP . Integrator_LowerSat_mewh5v15vs , &
rtP . Saturation_UpperSat_egkpxdd2hd , & rtP . Saturation_LowerSat_kcdgs05bz3
, & rtP . Attinit [ 0 ] , & rtP . Bt1 , & rtP . Bt2 , & rtP . Isp1s , & rtP .
Isp1v , & rtP . Isp2 , & rtP . Kp1 , & rtP . Kp2 , & rtP . Mf1 , & rtP . Mf2
, & rtP . Mp1 , & rtP . Mp2 , & rtP . Ms3 , & rtP . Msfl1 , & rtP . Msfl2 , &
rtP . Posinit [ 0 ] , & rtP . Rmean , & rtP . Rotinit [ 0 ] , & rtP . Vinit [
0 ] , & rtP . lx1s , & rtP . lx2s , & rtP . lx3s , & rtP . ly1 , & rtP . ly2
, & rtP . ly3 , & rtP . mu , & rtP . wie , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 ,
0 } , { rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 0 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
4 , 1 , 3 , 1 , 1 , 1 , 1 , 3 , 2 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 90 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 32 ,
rtModelParameters , 27 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 425980448U , 97785928U , 3073931720U ,
3373487905U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * rocket_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void rocket_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void rocket_host_InitializeDataMapInfo ( rocket_host_DataMapInfo_T * dataMap
, const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
