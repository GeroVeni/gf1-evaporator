#include "__cf_condenser.h"
#ifndef RTW_HEADER_condenser_cap_host_h_
#define RTW_HEADER_condenser_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
condenser_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void condenser_host_InitializeDataMapInfo ( condenser_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
