---
title: "2.3 parallel Construct | Microsoft Docs"
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
ms.assetid: 190eacdf-2c16-4c06-8cb7-ac60eb211425
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
# 2.3 parallel Construct
The following directive defines a parallel region, which is a region of the program that is to be executed by multiple threads in parallel. This is the fundamental construct that starts parallel execution.  
  
```  
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block  
```  
  
 The *clause* is one of the following:  
  
 **if(** *scalar-expression* **)**  
  
 **private(** *variable-list* **)**  
  
 **firstprivate(** *variable-list* **)**  
  
 **default(shared &#124; none)**  
  
 **shared(** *variable-list* **)**  
  
 **copyin(** *variable-list* **)**  
  
 **reduction(** *operator* **:**  *variable-list* **)**  
  
 **num_threads(** *integer-expression* **)**  
  
 When a thread encounters a parallel construct, a team of threads is created if one of the following cases is true:  
  
-   No **if** clause is present.  
  
-   The **if** expression evaluates to a nonzero value.  
  
 This thread becomes the master thread of the team, with a thread number of 0, and all threads in the team, including the master thread, execute the region in parallel. If the value of the **if** expression is zero, the region is serialized.  
  
 To determine the number of threads that are requested, the following rules will be considered in order. The first rule whose condition is met will be applied:  
  
1.  If the **num_threads** clause is present, then the value of the integer expression is the number of threads requested.  
  
2.  If the **omp_set_num_threads** library function has been called, then the value of the argument in the most recently executed call is the number of threads requested.  
  
3.  If the environment variable **OMP_NUM_THREADS** is defined, then the value of this environment variable is the number of threads requested.  
  
4.  If none of the methods above were used, then the number of threads requested is implementation-defined.  
  
 If the **num_threads** clause is present then it supersedes the number of threads requested by the **omp_set_num_threads** library function or the **OMP_NUM_THREADS** environment variable only for the parallel region it is applied to. Subsequent parallel regions are not affected by it.  
  
 The number of threads that execute the parallel region also depends upon whether or not dynamic adjustment of the number of threads is enabled. If dynamic adjustment is disabled, then the requested number of threads will execute the parallel region. If dynamic adjustment is enabled then the requested number of threads is the maximum number of threads that may execute the parallel region.  
  
 If a parallel region is encountered while dynamic adjustment of the number of threads is disabled, and the number of threads requested for the parallel region exceeds the number that the run-time system can supply, the behavior of the program is implementation-defined. An implementation may, for example, interrupt the execution of the program, or it may serialize the parallel region.  
  
 The **omp_set_dynamic** library function and the **OMP_DYNAMIC** environment variable can be used to enable and disable dynamic adjustment of the number of threads.  
  
 The number of physical processors actually hosting the threads at any given time is implementation-defined. Once created, the number of threads in the team remains constant for the duration of that parallel region. It can be changed either explicitly by the user or automatically by the run-time system from one parallel region to another.  
  
 The statements contained within the dynamic extent of the parallel region are executed by each thread, and each thread can execute a path of statements that is different from the other threads. Directives encountered outside the lexical extent of a parallel region are referred to as orphaned directives.  
  
 There is an implied barrier at the end of a parallel region. Only the master thread of the team continues execution at the end of a parallel region.  
  
 If a thread in a team executing a parallel region encounters another parallel construct, it creates a new team, and it becomes the master of that new team. Nested parallel regions are serialized by default. As a result, by default, a nested parallel region is executed by a team composed of one thread. The default behavior may be changed by using either the runtime library function **omp_set_nested** or the environment variable **OMP_NESTED**. However, the number of threads in a team that execute a nested parallel region is implementation-defined.  
  
 Restrictions to the **parallel** directive are as follows:  
  
-   At most one **if** clause can appear on the directive.  
  
-   It is unspecified whether any side effects inside the if expression or **num_threads** expression occur.  
  
-   A **throw** executed inside a parallel region must cause execution to resume within the dynamic extent of the same structured block, and it must be caught by the same thread that threw the exception.  
  
-   Only a single **num_threads** clause can appear on the directive. The **num_threads** expression is evaluated outside the context of the parallel region, and must evaluate to a positive integer value.  
  
-   The order of evaluation of the **if** and **num_threads** clauses is unspecified.  
  
## Cross References:  
  
-   **private**, **firstprivate**, **default**, **shared**, **copyin**, and **reduction** clauses, see [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.  
  
-   **OMP_NUM_THREADS** environment variable, [Section 4.2](../../parallel/openmp/4-2-omp-num-threads.md) on page 48.  
  
-   **omp_set_dynamic** library function, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.  
  
-   **OMP_DYNAMIC** environment variable, see [Section 4.3](../../parallel/openmp/4-3-omp-dynamic.md) on page 49.  
  
-   **omp_set_nested** function, see [Section 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) on page 40.  
  
-   **OMP_NESTED** environment variable, see [Section 4.4](../../parallel/openmp/4-4-omp-nested.md) on page 49.  
  
-   **omp_set_num_threads** library function, see [Section 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) on page 36.