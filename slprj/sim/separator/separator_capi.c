#include "__cf_separator.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "separator_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "separator.h"
#include "separator_capi.h"
#include "separator_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING ( "separator/L2int" ) , TARGET_STRING ( "" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) ,
( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void separator_InitializeDataAddr ( void * dataAddr [ ] , nxzao5fumq *
localX ) { dataAddr [ 0 ] = ( void * ) ( & localX -> gkrpnslhu3 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void separator_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void separator_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2001102474U , 2859626182U , 818807494U ,
436994797U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * separator_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void separator_InitializeSystemRan ( piipdb2hdi * const iic4lgxdrq ,
sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( iic4lgxdrq ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ]
= iic4lgxdrq -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void separator_InitializeDataMapInfo ( piipdb2hdi * const iic4lgxdrq ,
nxzao5fumq * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( iic4lgxdrq -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( iic4lgxdrq -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( iic4lgxdrq -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; separator_InitializeDataAddr ( iic4lgxdrq ->
DataMapInfo . dataAddress , localX ) ; rtwCAPI_SetDataAddressMap ( iic4lgxdrq
-> DataMapInfo . mmi , iic4lgxdrq -> DataMapInfo . dataAddress ) ;
separator_InitializeVarDimsAddr ( iic4lgxdrq -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( iic4lgxdrq -> DataMapInfo . mmi ,
iic4lgxdrq -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( iic4lgxdrq
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( iic4lgxdrq ->
DataMapInfo . mmi , ( NULL ) ) ; separator_InitializeLoggingFunctions (
iic4lgxdrq -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
iic4lgxdrq -> DataMapInfo . mmi , iic4lgxdrq -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( iic4lgxdrq -> DataMapInfo . mmi , &
iic4lgxdrq -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
iic4lgxdrq -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
iic4lgxdrq -> DataMapInfo . mmi , 0 ) ; separator_InitializeSystemRan (
iic4lgxdrq , iic4lgxdrq -> DataMapInfo . systemRan , iic4lgxdrq ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
iic4lgxdrq -> DataMapInfo . mmi , iic4lgxdrq -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( iic4lgxdrq -> DataMapInfo . mmi , iic4lgxdrq ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( iic4lgxdrq ->
DataMapInfo . mmi , & iic4lgxdrq -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void separator_host_InitializeDataMapInfo ( separator_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
