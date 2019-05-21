#include "__cf_evaporator.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "evaporator_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "evaporator.h"
#include "evaporator_capi.h"
#include "evaporator_private.h"
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
TARGET_STRING ( "evaporator/(2.2)/X2int" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 1 ,
TARGET_STRING ( "evaporator/(2.3)\n/P2int" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL
) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void evaporator_InitializeDataAddr ( void * dataAddr [ ] , eir2exwod2
* localX ) { dataAddr [ 0 ] = ( void * ) ( & localX -> kph4e30t13 ) ;
dataAddr [ 1 ] = ( void * ) ( & localX -> i1lpslyjf2 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void evaporator_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void evaporator_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
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
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3119852393U , 1788424469U , 3569912225U ,
1914566866U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * evaporator_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void evaporator_InitializeSystemRan ( p0uo35dyho * const gftv30tscs ,
sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( gftv30tscs ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ]
= gftv30tscs -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void evaporator_InitializeDataMapInfo ( p0uo35dyho * const gftv30tscs ,
eir2exwod2 * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( gftv30tscs -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( gftv30tscs -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( gftv30tscs -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; evaporator_InitializeDataAddr ( gftv30tscs ->
DataMapInfo . dataAddress , localX ) ; rtwCAPI_SetDataAddressMap ( gftv30tscs
-> DataMapInfo . mmi , gftv30tscs -> DataMapInfo . dataAddress ) ;
evaporator_InitializeVarDimsAddr ( gftv30tscs -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( gftv30tscs -> DataMapInfo . mmi ,
gftv30tscs -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( gftv30tscs
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( gftv30tscs ->
DataMapInfo . mmi , ( NULL ) ) ; evaporator_InitializeLoggingFunctions (
gftv30tscs -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
gftv30tscs -> DataMapInfo . mmi , gftv30tscs -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( gftv30tscs -> DataMapInfo . mmi , &
gftv30tscs -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
gftv30tscs -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
gftv30tscs -> DataMapInfo . mmi , 0 ) ; evaporator_InitializeSystemRan (
gftv30tscs , gftv30tscs -> DataMapInfo . systemRan , gftv30tscs ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
gftv30tscs -> DataMapInfo . mmi , gftv30tscs -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( gftv30tscs -> DataMapInfo . mmi , gftv30tscs ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( gftv30tscs ->
DataMapInfo . mmi , & gftv30tscs -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void evaporator_host_InitializeDataMapInfo ( evaporator_host_DataMapInfo_T *
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
