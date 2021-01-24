---
description: "Learn more about: F. New features and clarifications in version 2.0"
title: "F. New features and clarifications in version 2.0"
ms.date: "01/22/2019"
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
---
# F. New features and clarifications in version 2.0

This appendix summarizes the key changes made to the OpenMP C/C++ specification in moving from version 1.0 to version 2.0. The following items are new features added to the specification:

- Commas are allowed in OpenMP [directives](2-directives.md#21-directive-format).

- Addition of the `num_threads` clause. This clause allows a user to request a specific number of threads for a [parallel construct](2-directives.md#23-parallel-construct).

- The [threadprivate](2-directives.md#271-threadprivate-directive) directive has been extended to accept static block-scope variables.

- C99 Variable Length Arrays are complete types and can be specified anywhere complete types are allowed, such as in the lists of `private`, `firstprivate`, and `lastprivate` clauses (see [section 2.7.2](2-directives.md#272-data-sharing-attribute-clauses)).

- A private variable in a parallel region can be marked [private](2-directives.md#2721-private) again in a nested directive.

- The `copyprivate` clause has been added. It provides a mechanism to use a private variable to broadcast a value from one member of a team to the other members. It's an alternative to using a shared variable for the value when providing such a shared variable would be difficult (for example, in a recursion requiring a different variable at each level). The [copyprivate](2-directives.md#2728-copyprivate) clause can only appear on the `single` directive.

- Addition of timing routines [omp_get_wtick](3-run-time-library-functions.md#332-omp_get_wtick-function) and [omp_get_wtime](3-run-time-library-functions.md#331-omp_get_wtime-function) similar to the MPI routines. These functions are necessary to do wall clock timings.

- An appendix with a list of [implementation-defined behaviors](e-implementation-defined-behaviors-in-openmp-c-cpp.md) in OpenMP C/C++ has been added. An implementation is required to define and document its behavior in these cases.

- The following changes serve to clarify or correct features in the previous OpenMP API specification for C/C++:

  - Clarified that the behavior of [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) and [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) when `omp_in_parallel` returns nonzero is undefined.

  - Clarified [directive nesting](2-directives.md#29-directive-nesting) when nested parallel is used.

  - The [lock initialization](3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions) and [lock destruction](3-run-time-library-functions.md#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) functions can be called in a parallel region.

  - New examples have been added to [appendix A](a-examples.md).
