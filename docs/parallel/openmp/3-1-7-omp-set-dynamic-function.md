---
title: "3.1.7 omp_set_dynamic Function | Microsoft Docs"
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
ms.assetid: 1fba961b-b82c-4a1e-ab0f-e4be826e50ab
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
# 3.1.7 omp_set_dynamic Function
The **omp_set_dynamic** function enables or disables dynamic adjustment of the number of threads available for execution of parallel regions. The format is as follows:  
  
```  
#include <omp.h>  
void omp_set_dynamic(int dynamic_threads);  
```  
  
 If *dynamic_threads* evaluates to a nonzero value, the number of threads that are used for executing subsequent parallel regions may be adjusted automatically by the run-time environment to best utilize system resources. As a consequence, the number of threads specified by the user is the maximum thread count. The number of threads in the team executing a parallel region remains fixed for the duration of that parallel region and is reported by the **omp_get_num_threads** function.  
  
 If *dynamic_threads* evaluates to 0, dynamic adjustment is disabled.  
  
 This function has the effects described above when called from a portion of the program where the **omp_in_parallel** function returns zero. If it is called from a portion of the program where the **omp_in_parallel** function returns a nonzero value, the behavior of this function is undefined.  
  
 A call to **omp_set_dynamic** has precedence over the **OMP_DYNAMIC** environment variable.  
  
 The default for the dynamic adjustment of threads is implementation-defined. As a result, user codes that depend on a specific number of threads for correct execution should explicitly disable dynamic threads. Implementations are not required to provide the ability to dynamically adjust the number of threads, but they are required to provide the interface in order to support portability across all platforms.  
  
## Cross References:  
  
-   **omp_get_num_threads** function, see [Section 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) on page 37.  
  
-   **OMP_DYNAMIC** environment variable, see [Section 4.3](../../parallel/openmp/4-3-omp-dynamic.md) on page 49.  
  
-   **omp_in_parallel** function, see [Section 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) on page 38.