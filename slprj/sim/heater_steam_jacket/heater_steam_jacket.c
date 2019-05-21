#include "__cf_heater_steam_jacket.h"
#include "heater_steam_jacket_capi.h"
#include "heater_steam_jacket.h"
#include "heater_steam_jacket_private.h"
static RegMdlInfo rtMdlInfo_heater_steam_jacket [ 41 ] = { { "ge0idcd1lo2" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mgujpdutwq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "mcmag0dyfo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "jjmttwfpfb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "ajt0kjqt1z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "nu4puv2c1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "h0rhdsd31u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "nzxqh1ewun" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "actv4rnxum" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "npyxq5tck5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "nlcvaughv4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "iatnz2dpdd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "k2r3ypknnh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "mfzqpukysc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "cyitbizzle" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "p4ftqh0rng" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "isbpebjbbr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "k3pfj4zh5x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "k00yjqkhjj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "heater_steam_jacket" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "fzuc1bjw4nw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "heater_steam_jacket" } , { "ff2amhr33ou" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "nmnurbvlcs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "fzuc1bjw4n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , { "ff2amhr33o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "heater_steam_jacket"
} , { "hrbojmkjle" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"heater_steam_jacket" } , { "ff1jvzcmkt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"mr_heater_steam_jacket_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "heater_steam_jacket" } , { "mr_heater_steam_jacket_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "heater_steam_jacket" } , {
"heater_steam_jacket.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"heater_steam_jacket.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"heater_steam_jacket" } } ; i3eweqkuzj5 i3eweqkuzj = { 90.0 , 0.1538 , 0.16 ,
0.0273224043715847 } ; void heater_steam_jacket ( const real_T * pplw0rpwaj ,
const real_T * jeqvc0zqrp , const real_T * ock0xcvnzo , const real_T *
ldytj0ahiq , real_T * juu1mllpgp , real_T * eptu2ujk3b , real_T * lq12sp3ya5
) { * juu1mllpgp = i3eweqkuzj . P_1 * * pplw0rpwaj + i3eweqkuzj . P_0 ; *
eptu2ujk3b = ( * juu1mllpgp - * jeqvc0zqrp ) * ( * ock0xcvnzo + * ldytj0ahiq
) * i3eweqkuzj . P_2 ; * lq12sp3ya5 = i3eweqkuzj . P_3 * * eptu2ujk3b ; }
void heater_steam_jacketTID1 ( void ) { } void mfzqpukysc ( ff1jvzcmkt *
const cukboca3yc ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cukboca3yc -> _mdlRefSfcnS , "heater_steam_jacket" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void isbpebjbbr (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ff1jvzcmkt
* const cukboca3yc , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; { ( void ) memset ( ( void * ) cukboca3yc , 0 , sizeof ( ff1jvzcmkt ) ) ;
} cukboca3yc -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; cukboca3yc ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; cukboca3yc -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cukboca3yc -> _mdlRefSfcnS , "heater_steam_jacket" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
heater_steam_jacket_InitializeDataMapInfo ( cukboca3yc , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
cukboca3yc -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( cukboca3yc ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
cukboca3yc -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_heater_steam_jacket_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_heater_steam_jacket , 41 ) ; * retVal = 1
; } static void mr_heater_steam_jacket_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_heater_steam_jacket_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_heater_steam_jacket_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_heater_steam_jacket_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
{ memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_heater_steam_jacket_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_heater_steam_jacket_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_heater_steam_jacket_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_heater_steam_jacket_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_heater_steam_jacket_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_heater_steam_jacket_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_heater_steam_jacket_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_heater_steam_jacket_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_heater_steam_jacket_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_heater_steam_jacket_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_heater_steam_jacket_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_heater_steam_jacket_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_heater_steam_jacket_GetDWork ( const
ge0idcd1lo2 * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_heater_steam_jacket_SetDWork ( ge0idcd1lo2 * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_heater_steam_jacket_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 528297194U , 3892705744U , 2053523U , 2561513281U ,
} ; slmrModelRefRegisterSimStateChecksum ( S , "heater_steam_jacket" , &
chksum [ 0 ] ) ; } mxArray *
mr_heater_steam_jacket_GetSimStateDisallowedBlocks ( ) { return NULL ; }
