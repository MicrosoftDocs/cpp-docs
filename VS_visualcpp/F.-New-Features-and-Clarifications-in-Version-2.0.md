---
title: "F. New Features and Clarifications in Version 2.0"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# F. New Features and Clarifications in Version 2.0
This appendix summarizes the key changes made to the OpenMP C/C++ specification in moving from version 1.0 to version 2.0. The following items are new features added to the specification:  
  
-   Commas are permitted in OpenMP directives ([Section 2.1](../VS_visualcpp/2.1-Directive-Format.md) on page 7).  
  
-   Addition of the `num_threads` clause. This clause allows a user to request a specific number of threads for a parallel construct ([Section 2.3](../VS_visualcpp/2.3-parallel-Construct.md) on page 8).  
  
-   The `threadprivate` directive has been extended to accept static block-scope variables ([Section 2.7.1](../VS_visualcpp/2.7.1-threadprivate-Directive.md) on page 23).  
  
-   C99 Variable Length Arrays are complete types, and thus can be specified anywhere complete types are allowed, for instance in the lists of `private`, `firstprivate`, and `lastprivate` clauses ([Section 2.7.2](../VS_visualcpp/2.7.2-Data-Sharing-Attribute-Clauses.md) on page 25).  
  
-   A private variable in a parallel region can be marked private again in a nested directive ([Section 2.7.2.1](../VS_visualcpp/2.7.2.1-private.md) on page 25).  
  
-   The `copyprivate` clause has been added. It provides a mechanism to use a private variable to broadcast a value from one member of a team to the other members. It is an alternative to using a shared variable for the value when providing such a shared variable would be difficult (for example, in a recursion requiring a different variable at each level). The `copyprivate` clause can only appear on the **single** directive ([Section 2.7.2.8](../VS_visualcpp/2.7.2.8-copyprivate.md) on page 32).  
  
-   Addition of timing routines `omp_get_wtick` and `omp_get_wtime` similar to the MPI routines. These functions are necessary for performing wall clock timings  ([Section 3.3.1](../VS_visualcpp/3.3.1-omp_get_wtime-Function.md) on page 44 and [Section 3.3.2](../VS_visualcpp/3.3.2-omp_get_wtick-Function.md) on page 45).  
  
-   An appendix with a list of implementation-defined behaviors in OpenMP C/C++ has been added. An implementation is required to define and document its behavior in these cases ([Appendix E](../VS_visualcpp/E.-Implementation-Defined-Behaviors-in-OpenMP-C-C--.md) on page 97).  
  
-   The following changes serve to clarify or correct features in the previous OpenMP API specification for C/C++:  
  
    -   Clarified that the behavior of `omp_set_nested` and `omp_set_dynamic` when `omp_in_parallel` returns nonzero is undefined ([Section 3.1.7](../VS_visualcpp/3.1.7-omp_set_dynamic-Function.md) on page 39, and [Section 3.1.9](../VS_visualcpp/3.1.9-omp_set_nested-Function.md) on page 40).  
  
    -   Clarified directive nesting when nested parallel is used ([Section 2.9](../VS_visualcpp/2.9-Directive-Nesting.md) on page 33).  
  
    -   The lock initialization and lock destruction functions can be called in a parallel region ([Section 3.2.1](../VS_visualcpp/3.2.1-omp_init_lock-and-omp_init_nest_lock-Functions.md) on page 42 and [Section 3.2.2](../VS_visualcpp/3.2.2-omp_destroy_lock-and-omp_destroy_nest_lock-Functions.md) on page 42).  
  
    -   New examples have been added ([Appendix A](../VS_visualcpp/A.-Examples.md) on page 51).