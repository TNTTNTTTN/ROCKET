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
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"rocket/Subsystem/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING ( "rocket/Subsystem/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage1/Clock" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 2 } , { 3 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage1/Add" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage2/Gain" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage2/Add" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage2/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage2/Switch1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 8 ,
TARGET_STRING ( "rocket/Subsystem/Thrust system/Stage2/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 9 , TARGET_STRING (
"rocket/Subsystem/Thrust system/Stage2/Switch1" ) , TARGET_STRING (
"Threshold" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 10 , TARGET_STRING (
"Bt1" ) , 0 , 1 , 0 } , { 11 , TARGET_STRING ( "Bt2" ) , 0 , 1 , 0 } , { 12 ,
TARGET_STRING ( "Isp1s" ) , 0 , 1 , 0 } , { 13 , TARGET_STRING ( "Isp1v" ) ,
0 , 1 , 0 } , { 14 , TARGET_STRING ( "Mf1" ) , 0 , 1 , 0 } , { 15 ,
TARGET_STRING ( "Mf2" ) , 0 , 1 , 0 } , { 16 , TARGET_STRING ( "Ms1" ) , 0 ,
1 , 0 } , { 17 , TARGET_STRING ( "Ms2" ) , 0 , 1 , 0 } , { 18 , TARGET_STRING
( "Msfl1" ) , 0 , 1 , 0 } , { 19 , TARGET_STRING ( "Rmean" ) , 0 , 1 , 0 } ,
{ 20 , TARGET_STRING ( "lx1" ) , 0 , 1 , 0 } , { 21 , TARGET_STRING ( "ly1" )
, 0 , 1 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . gfgessygkf [ 0 ] , & rtB .
go3xmtztvz , & rtB . i1thalf1qu , & rtB . iu2eelcpow , & rtB . hmomc5la5h , &
rtB . djl30gp1b4 , & rtB . adlczhpcf0 , & rtB . kh2ct1ob1u , & rtP .
Constant4_Value , & rtP . Switch1_Threshold , & rtP . Bt1 , & rtP . Bt2 , &
rtP . Isp1s , & rtP . Isp1v , & rtP . Mf1 , & rtP . Mf2 , & rtP . Ms1 , & rtP
. Ms2 , & rtP . Msfl1 , & rtP . Rmean , & rtP . lx1 , & rtP . ly1 , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 8 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 2 ,
rtModelParameters , 12 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2842663232U , 3213308733U , 3761558240U ,
1339799782U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
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
