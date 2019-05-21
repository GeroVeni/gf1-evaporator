#include "__cf_evaporator.h"
#ifndef RTW_HEADER_evaporator_h_
#define RTW_HEADER_evaporator_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef evaporator_COMMON_INCLUDES_
#define evaporator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "evaporator_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T h3uve1lpvn ; real_T npvp0dqpah ; } a2uwdzig11 ;
typedef struct { real_T kph4e30t13 ; real_T i1lpslyjf2 ; } eir2exwod2 ;
typedef struct { real_T kph4e30t13 ; real_T i1lpslyjf2 ; } ipgnntabct ;
typedef struct { boolean_T kph4e30t13 ; boolean_T i1lpslyjf2 ; } cm5g5fcdyk ;
typedef struct { real_T kph4e30t13 ; real_T i1lpslyjf2 ; } k315hb4pl3 ;
struct a0o0o3mk5pe_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; } ; struct n5j3d2ze2z { struct SimStruct_tag * _mdlRefSfcnS ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { a2uwdzig11 rtb ; p0uo35dyho rtm ; }
eo5k0glfw1j ; extern void dymrf5h2hl ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , p0uo35dyho * const gftv30tscs , a2uwdzig11
* localB , eir2exwod2 * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_evaporator_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_evaporator_GetDWork ( const
eo5k0glfw1j * mdlrefDW ) ; extern void mr_evaporator_SetDWork ( eo5k0glfw1j *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_evaporator_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_evaporator_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * evaporator_GetCAPIStaticMap ( void ) ;
extern void m5dcrmve2p ( eir2exwod2 * localX ) ; extern void kajm0vto5l (
eir2exwod2 * localX ) ; extern void ogysofl44q ( a2uwdzig11 * localB ,
ipgnntabct * localXdot ) ; extern void b3dh5o0dqm ( void ) ; extern void
b3dh5o0dqmTID1 ( void ) ; extern void evaporator ( const real_T * jlrnzqysix
, const real_T * otdsbilmyy , const real_T * lal2h0151v , const real_T *
pmabgortzd , const real_T * ffg3y40xlh , const real_T * hrfisvoehd , real_T *
nv41uu34pk , real_T * b5ekckeogc , real_T * gw1i0355wd , real_T * bvcptc0dw5
, real_T * hgymxdnbdr , a2uwdzig11 * localB , eir2exwod2 * localX ) ; extern
void evaporatorTID1 ( void ) ; extern void kebnrs5vyd ( p0uo35dyho * const
gftv30tscs ) ;
#endif
