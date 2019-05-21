#include "__cf_evaporator.h"
#include "evaporator_capi.h"
#include "evaporator.h"
#include "evaporator_private.h"
static RegMdlInfo rtMdlInfo_evaporator [ 45 ] = { { "eo5k0glfw1j" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "evaporator" } , {
"axq4lublxv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "k315hb4pl3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "cm5g5fcdyk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"ipgnntabct" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "eir2exwod2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "ctitxsgahg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"h2wgk2o2u5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "cotk2uniee" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "nzx332bxuf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"e3iku4mopm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "a2uwdzig11" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "hvse4hwrzm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"kebnrs5vyd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "mpkvevgra1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "ogysofl44q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"b3dh5o0dqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "kajm0vto5l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "m5dcrmve2p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"dymrf5h2hl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "a5v31u1ro1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "hxi2mh4yyp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"evaporator" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"ipczmlggmtl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "od54xunlhdh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "pcihrsqvyp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"fp1ruwpaczg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "ipczmlggmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "od54xunlhd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "evaporator" } , {
"n5j3d2ze2z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"evaporator" } , { "p0uo35dyho" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "evaporator" } , { "mr_evaporator_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "evaporator" } , { "mr_evaporator_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "evaporator" } , { "mr_evaporator_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "evaporator" } , { "mr_evaporator_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "evaporator" } , {
"mr_evaporator_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"evaporator" } , { "evaporator.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
NULL ) } , { "evaporator.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"evaporator" } } ; a0o0o3mk5pe a0o0o3mk5p = { 0.0 , 0.05 , 0.0 , 0.5616 ,
0.3126 , 48.43 , 0.07 , 0.025974025974025976 , 0.25 , 0.507 , 55.0 } ; void
m5dcrmve2p ( eir2exwod2 * localX ) { localX -> kph4e30t13 = a0o0o3mk5p . P_0
; localX -> i1lpslyjf2 = a0o0o3mk5p . P_2 ; } void kajm0vto5l ( eir2exwod2 *
localX ) { localX -> kph4e30t13 = a0o0o3mk5p . P_0 ; localX -> i1lpslyjf2 =
a0o0o3mk5p . P_2 ; } void evaporator ( const real_T * jlrnzqysix , const
real_T * otdsbilmyy , const real_T * lal2h0151v , const real_T * pmabgortzd ,
const real_T * ffg3y40xlh , const real_T * hrfisvoehd , real_T * nv41uu34pk ,
real_T * b5ekckeogc , real_T * gw1i0355wd , real_T * bvcptc0dw5 , real_T *
hgymxdnbdr , a2uwdzig11 * localB , eir2exwod2 * localX ) { * nv41uu34pk =
localX -> kph4e30t13 ; localB -> h3uve1lpvn = ( * jlrnzqysix * * lal2h0151v -
* otdsbilmyy * * nv41uu34pk ) * a0o0o3mk5p . P_1 ; * b5ekckeogc = localX ->
i1lpslyjf2 ; * gw1i0355wd = ( a0o0o3mk5p . P_3 * * b5ekckeogc + a0o0o3mk5p .
P_4 * * nv41uu34pk ) + a0o0o3mk5p . P_5 ; * hgymxdnbdr = ( * hrfisvoehd - ( *
gw1i0355wd - * ffg3y40xlh ) * a0o0o3mk5p . P_6 * * jlrnzqysix ) * a0o0o3mk5p
. P_7 ; localB -> npvp0dqpah = ( * hgymxdnbdr - * pmabgortzd ) * a0o0o3mk5p .
P_8 ; * bvcptc0dw5 = a0o0o3mk5p . P_9 * * b5ekckeogc + a0o0o3mk5p . P_10 ; }
void evaporatorTID1 ( void ) { } void b3dh5o0dqm ( void ) { } void
b3dh5o0dqmTID1 ( void ) { } void ogysofl44q ( a2uwdzig11 * localB ,
ipgnntabct * localXdot ) { localXdot -> kph4e30t13 = localB -> h3uve1lpvn ;
localXdot -> i1lpslyjf2 = localB -> npvp0dqpah ; } void kebnrs5vyd (
p0uo35dyho * const gftv30tscs ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( gftv30tscs -> _mdlRefSfcnS , "evaporator" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dymrf5h2hl (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , p0uo35dyho
* const gftv30tscs , a2uwdzig11 * localB , eir2exwod2 * localX , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; { ( void ) memset ( ( void * )
gftv30tscs , 0 , sizeof ( p0uo35dyho ) ) ; } gftv30tscs -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; gftv30tscs -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; gftv30tscs -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( gftv30tscs -> _mdlRefSfcnS , "evaporator" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> h3uve1lpvn = 0.0
; localB -> npvp0dqpah = 0.0 ; } evaporator_InitializeDataMapInfo (
gftv30tscs , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( gftv30tscs -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( gftv30tscs -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( gftv30tscs -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_evaporator_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_evaporator , 45 ) ; * retVal = 1 ; } static void
mr_evaporator_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_evaporator_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_evaporator_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_evaporator_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_evaporator_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_evaporator_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_evaporator_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_evaporator_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_evaporator_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_evaporator_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_evaporator_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_evaporator_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_evaporator_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_evaporator_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_evaporator_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_evaporator_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_evaporator_GetDWork ( const eo5k0glfw1j * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "NULL->rtdw" ,
"NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_evaporator_cacheDataAsMxArray ( ssDW , 0 , 0 , & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; return ssDW ; } void
mr_evaporator_SetDWork ( eo5k0glfw1j * mdlrefDW , const mxArray * ssDW ) {
mr_evaporator_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 ,
sizeof ( mdlrefDW -> rtb ) ) ; } void mr_evaporator_RegisterSimStateChecksum
( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 143071195U , 2390917691U
, 2157860027U , 1917086285U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"evaporator" , & chksum [ 0 ] ) ; } mxArray *
mr_evaporator_GetSimStateDisallowedBlocks ( ) { return NULL ; }
