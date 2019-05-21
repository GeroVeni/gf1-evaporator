#include "__cf_heater_steam_jacket.h"
#ifndef RTW_HEADER_heater_steam_jacket_cap_host_h_
#define RTW_HEADER_heater_steam_jacket_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
heater_steam_jacket_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void heater_steam_jacket_host_InitializeDataMapInfo (
heater_steam_jacket_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
