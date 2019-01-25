---
title: "F. New features and clarifications in version 2.0"
ms.date: "01/22/2019"
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
---
# F. New features and clarifications in version 2.0

This appendix summarizes the key changes made to the OpenMP C/C++ specification in moving from version 1.0 to version 2.0. The following items are new features added to the specification:

- Commas are allowed in OpenMP [directives](2-1-directive-format.md).

- Addition of the `num_threads` clause. This clause allows a user to request a specific number of threads for a [parallel construct](2-3-parallel-construct.md).

- The [threadprivate](2-7-1-threadprivate-directive.md) directive has been extended to accept static block-scope variables.

- C99 Variable Length Arrays are complete types and can be specified anywhere complete types are allowed, such as in the lists of `private`, `firstprivate`, and `lastprivate` clauses (see [section 2.7.2](2-7-2-data-sharing-attribute-clauses.md)).

- A private variable in a parallel region can be marked [private](2-7-2-1-private.md) again in a nested directive.

- The `copyprivate` clause has been added. It provides a mechanism to use a private variable to broadcast a value from one member of a team to the other members. It's an alternative to using a shared variable for the value when providing such a shared variable would be difficult (for example, in a recursion requiring a different variable at each level). The [copyprivate](2-7-2-8-copyprivate.md) clause can only appear on the `single` directive.

- Addition of timing routines [omp_get_wtick](3-3-2-omp-get-wtick-function.md) and [omp_get_wtime](3-3-1-omp-get-wtime-function.md) similar to the MPI routines. These functions are necessary to do wall clock timings.

- An appendix with a list of [implementation-defined behaviors](e-implementation-defined-behaviors-in-openmp-c-cpp.md) in OpenMP C/C++ has been added. An implementation is required to define and document its behavior in these cases.

- The following changes serve to clarify or correct features in the previous OpenMP API specification for C/C++:

  - Clarified that the behavior of [omp_set_nested](3-1-9-omp-set-nested-function.md) and [omp_set_dynamic](3-1-7-omp-set-dynamic-function.md) when `omp_in_parallel` returns nonzero is undefined.

  - Clarified [directive nesting](2-9-directive-nesting.md) when nested parallel is used.

  - The [lock initialization](3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) and [lock destruction](3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md) functions can be called in a parallel region.

  - New examples have been added to [appendix A](a-examples.md).