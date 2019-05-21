#include "__cf_evaporator.h"
#ifndef RTW_HEADER_evaporator_cap_host_h_
#define RTW_HEADER_evaporator_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
evaporator_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void evaporator_host_InitializeDataMapInfo ( evaporator_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
