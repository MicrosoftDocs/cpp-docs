---
title: "F. New Features and Clarifications in Version 2.0 | Microsoft Docs"
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
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
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
# F. New Features and Clarifications in Version 2.0
This appendix summarizes the key changes made to the OpenMP C/C++ specification in moving from version 1.0 to version 2.0. The following items are new features added to the specification:  
  
-   Commas are permitted in OpenMP directives ([Section 2.1](../../parallel/openmp/2-1-directive-format.md) on page 7).  
  
-   Addition of the `num_threads` clause. This clause allows a user to request a specific number of threads for a parallel construct ([Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8).  
  
-   The `threadprivate` directive has been extended to accept static block-scope variables ([Section 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) on page 23).  
  
-   C99 Variable Length Arrays are complete types, and thus can be specified anywhere complete types are allowed, for instance in the lists of `private`, `firstprivate`, and `lastprivate` clauses ([Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25).  
  
-   A private variable in a parallel region can be marked private again in a nested directive ([Section 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) on page 25).  
  
-   The `copyprivate` clause has been added. It provides a mechanism to use a private variable to broadcast a value from one member of a team to the other members. It is an alternative to using a shared variable for the value when providing such a shared variable would be difficult (for example, in a recursion requiring a different variable at each level). The `copyprivate` clause can only appear on the **single** directive ([Section 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) on page 32).  
  
-   Addition of timing routines `omp_get_wtick` and `omp_get_wtime` similar to the MPI routines. These functions are necessary for performing wall clock timings  ([Section 3.3.1](../../parallel/openmp/3-3-1-omp-get-wtime-function.md) on page 44 and [Section 3.3.2](../../parallel/openmp/3-3-2-omp-get-wtick-function.md) on page 45).  
  
-   An appendix with a list of implementation-defined behaviors in OpenMP C/C++ has been added. An implementation is required to define and document its behavior in these cases ([Appendix E](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md) on page 97).  
  
-   The following changes serve to clarify or correct features in the previous OpenMP API specification for C/C++:  
  
    -   Clarified that the behavior of `omp_set_nested` and `omp_set_dynamic` when `omp_in_parallel` returns nonzero is undefined ([Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39, and [Section 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) on page 40).  
  
    -   Clarified directive nesting when nested parallel is used ([Section 2.9](../../parallel/openmp/2-9-directive-nesting.md) on page 33).  
  
    -   The lock initialization and lock destruction functions can be called in a parallel region ([Section 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) on page 42 and [Section 3.2.2](../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md) on page 42).  
  
    -   New examples have been added ([Appendix A](../../parallel/openmp/a-examples.md) on page 51).