#include "__cf_heater_steam_jacket.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "heater_steam_jacket_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "heater_steam_jacket.h"
#include "heater_steam_jacket_capi.h"
#include "heater_steam_jacket_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3044483937U , 2429927271U , 3902768548U ,
954412556U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * heater_steam_jacket_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void heater_steam_jacket_InitializeSystemRan ( ff1jvzcmkt * const
cukboca3yc , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( cukboca3yc ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = cukboca3yc -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void heater_steam_jacket_InitializeDataMapInfo ( ff1jvzcmkt * const
cukboca3yc , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
cukboca3yc -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( cukboca3yc ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( cukboca3yc
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath (
cukboca3yc -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
cukboca3yc -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo
( cukboca3yc -> DataMapInfo . mmi , & cukboca3yc -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( cukboca3yc -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( cukboca3yc -> DataMapInfo .
mmi , 0 ) ; heater_steam_jacket_InitializeSystemRan ( cukboca3yc , cukboca3yc
-> DataMapInfo . systemRan , cukboca3yc -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( cukboca3yc -> DataMapInfo .
mmi , cukboca3yc -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
cukboca3yc -> DataMapInfo . mmi , cukboca3yc -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( cukboca3yc -> DataMapInfo . mmi , & cukboca3yc ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void heater_steam_jacket_host_InitializeDataMapInfo (
heater_steam_jacket_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
