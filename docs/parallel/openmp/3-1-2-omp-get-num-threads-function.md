---
title: "3.1.2 omp_get_num_threads Function | Microsoft Docs"
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
ms.assetid: bcdd76e2-d96b-4884-ac8f-e55fc0c42801
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
# 3.1.2 omp_get_num_threads Function
The **omp_get_num_threads** function returns the number of threads currently in the team executing the parallel region from which it is called. The format is as follows:  
  
```  
#include <omp.h>  
int omp_get_num_threads(void);  
```  
  
 The **num_threads** clause, the **omp_set_num_threads** function, and the **OMP_NUM_THREADS** environment variable control the number of threads in a team.  
  
 If the number of threads has not been explicitly set by the user, the default is implementation-defined. This function binds to the closest enclosing **parallel** directive. If called from a serial portion of a program, or from a nested parallel region that is serialized, this function returns 1.  
  
## Cross References:  
  
-   **OMP_NUM_THREADS** environment variable, see [Section 4.2](../../parallel/openmp/4-2-omp-num-threads.md) on page 48.  
  
-   **num_threads** clause, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.  
  
-   **parallel** construct, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.