---
title: "2.4.1 for Construct | Microsoft Docs"
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
ms.assetid: 27d2cbce-786b-4819-91d3-d55b2cc57a5e
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
# 2.4.1 for Construct
The **for** directive identifies an iterative work-sharing construct that specifies that the iterations of the associated loop will be executed in parallel. The iterations of the **for** loop are distributed across threads that already exist in the team executing the parallel construct to which it binds. The syntax of the **for** construct is as follows:  
  
```  
#pragma omp for [clause[[,] clause] ... ] new-linefor-loop  
```  
  
 The clause is one of the following:  
  
 **private(** *variable-list* **)**  
  
 **firstprivate(** *variable-list* **)**  
  
 **lastprivate(** *variable-list* **)**  
  
 **reduction(** *operator* **:** *variable-list***)**  
  
 **ordered**  
  
 **schedule(** *kind*[, *chunk_size*]**)**  
  
 **nowait**  
  
 The **for** directive places restrictions on the structure of the corresponding **for** loop. Specifically, the corresponding **for** loop must have canonical shape:  
  
 **for (** *init-expr* **;** *var  logical-op  b*; *incr-expr***)**  
  
 *init-expr*  
 One of the following:  
  
 *var* = *lb*  
  
 *integer-type var* = *lb*  
  
 *incr-expr*  
 One of the following:  
  
 ++*var*  
  
 *var* ++  
  
 -- *var*  
  
 *var* --  
  
 *var* += *incr*  
  
 *var* -= *incr*  
  
 *var* = *var* + *incr*  
  
 *var* = *incr* + *var*  
  
 *var* = *var* - *incr*  
  
 *var*  
 A signed integer variable. If this variable would otherwise be shared, it is implicitly made private for the duration of the **for**.   This variable must not be modified within the body of the **for** statement. Unless the variable is specified **lastprivate**, its value after the loop is indeterminate.  
  
 *logical-op*  
 One of the following:  
  
 <  
  
 \<=  
  
 >  
  
 \>=  
  
 *lb*, *b*, and *incr*  
 Loop invariant integer expressions. There is no synchronization during the evaluation of these expressions. Thus, any evaluated side effects produce indeterminate results.  
  
 Note that the canonical form allows the number of loop iterations to be computed on entry to the loop. This computation is performed with values in the type of *var*, after integral promotions. In particular, if value of *b* - *lb* + *incr* cannot be represented in that type, the result is indeterminate. Further, if *logical-op* is < or \<= then *incr-expr* must cause *var* to increase on each iteration of the loop.   If *logical-op* is > or >= then *incr-expr* must cause *var* to decrease on each iteration of the loop.  
  
 The **schedule** clause specifies how iterations of the **for** loop are divided among threads of the team. The correctness of a program must not depend on which thread executes a particular iteration. The value of *chunk_size*, if specified, must be a loop invariant integer expression with a positive value. There is no synchronization during the evaluation of this expression. Thus, any evaluated side effects produce indeterminate results. The schedule *kind* can be one of the following:  
  
 TABLE 2-1       **schedule** clause *kind* values  
  
|||  
|-|-|  
|static|When **schedule(static,** *chunk_size***)** is specified, iterations are divided into chunks of a size specified by *chunk_size*. The chunks are statically assigned to threads in the team in a round-robin fashion in the order of the thread number. When no *chunk_size* is specified, the iteration space is divided into chunks that are approximately equal in size, with one chunk assigned to each thread.|  
|dynamic|When **schedule(dynamic,** *chunk_size***)** is specified, the iterations are divided into a series of chunks, each containing *chunk_size* iterations. Each chunk is assigned to a thread that is waiting for an assignment. The thread executes the chunk of iterations and then waits for its next assignment, until no chunks remain to be assigned. Note that the last chunk to be assigned may have a smaller number of iterations. When no *chunk_size* is specified, it defaults to 1.|  
|guided|When **schedule(guided,** *chunk_size***)** is specified, the iterations are assigned to threads in chunks with decreasing sizes. When a thread finishes its assigned chunk of iterations, it is dynamically assigned another chunk, until none remain. For a *chunk_size* of 1, the size of each chunk is approximately the number of unassigned iterations divided by the number of threads. These sizes decrease approximately exponentially to 1. For a *chunk_size* with value *k* greater than 1, the sizes decrease approximately exponentially to *k*, except that the last chunk may have fewer than *k* iterations. When no *chunk_size* is specified, it defaults to 1.|  
|runtime|When **schedule(runtime)** is specified, the decision regarding scheduling is deferred until runtime. The schedule *kind* and size of the chunks can be chosen at run time by setting the environment variable **OMP_SCHEDULE**. If this environment variable is not set, the resulting schedule is implementation-defined. When  **schedule(runtime)** is specified, *chunk_size* must not be specified.|  
  
 In the absence of an explicitly defined **schedule** clause, the default **schedule** is implementation-defined.  
  
 An OpenMP-compliant program should not rely on a particular schedule for correct execution. A program should not rely on a schedule *kind* conforming precisely to the description given above, because it is possible to have variations in the implementations of the same schedule *kind* across different compilers. The descriptions can be used to select the schedule that is appropriate for a particular situation.  
  
 The **ordered** clause must be present when **ordered** directives bind to the **for** construct.  
  
 There is an implicit barrier at the end of a **for** construct unless a **nowait** clause is specified.  
  
 Restrictions to the **for** directive are as follows:  
  
-   The **for** loop must be a structured block, and, in addition, its execution must not be terminated by a **break** statement.  
  
-   The values of the loop control expressions of the **for** loop associated with a **for** directive must be the same for all the threads in the team.  
  
-   The **for** loop iteration variable must have a signed integer type.  
  
-   Only a single **schedule** clause can appear on a **for** directive.  
  
-   Only a single **ordered** clause can appear on a **for** directive.  
  
-   Only a single **nowait** clause can appear on a **for** directive.  
  
-   It is unspecified if or how often any side effects within the *chunk_size*, *lb*, *b*, or *incr* expressions occur.  
  
-   The value of the *chunk_size* expression must be the same for all threads in the team.  
  
## Cross References:  
  
-   **private**, **firstprivate**, **lastprivate**, and **reduction** clauses, see [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.  
  
-   **OMP_SCHEDULE** environment variable, see [Section 4.1](../../parallel/openmp/4-1-omp-schedule.md) on page 48.  
  
-   **ordered** construct, see [Section 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) on page 22.  
  
-   [Appendix D](../../parallel/openmp/d-using-the-schedule-clause.md), page 93, gives more information on using the schedule clause.