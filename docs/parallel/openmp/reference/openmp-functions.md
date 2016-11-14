---
title: "OpenMP Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# OpenMP Functions
Provides links to functions used in the OpenMP API.  
  
 The Visual C++ implementation of the OpenMP standard includes the following functions.  
  
|Function|Description|  
|--------------|-----------------|  
|[omp_destroy_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)|Uninitializes a lock.|  
|[omp_destroy_nest_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)|Uninitializes a nestable lock.|  
|[omp_get_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md)|Returns a value that indicates if the number of threads available in subsequent parallel region can be adjusted by the run time.|  
|[omp_get_max_threads](../../../parallel/openmp/reference/omp-get-max-threads.md)|Returns an integer that is equal to or greater than the number of threads that would be available if a parallel region without [num_threads](../../../parallel/openmp/reference/num-threads.md) were defined at that point in the code.|  
|[omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md)|Returns a value that indicates if nested parallelism is enabled.|  
|[omp_get_num_procs](../../../parallel/openmp/reference/omp-get-num-procs.md)|Returns the number of processors that are available when the function is called.|  
|[omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md)|Returns the number of threads in the parallel region.|  
|[omp_get_thread_num](../../../parallel/openmp/reference/omp-get-thread-num.md)|Returns the thread number of the thread executing within its thread team.|  
|[omp_get_wtick](../../../parallel/openmp/reference/omp-get-wtick.md)|Returns the number of seconds between processor clock ticks.|  
|[omp_get_wtime](../../../parallel/openmp/reference/omp-get-wtime.md)|Returns a value in seconds of the time elapsed from some point.|  
|[omp_in_parallel](../../../parallel/openmp/reference/omp-in-parallel.md)|Returns nonzero if called from within a parallel region.|  
|[omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md)|Initializes a simple lock.|  
|[omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)|Initializes a lock.|  
|[omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md)|Indicates that the number of threads available in subsequent parallel region can be adjusted by the run time.|  
|[omp_set_lock](../../../parallel/openmp/reference/omp-set-lock.md)|Blocks thread execution until a lock is available.|  
|[omp_set_nest_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)|Blocks thread execution until a lock is available.|  
|[omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md)|Enables nested parallelism.|  
|[omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md)|Sets the number of threads in subsequent parallel regions, unless overridden by a [num_threads](../../../parallel/openmp/reference/num-threads.md) clause.|  
|[omp_test_lock](../../../parallel/openmp/reference/omp-test-lock.md)|Attempts to set a lock but does not block thread execution.|  
|[omp_test_nest_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)|Attempts to set a nestable lock but does not block thread execution.|  
|[omp_unset_lock](../../../parallel/openmp/reference/omp-unset-lock.md)|Releases a lock.|  
|[omp_unset_nest_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)|Releases a nestable lock.|  
  
## See Also  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)