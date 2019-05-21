#include "__cf_heater_steam_jacket.h"
#ifndef RTW_HEADER_heater_steam_jacket_h_
#define RTW_HEADER_heater_steam_jacket_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef heater_steam_jacket_COMMON_INCLUDES_
#define heater_steam_jacket_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "heater_steam_jacket_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct i3eweqkuzj5_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; } ;
struct hrbojmkjle { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { ff1jvzcmkt rtm ; } ge0idcd1lo2 ; extern void isbpebjbbr (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ff1jvzcmkt
* const cukboca3yc , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_heater_steam_jacket_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_heater_steam_jacket_GetDWork ( const ge0idcd1lo2 * mdlrefDW ) ; extern
void mr_heater_steam_jacket_SetDWork ( ge0idcd1lo2 * mdlrefDW , const mxArray
* ssDW ) ; extern void mr_heater_steam_jacket_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray *
mr_heater_steam_jacket_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * heater_steam_jacket_GetCAPIStaticMap ( void
) ; extern void heater_steam_jacket ( const real_T * pplw0rpwaj , const
real_T * jeqvc0zqrp , const real_T * ock0xcvnzo , const real_T * ldytj0ahiq ,
real_T * juu1mllpgp , real_T * eptu2ujk3b , real_T * lq12sp3ya5 ) ; extern
void heater_steam_jacketTID1 ( void ) ; extern void mfzqpukysc ( ff1jvzcmkt *
const cukboca3yc ) ;
#endif
