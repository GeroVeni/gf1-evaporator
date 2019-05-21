#include "__cf_condenser.h"
#ifndef RTW_HEADER_condenser_h_
#define RTW_HEADER_condenser_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef condenser_COMMON_INCLUDES_
#define condenser_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "condenser_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct azxl42njv21_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; } ; struct mypzqv53ys { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { hahgvnyr2q rtm ; }
cxyhsbe2vvs ; extern void fi33gp4y13 ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , hahgvnyr2q * const h5fusybcez , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_condenser_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_condenser_GetDWork ( const
cxyhsbe2vvs * mdlrefDW ) ; extern void mr_condenser_SetDWork ( cxyhsbe2vvs *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_condenser_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_condenser_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * condenser_GetCAPIStaticMap ( void ) ; extern
void condenser ( const real_T * muwj3kuuma , const real_T * deeg3a4ex4 ,
const real_T * egcd4mrsfr , real_T * jm41jdcwwe , real_T * eektxt5eww ,
real_T * j1ytshj0es ) ; extern void condenserTID1 ( void ) ; extern void
luyipqs2vc ( hahgvnyr2q * const h5fusybcez ) ;
#endif
