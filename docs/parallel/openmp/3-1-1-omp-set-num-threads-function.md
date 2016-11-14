---
title: "3.1.1 omp_set_num_threads Function | Microsoft Docs"
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
ms.assetid: b94cf2b5-8011-4a3b-ba56-676982642857
caps.latest.revision: 8
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
# 3.1.1 omp_set_num_threads Function
The `omp_set_num_threads` function sets the default number of threads to use for subsequent parallel regions that do not specify a `num_threads` clause. The format is as follows:  
  
```  
#include <omp.h>  
void omp_set_num_threads(int num_threads);  
```  
  
 The value of the parameter *num_threads* must be a positive integer. Its effect depends upon whether dynamic adjustment of the number of threads is enabled. For a comprehensive set of rules about the interaction between the `omp_set_num_threads` function and dynamic adjustment of threads, see Section 2.3 on page 8.  
  
 This function has the effects described above when called from a portion of the program where the `omp_in_parallel` function returns zero. If it is called from a portion of the program where the `omp_in_parallel` function returns a nonzero value, the behavior of this function is undefined.  
  
 This call has precedence over the `OMP_NUM_THREADS` environment variable. The default value for the number of threads, which may be established by calling `omp_set_num_threads` or by setting the `OMP_NUM_THREADS` environment variable, can be explicitly overridden on a single **parallel** directive by specifying the `num_threads` clause.  
  
## Cross References:  
  
-   `omp_set_dynamic` function, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.  
  
-   `omp_get_dynamic` function, see [Section 3.1.8](../../parallel/openmp/3-1-8-omp-get-dynamic-function.md) on page 40.  
  
-   `OMP_NUM_THREADS` environment variable, see [Section 4.2](../../parallel/openmp/4-2-omp-num-threads.md) on page 48, and Section 2.3 on page 8.  
  
-   `num_threads` clause, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8