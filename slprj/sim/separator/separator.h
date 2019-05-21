#include "__cf_separator.h"
#ifndef RTW_HEADER_separator_h_
#define RTW_HEADER_separator_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef separator_COMMON_INCLUDES_
#define separator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "separator_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T nehtcfhi54 ; } opdmcp1va3 ; typedef struct { real_T
gkrpnslhu3 ; } nxzao5fumq ; typedef struct { real_T gkrpnslhu3 ; } csm0mmxacm
; typedef struct { boolean_T gkrpnslhu3 ; } eltxv3npbu ; typedef struct {
real_T gkrpnslhu3 ; } iiiluy4xb1 ; struct m5l2ir2gy3g_ { real_T P_0 ; real_T
P_1 ; } ; struct onp3mxjngn { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ]
; } Timing ; } ; typedef struct { opdmcp1va3 rtb ; piipdb2hdi rtm ; }
c41nudlbzzn ; extern void jzqzzecl54 ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , piipdb2hdi * const iic4lgxdrq , opdmcp1va3 * localB ,
nxzao5fumq * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_separator_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_separator_GetDWork ( const c41nudlbzzn
* mdlrefDW ) ; extern void mr_separator_SetDWork ( c41nudlbzzn * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_separator_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_separator_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * separator_GetCAPIStaticMap
( void ) ; extern void kqy2anfp4d ( nxzao5fumq * localX ) ; extern void
hh0zv3vnpj ( nxzao5fumq * localX ) ; extern void ovog4bf2pr ( opdmcp1va3 *
localB , csm0mmxacm * localXdot ) ; extern void k3cjbdd1yt ( void ) ; extern
void separator ( const real_T * liaejyk1mr , const real_T * pur0gmerr1 ,
const real_T * ggtxmv4aqg , real_T * hvqct2fdzd , opdmcp1va3 * localB ,
nxzao5fumq * localX ) ; extern void mrx1rio5r0 ( piipdb2hdi * const
iic4lgxdrq ) ;
#endif
