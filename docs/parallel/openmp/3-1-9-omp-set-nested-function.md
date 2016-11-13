---
title: "3.1.9 omp_set_nested Function | Microsoft Docs"
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
ms.assetid: e4afc3aa-bb96-4314-9849-fd5df5f437d9
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
# 3.1.9 omp_set_nested Function
The **omp_set_nested** function enables or disables nested parallelism. The format is as follows:  
  
```  
#include <omp.h>  
void omp_set_nested(int nested);  
```  
  
 If *nested* evaluates to 0, nested parallelism is disabled, which is the default, and nested parallel regions are serialized and executed by the current thread. If *nested* evaluates to a nonzero value, nested parallelism is enabled, and parallel regions that are nested may deploy additional threads to form nested teams.  
  
 This function has the effects described above when called from a portion of the program where the **omp_in_parallel** function returns zero. If it is called from a portion of the program where the **omp_in_parallel** function returns a nonzero value, the behavior of this function is undefined.  
  
 This call has precedence over the **OMP_NESTED** environment variable.  
  
 When nested parallelism is enabled, the number of threads used to execute nested parallel regions is implementation-defined. As a result, OpenMP-compliant implementations are allowed to serialize nested parallel regions even when nested parallelism is enabled.  
  
## Cross References:  
  
-   **OMP_NESTED** environment variable, see [Section 4.4](../../parallel/openmp/4-4-omp-nested.md) on page 49.  
  
-   **omp_in_parallel** function, see [Section 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) on page 38.