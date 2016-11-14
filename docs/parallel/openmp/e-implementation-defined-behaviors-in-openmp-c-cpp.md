---
title: "E. Implementation-Defined Behaviors in OpenMP C-C++ | Microsoft Docs"
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
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
caps.latest.revision: 9
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
# E. Implementation-Defined Behaviors in OpenMP C/C++
This appendix summarizes the behaviors that are described as "implementation-defined" in this API.  Each behavior is cross-referenced back to its description in the main specification.  
  
## Remarks  
 An implementation is required to define and document its behavior in these cases, but this list may be incomplete.  
  
-   **Number of threads:** If a parallel region is encountered while dynamic adjustment of the number of threads is disabled, and the number of threads requested for the parallel region exceeds the number that the run-time system can supply, the behavior of the program is implementation-defined (see page 9).  
  
     In Visual C++, for a non-nested parallel region, 64 threads (the maximum) will be provided.  
  
-   **Number of processors:** The number of physical processors actually hosting the threads at any given time is implementation-defined (see page 10).  
  
     In Visual C++, this number is not constant, and is controlled by the operating system.  
  
-   **Creating teams of threads:** The number of threads in a team that execute a nested parallel region is implementation-defined.(see page 10).  
  
     In Visual C++, this is determined by the operating system.  
  
-   **schedule(runtime):** The decision regarding scheduling is deferred until run time. The schedule type and chunk size can be chosen at run time by setting the `OMP_SCHEDULE` environment variable. If this environment variable is not set, the resulting schedule is implementation-defined (see page 13).  
  
     In Visual C++, schedule type is `static` with no chunk size.  
  
-   **Default scheduling:** In the absence of the schedule clause, the default schedule is implementation-defined (see page 13).  
  
     In Visual C++, the default schedule type is `static` with no chunk size.  
  
-   **ATOMIC:** It is implementation-defined whether an implementation replaces all `atomic` directives with **critical** directives that have the same unique name (see page 20).  
  
     In Visual C++, if data modified by [atomic](../../parallel/openmp/reference/atomic.md) is not on a natural alignment or if it is 1 or 2 bytes long all atomic operations that satisfy that property will use one critical section. Otherwise, critical sections will not be used.  
  
-   **omp_get_num_threads:** If the number of threads has not been explicitly set by the user, the default is implementation-defined (see page 9, and [Section 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) on page 37).  
  
     In Visual C++, the default number of threads is equal to the number of processors.  
  
-   **omp_set_dynamic:** The default for dynamic thread adjustment is implementation-defined (see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39).  
  
     In Visual C++, the default is `FALSE`.  
  
-   **omp_set_nested:** When nested parallelism is enabled, the number of threads used to execute nested parallel regions is implementation-defined (see [Section 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) on page 40).  
  
     In Visual C++, the number of threads is determined by the operating system.  
  
-   `OMP_SCHEDULE` environment variable: The default value for this environment variable is implementation-defined (see [Section 4.1](../../parallel/openmp/4-1-omp-schedule.md) on page 48).  
  
     In Visual C++, schedule type is `static` with no chunk size.  
  
-   `OMP_NUM_THREADS` environment variable: If no value is specified for the `OMP_NUM_THREADS` environment variable, or if the value specified is not a positive integer, or if the value is greater than the maximum number of threads the system can support, the number of threads to use is implementation-defined (see [Section 4.2](../../parallel/openmp/4-2-omp-num-threads.md) on page 48).  
  
     In Visual C++, if value specified is zero or less, the number of threads is equal to the number of processors.  If value is greater than 64, the number of threads is 64.  
  
-   `OMP_DYNAMIC` environment variable: The default value is implementation-defined (see [Section 4.3](../../parallel/openmp/4-3-omp-dynamic.md) on page 49).  
  
     In Visual C++, the default is `FALSE`.