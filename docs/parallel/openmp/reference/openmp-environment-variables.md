---
title: "OpenMP Environment Variables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP Environment Variables
Provides links to environment variables used in the OpenMP API.  
  
 The Visual C++ implementation of the OpenMP standard includes the following environment variables. These environment variables are read at program startup and modifications to their values are ignored at runtime (for example, using [_putenv, _wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).  
  
|Environment variable|Description|  
|--------------------------|-----------------|  
|[OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md)|Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.|  
|[OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md)|Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.|  
|[OMP_NUM_THREADS](../../../parallel/openmp/reference/omp-num-threads.md)|Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) or [num_threads](../../../parallel/openmp/reference/num-threads.md).|  
|[OMP_SCHEDULE](../../../parallel/openmp/reference/omp-schedule.md)|Modifies the behavior of the [schedule](../../../parallel/openmp/reference/schedule.md) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.|  
  
## See Also  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)