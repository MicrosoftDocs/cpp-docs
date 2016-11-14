---
title: "3.1.3 omp_get_max_threads Function | Microsoft Docs"
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
ms.assetid: 5548897c-546e-4d19-b37b-a76f6b30a0a9
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
# 3.1.3 omp_get_max_threads Function
The **omp_get_max_threads** function returns an integer that is guaranteed to be at least as large as the number of threads that would be used to form a team if a parallel region without a **num_threads** clause were to be encountered at that point in the code. The format is as follows:  
  
```  
#include <omp.h>  
int omp_get_max_threads(void);  
```  
  
 The following expresses a lower bound on the value of **omp_get_max_threads**:  
  
```  
  
threads-used-for-next-team  
 <= omp_get_max_threads  
  
```  
  
 Note that if a subsequent parallel region uses the **num_threads** clause to request a specific number of threads, the guarantee on the lower bound of the result of **omp_get_max_threads** no long holds.  
  
 The **omp_get_max_threads** function's return value can be used to dynamically allocate sufficient storage for all threads in the team formed at the subsequent parallel region.  
  
## Cross References:  
  
-   **omp_get_num_threads** function, see [Section 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) on page 37.  
  
-   **omp_set_num_threads** function, see [Section 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) on page 36.  
  
-   **omp_set_dynamic** function, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.  
  
-   **num_threads** clause, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.