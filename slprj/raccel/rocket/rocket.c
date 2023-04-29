#include "rocket.h"
#include "rtwtypes.h"
#include "rocket_private.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "rt_logging_mmi.h"
#include "rocket_capi.h"
#include "zero_crossing_types.h"
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
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static real_T pmjkhdxuul ( const real_T x
[ 3 ] ) ; static void lod5r4qftz ( real_T * x ) ; void gdi5zdpghe ( const
real_T aiki3hwfqm [ 4 ] , obigtil5rb * localB ) { real_T Qabs ; Qabs =
muDoubleScalarSqrt ( ( ( aiki3hwfqm [ 0 ] * aiki3hwfqm [ 0 ] + aiki3hwfqm [ 1
] * aiki3hwfqm [ 1 ] ) + aiki3hwfqm [ 2 ] * aiki3hwfqm [ 2 ] ) + aiki3hwfqm [
3 ] * aiki3hwfqm [ 3 ] ) ; localB -> gyn0we22d3 [ 0 ] = aiki3hwfqm [ 0 ] /
Qabs ; localB -> gyn0we22d3 [ 1 ] = aiki3hwfqm [ 1 ] / Qabs ; localB ->
gyn0we22d3 [ 2 ] = aiki3hwfqm [ 2 ] / Qabs ; localB -> gyn0we22d3 [ 3 ] =
aiki3hwfqm [ 3 ] / Qabs ; } void n0rrwyfxef ( const real_T gb2egtjege [ 4 ] ,
f13je40avc * localB ) { localB -> d1ftndfkkq [ 0 ] = ( ( gb2egtjege [ 1 ] *
0.0 + gb2egtjege [ 2 ] * 0.0 ) + gb2egtjege [ 3 ] * rtP . wie ) * - 0.5 ;
localB -> d1ftndfkkq [ 1 ] = ( ( gb2egtjege [ 0 ] * 0.0 + gb2egtjege [ 2 ] *
rtP . wie ) - gb2egtjege [ 3 ] * 0.0 ) * 0.5 ; localB -> d1ftndfkkq [ 2 ] = (
( gb2egtjege [ 0 ] * 0.0 + gb2egtjege [ 3 ] * 0.0 ) - gb2egtjege [ 1 ] * rtP
. wie ) * 0.5 ; localB -> d1ftndfkkq [ 3 ] = ( ( gb2egtjege [ 0 ] * rtP . wie
+ gb2egtjege [ 1 ] * 0.0 ) - gb2egtjege [ 2 ] * 0.0 ) * 0.5 ; } static real_T
pmjkhdxuul ( const real_T x [ 3 ] ) { real_T absxk ; real_T scale ; real_T t
; real_T y ; scale = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( x
[ 0 ] ) ; if ( absxk > 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ;
} else { t = absxk / 3.3121686421112381E-170 ; y = t * t ; } absxk =
muDoubleScalarAbs ( x [ 1 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y
= y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t * t ;
} absxk = muDoubleScalarAbs ( x [ 2 ] ) ; if ( absxk > scale ) { t = scale /
absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y
+= t * t ; } return scale * muDoubleScalarSqrt ( y ) ; } static void
lod5r4qftz ( real_T * x ) { real_T absx ; real_T b_x ; int8_T n ; boolean_T
guard1 = false ; if ( muDoubleScalarIsInf ( * x ) || muDoubleScalarIsNaN ( *
x ) ) { * x = ( rtNaN ) ; } else { b_x = muDoubleScalarRem ( * x , 360.0 ) ;
absx = muDoubleScalarAbs ( b_x ) ; if ( absx > 180.0 ) { if ( b_x > 0.0 ) {
b_x -= 360.0 ; } else { b_x += 360.0 ; } absx = muDoubleScalarAbs ( b_x ) ; }
if ( absx <= 45.0 ) { b_x *= 0.017453292519943295 ; * x = muDoubleScalarSin (
b_x ) ; } else { guard1 = false ; if ( absx <= 135.0 ) { if ( b_x > 0.0 ) {
b_x = ( b_x - 90.0 ) * 0.017453292519943295 ; * x = muDoubleScalarCos ( b_x )
; } else { b_x = ( b_x + 90.0 ) * 0.017453292519943295 ; n = - 1 ; guard1 =
true ; } } else { if ( b_x > 0.0 ) { b_x = ( b_x - 180.0 ) *
0.017453292519943295 ; n = 2 ; } else { b_x = ( b_x + 180.0 ) *
0.017453292519943295 ; n = - 2 ; } guard1 = true ; } if ( guard1 ) { if ( n
== - 1 ) { * x = - muDoubleScalarCos ( b_x ) ; } else { * x = -
muDoubleScalarSin ( b_x ) ; } } } } } void MdlInitialize ( void ) { boolean_T
tmp ; rtX . fsftytietz [ 0 ] = rtP . Vinit [ 0 ] ; rtX . fsftytietz [ 1 ] =
rtP . Vinit [ 1 ] ; rtX . fsftytietz [ 2 ] = rtP . Vinit [ 2 ] ; rtX .
gmn5v5nip3 [ 0 ] = rtP . Integrator4_IC [ 0 ] ; rtX . gei0u4b2jn [ 0 ] = rtP
. Attinit [ 0 ] ; rtX . gmn5v5nip3 [ 1 ] = rtP . Integrator4_IC [ 1 ] ; rtX .
gei0u4b2jn [ 1 ] = rtP . Attinit [ 1 ] ; rtX . gmn5v5nip3 [ 2 ] = rtP .
Integrator4_IC [ 2 ] ; rtX . gei0u4b2jn [ 2 ] = rtP . Attinit [ 2 ] ; rtX .
gmn5v5nip3 [ 3 ] = rtP . Integrator4_IC [ 3 ] ; rtX . gei0u4b2jn [ 3 ] = rtP
. Attinit [ 3 ] ; rtX . osil5rla0l [ 0 ] = rtP . Posinit [ 0 ] ; rtX .
osil5rla0l [ 1 ] = rtP . Posinit [ 1 ] ; rtX . osil5rla0l [ 2 ] = rtP .
Posinit [ 2 ] ; rtDW . dmvm0z2smx = ( rtInf ) ; rtDW . boeci1vi3z = ( rtInf )
; rtDW . k03ujfya4r = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . bkkkgiqcw4
= 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . k03ujfya4r = ! tmp ; }
else { rtDW . k03ujfya4r = 1 ; } rtX . kyfu3phbiu [ 0 ] = 0.0 ; rtX .
kyfu3phbiu [ 1 ] = 0.0 ; rtX . kyfu3phbiu [ 2 ] = 0.0 ; } rtDW . om55dr0bos =
( rtInf ) ; rtDW . adt5wroeub = ( rtInf ) ; rtDW . paojkwi1rt = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . paojkwi1rt =
! tmp ; } else { rtDW . paojkwi1rt = 1 ; } } rtX . iq0o54ir35 [ 0 ] = rtP .
Rotinit [ 0 ] ; rtX . iq0o54ir35 [ 1 ] = rtP . Rotinit [ 1 ] ; rtX .
iq0o54ir35 [ 2 ] = rtP . Rotinit [ 2 ] ; rtX . ormll3qjai = rtP .
Integrator_IC ; rtX . kkd13wjx0s [ 0 ] = rtP . Integrator4_IC_jlsgyxjuqf [ 0
] ; rtX . kkd13wjx0s [ 1 ] = rtP . Integrator4_IC_jlsgyxjuqf [ 1 ] ; rtX .
kkd13wjx0s [ 2 ] = rtP . Integrator4_IC_jlsgyxjuqf [ 2 ] ; rtX . kkd13wjx0s [
3 ] = rtP . Integrator4_IC_jlsgyxjuqf [ 3 ] ; } void MdlStart ( void ) { {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Rocket Dynamics:4" )
; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Rocket Dynamics:4" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "rocket/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Rocket Dynamics:4" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cdq51tck1j . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ace12826-e1ad-483e-b888-d97650b0a3da" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . cdq51tck1j . AQHandles , hDT , & srcInfo ) ; if ( rtDW . cdq51tck1j .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . cdq51tck1j . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
cdq51tck1j . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cdq51tck1j .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cdq51tck1j . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cdq51tck1j . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . cdq51tck1j . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"POS" ) ; sdiRegisterWksVariable ( rtDW . cdq51tck1j . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "MATLAB Function6" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "MATLAB Function6" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "rocket/To Workspace1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"MATLAB Function6" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 3 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . px2txhk5gj . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"01cec66f-2b81-42be-82c0-e9ee3158f44e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . px2txhk5gj . AQHandles , hDT , & srcInfo ) ; if ( rtDW . px2txhk5gj .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . px2txhk5gj . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
px2txhk5gj . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . px2txhk5gj .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . px2txhk5gj . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . px2txhk5gj . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . px2txhk5gj . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"EULER" ) ; sdiRegisterWksVariable ( rtDW . px2txhk5gj . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Rocket Dynamics:2" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Rocket Dynamics:2" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "rocket/To Workspace2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Rocket Dynamics:2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 3 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . ix2gzz3wzl . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"aa805c40-feac-4166-a545-9c1a5c997887" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ix2gzz3wzl . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ix2gzz3wzl .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ix2gzz3wzl . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ix2gzz3wzl . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ix2gzz3wzl .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ix2gzz3wzl . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ix2gzz3wzl . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ix2gzz3wzl . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"ANGULAR" ) ; sdiRegisterWksVariable ( rtDW . ix2gzz3wzl . AQHandles ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Rocket Dynamics:1" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Rocket Dynamics:1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "rocket/To Workspace3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Rocket Dynamics:1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cpjt4iqhpn . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"723c89ea-c860-4aed-92c7-826cadf8cd03" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . cpjt4iqhpn . AQHandles , hDT , & srcInfo ) ; if ( rtDW . cpjt4iqhpn .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . cpjt4iqhpn . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
cpjt4iqhpn . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cpjt4iqhpn .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cpjt4iqhpn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cpjt4iqhpn . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . cpjt4iqhpn . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"VEL" ) ; sdiRegisterWksVariable ( rtDW . cpjt4iqhpn . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } rtB . micobu3txc [ 0 ]
= 0.0 ; rtB . micobu3txc [ 1 ] = 0.0 ; rtB . av4akdfzex [ 0 ] = 0.0 ; rtB .
av4akdfzex [ 1 ] = 0.0 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid )
{ real_T kmb0eu1a0s [ 4 ] ; __m128d tmp_e ; __m128d tmp_i ; __m128d tmp_m ;
__m128d tmp_p ; real_T aq [ 16 ] ; real_T gcal [ 4 ] ; real_T hcal [ 4 ] ;
real_T g5n3bwyn0j [ 3 ] ; real_T oaadk5j3ra [ 3 ] ; real_T ( * lastU_p ) [ 3
] ; real_T Qabs ; real_T absxk ; real_T bzzjgpr0av ; real_T dsvtya4om0_idx_0
; real_T dsvtya4om0_idx_1 ; real_T j0sr42sxx5_idx_1 ; real_T niolpy2aa0_idx_3
; real_T normRcurr_idx_1 ; real_T normRcurr_idx_2 ; real_T scale ; real_T t ;
real_T tmp ; real_T * lastU ; int32_T n ; boolean_T guard1 = false ;
boolean_T icNeedsLoading ; boolean_T resetX ; ZCEventType zcEvent ; rtB .
bddenpbj44 [ 0 ] = rtX . fsftytietz [ 0 ] ; rtB . bddenpbj44 [ 1 ] = rtX .
fsftytietz [ 1 ] ; rtB . bddenpbj44 [ 2 ] = rtX . fsftytietz [ 2 ] ; rtB .
i1pnkhcd3l = 0.0 ; scale = 3.3121686421112381E-170 ; absxk =
muDoubleScalarAbs ( rtB . bddenpbj44 [ 0 ] ) ; if ( absxk >
3.3121686421112381E-170 ) { t = 3.3121686421112381E-170 / absxk ; rtB .
i1pnkhcd3l = rtB . i1pnkhcd3l * t * t + 1.0 ; scale = absxk ; } else { t =
absxk / 3.3121686421112381E-170 ; rtB . i1pnkhcd3l += t * t ; } absxk =
muDoubleScalarAbs ( rtB . bddenpbj44 [ 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; rtB . i1pnkhcd3l = rtB . i1pnkhcd3l * t * t + 1.0 ; scale =
absxk ; } else { t = absxk / scale ; rtB . i1pnkhcd3l += t * t ; } absxk =
muDoubleScalarAbs ( rtB . bddenpbj44 [ 2 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; rtB . i1pnkhcd3l = rtB . i1pnkhcd3l * t * t + 1.0 ; scale =
absxk ; } else { t = absxk / scale ; rtB . i1pnkhcd3l += t * t ; } rtB .
i1pnkhcd3l = scale * muDoubleScalarSqrt ( rtB . i1pnkhcd3l ) ; rtB .
j3chrhjiaz [ 0 ] = rtX . gmn5v5nip3 [ 0 ] ; rtB . j3chrhjiaz [ 1 ] = rtX .
gmn5v5nip3 [ 1 ] ; rtB . j3chrhjiaz [ 2 ] = rtX . gmn5v5nip3 [ 2 ] ; rtB .
j3chrhjiaz [ 3 ] = rtX . gmn5v5nip3 [ 3 ] ; gdi5zdpghe ( rtB . j3chrhjiaz , &
rtB . cdh0cejsfe ) ; rtB . ljrcglqxb4 [ 0 ] = rtP . Constant2_Value ; rtB .
ljrcglqxb4 [ 1 ] = rtP . Constant1_Value ; rtB . ljrcglqxb4 [ 2 ] = rtP .
Constant2_Value ; aq [ 0 ] = rtB . cdh0cejsfe . gyn0we22d3 [ 0 ] ; aq [ 4 ] =
rtB . cdh0cejsfe . gyn0we22d3 [ 1 ] ; aq [ 8 ] = rtB . cdh0cejsfe .
gyn0we22d3 [ 2 ] ; aq [ 12 ] = rtB . cdh0cejsfe . gyn0we22d3 [ 3 ] ; aq [ 1 ]
= - rtB . cdh0cejsfe . gyn0we22d3 [ 1 ] ; aq [ 5 ] = rtB . cdh0cejsfe .
gyn0we22d3 [ 0 ] ; aq [ 9 ] = rtB . cdh0cejsfe . gyn0we22d3 [ 3 ] ; aq [ 13 ]
= - rtB . cdh0cejsfe . gyn0we22d3 [ 2 ] ; aq [ 2 ] = - rtB . cdh0cejsfe .
gyn0we22d3 [ 2 ] ; aq [ 6 ] = - rtB . cdh0cejsfe . gyn0we22d3 [ 3 ] ; aq [ 10
] = rtB . cdh0cejsfe . gyn0we22d3 [ 0 ] ; aq [ 14 ] = rtB . cdh0cejsfe .
gyn0we22d3 [ 1 ] ; aq [ 3 ] = - rtB . cdh0cejsfe . gyn0we22d3 [ 3 ] ; aq [ 7
] = rtB . cdh0cejsfe . gyn0we22d3 [ 2 ] ; aq [ 11 ] = - rtB . cdh0cejsfe .
gyn0we22d3 [ 1 ] ; aq [ 15 ] = rtB . cdh0cejsfe . gyn0we22d3 [ 0 ] ;
niolpy2aa0_idx_3 = rtB . ljrcglqxb4 [ 0 ] ; dsvtya4om0_idx_0 = rtB .
ljrcglqxb4 [ 1 ] ; dsvtya4om0_idx_1 = rtB . ljrcglqxb4 [ 2 ] ; for ( n = 0 ;
n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( & aq [ n ] ) ; tmp_e =
_mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd ( & aq [ n + 8 ] ) ;
tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd ( & hcal [ n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( dsvtya4om0_idx_1 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( dsvtya4om0_idx_0 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( niolpy2aa0_idx_3 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 ) ) , _mm_set1_pd ( 0.0 )
) ) ) ) ) ; } aq [ 0 ] = hcal [ 0 ] ; aq [ 4 ] = - hcal [ 1 ] ; aq [ 8 ] = -
hcal [ 2 ] ; aq [ 12 ] = - hcal [ 3 ] ; aq [ 1 ] = hcal [ 1 ] ; aq [ 5 ] =
hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3 ] ; aq [ 13 ] = hcal [ 2 ] ; aq [ 2 ] =
hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ; aq [ 10 ] = hcal [ 0 ] ; aq [ 14 ] = -
hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ; aq [ 7 ] = - hcal [ 2 ] ; aq [ 11 ] =
hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ; tmp = rtB . cdh0cejsfe . gyn0we22d3 [ 0
] ; niolpy2aa0_idx_3 = rtB . cdh0cejsfe . gyn0we22d3 [ 1 ] ; dsvtya4om0_idx_0
= rtB . cdh0cejsfe . gyn0we22d3 [ 2 ] ; dsvtya4om0_idx_1 = rtB . cdh0cejsfe .
gyn0we22d3 [ 3 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( tmp )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } rtB . jgw3y31v4u [ 0 ] = hcal [ 1 ] ;
rtB . jgw3y31v4u [ 1 ] = hcal [ 2 ] ; rtB . jgw3y31v4u [ 2 ] = hcal [ 3 ] ;
scale = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( rtB .
jgw3y31v4u [ 0 ] ) ; if ( absxk > 3.3121686421112381E-170 ) { Qabs = 1.0 ;
scale = absxk ; } else { t = absxk / 3.3121686421112381E-170 ; Qabs = t * t ;
} absxk = muDoubleScalarAbs ( rtB . jgw3y31v4u [ 1 ] ) ; if ( absxk > scale )
{ t = scale / absxk ; Qabs = Qabs * t * t + 1.0 ; scale = absxk ; } else { t
= absxk / scale ; Qabs += t * t ; } absxk = muDoubleScalarAbs ( rtB .
jgw3y31v4u [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; Qabs = Qabs *
t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; Qabs += t * t ; }
Qabs = scale * muDoubleScalarSqrt ( Qabs ) ; tmp = 1.0 / Qabs ; rtB .
jgw3y31v4u [ 0 ] *= tmp ; rtB . jgw3y31v4u [ 1 ] *= tmp ; rtB . jgw3y31v4u [
2 ] *= tmp ; rtB . bcei5zmgyw [ 0 ] = rtX . gei0u4b2jn [ 0 ] ; rtB .
bcei5zmgyw [ 1 ] = rtX . gei0u4b2jn [ 1 ] ; rtB . bcei5zmgyw [ 2 ] = rtX .
gei0u4b2jn [ 2 ] ; rtB . bcei5zmgyw [ 3 ] = rtX . gei0u4b2jn [ 3 ] ; Qabs =
muDoubleScalarSqrt ( ( ( rtB . bcei5zmgyw [ 0 ] * rtB . bcei5zmgyw [ 0 ] +
rtB . bcei5zmgyw [ 1 ] * rtB . bcei5zmgyw [ 1 ] ) + rtB . bcei5zmgyw [ 2 ] *
rtB . bcei5zmgyw [ 2 ] ) + rtB . bcei5zmgyw [ 3 ] * rtB . bcei5zmgyw [ 3 ] )
; rtB . mc4dbinm3s [ 0 ] = rtB . bcei5zmgyw [ 0 ] / Qabs ; rtB . mc4dbinm3s [
1 ] = rtB . bcei5zmgyw [ 1 ] / Qabs ; rtB . mc4dbinm3s [ 2 ] = rtB .
bcei5zmgyw [ 2 ] / Qabs ; rtB . mc4dbinm3s [ 3 ] = rtB . bcei5zmgyw [ 3 ] /
Qabs ; rtB . kbvgah11h4 [ 0 ] = rtX . osil5rla0l [ 0 ] ; rtB . kbvgah11h4 [ 1
] = rtX . osil5rla0l [ 1 ] ; rtB . kbvgah11h4 [ 2 ] = rtX . osil5rla0l [ 2 ]
; scale = pmjkhdxuul ( rtB . kbvgah11h4 ) ; Qabs = rtB . kbvgah11h4 [ 0 ] /
scale ; normRcurr_idx_1 = rtB . kbvgah11h4 [ 1 ] / scale ; normRcurr_idx_2 =
rtB . kbvgah11h4 [ 2 ] / scale ; aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 4 ]
= - rtB . mc4dbinm3s [ 1 ] ; aq [ 8 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 12 ]
= - rtB . mc4dbinm3s [ 3 ] ; aq [ 1 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] =
rtB . mc4dbinm3s [ 0 ] ; aq [ 9 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] =
rtB . mc4dbinm3s [ 2 ] ; aq [ 2 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = rtB .
mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = - rtB .
mc4dbinm3s [ 1 ] ; aq [ 3 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = - rtB .
mc4dbinm3s [ 2 ] ; aq [ 11 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB .
mc4dbinm3s [ 0 ] ; niolpy2aa0_idx_3 = rtB . bddenpbj44 [ 0 ] ;
dsvtya4om0_idx_0 = rtB . bddenpbj44 [ 1 ] ; dsvtya4om0_idx_1 = rtB .
bddenpbj44 [ 2 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } aq [ 0 ] = hcal [ 0 ] ; aq [ 4 ] = -
hcal [ 1 ] ; aq [ 8 ] = - hcal [ 2 ] ; aq [ 12 ] = - hcal [ 3 ] ; aq [ 1 ] =
hcal [ 1 ] ; aq [ 5 ] = hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3 ] ; aq [ 13 ] =
hcal [ 2 ] ; aq [ 2 ] = hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ; aq [ 10 ] = hcal
[ 0 ] ; aq [ 14 ] = - hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ; aq [ 7 ] = - hcal
[ 2 ] ; aq [ 11 ] = hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ; absxk = rtB .
mc4dbinm3s [ 0 ] ; j0sr42sxx5_idx_1 = - rtB . mc4dbinm3s [ 1 ] ; t = - rtB .
mc4dbinm3s [ 2 ] ; niolpy2aa0_idx_3 = - rtB . mc4dbinm3s [ 3 ] ; for ( n = 0
; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( & aq [ n ] ) ; tmp_e =
_mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd ( & aq [ n + 8 ] ) ;
tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd ( & hcal [ n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( niolpy2aa0_idx_3 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( t ) ) , _mm_add_pd (
_mm_mul_pd ( tmp_e , _mm_set1_pd ( j0sr42sxx5_idx_1 ) ) , _mm_add_pd (
_mm_mul_pd ( tmp_p , _mm_set1_pd ( absxk ) ) , _mm_set1_pd ( 0.0 ) ) ) ) ) )
; } rtB . pkf2l5jxjr [ 0 ] = hcal [ 1 ] ; rtB . pkf2l5jxjr [ 1 ] = hcal [ 2 ]
; rtB . pkf2l5jxjr [ 2 ] = hcal [ 3 ] ; tmp = ( rtB . jgw3y31v4u [ 0 ] * Qabs
+ rtB . jgw3y31v4u [ 1 ] * normRcurr_idx_1 ) + rtB . jgw3y31v4u [ 2 ] *
normRcurr_idx_2 ; niolpy2aa0_idx_3 = ( rtB . jgw3y31v4u [ 0 ] * Qabs + rtB .
jgw3y31v4u [ 1 ] * normRcurr_idx_1 ) + rtB . jgw3y31v4u [ 2 ] *
normRcurr_idx_2 ; t = muDoubleScalarSqrt ( muDoubleScalarAbs (
niolpy2aa0_idx_3 ) ) ; absxk = ( rtB . jgw3y31v4u [ 0 ] - niolpy2aa0_idx_3 *
Qabs ) * - t ; j0sr42sxx5_idx_1 = ( rtB . jgw3y31v4u [ 1 ] - niolpy2aa0_idx_3
* normRcurr_idx_1 ) * - t ; t = ( rtB . jgw3y31v4u [ 2 ] - niolpy2aa0_idx_3 *
normRcurr_idx_2 ) * - t ; dsvtya4om0_idx_0 = Qabs ; dsvtya4om0_idx_1 =
normRcurr_idx_1 ; Qabs -= tmp * rtB . jgw3y31v4u [ 0 ] ; normRcurr_idx_1 -=
tmp * rtB . jgw3y31v4u [ 1 ] ; tmp = normRcurr_idx_2 - tmp * rtB . jgw3y31v4u
[ 2 ] ; oaadk5j3ra [ 0 ] = ( normRcurr_idx_1 * rtB . jgw3y31v4u [ 2 ] - rtB .
jgw3y31v4u [ 1 ] * tmp ) + absxk ; oaadk5j3ra [ 1 ] = ( rtB . jgw3y31v4u [ 0
] * tmp - Qabs * rtB . jgw3y31v4u [ 2 ] ) + j0sr42sxx5_idx_1 ; oaadk5j3ra [ 2
] = ( Qabs * rtB . jgw3y31v4u [ 1 ] - rtB . jgw3y31v4u [ 0 ] *
normRcurr_idx_1 ) + t ; Qabs = pmjkhdxuul ( oaadk5j3ra ) ; if ( Qabs != 0.0 )
{ oaadk5j3ra [ 0 ] /= Qabs ; oaadk5j3ra [ 1 ] /= Qabs ; oaadk5j3ra [ 2 ] /=
Qabs ; } rtB . lpgqziebnn = niolpy2aa0_idx_3 ; rtB . ktldt1hqeb = ( rtP .
Rmean + 400000.0 ) - scale ; rtB . out1on52mc = rtP . Gain2_Gain * rtB .
ktldt1hqeb ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . jjxpsmwl0v = rtP .
LowPassFilterDiscreteorContinuous_T ; } rtB . fuxhodf3mu = rtB . jjxpsmwl0v -
rtB . micobu3txc [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . edvcjysz1h = ( rtB . fuxhodf3mu <=
rtP . Constant_Value ) ; } rtB . jt2nv2x55d = ( rtDW . edvcjysz1h && rtB .
ocb3p2twiw ) ; } if ( ( rtDW . dmvm0z2smx >= ssGetT ( rtS ) ) && ( rtDW .
boeci1vi3z >= ssGetT ( rtS ) ) ) { rtB . eebvsq3orw = 0.0 ; } else { Qabs =
rtDW . dmvm0z2smx ; lastU = & rtDW . d1gtmzxjii ; if ( rtDW . dmvm0z2smx <
rtDW . boeci1vi3z ) { if ( rtDW . boeci1vi3z < ssGetT ( rtS ) ) { Qabs = rtDW
. boeci1vi3z ; lastU = & rtDW . he1p5oblay ; } } else if ( rtDW . dmvm0z2smx
>= ssGetT ( rtS ) ) { Qabs = rtDW . boeci1vi3z ; lastU = & rtDW . he1p5oblay
; } rtB . eebvsq3orw = ( rtB . ktldt1hqeb - * lastU ) / ( ssGetT ( rtS ) -
Qabs ) ; } rtB . oe1w2iyrzq = rtP . Gain1_Gain * rtB . eebvsq3orw ; rtB .
ft5rioowtz = rtP . LowPassFilterDiscreteorContinuous_K * rtB . oe1w2iyrzq ;
rtB . pctl5dpy2a = rtB . ft5rioowtz ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
icNeedsLoading = ( rtDW . k03ujfya4r != 0 ) ; zcEvent = rt_ZCFcn (
ANY_ZERO_CROSSING , & rtPrevZCX . no0o2yoxb1 , ( rtB . jt2nv2x55d ) ) ;
resetX = ( ( rtB . jt2nv2x55d != 0.0 ) || ( zcEvent != NO_ZCEVENT ) ) ; if (
resetX ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } resetX = (
resetX || icNeedsLoading ) ; if ( resetX ) { icNeedsLoading = ( rtX .
bkkkgiqcw4 != rtB . pctl5dpy2a ) ; rtX . bkkkgiqcw4 = rtB . pctl5dpy2a ; if (
icNeedsLoading ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } }
if ( rtX . bkkkgiqcw4 >= rtP . Integrator_UpperSat ) { if ( rtX . bkkkgiqcw4
!= rtP . Integrator_UpperSat ) { rtX . bkkkgiqcw4 = rtP . Integrator_UpperSat
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ao2ofrlfpp =
3 ; } else if ( rtX . bkkkgiqcw4 <= rtP . Integrator_LowerSat ) { if ( rtX .
bkkkgiqcw4 != rtP . Integrator_LowerSat ) { rtX . bkkkgiqcw4 = rtP .
Integrator_LowerSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtDW . ao2ofrlfpp = 4 ; } else { if ( rtDW . ao2ofrlfpp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ao2ofrlfpp = 0
; } rtB . jlrhitwsl3 = rtX . bkkkgiqcw4 ; rtDW . lzsej45r0o = rtB .
jlrhitwsl3 >= rtP . Saturation_UpperSat ? 1 : rtB . jlrhitwsl3 > rtP .
Saturation_LowerSat ? 0 : - 1 ; } else { rtB . jlrhitwsl3 = rtX . bkkkgiqcw4
; } rtB . b32c2bmvzy = rtDW . lzsej45r0o == 1 ? rtP . Saturation_UpperSat :
rtDW . lzsej45r0o == - 1 ? rtP . Saturation_LowerSat : rtB . jlrhitwsl3 ; rtB
. kiugw5nowc = rtB . out1on52mc + rtB . b32c2bmvzy ; rtB . lu4c5m5miz [ 0 ] =
dsvtya4om0_idx_0 * rtB . kiugw5nowc ; rtB . lu4c5m5miz [ 1 ] =
dsvtya4om0_idx_1 * rtB . kiugw5nowc ; rtB . lu4c5m5miz [ 2 ] =
normRcurr_idx_2 * rtB . kiugw5nowc ; rtB . gqkpyu5i5o [ 0 ] = rtP .
Constant4_Value * oaadk5j3ra [ 0 ] ; rtB . gqkpyu5i5o [ 1 ] = rtP .
Constant4_Value * oaadk5j3ra [ 1 ] ; rtB . gqkpyu5i5o [ 2 ] = rtP .
Constant4_Value * oaadk5j3ra [ 2 ] ; rtB . p5pzpcjivt [ 0 ] = rtB .
lu4c5m5miz [ 0 ] + rtB . gqkpyu5i5o [ 0 ] ; rtB . p5pzpcjivt [ 1 ] = rtB .
lu4c5m5miz [ 1 ] + rtB . gqkpyu5i5o [ 1 ] ; rtB . p5pzpcjivt [ 2 ] = rtB .
lu4c5m5miz [ 2 ] + rtB . gqkpyu5i5o [ 2 ] ; scale = muDoubleScalarSqrt ( (
rtB . kbvgah11h4 [ 0 ] * rtB . kbvgah11h4 [ 0 ] + rtB . kbvgah11h4 [ 1 ] *
rtB . kbvgah11h4 [ 1 ] ) + rtB . kbvgah11h4 [ 2 ] * rtB . kbvgah11h4 [ 2 ] )
; Qabs = - rtP . mu / ( scale * scale ) ; rtB . korcar35qr [ 0 ] = 1.0 /
scale * rtB . kbvgah11h4 [ 0 ] * Qabs ; rtB . korcar35qr [ 1 ] = 1.0 / scale
* rtB . kbvgah11h4 [ 1 ] * Qabs ; rtB . korcar35qr [ 2 ] = 1.0 / scale * rtB
. kbvgah11h4 [ 2 ] * Qabs ; rtB . gqnaxv0aej [ 0 ] = ( rtB . p5pzpcjivt [ 0 ]
- rtB . pkf2l5jxjr [ 0 ] ) - rtB . korcar35qr [ 0 ] ; rtB . gqnaxv0aej [ 1 ]
= ( rtB . p5pzpcjivt [ 1 ] - rtB . pkf2l5jxjr [ 1 ] ) - rtB . korcar35qr [ 1
] ; rtB . gqnaxv0aej [ 2 ] = ( rtB . p5pzpcjivt [ 2 ] - rtB . pkf2l5jxjr [ 2
] ) - rtB . korcar35qr [ 2 ] ; rtB . ka2g0opaq2 [ 0 ] = rtP . Gain_Gain * rtB
. gqnaxv0aej [ 0 ] ; rtB . ka2g0opaq2 [ 1 ] = rtP . Gain_Gain * rtB .
gqnaxv0aej [ 1 ] ; rtB . ka2g0opaq2 [ 2 ] = rtP . Gain_Gain * rtB .
gqnaxv0aej [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . jgmu4cntnu =
rtP . LowPassFilterDiscreteorContinuous1_T ; } rtB . k3ye1bhxk2 = rtB .
jgmu4cntnu - rtB . av4akdfzex [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . llssf3xx0w = ( rtB .
k3ye1bhxk2 <= rtP . Constant_Value_lyipl5atta ) ; } rtB . e5tg3nwa3z = ( rtDW
. llssf3xx0w && rtB . np4lv05ekc ) ; } if ( ( rtDW . om55dr0bos >= ssGetT (
rtS ) ) && ( rtDW . adt5wroeub >= ssGetT ( rtS ) ) ) { rtB . pprc2sojtl [ 0 ]
= 0.0 ; rtB . pprc2sojtl [ 1 ] = 0.0 ; rtB . pprc2sojtl [ 2 ] = 0.0 ; } else
{ Qabs = rtDW . om55dr0bos ; lastU_p = & rtDW . dz5pc5rmg1 ; if ( rtDW .
om55dr0bos < rtDW . adt5wroeub ) { if ( rtDW . adt5wroeub < ssGetT ( rtS ) )
{ Qabs = rtDW . adt5wroeub ; lastU_p = & rtDW . fw0j3r1gk5 ; } } else if (
rtDW . om55dr0bos >= ssGetT ( rtS ) ) { Qabs = rtDW . adt5wroeub ; lastU_p =
& rtDW . fw0j3r1gk5 ; } Qabs = ssGetT ( rtS ) - Qabs ; rtB . pprc2sojtl [ 0 ]
= ( rtB . gqnaxv0aej [ 0 ] - ( * lastU_p ) [ 0 ] ) / Qabs ; rtB . pprc2sojtl
[ 1 ] = ( rtB . gqnaxv0aej [ 1 ] - ( * lastU_p ) [ 1 ] ) / Qabs ; rtB .
pprc2sojtl [ 2 ] = ( rtB . gqnaxv0aej [ 2 ] - ( * lastU_p ) [ 2 ] ) / Qabs ;
} rtB . ci3xiiiq0s [ 0 ] = rtP . Gain3_Gain * rtB . pprc2sojtl [ 0 ] ; rtB .
isxhmienjx [ 0 ] = rtP . LowPassFilterDiscreteorContinuous1_K * rtB .
ci3xiiiq0s [ 0 ] ; rtB . dddupokjkf [ 0 ] = rtB . isxhmienjx [ 0 ] ; rtB .
ci3xiiiq0s [ 1 ] = rtP . Gain3_Gain * rtB . pprc2sojtl [ 1 ] ; rtB .
isxhmienjx [ 1 ] = rtP . LowPassFilterDiscreteorContinuous1_K * rtB .
ci3xiiiq0s [ 1 ] ; rtB . dddupokjkf [ 1 ] = rtB . isxhmienjx [ 1 ] ; rtB .
ci3xiiiq0s [ 2 ] = rtP . Gain3_Gain * rtB . pprc2sojtl [ 2 ] ; rtB .
isxhmienjx [ 2 ] = rtP . LowPassFilterDiscreteorContinuous1_K * rtB .
ci3xiiiq0s [ 2 ] ; rtB . dddupokjkf [ 2 ] = rtB . isxhmienjx [ 2 ] ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { icNeedsLoading = ( rtDW . paojkwi1rt != 0
) ; zcEvent = rt_ZCFcn ( ANY_ZERO_CROSSING , & rtPrevZCX . ppykmjpmgc , ( rtB
. e5tg3nwa3z ) ) ; resetX = ( ( rtB . e5tg3nwa3z != 0.0 ) || ( zcEvent !=
NO_ZCEVENT ) ) ; if ( resetX ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } resetX = ( resetX || icNeedsLoading ) ; if ( resetX ) {
icNeedsLoading = ( rtX . kyfu3phbiu [ 0 ] != rtB . dddupokjkf [ 0 ] ) ; rtX .
kyfu3phbiu [ 0 ] = rtB . dddupokjkf [ 0 ] ; icNeedsLoading = ( icNeedsLoading
|| ( rtX . kyfu3phbiu [ 1 ] != rtB . dddupokjkf [ 1 ] ) ) ; rtX . kyfu3phbiu
[ 1 ] = rtB . dddupokjkf [ 1 ] ; icNeedsLoading = ( icNeedsLoading || ( rtX .
kyfu3phbiu [ 2 ] != rtB . dddupokjkf [ 2 ] ) ) ; rtX . kyfu3phbiu [ 2 ] = rtB
. dddupokjkf [ 2 ] ; if ( icNeedsLoading ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( rtX .
kyfu3phbiu [ 0 ] >= rtP . Integrator_UpperSat_h00nuw44zs ) { if ( rtX .
kyfu3phbiu [ 0 ] != rtP . Integrator_UpperSat_h00nuw44zs ) { rtX . kyfu3phbiu
[ 0 ] = rtP . Integrator_UpperSat_h00nuw44zs ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lkyqridsbk [ 0
] = 3 ; } else if ( rtX . kyfu3phbiu [ 0 ] <= rtP .
Integrator_LowerSat_mewh5v15vs ) { if ( rtX . kyfu3phbiu [ 0 ] != rtP .
Integrator_LowerSat_mewh5v15vs ) { rtX . kyfu3phbiu [ 0 ] = rtP .
Integrator_LowerSat_mewh5v15vs ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lkyqridsbk [ 0 ] = 4 ; } else { if ( rtDW . lkyqridsbk [ 0 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
lkyqridsbk [ 0 ] = 0 ; } if ( rtX . kyfu3phbiu [ 1 ] >= rtP .
Integrator_UpperSat_h00nuw44zs ) { if ( rtX . kyfu3phbiu [ 1 ] != rtP .
Integrator_UpperSat_h00nuw44zs ) { rtX . kyfu3phbiu [ 1 ] = rtP .
Integrator_UpperSat_h00nuw44zs ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lkyqridsbk [ 1 ] = 3 ; } else if ( rtX . kyfu3phbiu [ 1 ] <=
rtP . Integrator_LowerSat_mewh5v15vs ) { if ( rtX . kyfu3phbiu [ 1 ] != rtP .
Integrator_LowerSat_mewh5v15vs ) { rtX . kyfu3phbiu [ 1 ] = rtP .
Integrator_LowerSat_mewh5v15vs ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lkyqridsbk [ 1 ] = 4 ; } else { if ( rtDW . lkyqridsbk [ 1 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
lkyqridsbk [ 1 ] = 0 ; } if ( rtX . kyfu3phbiu [ 2 ] >= rtP .
Integrator_UpperSat_h00nuw44zs ) { if ( rtX . kyfu3phbiu [ 2 ] != rtP .
Integrator_UpperSat_h00nuw44zs ) { rtX . kyfu3phbiu [ 2 ] = rtP .
Integrator_UpperSat_h00nuw44zs ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lkyqridsbk [ 2 ] = 3 ; } else if ( rtX . kyfu3phbiu [ 2 ] <=
rtP . Integrator_LowerSat_mewh5v15vs ) { if ( rtX . kyfu3phbiu [ 2 ] != rtP .
Integrator_LowerSat_mewh5v15vs ) { rtX . kyfu3phbiu [ 2 ] = rtP .
Integrator_LowerSat_mewh5v15vs ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . lkyqridsbk [ 2 ] = 4 ; } else { if ( rtDW . lkyqridsbk [ 2 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
lkyqridsbk [ 2 ] = 0 ; } rtB . nhnd355lne [ 0 ] = rtX . kyfu3phbiu [ 0 ] ;
rtB . nhnd355lne [ 1 ] = rtX . kyfu3phbiu [ 1 ] ; rtB . nhnd355lne [ 2 ] =
rtX . kyfu3phbiu [ 2 ] ; rtDW . jken40hs34 [ 0 ] = rtB . nhnd355lne [ 0 ] >=
rtP . Saturation_UpperSat_egkpxdd2hd ? 1 : rtB . nhnd355lne [ 0 ] > rtP .
Saturation_LowerSat_kcdgs05bz3 ? 0 : - 1 ; rtDW . jken40hs34 [ 1 ] = rtB .
nhnd355lne [ 1 ] >= rtP . Saturation_UpperSat_egkpxdd2hd ? 1 : rtB .
nhnd355lne [ 1 ] > rtP . Saturation_LowerSat_kcdgs05bz3 ? 0 : - 1 ; rtDW .
jken40hs34 [ 2 ] = rtB . nhnd355lne [ 2 ] >= rtP .
Saturation_UpperSat_egkpxdd2hd ? 1 : rtB . nhnd355lne [ 2 ] > rtP .
Saturation_LowerSat_kcdgs05bz3 ? 0 : - 1 ; } else { rtB . nhnd355lne [ 0 ] =
rtX . kyfu3phbiu [ 0 ] ; rtB . nhnd355lne [ 1 ] = rtX . kyfu3phbiu [ 1 ] ;
rtB . nhnd355lne [ 2 ] = rtX . kyfu3phbiu [ 2 ] ; } rtB . pns4nzqi1p [ 0 ] =
rtDW . jken40hs34 [ 0 ] == 1 ? rtP . Saturation_UpperSat_egkpxdd2hd : rtDW .
jken40hs34 [ 0 ] == - 1 ? rtP . Saturation_LowerSat_kcdgs05bz3 : rtB .
nhnd355lne [ 0 ] ; rtB . pns4nzqi1p [ 1 ] = rtDW . jken40hs34 [ 1 ] == 1 ?
rtP . Saturation_UpperSat_egkpxdd2hd : rtDW . jken40hs34 [ 1 ] == - 1 ? rtP .
Saturation_LowerSat_kcdgs05bz3 : rtB . nhnd355lne [ 1 ] ; rtB . pns4nzqi1p [
2 ] = rtDW . jken40hs34 [ 2 ] == 1 ? rtP . Saturation_UpperSat_egkpxdd2hd :
rtDW . jken40hs34 [ 2 ] == - 1 ? rtP . Saturation_LowerSat_kcdgs05bz3 : rtB .
nhnd355lne [ 2 ] ; rtB . jhzk1r5ytp [ 0 ] = rtB . ka2g0opaq2 [ 0 ] + rtB .
pns4nzqi1p [ 0 ] ; rtB . jhzk1r5ytp [ 1 ] = rtB . ka2g0opaq2 [ 1 ] + rtB .
pns4nzqi1p [ 1 ] ; rtB . jhzk1r5ytp [ 2 ] = rtB . ka2g0opaq2 [ 2 ] + rtB .
pns4nzqi1p [ 2 ] ; scale = pmjkhdxuul ( rtB . jhzk1r5ytp ) ; n = 0 ; if ( rtB
. jhzk1r5ytp [ 0 ] / scale == - 1.0 ) { n = 1 ; } if ( rtB . jhzk1r5ytp [ 1 ]
/ scale == 0.0 ) { n ++ ; } if ( rtB . jhzk1r5ytp [ 2 ] / scale == 0.0 ) { n
++ ; } if ( n == 3 ) { scale = 0.0 ; normRcurr_idx_1 = 0.0 ; normRcurr_idx_2
= 1.0 ; niolpy2aa0_idx_3 = 0.0 ; } else { scale += ( rtB . jhzk1r5ytp [ 1 ] *
0.0 + rtB . jhzk1r5ytp [ 0 ] ) + rtB . jhzk1r5ytp [ 2 ] * 0.0 ;
normRcurr_idx_1 = 0.0 * rtB . jhzk1r5ytp [ 2 ] - 0.0 * rtB . jhzk1r5ytp [ 1 ]
; normRcurr_idx_2 = 0.0 * rtB . jhzk1r5ytp [ 0 ] - rtB . jhzk1r5ytp [ 2 ] ;
niolpy2aa0_idx_3 = rtB . jhzk1r5ytp [ 1 ] - 0.0 * rtB . jhzk1r5ytp [ 0 ] ; }
Qabs = muDoubleScalarSqrt ( ( ( scale * scale + normRcurr_idx_1 *
normRcurr_idx_1 ) + normRcurr_idx_2 * normRcurr_idx_2 ) + niolpy2aa0_idx_3 *
niolpy2aa0_idx_3 ) ; rtB . k1llhfc00r [ 0 ] = scale / Qabs ; rtB . k1llhfc00r
[ 1 ] = normRcurr_idx_1 / Qabs ; rtB . k1llhfc00r [ 2 ] = normRcurr_idx_2 /
Qabs ; rtB . k1llhfc00r [ 3 ] = niolpy2aa0_idx_3 / Qabs ; aq [ 0 ] = rtB .
mc4dbinm3s [ 0 ] ; aq [ 4 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 8 ] = rtB .
mc4dbinm3s [ 2 ] ; aq [ 12 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 1 ] = - rtB .
mc4dbinm3s [ 1 ] ; aq [ 5 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 9 ] = rtB .
mc4dbinm3s [ 3 ] ; aq [ 13 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 2 ] = - rtB .
mc4dbinm3s [ 2 ] ; aq [ 6 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB .
mc4dbinm3s [ 0 ] ; aq [ 14 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 3 ] = - rtB .
mc4dbinm3s [ 3 ] ; aq [ 7 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 11 ] = - rtB .
mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB . mc4dbinm3s [ 0 ] ; tmp = rtB .
k1llhfc00r [ 0 ] ; niolpy2aa0_idx_3 = rtB . k1llhfc00r [ 1 ] ;
dsvtya4om0_idx_0 = rtB . k1llhfc00r [ 2 ] ; dsvtya4om0_idx_1 = rtB .
k1llhfc00r [ 3 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( tmp )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } rtB . leuq35xwty [ 0 ] = hcal [ 0 ] ;
rtB . leuq35xwty [ 1 ] = hcal [ 1 ] ; rtB . leuq35xwty [ 2 ] = hcal [ 2 ] ;
rtB . leuq35xwty [ 3 ] = hcal [ 3 ] ; rtB . npdusycoqq [ 0 ] = rtP . Kp1 *
rtB . leuq35xwty [ 0 ] ; rtB . npdusycoqq [ 1 ] = rtP . Kp1 * rtB .
leuq35xwty [ 1 ] ; rtB . npdusycoqq [ 2 ] = rtP . Kp1 * rtB . leuq35xwty [ 2
] ; rtB . npdusycoqq [ 3 ] = rtP . Kp1 * rtB . leuq35xwty [ 3 ] ; rtB .
g0enzwg25a = muDoubleScalarSign ( rtB . npdusycoqq [ 0 ] ) ; rtB . kf1r1nnbbf
[ 0 ] = rtB . g0enzwg25a * rtB . npdusycoqq [ 1 ] ; rtB . kf1r1nnbbf [ 1 ] =
rtB . g0enzwg25a * rtB . npdusycoqq [ 2 ] ; rtB . kf1r1nnbbf [ 2 ] = rtB .
g0enzwg25a * rtB . npdusycoqq [ 3 ] ; rtB . lpdd0pji14 [ 0 ] = rtX .
iq0o54ir35 [ 0 ] ; rtB . lpdd0pji14 [ 1 ] = rtX . iq0o54ir35 [ 1 ] ; rtB .
lpdd0pji14 [ 2 ] = rtX . iq0o54ir35 [ 2 ] ; rtB . bfjh5ttx5d [ 0 ] = rtP .
Kp2 * rtB . lpdd0pji14 [ 0 ] ; rtB . bfjh5ttx5d [ 1 ] = rtP . Kp2 * rtB .
lpdd0pji14 [ 1 ] ; rtB . bfjh5ttx5d [ 2 ] = rtP . Kp2 * rtB . lpdd0pji14 [ 2
] ; rtB . hu3jcyazau [ 0 ] = rtB . kf1r1nnbbf [ 0 ] - rtB . bfjh5ttx5d [ 0 ]
; rtB . hu3jcyazau [ 1 ] = rtB . kf1r1nnbbf [ 1 ] - rtB . bfjh5ttx5d [ 1 ] ;
rtB . hu3jcyazau [ 2 ] = rtB . kf1r1nnbbf [ 2 ] - rtB . bfjh5ttx5d [ 2 ] ;
Qabs = muDoubleScalarSqrt ( ( rtB . kbvgah11h4 [ 0 ] * rtB . kbvgah11h4 [ 0 ]
+ rtB . kbvgah11h4 [ 1 ] * rtB . kbvgah11h4 [ 1 ] ) + rtB . kbvgah11h4 [ 2 ]
* rtB . kbvgah11h4 [ 2 ] ) ; rtB . clq34byw1m [ 0 ] = Qabs ; rtB . clq34byw1m
[ 1 ] = muDoubleScalarAcos ( muDoubleScalarSqrt ( rtB . kbvgah11h4 [ 0 ] *
rtB . kbvgah11h4 [ 0 ] + rtB . kbvgah11h4 [ 1 ] * rtB . kbvgah11h4 [ 1 ] ) /
Qabs ) ; rtB . clq34byw1m [ 2 ] = muDoubleScalarAcos ( rtB . kbvgah11h4 [ 0 ]
/ muDoubleScalarSqrt ( rtB . kbvgah11h4 [ 0 ] * rtB . kbvgah11h4 [ 0 ] + rtB
. kbvgah11h4 [ 1 ] * rtB . kbvgah11h4 [ 1 ] ) ) ; { if ( rtDW . cdq51tck1j .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cdq51tck1j .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . kbvgah11h4 [ 0 ] +
0 ) ; } } g5n3bwyn0j [ 0 ] = muDoubleScalarAtan2 ( ( rtB . mc4dbinm3s [ 0 ] *
rtB . mc4dbinm3s [ 1 ] + rtB . mc4dbinm3s [ 2 ] * rtB . mc4dbinm3s [ 3 ] ) *
2.0 , ( ( rtB . mc4dbinm3s [ 0 ] * rtB . mc4dbinm3s [ 0 ] + rtB . mc4dbinm3s
[ 3 ] * rtB . mc4dbinm3s [ 3 ] ) - rtB . mc4dbinm3s [ 1 ] * rtB . mc4dbinm3s
[ 1 ] ) - rtB . mc4dbinm3s [ 2 ] * rtB . mc4dbinm3s [ 2 ] ) ; g5n3bwyn0j [ 1
] = muDoubleScalarAsin ( ( rtB . mc4dbinm3s [ 0 ] * rtB . mc4dbinm3s [ 2 ] -
rtB . mc4dbinm3s [ 1 ] * rtB . mc4dbinm3s [ 3 ] ) * 2.0 ) ; g5n3bwyn0j [ 2 ]
= muDoubleScalarAtan2 ( ( rtB . mc4dbinm3s [ 1 ] * rtB . mc4dbinm3s [ 2 ] +
rtB . mc4dbinm3s [ 0 ] * rtB . mc4dbinm3s [ 3 ] ) * 2.0 , ( ( rtB .
mc4dbinm3s [ 0 ] * rtB . mc4dbinm3s [ 0 ] + rtB . mc4dbinm3s [ 1 ] * rtB .
mc4dbinm3s [ 1 ] ) - rtB . mc4dbinm3s [ 2 ] * rtB . mc4dbinm3s [ 2 ] ) - rtB
. mc4dbinm3s [ 3 ] * rtB . mc4dbinm3s [ 3 ] ) ; { if ( rtDW . px2txhk5gj .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . px2txhk5gj .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & g5n3bwyn0j [ 0 ] + 0 ) ;
} } { if ( rtDW . ix2gzz3wzl . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . ix2gzz3wzl . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & rtB . lpdd0pji14 [ 0 ] + 0 ) ; } } { if ( rtDW . cpjt4iqhpn .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cpjt4iqhpn .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . bddenpbj44 [ 0 ] +
0 ) ; } } rtB . ehvbzgdsbd = rtX . ormll3qjai ; Qabs = muDoubleScalarAbs (
rtB . lpgqziebnn ) ; rtB . ftabaiwbi3 [ 0 ] = rtP . Constant4_Value * Qabs *
absxk ; rtB . ftabaiwbi3 [ 1 ] = rtP . Constant4_Value * Qabs *
j0sr42sxx5_idx_1 ; rtB . ftabaiwbi3 [ 2 ] = rtP . Constant4_Value * Qabs * t
; if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtB . e0hgmf3lna = rtB . micobu3txc
[ 0 ] ; rtDW . ev445lj5pd = 0 ; if ( ( rtB . micobu3txc [ 0 ] != rtB .
micobu3txc [ 0 ] ) || ( rtB . jjxpsmwl0v > rtB . micobu3txc [ 0 ] ) ) { rtB .
e0hgmf3lna = rtB . jjxpsmwl0v ; rtDW . ev445lj5pd = 1 ; } rtB . glh0kmcn3e =
rtB . av4akdfzex [ 0 ] ; rtDW . fwb1s0siq2 = 0 ; if ( ( rtB . av4akdfzex [ 0
] != rtB . av4akdfzex [ 0 ] ) || ( rtB . jgmu4cntnu > rtB . av4akdfzex [ 0 ]
) ) { rtB . glh0kmcn3e = rtB . jgmu4cntnu ; rtDW . fwb1s0siq2 = 1 ; } } else
{ rtB . e0hgmf3lna = rtB . micobu3txc [ 0 ] ; if ( rtDW . ev445lj5pd == 1 ) {
rtB . e0hgmf3lna = rtB . jjxpsmwl0v ; } rtB . glh0kmcn3e = rtB . av4akdfzex [
0 ] ; if ( rtDW . fwb1s0siq2 == 1 ) { rtB . glh0kmcn3e = rtB . jgmu4cntnu ; }
} rtB . ogv2dj34t1 = rtB . ft5rioowtz - rtB . b32c2bmvzy ; rtB . em3qj5mb0j =
1.0 / ( ( real_T ) ( rtB . e0hgmf3lna == 0.0 ) * 2.2204460492503131e-16 + rtB
. e0hgmf3lna ) * rtB . ogv2dj34t1 ; rtB . eksqltc5ph = rtB . em3qj5mb0j ;
bzzjgpr0av = ( real_T ) ( rtB . glh0kmcn3e == 0.0 ) * 2.2204460492503131e-16
+ rtB . glh0kmcn3e ; rtB . jck3hj2yfb [ 0 ] = rtB . isxhmienjx [ 0 ] - rtB .
pns4nzqi1p [ 0 ] ; rtB . jck3hj2yfb [ 1 ] = rtB . isxhmienjx [ 1 ] - rtB .
pns4nzqi1p [ 1 ] ; rtB . jck3hj2yfb [ 2 ] = rtB . isxhmienjx [ 2 ] - rtB .
pns4nzqi1p [ 2 ] ; rtB . maxfhqa4qg [ 0 ] = 1.0 / bzzjgpr0av * rtB .
jck3hj2yfb [ 0 ] ; rtB . maxfhqa4qg [ 1 ] = 1.0 / bzzjgpr0av * rtB .
jck3hj2yfb [ 1 ] ; rtB . maxfhqa4qg [ 2 ] = 1.0 / bzzjgpr0av * rtB .
jck3hj2yfb [ 2 ] ; rtB . hbw54wmb5r [ 0 ] = rtB . maxfhqa4qg [ 0 ] ; rtB .
hbw54wmb5r [ 1 ] = rtB . maxfhqa4qg [ 1 ] ; rtB . hbw54wmb5r [ 2 ] = rtB .
maxfhqa4qg [ 2 ] ; scale = 3.3121686421112381E-170 ; absxk =
muDoubleScalarAbs ( rtB . jhzk1r5ytp [ 0 ] ) ; if ( absxk >
3.3121686421112381E-170 ) { Qabs = 1.0 ; scale = absxk ; } else { t = absxk /
3.3121686421112381E-170 ; Qabs = t * t ; } absxk = muDoubleScalarAbs ( rtB .
jhzk1r5ytp [ 1 ] ) ; if ( absxk > scale ) { t = scale / absxk ; Qabs = Qabs *
t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; Qabs += t * t ; }
absxk = muDoubleScalarAbs ( rtB . jhzk1r5ytp [ 2 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; Qabs = Qabs * t * t + 1.0 ; scale = absxk ; } else { t =
absxk / scale ; Qabs += t * t ; } Qabs = scale * muDoubleScalarSqrt ( Qabs )
; rtB . eyeiubd2vv = ( Qabs < 992.0 ) ; if ( rtB . mc4dbinm3s [ 0 ] > 4.0 ) {
kmb0eu1a0s [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; kmb0eu1a0s [ 1 ] = rtB .
mc4dbinm3s [ 1 ] ; kmb0eu1a0s [ 2 ] = rtB . mc4dbinm3s [ 2 ] ; kmb0eu1a0s [ 3
] = rtB . mc4dbinm3s [ 3 ] ; } else { kmb0eu1a0s [ 0 ] = muDoubleScalarCos (
rtB . mc4dbinm3s [ 0 ] / 2.0 ) * muDoubleScalarCos ( rtB . mc4dbinm3s [ 1 ] /
2.0 ) * muDoubleScalarCos ( rtB . mc4dbinm3s [ 2 ] / 2.0 ) +
muDoubleScalarSin ( rtB . mc4dbinm3s [ 0 ] / 2.0 ) * muDoubleScalarSin ( rtB
. mc4dbinm3s [ 1 ] / 2.0 ) * muDoubleScalarSin ( rtB . mc4dbinm3s [ 2 ] / 2.0
) ; kmb0eu1a0s [ 1 ] = muDoubleScalarSin ( rtB . mc4dbinm3s [ 0 ] / 2.0 ) *
muDoubleScalarCos ( rtB . mc4dbinm3s [ 1 ] / 2.0 ) * muDoubleScalarCos ( rtB
. mc4dbinm3s [ 2 ] / 2.0 ) - muDoubleScalarCos ( rtB . mc4dbinm3s [ 0 ] / 2.0
) * muDoubleScalarSin ( rtB . mc4dbinm3s [ 1 ] / 2.0 ) * muDoubleScalarSin (
rtB . mc4dbinm3s [ 2 ] / 2.0 ) ; kmb0eu1a0s [ 2 ] = muDoubleScalarCos ( rtB .
mc4dbinm3s [ 0 ] / 2.0 ) * muDoubleScalarSin ( rtB . mc4dbinm3s [ 1 ] / 2.0 )
* muDoubleScalarCos ( rtB . mc4dbinm3s [ 2 ] / 2.0 ) + muDoubleScalarSin (
rtB . mc4dbinm3s [ 0 ] / 2.0 ) * muDoubleScalarCos ( rtB . mc4dbinm3s [ 1 ] /
2.0 ) * muDoubleScalarSin ( rtB . mc4dbinm3s [ 2 ] / 2.0 ) ; kmb0eu1a0s [ 3 ]
= muDoubleScalarCos ( rtB . mc4dbinm3s [ 0 ] / 2.0 ) * muDoubleScalarCos (
rtB . mc4dbinm3s [ 1 ] / 2.0 ) * muDoubleScalarSin ( rtB . mc4dbinm3s [ 2 ] /
2.0 ) - muDoubleScalarSin ( rtB . mc4dbinm3s [ 0 ] / 2.0 ) *
muDoubleScalarSin ( rtB . mc4dbinm3s [ 1 ] / 2.0 ) * muDoubleScalarCos ( rtB
. mc4dbinm3s [ 2 ] / 2.0 ) ; } rtB . afjzospe3i = rtB . clq34byw1m [ 0 ] -
rtP . Rmean ; if ( rtB . afjzospe3i < 11000.0 ) { scale = muDoubleScalarPower
( ( 288.15 - 0.0065 * rtB . afjzospe3i ) / 288.15 , 5.2559 ) * 101.325 ; }
else if ( rtB . afjzospe3i < 25000.0 ) { scale = muDoubleScalarExp ( 1.73 -
0.0001573 * rtB . afjzospe3i ) * 22.632 ; } else { scale =
muDoubleScalarPower ( ( 0.00299 * rtB . afjzospe3i + 141.95 ) / 216.6 , -
11.388 ) * 2.488 ; } n0rrwyfxef ( rtB . cdh0cejsfe . gyn0we22d3 , & rtB .
csfv2saeka ) ; Qabs = rtB . hu3jcyazau [ 1 ] ; absxk = rtB . hu3jcyazau [ 2 ]
; if ( rtB . ehvbzgdsbd != 0.0 ) { rtB . esotkl5ybw [ 0 ] = rtB . hu3jcyazau
[ 0 ] ; rtB . esotkl5ybw [ 1 ] = rtB . hu3jcyazau [ 1 ] ; rtB . esotkl5ybw [
2 ] = rtB . hu3jcyazau [ 2 ] ; } else { t = 8.0 ; lod5r4qftz ( & t ) ; if (
muDoubleScalarSqrt ( rtB . hu3jcyazau [ 1 ] * rtB . hu3jcyazau [ 1 ] + rtB .
hu3jcyazau [ 2 ] * rtB . hu3jcyazau [ 2 ] ) > t ) { Qabs = rtB . hu3jcyazau [
1 ] / muDoubleScalarSqrt ( rtB . hu3jcyazau [ 1 ] * rtB . hu3jcyazau [ 1 ] +
rtB . hu3jcyazau [ 2 ] * rtB . hu3jcyazau [ 2 ] ) * t ; absxk = rtB .
hu3jcyazau [ 2 ] / muDoubleScalarSqrt ( Qabs * Qabs + rtB . hu3jcyazau [ 2 ]
* rtB . hu3jcyazau [ 2 ] ) * t ; } rtB . esotkl5ybw [ 0 ] =
muDoubleScalarSqrt ( 1.0 - ( Qabs * Qabs + absxk * absxk ) ) ; rtB .
esotkl5ybw [ 1 ] = Qabs ; rtB . esotkl5ybw [ 2 ] = absxk ; } rtB . i1thalf1qu
= ssGetT ( rtS ) ; if ( rtB . i1thalf1qu >= rtP . Bt1 ) { rtB . fl3gaw21bb =
0.0 ; } else { rtB . fl3gaw21bb = ( ( rtP . Isp1v - rtP . Isp1s ) / 101.325 *
( 101.325 - scale ) + rtP . Isp1s ) * ( rtP . Msfl1 * 9.81 ) ; } rtB .
psxkx0n5lg = ssGetT ( rtS ) ; rtB . adlczhpcf0 = rtB . psxkx0n5lg - rtP . Bt1
; if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . gatfaphjb0 = ( rtB .
adlczhpcf0 > rtP . Switch1_Threshold ) ; } if ( rtDW . gatfaphjb0 ) { rtB .
kh2ct1ob1u = rtB . adlczhpcf0 ; } else { rtB . kh2ct1ob1u = rtP .
Constant4_Value_eqvxhcrvd4 ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW .
nqvdwzkqqv = ( rtB . kh2ct1ob1u > rtP . Bt2 ) ; } if ( rtDW . nqvdwzkqqv ) {
rtB . dwcu5hang5 = rtP . Bt2 ; } else { rtB . dwcu5hang5 = rtB . kh2ct1ob1u ;
} if ( ( rtB . dwcu5hang5 >= rtP . Bt2 ) || ( rtB . dwcu5hang5 == 0.0 ) ) {
rtB . abyj52ypkw = 0.0 ; } else { rtB . abyj52ypkw = rtP . Msfl2 * 9.81 * rtP
. Isp2 ; } if ( rtB . ehvbzgdsbd != 0.0 ) { rtB . j0fqbrtyfa [ 0 ] = 0.0 ;
rtB . j0fqbrtyfa [ 1 ] = 0.0 ; rtB . j0fqbrtyfa [ 2 ] = 0.0 ; Qabs = rtP .
lx3s / 2.0 * 900.0 ; rtB . dq02rtfmik [ 0 ] = Qabs * 0.0 ; rtB . dq02rtfmik [
1 ] = Qabs * rtB . esotkl5ybw [ 1 ] ; rtB . dq02rtfmik [ 2 ] = Qabs * rtB .
esotkl5ybw [ 2 ] ; } else { guard1 = false ; if ( rtB . fl3gaw21bb != 0.0 ) {
Qabs = rtB . fl3gaw21bb ; scale = rtP . lx1s / 2.0 ; guard1 = true ; } else
if ( rtB . abyj52ypkw != 0.0 ) { Qabs = rtB . abyj52ypkw ; scale = rtP . lx2s
/ 2.0 ; guard1 = true ; } else { t = rtP . lx3s / 2.0 ; rtB . j0fqbrtyfa [ 0
] = 0.0 ; rtB . j0fqbrtyfa [ 1 ] = 0.0 ; rtB . j0fqbrtyfa [ 2 ] = 0.0 ; rtB .
dq02rtfmik [ 0 ] = t * rtB . esotkl5ybw [ 0 ] ; rtB . dq02rtfmik [ 1 ] = t *
rtB . esotkl5ybw [ 1 ] ; rtB . dq02rtfmik [ 2 ] = t * rtB . esotkl5ybw [ 2 ]
; } if ( guard1 ) { rtB . j0fqbrtyfa [ 0 ] = Qabs * rtB . esotkl5ybw [ 0 ] ;
rtB . j0fqbrtyfa [ 1 ] = Qabs * - rtB . esotkl5ybw [ 2 ] ; rtB . j0fqbrtyfa [
2 ] = Qabs * rtB . esotkl5ybw [ 1 ] ; rtB . dq02rtfmik [ 0 ] = Qabs * 0.0 ;
rtB . dq02rtfmik [ 1 ] = scale * rtB . esotkl5ybw [ 1 ] * Qabs ; rtB .
dq02rtfmik [ 2 ] = scale * rtB . esotkl5ybw [ 2 ] * Qabs ; } } Qabs = rtB .
bddenpbj44 [ 0 ] ; normRcurr_idx_1 = rtB . bddenpbj44 [ 1 ] ; normRcurr_idx_2
= rtB . bddenpbj44 [ 2 ] ; aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 4 ] = -
rtB . mc4dbinm3s [ 1 ] ; aq [ 8 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 12 ] = -
rtB . mc4dbinm3s [ 3 ] ; aq [ 1 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] = rtB .
mc4dbinm3s [ 0 ] ; aq [ 9 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] = rtB .
mc4dbinm3s [ 2 ] ; aq [ 2 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = rtB .
mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = - rtB .
mc4dbinm3s [ 1 ] ; aq [ 3 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = - rtB .
mc4dbinm3s [ 2 ] ; aq [ 11 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB .
mc4dbinm3s [ 0 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
normRcurr_idx_2 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
normRcurr_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( Qabs )
) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 ) ) , _mm_set1_pd (
0.0 ) ) ) ) ) ) ; } aq [ 0 ] = hcal [ 0 ] ; aq [ 4 ] = - hcal [ 1 ] ; aq [ 8
] = - hcal [ 2 ] ; aq [ 12 ] = - hcal [ 3 ] ; aq [ 1 ] = hcal [ 1 ] ; aq [ 5
] = hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3 ] ; aq [ 13 ] = hcal [ 2 ] ; aq [ 2 ]
= hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ; aq [ 10 ] = hcal [ 0 ] ; aq [ 14 ] = -
hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ; aq [ 7 ] = - hcal [ 2 ] ; aq [ 11 ] =
hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ; absxk = rtB . mc4dbinm3s [ 0 ] ;
j0sr42sxx5_idx_1 = - rtB . mc4dbinm3s [ 1 ] ; t = - rtB . mc4dbinm3s [ 2 ] ;
niolpy2aa0_idx_3 = - rtB . mc4dbinm3s [ 3 ] ; for ( n = 0 ; n <= 2 ; n += 2 )
{ tmp_p = _mm_loadu_pd ( & aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ]
) ; tmp_i = _mm_loadu_pd ( & aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n
+ 12 ] ) ; _mm_storeu_pd ( & hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m ,
_mm_set1_pd ( niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i ,
_mm_set1_pd ( t ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
j0sr42sxx5_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( absxk
) ) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } rtB . ov1zz1vxro [ 0 ] = hcal [ 1 ] ;
rtB . ov1zz1vxro [ 1 ] = hcal [ 2 ] ; rtB . ov1zz1vxro [ 2 ] = hcal [ 3 ] ;
rtB . djkkpuffgh [ 0 ] = rtX . kkd13wjx0s [ 0 ] ; rtB . djkkpuffgh [ 1 ] =
rtX . kkd13wjx0s [ 1 ] ; rtB . djkkpuffgh [ 2 ] = rtX . kkd13wjx0s [ 2 ] ;
rtB . djkkpuffgh [ 3 ] = rtX . kkd13wjx0s [ 3 ] ; gdi5zdpghe ( rtB .
djkkpuffgh , & rtB . o5ix2pm1ra ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . bbvvmnonjv = ( rtB . i1thalf1qu > rtP . Bt1 ) ; } if ( rtDW .
bbvvmnonjv ) { rtB . b3yc2a2cys = rtP . Bt1 ; } else { rtB . b3yc2a2cys = rtB
. i1thalf1qu ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . mxc4xdmhnf =
( rtB . i1thalf1qu > rtP . Bt1 ) ; } if ( rtDW . mxc4xdmhnf ) { rtB .
ctw4uaxlhl = rtP . Constant3_Value ; } else { rtB . knmsqw3rgl = rtP . Mf1 /
rtP . Bt1 * rtB . b3yc2a2cys ; rtB . jtu1si03zo = rtB . iu2eelcpow - rtB .
knmsqw3rgl ; rtB . ctw4uaxlhl = rtB . jtu1si03zo ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . ai5tkm230r = ( rtB . psxkx0n5lg >
rtP . Bt1 + rtP . Bt2 ) ; } if ( rtDW . ai5tkm230r ) { rtB . ozhmixpt0c = rtP
. Constant5_Value ; } else { rtB . hmomc5la5h = rtP . Mf2 / rtP . Bt2 * rtB .
dwcu5hang5 ; rtB . jwlhh05nrl = rtB . djl30gp1b4 - rtB . hmomc5la5h ; rtB .
ozhmixpt0c = rtB . jwlhh05nrl ; } rtB . lihuprkth2 [ 0 ] = rtB . ctw4uaxlhl ;
rtB . lihuprkth2 [ 1 ] = rtB . ozhmixpt0c ; rtB . lihuprkth2 [ 2 ] = rtP .
Ms3 ; if ( rtB . ehvbzgdsbd != 0.0 ) { scale = rtB . lihuprkth2 [ 2 ] ; absxk
= rtP . lx3s ; t = rtP . ly3 ; } else if ( rtB . lihuprkth2 [ 0 ] != 0.0 ) {
scale = rtB . lihuprkth2 [ 0 ] ; absxk = rtP . lx1s ; t = rtP . ly1 ; } else
if ( rtB . lihuprkth2 [ 1 ] != 0.0 ) { scale = rtB . lihuprkth2 [ 1 ] ; absxk
= rtP . lx2s ; t = rtP . ly2 ; } else { scale = rtB . lihuprkth2 [ 2 ] ;
absxk = rtP . lx3s ; t = rtP . ly3 ; } Qabs = t / 2.0 ; t /= 2.0 ; absxk = (
t * t * 3.0 + absxk * absxk ) * ( 0.083333333333333329 * scale ) ;
j0sr42sxx5_idx_1 = 0.5 * scale * ( Qabs * Qabs ) ; Qabs = rtB . kbvgah11h4 [
0 ] ; normRcurr_idx_1 = rtB . kbvgah11h4 [ 1 ] ; normRcurr_idx_2 = rtB .
kbvgah11h4 [ 2 ] ; aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 4 ] = rtB .
mc4dbinm3s [ 1 ] ; aq [ 8 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 12 ] = rtB .
mc4dbinm3s [ 3 ] ; aq [ 1 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] = rtB .
mc4dbinm3s [ 0 ] ; aq [ 9 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] = - rtB .
mc4dbinm3s [ 2 ] ; aq [ 2 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = - rtB .
mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = rtB .
mc4dbinm3s [ 1 ] ; aq [ 3 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = rtB .
mc4dbinm3s [ 2 ] ; aq [ 11 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB .
mc4dbinm3s [ 0 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
normRcurr_idx_2 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
normRcurr_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( Qabs )
) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 ) ) , _mm_set1_pd (
0.0 ) ) ) ) ) ) ; } aq [ 0 ] = hcal [ 0 ] ; aq [ 4 ] = - hcal [ 1 ] ; aq [ 8
] = - hcal [ 2 ] ; aq [ 12 ] = - hcal [ 3 ] ; aq [ 1 ] = hcal [ 1 ] ; aq [ 5
] = hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3 ] ; aq [ 13 ] = hcal [ 2 ] ; aq [ 2 ]
= hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ; aq [ 10 ] = hcal [ 0 ] ; aq [ 14 ] = -
hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ; aq [ 7 ] = - hcal [ 2 ] ; aq [ 11 ] =
hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ; tmp = rtB . mc4dbinm3s [ 0 ] ;
niolpy2aa0_idx_3 = rtB . mc4dbinm3s [ 1 ] ; dsvtya4om0_idx_0 = rtB .
mc4dbinm3s [ 2 ] ; dsvtya4om0_idx_1 = rtB . mc4dbinm3s [ 3 ] ; for ( n = 0 ;
n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( & aq [ n ] ) ; tmp_e =
_mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd ( & aq [ n + 8 ] ) ;
tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd ( & hcal [ n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( dsvtya4om0_idx_1 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( dsvtya4om0_idx_0 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( niolpy2aa0_idx_3 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( tmp ) ) , _mm_set1_pd ( 0.0 )
) ) ) ) ) ; } Qabs = hcal [ 1 ] ; normRcurr_idx_1 = hcal [ 2 ] ;
normRcurr_idx_2 = hcal [ 3 ] ; aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 4 ] =
rtB . mc4dbinm3s [ 1 ] ; aq [ 8 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 12 ] = rtB
. mc4dbinm3s [ 3 ] ; aq [ 1 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] = rtB .
mc4dbinm3s [ 0 ] ; aq [ 9 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] = - rtB .
mc4dbinm3s [ 2 ] ; aq [ 2 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = - rtB .
mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = rtB .
mc4dbinm3s [ 1 ] ; aq [ 3 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = rtB .
mc4dbinm3s [ 2 ] ; aq [ 11 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB .
mc4dbinm3s [ 0 ] ; niolpy2aa0_idx_3 = rtB . korcar35qr [ 0 ] ;
dsvtya4om0_idx_0 = rtB . korcar35qr [ 1 ] ; dsvtya4om0_idx_1 = rtB .
korcar35qr [ 2 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } aq [ 0 ] = hcal [ 0 ] ; aq [ 4 ] = -
hcal [ 1 ] ; aq [ 8 ] = - hcal [ 2 ] ; aq [ 12 ] = - hcal [ 3 ] ; aq [ 1 ] =
hcal [ 1 ] ; aq [ 5 ] = hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3 ] ; aq [ 13 ] =
hcal [ 2 ] ; aq [ 2 ] = hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ; aq [ 10 ] = hcal
[ 0 ] ; aq [ 14 ] = - hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ; aq [ 7 ] = - hcal
[ 2 ] ; aq [ 11 ] = hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ; tmp = rtB .
mc4dbinm3s [ 0 ] ; niolpy2aa0_idx_3 = rtB . mc4dbinm3s [ 1 ] ;
dsvtya4om0_idx_0 = rtB . mc4dbinm3s [ 2 ] ; dsvtya4om0_idx_1 = rtB .
mc4dbinm3s [ 3 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& gcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( tmp )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq
[ 4 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 8 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 12
] = rtB . mc4dbinm3s [ 3 ] ; aq [ 1 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] =
rtB . mc4dbinm3s [ 0 ] ; aq [ 9 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] = -
rtB . mc4dbinm3s [ 2 ] ; aq [ 2 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = -
rtB . mc4dbinm3s [ 3 ] ; aq [ 10 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = rtB
. mc4dbinm3s [ 1 ] ; aq [ 3 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = rtB .
mc4dbinm3s [ 2 ] ; aq [ 11 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB .
mc4dbinm3s [ 0 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( rtP . wie ) )
, _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( 0.0 ) ) , _mm_add_pd (
_mm_mul_pd ( tmp_e , _mm_set1_pd ( 0.0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p
, _mm_set1_pd ( 0.0 ) ) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } aq [ 0 ] = hcal [
0 ] ; aq [ 4 ] = - hcal [ 1 ] ; aq [ 8 ] = - hcal [ 2 ] ; aq [ 12 ] = - hcal
[ 3 ] ; aq [ 1 ] = hcal [ 1 ] ; aq [ 5 ] = hcal [ 0 ] ; aq [ 9 ] = - hcal [ 3
] ; aq [ 13 ] = hcal [ 2 ] ; aq [ 2 ] = hcal [ 2 ] ; aq [ 6 ] = hcal [ 3 ] ;
aq [ 10 ] = hcal [ 0 ] ; aq [ 14 ] = - hcal [ 1 ] ; aq [ 3 ] = hcal [ 3 ] ;
aq [ 7 ] = - hcal [ 2 ] ; aq [ 11 ] = hcal [ 1 ] ; aq [ 15 ] = hcal [ 0 ] ;
tmp = rtB . mc4dbinm3s [ 0 ] ; niolpy2aa0_idx_3 = rtB . mc4dbinm3s [ 1 ] ;
dsvtya4om0_idx_0 = rtB . mc4dbinm3s [ 2 ] ; dsvtya4om0_idx_1 = rtB .
mc4dbinm3s [ 3 ] ; for ( n = 0 ; n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( &
aq [ n ] ) ; tmp_e = _mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd (
& aq [ n + 8 ] ) ; tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd (
& hcal [ n ] , _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
dsvtya4om0_idx_1 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
dsvtya4om0_idx_0 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd (
niolpy2aa0_idx_3 ) ) , _mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( tmp )
) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ; } t = rtB . lpdd0pji14 [ 0 ] - hcal [ 1 ]
; niolpy2aa0_idx_3 = rtB . lpdd0pji14 [ 1 ] - hcal [ 2 ] ; dsvtya4om0_idx_0 =
rtB . lpdd0pji14 [ 2 ] - hcal [ 3 ] ; dsvtya4om0_idx_1 = hcal [ 2 ] *
normRcurr_idx_2 - normRcurr_idx_1 * hcal [ 3 ] ; normRcurr_idx_2 = Qabs *
hcal [ 3 ] - hcal [ 1 ] * normRcurr_idx_2 ; Qabs = hcal [ 1 ] *
normRcurr_idx_1 - Qabs * hcal [ 2 ] ; rtB . ccejaqny4t [ 0 ] = ( ( ( 1.0 /
scale * rtB . j0fqbrtyfa [ 0 ] + gcal [ 1 ] ) - ( niolpy2aa0_idx_3 * rtB .
bddenpbj44 [ 2 ] - rtB . bddenpbj44 [ 1 ] * dsvtya4om0_idx_0 ) ) - ( hcal [ 2
] * rtB . bddenpbj44 [ 2 ] - rtB . bddenpbj44 [ 1 ] * hcal [ 3 ] ) * 2.0 ) -
( hcal [ 2 ] * Qabs - normRcurr_idx_2 * hcal [ 3 ] ) ; rtB . ccejaqny4t [ 1 ]
= ( ( ( 1.0 / scale * rtB . j0fqbrtyfa [ 1 ] + gcal [ 2 ] ) - ( rtB .
bddenpbj44 [ 0 ] * dsvtya4om0_idx_0 - t * rtB . bddenpbj44 [ 2 ] ) ) - ( rtB
. bddenpbj44 [ 0 ] * hcal [ 3 ] - hcal [ 1 ] * rtB . bddenpbj44 [ 2 ] ) * 2.0
) - ( dsvtya4om0_idx_1 * hcal [ 3 ] - hcal [ 1 ] * Qabs ) ; rtB . ccejaqny4t
[ 2 ] = ( ( ( 1.0 / scale * rtB . j0fqbrtyfa [ 2 ] + gcal [ 3 ] ) - ( t * rtB
. bddenpbj44 [ 1 ] - rtB . bddenpbj44 [ 0 ] * niolpy2aa0_idx_3 ) ) - ( hcal [
1 ] * rtB . bddenpbj44 [ 1 ] - rtB . bddenpbj44 [ 0 ] * hcal [ 2 ] ) * 2.0 )
- ( hcal [ 1 ] * normRcurr_idx_2 - dsvtya4om0_idx_1 * hcal [ 2 ] ) ; rtB .
aqc2hj2iie [ 0 ] = rtB . dq02rtfmik [ 0 ] / j0sr42sxx5_idx_1 - ( absxk -
absxk ) * rtB . lpdd0pji14 [ 1 ] * rtB . lpdd0pji14 [ 2 ] / j0sr42sxx5_idx_1
; rtB . aqc2hj2iie [ 1 ] = rtB . dq02rtfmik [ 1 ] / absxk - (
j0sr42sxx5_idx_1 - absxk ) * rtB . lpdd0pji14 [ 0 ] * rtB . lpdd0pji14 [ 2 ]
/ absxk ; rtB . aqc2hj2iie [ 2 ] = rtB . dq02rtfmik [ 2 ] / absxk - ( absxk -
j0sr42sxx5_idx_1 ) * rtB . lpdd0pji14 [ 0 ] * rtB . lpdd0pji14 [ 1 ] / absxk
; aq [ 0 ] = rtB . mc4dbinm3s [ 0 ] ; aq [ 4 ] = - rtB . mc4dbinm3s [ 1 ] ;
aq [ 8 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 12 ] = - rtB . mc4dbinm3s [ 3 ] ;
aq [ 1 ] = rtB . mc4dbinm3s [ 1 ] ; aq [ 5 ] = rtB . mc4dbinm3s [ 0 ] ; aq [
9 ] = - rtB . mc4dbinm3s [ 3 ] ; aq [ 13 ] = rtB . mc4dbinm3s [ 2 ] ; aq [ 2
] = rtB . mc4dbinm3s [ 2 ] ; aq [ 6 ] = rtB . mc4dbinm3s [ 3 ] ; aq [ 10 ] =
rtB . mc4dbinm3s [ 0 ] ; aq [ 14 ] = - rtB . mc4dbinm3s [ 1 ] ; aq [ 3 ] =
rtB . mc4dbinm3s [ 3 ] ; aq [ 7 ] = - rtB . mc4dbinm3s [ 2 ] ; aq [ 11 ] =
rtB . mc4dbinm3s [ 1 ] ; aq [ 15 ] = rtB . mc4dbinm3s [ 0 ] ;
niolpy2aa0_idx_3 = rtB . lpdd0pji14 [ 0 ] ; dsvtya4om0_idx_0 = rtB .
lpdd0pji14 [ 1 ] ; dsvtya4om0_idx_1 = rtB . lpdd0pji14 [ 2 ] ; for ( n = 0 ;
n <= 2 ; n += 2 ) { tmp_p = _mm_loadu_pd ( & aq [ n ] ) ; tmp_e =
_mm_loadu_pd ( & aq [ n + 4 ] ) ; tmp_i = _mm_loadu_pd ( & aq [ n + 8 ] ) ;
tmp_m = _mm_loadu_pd ( & aq [ n + 12 ] ) ; _mm_storeu_pd ( & hcal [ n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( dsvtya4om0_idx_1 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( dsvtya4om0_idx_0 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( niolpy2aa0_idx_3 ) ) ,
_mm_add_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd ( 0.0 ) ) , _mm_set1_pd ( 0.0 )
) ) ) ) ) ; } rtB . jaglcqtvdh [ 0 ] = 0.5 * hcal [ 0 ] ; rtB . jaglcqtvdh [
1 ] = 0.5 * hcal [ 1 ] ; rtB . jaglcqtvdh [ 2 ] = 0.5 * hcal [ 2 ] ; rtB .
jaglcqtvdh [ 3 ] = 0.5 * hcal [ 3 ] ; n0rrwyfxef ( rtB . o5ix2pm1ra .
gyn0we22d3 , & rtB . lvjpidban0 ) ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { rtB . ocb3p2twiw = ( rtP .
LowPassFilterDiscreteorContinuous_init_option < rtP . CompareToConstant_const
) ; rtB . np4lv05ekc = ( rtP . LowPassFilterDiscreteorContinuous1_init_option
< rtP . CompareToConstant_const_fyftrk53il ) ; rtB . iu2eelcpow = rtP . Mp1 +
rtP . Mf1 ; rtB . djl30gp1b4 = rtP . Mp2 + rtP . Mf2 ; UNUSED_PARAMETER ( tid
) ; } void MdlUpdate ( int_T tid ) { XDis * _rtXdis ; real_T ( * lastU_p ) [
3 ] ; real_T * lastU ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled ( rtS )
) ; if ( rtDW . dmvm0z2smx == ( rtInf ) ) { rtDW . dmvm0z2smx = ssGetT ( rtS
) ; lastU = & rtDW . d1gtmzxjii ; } else if ( rtDW . boeci1vi3z == ( rtInf )
) { rtDW . boeci1vi3z = ssGetT ( rtS ) ; lastU = & rtDW . he1p5oblay ; } else
if ( rtDW . dmvm0z2smx < rtDW . boeci1vi3z ) { rtDW . dmvm0z2smx = ssGetT (
rtS ) ; lastU = & rtDW . d1gtmzxjii ; } else { rtDW . boeci1vi3z = ssGetT (
rtS ) ; lastU = & rtDW . he1p5oblay ; } * lastU = rtB . ktldt1hqeb ; rtDW .
k03ujfya4r = 0 ; switch ( rtDW . ao2ofrlfpp ) { case 3 : if ( rtB .
eksqltc5ph < 0.0 ) { rtDW . ao2ofrlfpp = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . eksqltc5ph > 0.0 ) { rtDW . ao2ofrlfpp = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
bkkkgiqcw4 = ( ( rtDW . ao2ofrlfpp == 3 ) || ( rtDW . ao2ofrlfpp == 4 ) ) ;
if ( rtDW . om55dr0bos == ( rtInf ) ) { rtDW . om55dr0bos = ssGetT ( rtS ) ;
lastU_p = & rtDW . dz5pc5rmg1 ; } else if ( rtDW . adt5wroeub == ( rtInf ) )
{ rtDW . adt5wroeub = ssGetT ( rtS ) ; lastU_p = & rtDW . fw0j3r1gk5 ; } else
if ( rtDW . om55dr0bos < rtDW . adt5wroeub ) { rtDW . om55dr0bos = ssGetT (
rtS ) ; lastU_p = & rtDW . dz5pc5rmg1 ; } else { rtDW . adt5wroeub = ssGetT (
rtS ) ; lastU_p = & rtDW . fw0j3r1gk5 ; } ( * lastU_p ) [ 0 ] = rtB .
gqnaxv0aej [ 0 ] ; ( * lastU_p ) [ 1 ] = rtB . gqnaxv0aej [ 1 ] ; ( * lastU_p
) [ 2 ] = rtB . gqnaxv0aej [ 2 ] ; rtDW . paojkwi1rt = 0 ; switch ( rtDW .
lkyqridsbk [ 0 ] ) { case 3 : if ( rtB . hbw54wmb5r [ 0 ] < 0.0 ) { rtDW .
lkyqridsbk [ 0 ] = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; case 4 : if ( rtB . hbw54wmb5r [ 0 ] > 0.0 ) { rtDW . lkyqridsbk [ 0
] = 2 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; }
_rtXdis -> kyfu3phbiu [ 0 ] = ( ( rtDW . lkyqridsbk [ 0 ] == 3 ) || ( rtDW .
lkyqridsbk [ 0 ] == 4 ) ) ; switch ( rtDW . lkyqridsbk [ 1 ] ) { case 3 : if
( rtB . hbw54wmb5r [ 1 ] < 0.0 ) { rtDW . lkyqridsbk [ 1 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . hbw54wmb5r [ 1 ] > 0.0 ) { rtDW . lkyqridsbk [ 1 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
kyfu3phbiu [ 1 ] = ( ( rtDW . lkyqridsbk [ 1 ] == 3 ) || ( rtDW . lkyqridsbk
[ 1 ] == 4 ) ) ; switch ( rtDW . lkyqridsbk [ 2 ] ) { case 3 : if ( rtB .
hbw54wmb5r [ 2 ] < 0.0 ) { rtDW . lkyqridsbk [ 2 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . hbw54wmb5r [ 2 ] > 0.0 ) { rtDW . lkyqridsbk [ 2 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
kyfu3phbiu [ 2 ] = ( ( rtDW . lkyqridsbk [ 2 ] == 3 ) || ( rtDW . lkyqridsbk
[ 2 ] == 4 ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDis *
_rtXdis ; XDot * _rtXdot ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> fsftytietz [
0 ] = rtB . ccejaqny4t [ 0 ] ; _rtXdot -> fsftytietz [ 1 ] = rtB . ccejaqny4t
[ 1 ] ; _rtXdot -> fsftytietz [ 2 ] = rtB . ccejaqny4t [ 2 ] ; _rtXdot ->
gmn5v5nip3 [ 0 ] = rtB . csfv2saeka . d1ftndfkkq [ 0 ] ; _rtXdot ->
gmn5v5nip3 [ 1 ] = rtB . csfv2saeka . d1ftndfkkq [ 1 ] ; _rtXdot ->
gmn5v5nip3 [ 2 ] = rtB . csfv2saeka . d1ftndfkkq [ 2 ] ; _rtXdot ->
gmn5v5nip3 [ 3 ] = rtB . csfv2saeka . d1ftndfkkq [ 3 ] ; _rtXdot ->
gei0u4b2jn [ 0 ] = rtB . jaglcqtvdh [ 0 ] ; _rtXdot -> gei0u4b2jn [ 1 ] = rtB
. jaglcqtvdh [ 1 ] ; _rtXdot -> gei0u4b2jn [ 2 ] = rtB . jaglcqtvdh [ 2 ] ;
_rtXdot -> gei0u4b2jn [ 3 ] = rtB . jaglcqtvdh [ 3 ] ; _rtXdot -> osil5rla0l
[ 0 ] = rtB . ov1zz1vxro [ 0 ] ; _rtXdot -> osil5rla0l [ 1 ] = rtB .
ov1zz1vxro [ 1 ] ; _rtXdot -> osil5rla0l [ 2 ] = rtB . ov1zz1vxro [ 2 ] ; if
( _rtXdis -> bkkkgiqcw4 ) { _rtXdot -> bkkkgiqcw4 = 0.0 ; } else if ( rtB .
jt2nv2x55d != 0.0 ) { _rtXdot -> bkkkgiqcw4 = 0.0 ; } else { _rtXdot ->
bkkkgiqcw4 = rtB . eksqltc5ph ; } if ( _rtXdis -> kyfu3phbiu [ 0 ] ) {
_rtXdot -> kyfu3phbiu [ 0 ] = 0.0 ; } else if ( rtB . e5tg3nwa3z != 0.0 ) {
_rtXdot -> kyfu3phbiu [ 0 ] = 0.0 ; } else { _rtXdot -> kyfu3phbiu [ 0 ] =
rtB . hbw54wmb5r [ 0 ] ; } if ( _rtXdis -> kyfu3phbiu [ 1 ] ) { _rtXdot ->
kyfu3phbiu [ 1 ] = 0.0 ; } else if ( rtB . e5tg3nwa3z != 0.0 ) { _rtXdot ->
kyfu3phbiu [ 1 ] = 0.0 ; } else { _rtXdot -> kyfu3phbiu [ 1 ] = rtB .
hbw54wmb5r [ 1 ] ; } if ( _rtXdis -> kyfu3phbiu [ 2 ] ) { _rtXdot ->
kyfu3phbiu [ 2 ] = 0.0 ; } else if ( rtB . e5tg3nwa3z != 0.0 ) { _rtXdot ->
kyfu3phbiu [ 2 ] = 0.0 ; } else { _rtXdot -> kyfu3phbiu [ 2 ] = rtB .
hbw54wmb5r [ 2 ] ; } _rtXdot -> iq0o54ir35 [ 0 ] = rtB . aqc2hj2iie [ 0 ] ;
_rtXdot -> iq0o54ir35 [ 1 ] = rtB . aqc2hj2iie [ 1 ] ; _rtXdot -> iq0o54ir35
[ 2 ] = rtB . aqc2hj2iie [ 2 ] ; _rtXdot -> ormll3qjai = rtB . eyeiubd2vv ;
_rtXdot -> kkd13wjx0s [ 0 ] = rtB . lvjpidban0 . d1ftndfkkq [ 0 ] ; _rtXdot
-> kkd13wjx0s [ 1 ] = rtB . lvjpidban0 . d1ftndfkkq [ 1 ] ; _rtXdot ->
kkd13wjx0s [ 2 ] = rtB . lvjpidban0 . d1ftndfkkq [ 2 ] ; _rtXdot ->
kkd13wjx0s [ 3 ] = rtB . lvjpidban0 . d1ftndfkkq [ 3 ] ; } void MdlProjection
( void ) { } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( (
ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> gtdxlk3nnd = rtB .
fuxhodf3mu - rtP . Constant_Value ; switch ( rtDW . ao2ofrlfpp ) { case 1 :
_rtZCSV -> phsaw4ntne = 0.0 ; _rtZCSV -> iwlk4vs1tw = rtP .
Integrator_UpperSat - rtP . Integrator_LowerSat ; break ; case 2 : _rtZCSV ->
phsaw4ntne = rtP . Integrator_LowerSat - rtP . Integrator_UpperSat ; _rtZCSV
-> iwlk4vs1tw = 0.0 ; break ; default : _rtZCSV -> phsaw4ntne = rtX .
bkkkgiqcw4 - rtP . Integrator_UpperSat ; _rtZCSV -> iwlk4vs1tw = rtX .
bkkkgiqcw4 - rtP . Integrator_LowerSat ; break ; } if ( ( rtDW . ao2ofrlfpp
== 3 ) || ( rtDW . ao2ofrlfpp == 4 ) ) { _rtZCSV -> claokks1yu = rtB .
eksqltc5ph ; } else { _rtZCSV -> claokks1yu = 0.0 ; } _rtZCSV -> a4srdcmqym =
rtB . jlrhitwsl3 - rtP . Saturation_UpperSat ; _rtZCSV -> od3fwagtsv = rtB .
jlrhitwsl3 - rtP . Saturation_LowerSat ; _rtZCSV -> cjxzs3d554 = rtB .
k3ye1bhxk2 - rtP . Constant_Value_lyipl5atta ; switch ( rtDW . lkyqridsbk [ 0
] ) { case 1 : _rtZCSV -> kwigqdxqo1 [ 0 ] = 0.0 ; _rtZCSV -> l0prbj1uc4 [ 0
] = rtP . Integrator_UpperSat_h00nuw44zs - rtP .
Integrator_LowerSat_mewh5v15vs ; break ; case 2 : _rtZCSV -> kwigqdxqo1 [ 0 ]
= rtP . Integrator_LowerSat_mewh5v15vs - rtP . Integrator_UpperSat_h00nuw44zs
; _rtZCSV -> l0prbj1uc4 [ 0 ] = 0.0 ; break ; default : _rtZCSV -> kwigqdxqo1
[ 0 ] = rtX . kyfu3phbiu [ 0 ] - rtP . Integrator_UpperSat_h00nuw44zs ;
_rtZCSV -> l0prbj1uc4 [ 0 ] = rtX . kyfu3phbiu [ 0 ] - rtP .
Integrator_LowerSat_mewh5v15vs ; break ; } switch ( rtDW . lkyqridsbk [ 1 ] )
{ case 1 : _rtZCSV -> kwigqdxqo1 [ 1 ] = 0.0 ; _rtZCSV -> l0prbj1uc4 [ 1 ] =
rtP . Integrator_UpperSat_h00nuw44zs - rtP . Integrator_LowerSat_mewh5v15vs ;
break ; case 2 : _rtZCSV -> kwigqdxqo1 [ 1 ] = rtP .
Integrator_LowerSat_mewh5v15vs - rtP . Integrator_UpperSat_h00nuw44zs ;
_rtZCSV -> l0prbj1uc4 [ 1 ] = 0.0 ; break ; default : _rtZCSV -> kwigqdxqo1 [
1 ] = rtX . kyfu3phbiu [ 1 ] - rtP . Integrator_UpperSat_h00nuw44zs ; _rtZCSV
-> l0prbj1uc4 [ 1 ] = rtX . kyfu3phbiu [ 1 ] - rtP .
Integrator_LowerSat_mewh5v15vs ; break ; } switch ( rtDW . lkyqridsbk [ 2 ] )
{ case 1 : _rtZCSV -> kwigqdxqo1 [ 2 ] = 0.0 ; _rtZCSV -> l0prbj1uc4 [ 2 ] =
rtP . Integrator_UpperSat_h00nuw44zs - rtP . Integrator_LowerSat_mewh5v15vs ;
break ; case 2 : _rtZCSV -> kwigqdxqo1 [ 2 ] = rtP .
Integrator_LowerSat_mewh5v15vs - rtP . Integrator_UpperSat_h00nuw44zs ;
_rtZCSV -> l0prbj1uc4 [ 2 ] = 0.0 ; break ; default : _rtZCSV -> kwigqdxqo1 [
2 ] = rtX . kyfu3phbiu [ 2 ] - rtP . Integrator_UpperSat_h00nuw44zs ; _rtZCSV
-> l0prbj1uc4 [ 2 ] = rtX . kyfu3phbiu [ 2 ] - rtP .
Integrator_LowerSat_mewh5v15vs ; break ; } if ( ( rtDW . lkyqridsbk [ 0 ] ==
3 ) || ( rtDW . lkyqridsbk [ 0 ] == 4 ) ) { _rtZCSV -> mkk0hq0tzu [ 0 ] = rtB
. hbw54wmb5r [ 0 ] ; } else { _rtZCSV -> mkk0hq0tzu [ 0 ] = 0.0 ; } if ( (
rtDW . lkyqridsbk [ 1 ] == 3 ) || ( rtDW . lkyqridsbk [ 1 ] == 4 ) ) {
_rtZCSV -> mkk0hq0tzu [ 1 ] = rtB . hbw54wmb5r [ 1 ] ; } else { _rtZCSV ->
mkk0hq0tzu [ 1 ] = 0.0 ; } if ( ( rtDW . lkyqridsbk [ 2 ] == 3 ) || ( rtDW .
lkyqridsbk [ 2 ] == 4 ) ) { _rtZCSV -> mkk0hq0tzu [ 2 ] = rtB . hbw54wmb5r [
2 ] ; } else { _rtZCSV -> mkk0hq0tzu [ 2 ] = 0.0 ; } _rtZCSV -> dl4wft0zqc [
0 ] = rtB . nhnd355lne [ 0 ] - rtP . Saturation_UpperSat_egkpxdd2hd ; _rtZCSV
-> p0vzctnqz2 [ 0 ] = rtB . nhnd355lne [ 0 ] - rtP .
Saturation_LowerSat_kcdgs05bz3 ; _rtZCSV -> dl4wft0zqc [ 1 ] = rtB .
nhnd355lne [ 1 ] - rtP . Saturation_UpperSat_egkpxdd2hd ; _rtZCSV ->
p0vzctnqz2 [ 1 ] = rtB . nhnd355lne [ 1 ] - rtP .
Saturation_LowerSat_kcdgs05bz3 ; _rtZCSV -> dl4wft0zqc [ 2 ] = rtB .
nhnd355lne [ 2 ] - rtP . Saturation_UpperSat_egkpxdd2hd ; _rtZCSV ->
p0vzctnqz2 [ 2 ] = rtB . nhnd355lne [ 2 ] - rtP .
Saturation_LowerSat_kcdgs05bz3 ; if ( ( rtB . jjxpsmwl0v != rtB . jjxpsmwl0v
) || ( rtB . micobu3txc [ 0 ] > rtB . jjxpsmwl0v ) ) { if ( rtDW . ev445lj5pd
== 0 ) { _rtZCSV -> mak1wgbaka = rtB . micobu3txc [ 0 ] - rtB . micobu3txc [
0 ] ; } else { _rtZCSV -> mak1wgbaka = rtB . micobu3txc [ 0 ] - rtB .
jjxpsmwl0v ; } } else if ( rtDW . ev445lj5pd == 0 ) { _rtZCSV -> mak1wgbaka =
rtB . jjxpsmwl0v - rtB . micobu3txc [ 0 ] ; } else { _rtZCSV -> mak1wgbaka =
rtB . jjxpsmwl0v - rtB . jjxpsmwl0v ; } if ( ( rtB . jgmu4cntnu != rtB .
jgmu4cntnu ) || ( rtB . av4akdfzex [ 0 ] > rtB . jgmu4cntnu ) ) { if ( rtDW .
fwb1s0siq2 == 0 ) { _rtZCSV -> cfx05bryit = rtB . av4akdfzex [ 0 ] - rtB .
av4akdfzex [ 0 ] ; } else { _rtZCSV -> cfx05bryit = rtB . av4akdfzex [ 0 ] -
rtB . jgmu4cntnu ; } } else if ( rtDW . fwb1s0siq2 == 0 ) { _rtZCSV ->
cfx05bryit = rtB . jgmu4cntnu - rtB . av4akdfzex [ 0 ] ; } else { _rtZCSV ->
cfx05bryit = rtB . jgmu4cntnu - rtB . jgmu4cntnu ; } _rtZCSV -> kpb0kxbm42 =
rtB . adlczhpcf0 - rtP . Switch1_Threshold ; _rtZCSV -> n252nuyick = rtB .
kh2ct1ob1u - rtP . Bt2 ; _rtZCSV -> dhdqbkvjjj = rtB . i1thalf1qu - rtP . Bt1
; _rtZCSV -> ftlorg4bbd = rtB . i1thalf1qu - rtP . Bt1 ; _rtZCSV ->
km3xrkmikc = rtB . psxkx0n5lg - ( rtP . Bt1 + rtP . Bt2 ) ; } void
MdlTerminate ( void ) { { if ( rtDW . cdq51tck1j . AQHandles ) {
sdiTerminateStreaming ( & rtDW . cdq51tck1j . AQHandles ) ; } } { if ( rtDW .
px2txhk5gj . AQHandles ) { sdiTerminateStreaming ( & rtDW . px2txhk5gj .
AQHandles ) ; } } { if ( rtDW . ix2gzz3wzl . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ix2gzz3wzl . AQHandles ) ; } } { if ( rtDW .
cpjt4iqhpn . AQHandles ) { sdiTerminateStreaming ( & rtDW . cpjt4iqhpn .
AQHandles ) ; } } } static void mr_rocket_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_rocket_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
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
"rtDW" , "rtPrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3
, ssDWFieldNames ) ; mr_rocket_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 23 ] = { "rtDW.dmvm0z2smx" , "rtDW.d1gtmzxjii" ,
"rtDW.boeci1vi3z" , "rtDW.he1p5oblay" , "rtDW.om55dr0bos" , "rtDW.dz5pc5rmg1"
, "rtDW.adt5wroeub" , "rtDW.fw0j3r1gk5" , "rtDW.k03ujfya4r" ,
"rtDW.paojkwi1rt" , "rtDW.ao2ofrlfpp" , "rtDW.lzsej45r0o" , "rtDW.lkyqridsbk"
, "rtDW.jken40hs34" , "rtDW.ev445lj5pd" , "rtDW.fwb1s0siq2" ,
"rtDW.edvcjysz1h" , "rtDW.llssf3xx0w" , "rtDW.gatfaphjb0" , "rtDW.nqvdwzkqqv"
, "rtDW.bbvvmnonjv" , "rtDW.mxc4xdmhnf" , "rtDW.ai5tkm230r" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 23 , rtdwDataFieldNames ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
dmvm0z2smx ) , sizeof ( rtDW . dmvm0z2smx ) ) ; mr_rocket_cacheDataAsMxArray
( rtdwData , 0 , 1 , ( const void * ) & ( rtDW . d1gtmzxjii ) , sizeof ( rtDW
. d1gtmzxjii ) ) ; mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . boeci1vi3z ) , sizeof ( rtDW . boeci1vi3z ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
he1p5oblay ) , sizeof ( rtDW . he1p5oblay ) ) ; mr_rocket_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( rtDW . om55dr0bos ) , sizeof ( rtDW
. om55dr0bos ) ) ; mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . dz5pc5rmg1 ) , sizeof ( rtDW . dz5pc5rmg1 ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
adt5wroeub ) , sizeof ( rtDW . adt5wroeub ) ) ; mr_rocket_cacheDataAsMxArray
( rtdwData , 0 , 7 , ( const void * ) & ( rtDW . fw0j3r1gk5 ) , sizeof ( rtDW
. fw0j3r1gk5 ) ) ; mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . k03ujfya4r ) , sizeof ( rtDW . k03ujfya4r ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
paojkwi1rt ) , sizeof ( rtDW . paojkwi1rt ) ) ; mr_rocket_cacheDataAsMxArray
( rtdwData , 0 , 10 , ( const void * ) & ( rtDW . ao2ofrlfpp ) , sizeof (
rtDW . ao2ofrlfpp ) ) ; mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . lzsej45r0o ) , sizeof ( rtDW . lzsej45r0o ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW
. lkyqridsbk ) , sizeof ( rtDW . lkyqridsbk ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( rtDW
. jken40hs34 ) , sizeof ( rtDW . jken40hs34 ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & ( rtDW
. ev445lj5pd ) , sizeof ( rtDW . ev445lj5pd ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW
. fwb1s0siq2 ) , sizeof ( rtDW . fwb1s0siq2 ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( rtDW
. edvcjysz1h ) , sizeof ( rtDW . edvcjysz1h ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & ( rtDW
. llssf3xx0w ) , sizeof ( rtDW . llssf3xx0w ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW
. gatfaphjb0 ) , sizeof ( rtDW . gatfaphjb0 ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( rtDW
. nqvdwzkqqv ) , sizeof ( rtDW . nqvdwzkqqv ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & ( rtDW
. bbvvmnonjv ) , sizeof ( rtDW . bbvvmnonjv ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW
. mxc4xdmhnf ) , sizeof ( rtDW . mxc4xdmhnf ) ) ;
mr_rocket_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( rtDW
. ai5tkm230r ) , sizeof ( rtDW . ai5tkm230r ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } mr_rocket_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const
void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_rocket_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . dmvm0z2smx )
, rtdwData , 0 , 0 , sizeof ( rtDW . dmvm0z2smx ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . d1gtmzxjii ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . d1gtmzxjii ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . boeci1vi3z ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . boeci1vi3z ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . he1p5oblay ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . he1p5oblay ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . om55dr0bos ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . om55dr0bos ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . dz5pc5rmg1 ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . dz5pc5rmg1 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . adt5wroeub ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . adt5wroeub ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . fw0j3r1gk5 ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . fw0j3r1gk5 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . k03ujfya4r ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . k03ujfya4r ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . paojkwi1rt ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . paojkwi1rt ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . ao2ofrlfpp ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . ao2ofrlfpp ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . lzsej45r0o ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . lzsej45r0o ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . lkyqridsbk ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . lkyqridsbk ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . jken40hs34 ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . jken40hs34 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . ev445lj5pd ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . ev445lj5pd ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . fwb1s0siq2 ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . fwb1s0siq2 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . edvcjysz1h ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . edvcjysz1h ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . llssf3xx0w ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . llssf3xx0w ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . gatfaphjb0 ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . gatfaphjb0 ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . nqvdwzkqqv ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . nqvdwzkqqv ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . bbvvmnonjv ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . bbvvmnonjv ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . mxc4xdmhnf ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . mxc4xdmhnf ) ) ;
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtDW . ai5tkm230r ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . ai5tkm230r ) ) ; }
mr_rocket_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX ) , ssDW , 0 , 2
, sizeof ( rtPrevZCX ) ) ; } mxArray * mr_rocket_GetSimStateDisallowedBlocks
( ) { mxArray * data = mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] ,
offset ; { static const char * blockType [ 10 ] = { "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope"
, } ; static const char * blockPath [ 10 ] = { "rocket/Scope" ,
"rocket/Scope1" , "rocket/Scope2" , "rocket/Scope3" , "rocket/Scope4" ,
"rocket/Scope5" , "rocket/Scope6" , "rocket/Scope7" , "rocket/Scope8" ,
"rocket/Acceleration Conversion/Scope" , } ; static const int reason [ 10 ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0
] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 26 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 196 ) ; ssSetNumBlockIO ( rtS , 92 ) ;
ssSetNumBlockParams ( rtS , 74 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 425980448U ) ;
ssSetChecksumVal ( rtS , 1 , 97785928U ) ; ssSetChecksumVal ( rtS , 2 ,
3073931720U ) ; ssSetChecksumVal ( rtS , 3 , 3373487905U ) ; }
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
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
rocket_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true
) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2
) ; ssSetModelName ( rtS , "rocket" ) ; ssSetPath ( rtS , "rocket" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 12500.0 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 3 , 4 , 4 , 3 , 1 , 3 , 3 , 1 , 4 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateDimensions [ ] = { 3 , 4 , 4 , 3 , 1 , 3 , 3 , 1
, 4 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{ "rocket/Rocket Dynamics/EoM/Integrator" , "rocket/Integrator4" ,
"rocket/Rocket Dynamics/EoM/Integrator2" ,
"rocket/Rocket Dynamics/EoM/Integrator3" ,
 "rocket/Acceleration Conversion/Low-Pass Filter\n(Discrete or Continuous)/Integrator\n(Discrete or Continuous)/Continuous/Integrator"
,
 "rocket/Acceleration Conversion/Low-Pass Filter\n(Discrete or Continuous)1/Integrator\n(Discrete or Continuous)/Continuous/Integrator"
, "rocket/Rocket Dynamics/EoM/Integrator1" ,
"rocket/Acceleration Conversion/Integrator" ,
"rocket/Rocket Dynamics/EoM/Integrator4" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0
, SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 9 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 9 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . fsftytietz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gmn5v5nip3 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . gei0u4b2jn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . osil5rla0l [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . bkkkgiqcw4 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . kyfu3phbiu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . iq0o54ir35 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ormll3qjai ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . kkd13wjx0s [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 26 ] ;
static real_T absTol [ 26 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [
26 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 26 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 26 ] ; static uint8_T zcAttributes [ 31 ] =
{ ( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; { int i ; for ( i = 0 ; i < 26 ; ++ i )
{ contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [
i ] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 250.0
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 31 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 29 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . no0o2yoxb1 = UNINITIALIZED_ZCSIG ; rtPrevZCX .
ppykmjpmgc = UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 425980448U
) ; ssSetChecksumVal ( rtS , 1 , 97785928U ) ; ssSetChecksumVal ( rtS , 2 ,
3073931720U ) ; ssSetChecksumVal ( rtS , 3 , 3373487905U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 32 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = &
rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = &
rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = &
rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = &
rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = &
rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = &
rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_rocket_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_rocket_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_rocket_SetDWork ) ; rtP . Integrator_UpperSat = rtInf ; rtP .
Integrator_LowerSat = rtMinusInf ; rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . Integrator_UpperSat_h00nuw44zs =
rtInf ; rtP . Integrator_LowerSat_mewh5v15vs = rtMinusInf ; rtP .
Saturation_UpperSat_egkpxdd2hd = rtInf ; rtP . Saturation_LowerSat_kcdgs05bz3
= rtMinusInf ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
