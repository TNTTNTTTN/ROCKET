#include "rocket.h"
#include "rtwtypes.h"
#include "rocket_private.h"
#include "rt_logging_mmi.h"
#include "rocket_capi.h"
#include "rocket_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.8 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void kv0ffnouan ( real_T fjt2bpmpwp ) { real_T jhodlpv2g0 [ 3 ] ;
real_T Iyy ; real_T a ; a = rtP . lx1 / 2.0 ; Iyy = rtP . lx1 / 2.0 ; Iyy = (
Iyy * Iyy * 3.0 + rtP . ly1 * rtP . ly1 ) * ( 0.5 * fjt2bpmpwp ) ; jhodlpv2g0
[ 0 ] = 0.5 * fjt2bpmpwp * ( a * a ) ; jhodlpv2g0 [ 1 ] = Iyy ; jhodlpv2g0 [
2 ] = Iyy ; } void bc4oqrvlhb ( real_T bj5qmjx4em , const real_T dus4l1nm0l [
3 ] ) { real_T fl3gaw21bb ; if ( bj5qmjx4em >= rtP . Bt1 ) { fl3gaw21bb = 0.0
; } else { fl3gaw21bb = ( ( rtP . Isp1v - rtP . Isp1s ) / 101.325 * ( 101.325
- dus4l1nm0l [ 1 ] ) + rtP . Isp1s ) * ( rtP . Msfl1 * 9.81 ) ; } } void
MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { real_T jtu1si03zo ; real_T jwlhh05nrl ;
real_T tmp ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . gfgessygkf [ 0 ] =
101.325 ; rtB . gfgessygkf [ 1 ] = 288.15 ; rtB . gfgessygkf [ 2 ] = 1.29 ; }
rtB . i1thalf1qu = ssGetT ( rtS ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . bbvvmnonjv = ( rtB . i1thalf1qu > rtP . Bt1 ) ; } if ( rtDW .
bbvvmnonjv ) { tmp = rtP . Bt1 ; } else { tmp = rtB . i1thalf1qu ; }
jtu1si03zo = rtB . iu2eelcpow - rtP . Mf1 / rtP . Bt1 * tmp ; kv0ffnouan (
jtu1si03zo ) ; bc4oqrvlhb ( rtB . i1thalf1qu , rtB . gfgessygkf ) ; rtB .
adlczhpcf0 = ssGetT ( rtS ) - ( rtP . Bt1 + 10.0 ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . gatfaphjb0 = ( rtB . adlczhpcf0 >
rtP . Switch1_Threshold ) ; } if ( rtDW . gatfaphjb0 ) { rtB . kh2ct1ob1u =
rtB . adlczhpcf0 ; } else { rtB . kh2ct1ob1u = rtP . Constant4_Value ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . nqvdwzkqqv = ( rtB . kh2ct1ob1u >
rtP . Bt2 ) ; } if ( rtDW . nqvdwzkqqv ) { tmp = rtP . Bt2 ; } else { tmp =
rtB . kh2ct1ob1u ; } rtB . hmomc5la5h = rtP . Mf2 / rtP . Bt2 * tmp ;
jwlhh05nrl = rtB . djl30gp1b4 - rtB . hmomc5la5h ; kv0ffnouan ( jwlhh05nrl )
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { bc4oqrvlhb ( 0.0 , rtB . gfgessygkf
) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB .
go3xmtztvz = 0.0 - rtP . Rmean ; rtB . iu2eelcpow = rtP . Ms1 + rtP . Mf1 ;
rtB . djl30gp1b4 = rtP . Ms2 + rtP . Mf2 ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) {
ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
_rtZCSV -> dhdqbkvjjj = rtB . i1thalf1qu - rtP . Bt1 ; _rtZCSV -> kpb0kxbm42
= rtB . adlczhpcf0 - rtP . Switch1_Threshold ; _rtZCSV -> n252nuyick = rtB .
kh2ct1ob1u - rtP . Bt2 ; } void MdlTerminate ( void ) { } static void
mr_rocket_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_rocket_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_rocket_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_rocket_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_rocket_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_rocket_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_rocket_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_rocket_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_rocket_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_rocket_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T
* varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j
) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const
uint8_T * ) srcData , numBytes ) ; } static void
mr_rocket_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_rocket_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_rocket_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_rocket_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_rocket_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_rocket_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal
= ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j
) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray *
mr_rocket_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ] = { "rtB" ,
"rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 ,
3 , ssDWFieldNames ) ; mr_rocket_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 3 ] = { "rtDW.bbvvmnonjv" , "rtDW.gatfaphjb0" ,
"rtDW.nqvdwzkqqv" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 3
, rtdwDataFieldNames ) ; mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( rtDW . bbvvmnonjv ) , sizeof ( rtDW . bbvvmnonjv ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW .
gatfaphjb0 ) , sizeof ( rtDW . gatfaphjb0 ) ) ; mr_rocket_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( rtDW . nqvdwzkqqv ) , sizeof ( rtDW
. nqvdwzkqqv ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_rocket_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . bbvvmnonjv )
, rtdwData , 0 , 0 , sizeof ( rtDW . bbvvmnonjv ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . gatfaphjb0 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . gatfaphjb0 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . nqvdwzkqqv ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . nqvdwzkqqv ) ) ; } } mxArray *
mr_rocket_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 2 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 2 ] = { "Scope" , "Scope" , } ; static const char *
blockPath [ 2 ] = { "rocket/Subsystem/Scope" ,
"rocket/Subsystem/Thrust system/Stage2/Scope" , } ; static const int reason [
2 ] = { 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 2 ; ++ ( subs [ 0 ] )
) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0
) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ;
ssSetNumBlocks ( rtS , 32 ) ; ssSetNumBlockIO ( rtS , 8 ) ;
ssSetNumBlockParams ( rtS , 14 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2842663232U ) ;
ssSetChecksumVal ( rtS , 1 , 3213308733U ) ; ssSetChecksumVal ( rtS , 2 ,
3761558240U ) ; ssSetChecksumVal ( rtS , 3 , 1339799782U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } rocket_InitializeDataMapInfo ( )
; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"rocket" ) ; ssSetPath ( rtS , "rocket" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 84000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ;
rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo
( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ;
rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation (
ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" )
; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; static uint8_T zcAttributes [ 3 ] = { ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; ssSetStepSize ( rtS , 1680.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 1680.0 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepDiscrete" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate )
; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ; ssSetSolverNumZcSignals
( rtS , 3 ) ; ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 3 ) ; } ssSetChecksumVal ( rtS , 0 ,
2842663232U ) ; ssSetChecksumVal ( rtS , 1 , 3213308733U ) ; ssSetChecksumVal
( rtS , 2 , 3761558240U ) ; ssSetChecksumVal ( rtS , 3 , 1339799782U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 6 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_rocket_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_rocket_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_rocket_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
