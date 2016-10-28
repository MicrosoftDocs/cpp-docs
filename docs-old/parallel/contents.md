---
title: "Contents"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b7858099-7d7f-4cd9-9fa0-fba4832f2dd2
caps.latest.revision: 5
ms.author: "mithom"
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
# Contents
[1. Introduction](../parallel/1.-introduction.md)  
  
 [1.1 Scope](../parallel/1.1-scope.md)  
  
 [1.2 Definition of Terms](../parallel/1.2-definition-of-terms.md)  
  
 [1.3 Execution Model](../parallel/1.3-execution-model.md)  
  
 [1.4 Compliance](../parallel/1.4-compliance.md)  
  
 [1.5 Normative References](../parallel/1.5-normative-references.md)  
  
 [1.6 Organization](../parallel/1.6-organization.md)  
  
 [2. Directives](../parallel/2.-directives.md)  
  
 [2.1 Directive Format](../parallel/2.1-directive-format.md)  
  
 [2.2 Conditional Compilation](../parallel/2.2-conditional-compilation.md)  
  
 [2.3 parallel Construct](../parallel/2.3-parallel-construct.md)  
  
 [2.4 Work-sharing Constructs](../parallel/2.4-work-sharing-constructs.md)  
  
 [2.4.1 for Construct](../parallel/2.4.1-for-construct.md)  
  
 [2.4.2 sections Construct](../parallel/2.4.2-sections-construct.md)  
  
 [2.4.3 single Construct](../parallel/2.4.3-single-construct.md)  
  
 [2.5 Combined Parallel Work-sharing Constructs](../parallel/2.5-combined-parallel-work-sharing-constructs.md)  
  
 [2.5.1 parallel for Construct](../parallel/2.5.1-parallel-for-construct.md)  
  
 [2.5.2 parallel sections Construct](../parallel/2.5.2-parallel-sections-construct.md)  
  
 [2.6 Master and Synchronization Directives](../parallel/2.6-master-and-synchronization-directives.md)  
  
 [2.6.1 master Construct](../parallel/2.6.1-master-construct.md)  
  
 [2.6.2 critical Construct](../parallel/2.6.2-critical-construct.md)  
  
 [2.6.3 barrier Directive](../parallel/2.6.3-barrier-directive.md)  
  
 [2.6.4 atomic Construct](../parallel/2.6.4-atomic-construct.md)  
  
 [2.6.5 flush Directive](../parallel/2.6.5-flush-directive.md)  
  
 [2.6.6 ordered Construct](../parallel/2.6.6-ordered-construct.md)  
  
 [2.7 Data Environment](../parallel/2.7-data-environment.md)  
  
 [2.7.1 threadprivate Directive](../parallel/2.7.1-threadprivate-directive.md)  
  
 [2.7.2 Data-Sharing Attribute Clauses](../parallel/2.7.2-data-sharing-attribute-clauses.md)  
  
 [2.7.2.1 private](../parallel/2.7.2.1-private.md)  
  
 [2.7.2.2 firstprivate](../parallel/2.7.2.2-firstprivate.md)  
  
 [2.7.2.3 lastprivate](../parallel/2.7.2.3-lastprivate.md)  
  
 [2.7.2.4 shared](../parallel/2.7.2.4-shared.md)  
  
 [2.7.2.5 default](../parallel/2.7.2.5-default.md)  
  
 [2.7.2.6 reduction](../parallel/2.7.2.6-reduction.md)  
  
 [2.7.2.7 copyin](../parallel/2.7.2.7-copyin.md)  
  
 [2.7.2.8 copyprivate](../parallel/2.7.2.8-copyprivate.md)  
  
 [2.8 Directive Binding](../parallel/2.8-directive-binding.md)  
  
 [2.9 Directive Nesting](../parallel/2.9-directive-nesting.md)  
  
 [3. Run-time Library Functions](../parallel/3.-run-time-library-functions.md)  
  
 [3.1 Execution Environment Functions](../parallel/3.1-execution-environment-functions.md)  
  
 [3.1.1 omp_set_num_threads Function](../parallel/3.1.1-omp_set_num_threads-function.md)  
  
 [3.1.2 omp_get_num_threads Function](../parallel/3.1.2-omp_get_num_threads-function.md)  
  
 [3.1.3 omp_get_max_threads Function](../parallel/3.1.3-omp_get_max_threads-function.md)  
  
 [3.1.4 omp_get_thread_num Function](../parallel/3.1.4-omp_get_thread_num-function.md)  
  
 [3.1.5 omp_get_num_procs Function](../parallel/3.1.5-omp_get_num_procs-function.md)  
  
 [3.1.6 omp_in_parallel Function](../parallel/3.1.6-omp_in_parallel-function.md)  
  
 [3.1.7 omp_set_dynamic Function](../parallel/3.1.7-omp_set_dynamic-function.md)  
  
 [3.1.8 omp_get_dynamic Function](../parallel/3.1.8-omp_get_dynamic-function.md)  
  
 [3.1.9 omp_set_nested Function](../parallel/3.1.9-omp_set_nested-function.md)  
  
 [3.1.10 omp_get_nested Function](../parallel/3.1.10-omp_get_nested-function.md)  
  
 [3.2 Lock Functions](../parallel/3.2-lock-functions.md)  
  
 [3.2.1 omp_init_lock and omp_init_nest_lock Functions](../parallel/3.2.1-omp_init_lock-and-omp_init_nest_lock-functions.md)  
  
 [3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions](../parallel/3.2.2-omp_destroy_lock-and-omp_destroy_nest_lock-functions.md)  
  
 [3.2.3 omp_set_lock and omp_set_nest_lock Functions](../parallel/3.2.3-omp_set_lock-and-omp_set_nest_lock-functions.md)  
  
 [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../parallel/3.2.4-omp_unset_lock-and-omp_unset_nest_lock-functions.md)  
  
 [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../parallel/3.2.5-omp_test_lock-and-omp_test_nest_lock-functions.md)  
  
 [3.3 Timing Routines](../parallel/3.3-timing-routines.md)  
  
 [3.3.1 omp_get_wtime Function](../parallel/3.3.1-omp_get_wtime-function.md)  
  
 [3.3.2 omp_get_wtick Function](../parallel/3.3.2-omp_get_wtick-function.md)  
  
 [4. Environment Variables](../parallel/4.-environment-variables.md)  
  
 [4.1 OMP_SCHEDULE](../parallel/4.1-omp_schedule.md)  
  
 [4.2 OMP_NUM_THREADS](../parallel/4.2-omp_num_threads.md)  
  
 [4.3 OMP_DYNAMIC](../parallel/4.3-omp_dynamic.md)  
  
 [4.4 OMP_NESTED](../parallel/4.4-omp_nested.md)  
  
 [A. Examples](../parallel/a.-examples.md)  
  
 [A.1 Executing a Simple Loop in Parallel](../parallel/a.1---executing-a-simple-loop-in-parallel.md)  
  
 [A.2 Specifying Conditional Compilation](../parallel/a.2---specifying-conditional-compilation.md)  
  
 [A.3 Using Parallel Regions](../parallel/a.3---using-parallel-regions.md)  
  
 [A.4 Using the nowait Clause](../parallel/a.4---using-the-nowait-clause.md)  
  
 [A.5 Using the critical Directive](../parallel/a.5---using-the-critical-directive.md)  
  
 [A.6 Using the lastprivate Clause](../parallel/a.6---using-the-lastprivate-clause.md)  
  
 [A.7 Using the reduction Clause](../parallel/a.7---using-the-reduction-clause.md)  
  
 [A.8 Specifying Parallel Sections](../parallel/a.8---specifying-parallel-sections.md)  
  
 [A.9 Using single Directives](../parallel/a.9---using-single-directives.md)  
  
 [A.10 Specifying Sequential Ordering](../parallel/a.10---specifying-sequential-ordering.md)  
  
 [A.11 Specifying a Fixed Number of Threads](../parallel/a.11---specifying-a-fixed-number-of-threads.md)  
  
 [A.12 Using the atomic Directive](../parallel/a.12---using-the-atomic-directive.md)  
  
 [A.13 Using the flush Directive with a List](../parallel/a.13---using-the-flush-directive-with-a-list.md)  
  
 [A.14 Using the flush Directive without a List](../parallel/a.14---using-the-flush-directive-without-a-list.md)  
  
 [A.15 Determining the Number of Threads Used](../parallel/a.15---determining-the-number-of-threads-used.md)  
  
 [A.16 Using Locks](../parallel/a.16---using-locks.md)  
  
 [A.17 Using Nestable Locks](../parallel/a.17---using-nestable-locks.md)  
  
 [A.18 Nested for Directives](../parallel/a.18---nested-for-directives.md)  
  
 [A.19 Examples Showing Incorrect Nesting of Work-sharing Directives](../parallel/a.19---examples-showing-incorrect-nesting-of-work-sharing-directives.md)  
  
 [A.20 Binding of barrier Directives](../parallel/a.20---binding-of-barrier-directives.md)  
  
 [A.21 Scoping Variables with the private Clause](../parallel/a.21---scoping-variables-with-the-private-clause.md)  
  
 [A.22 Using the default(none) Clause](../parallel/a.22---using-the-default-none--clause.md)  
  
 [A.23 Examples of the ordered Directive](../parallel/a.23---examples-of-the-ordered-directive.md)  
  
 [A.24 Example of the private Clause](../parallel/a.24---example-of-the-private-clause.md)  
  
 [A.25 Examples of the copyprivate Data Attribute Clause](../parallel/a.25---examples-of-the-copyprivate-data-attribute-clause.md)  
  
 [A.26 Using the threadprivate Directive](../parallel/a.26---using-the-threadprivate-directive.md)  
  
 [A.27 Use of C99 Variable Length Arrays](../parallel/a.27---use-of-c99-variable-length-arrays.md)  
  
 [A.28 Use of num_threads Clause](../parallel/a.28---use-of-num_threads-clause.md)  
  
 [A.29 Use of Work-Sharing Constructs Inside a critical Construct](../parallel/a.29---use-of-work-sharing-constructs-inside-a-critical-construct.md)  
  
 [A.30 Use of Reprivatization](../parallel/a.30---use-of-reprivatization.md)  
  
 [A.31 Thread-Safe Lock Functions](../parallel/a.31---thread-safe-lock-functions.md)  
  
 [B. Stubs for Run-time Library Functions](../parallel/b.-stubs-for-run-time-library-functions.md)  
  
 [C. OpenMP C and C++ Grammar](../parallel/c.-openmp-c-and-c---grammar.md)  
  
 [C.1 Notation](../parallel/c.1-notation.md)  
  
 [C.2 Rules](../parallel/c.2-rules.md)  
  
 [D. Using the schedule Clause](../parallel/d.-using-the-schedule-clause.md)  
  
 [E. Implementation-Defined Behaviors in OpenMP C/C++](../parallel/e.-implementation-defined-behaviors-in-openmp-c-c--.md)  
  
 [F. New Features and Clarifications in Version 2.0](../parallel/f.-new-features-and-clarifications-in-version-2.0.md)  
  
## See Also  
 [C and C++ Application Program Interface](../parallel/openmp-c-and-c---application-program-interface.md)