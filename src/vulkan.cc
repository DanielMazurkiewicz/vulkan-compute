#include <stdlib.h>
//#include <unistd.h>
//#include <time.h>

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>


//#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>

#include <node_api.h>
#include <assert.h>

#include <pthread.h>


//#include <sys/ipc.h>
#include <sys/shm.h>


//#include <stdio.h>


#pragma GCC diagnostic ignored "-Wwrite-strings"

#include "generic/customTypes.h"
#include "generic/napiMacros.h"


function(CreateObject) { // (path, pageSize, newDbCallback)
    return obj;
}

napi_value Init(napi_env env, napi_value exports) {
  napi_status status;
  var(new_exports);
  n_newFunction(new_exports, CreateObject, status);
  return new_exports;
}

NAPI_MODULE(vulkan, Init)
