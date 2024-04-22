/* External objects file */
#include "nb_hydr_static_v6_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void nb_hydr_static_v6_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

