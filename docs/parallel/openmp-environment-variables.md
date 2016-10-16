---
title: "OpenMP Environment Variables"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
caps.latest.revision: 9
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# OpenMP Environment Variables
Provides links to environment variables used in the OpenMP API.  
  
 The Visual C++ implementation of the OpenMP standard includes the following environment variables. These environment variables are read at program startup and modifications to their values are ignored at runtime (for example, using [_putenv, _wputenv](../crt/_putenv--_wputenv.md)).  
  
|Environment variable|Description|  
|--------------------------|-----------------|  
|[OMP_DYNAMIC](../parallel/omp_dynamic.md)|Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.|  
|[OMP_NESTED](../parallel/omp_nested.md)|Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.|  
|[OMP_NUM_THREADS](../parallel/omp_num_threads.md)|Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](../parallel/omp_set_num_threads.md) or [num_threads](../parallel/num_threads.md).|  
|[OMP_SCHEDULE](../parallel/omp_schedule.md)|Modifies the behavior of the [schedule](../parallel/schedule.md) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.|  
  
## See Also  
 [Library Reference](../parallel/openmp-library-reference.md)