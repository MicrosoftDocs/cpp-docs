---
title: "4.2 OMP_NUM_THREADS | Microsoft Docs"
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
ms.assetid: 49dd55dd-25d5-4a5a-a998-cc7f47b2dae2
caps.latest.revision: 6
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
# 4.2 OMP_NUM_THREADS
The **OMP_NUM_THREADS** environment variable sets the default number of threads to use during execution, unless that number is explicitly changed by calling the **omp_set_num_threads** library routine or by an explicit **num_threads** clause on a **parallel** directive.  
  
 The value of the **OMP_NUM_THREADS** environment variable must be a positive integer. Its effect depends upon whether dynamic adjustment of the number of threads is enabled. For a comprehensive set of rules about the interaction between the **OMP_NUM_THREADS** environment variable and dynamic adjustment of threads, see Section 2.3 on page 8.  
  
 If no value is specified for the **OMP_NUM_THREADS** environment variable, or if the value specified is not a positive integer, or if the value is greater than the maximum number of threads the system can support, the number of threads to use is implementation-defined.  
  
 Example:  
  
```  
setenv OMP_NUM_THREADS 16  
```  
  
## Cross References:  
  
-   **num_threads** clause, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.  
  
-   **omp_set_num_threads** function, see [Section 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) on page 36.  
  
-   **omp_set_dynamic** function, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.