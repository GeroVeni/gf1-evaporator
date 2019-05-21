#include "__cf_condenser.h"
#include "condenser_capi.h"
#include "condenser.h"
#include "condenser_private.h"
static RegMdlInfo rtMdlInfo_condenser [ 41 ] = { { "cxyhsbe2vvs" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "condenser" } , {
"fipih424qq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "m2brhgeety" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "j24iusjl0z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "condenser" } , { "ax43kvwg4h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"gz4ff3ftdb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "fernmivh2l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "lbz3qk5yzy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "condenser" } , { "akaegxpsb0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"mruacjdcrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "jh0yi50u5z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "hqzuupp30m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "condenser" } , { "j1yphjk413" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"luyipqs2vc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "dbz1rmykfd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "iasoo2rkfe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "condenser" } , { "fi33gp4y13" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"n1galkhzn3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "lw21optddp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "condenser" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "jsmnmq1mkrf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "condenser" } , { "kienw5oh3hb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"bf5zg4s2tj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "jsmnmq1mkr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "condenser" } , { "kienw5oh3h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "condenser" } , { "mypzqv53ys" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "condenser" } , {
"hahgvnyr2q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"condenser" } , { "mr_condenser_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "condenser" } , {
"mr_condenser_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "condenser" } , { "mr_condenser_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "condenser" } , { "mr_condenser_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "condenser" } , { "mr_condenser_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "condenser" } , {
"mr_condenser_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"condenser" } , { "condenser.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "condenser.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"condenser" } } ; azxl42njv21 azxl42njv2 = { 0.5 , 6.84 , 14.285714285714285
, 1.0 , 6.84 , 14.285714285714285 , 0.025974025974025976 } ; void condenser (
const real_T * muwj3kuuma , const real_T * deeg3a4ex4 , const real_T *
egcd4mrsfr , real_T * jm41jdcwwe , real_T * eektxt5eww , real_T * j1ytshj0es
) { * jm41jdcwwe = ( * muwj3kuuma - * deeg3a4ex4 ) * azxl42njv2 . P_4 / ( 1.0
/ * egcd4mrsfr * azxl42njv2 . P_0 * azxl42njv2 . P_1 * azxl42njv2 . P_2 +
azxl42njv2 . P_3 ) ; * eektxt5eww = * jm41jdcwwe / * egcd4mrsfr * azxl42njv2
. P_5 + * deeg3a4ex4 ; * j1ytshj0es = azxl42njv2 . P_6 * * jm41jdcwwe ; }
void condenserTID1 ( void ) { } void luyipqs2vc ( hahgvnyr2q * const
h5fusybcez ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( h5fusybcez -> _mdlRefSfcnS , "condenser" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fi33gp4y13 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , hahgvnyr2q
* const h5fusybcez , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; { ( void ) memset ( ( void * ) h5fusybcez , 0 , sizeof ( hahgvnyr2q ) ) ;
} h5fusybcez -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; h5fusybcez ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; h5fusybcez -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( h5fusybcez -> _mdlRefSfcnS , "condenser" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
condenser_InitializeDataMapInfo ( h5fusybcez , sysRanPtr , contextTid ) ; if
( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( h5fusybcez ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( h5fusybcez -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( h5fusybcez ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_condenser_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_condenser , 41 ) ; * retVal = 1 ; } static void
mr_condenser_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_condenser_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_condenser_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_condenser_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_condenser_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_condenser_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_condenser_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_condenser_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_condenser_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_condenser_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_condenser_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_condenser_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_condenser_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_condenser_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_condenser_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_condenser_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_condenser_GetDWork ( const cxyhsbe2vvs * mdlrefDW ) { (
void ) mdlrefDW ; return NULL ; } void mr_condenser_SetDWork ( cxyhsbe2vvs *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; }
void mr_condenser_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 740508236U , 1837587496U , 3026052631U , 4044879199U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "condenser" , & chksum [ 0 ] ) ; }
mxArray * mr_condenser_GetSimStateDisallowedBlocks ( ) { return NULL ; }
