---
description: "Learn more about: E. Implementation-defined behaviors in OpenMP C/C++"
title: "E. Implementation-defined behaviors in OpenMP C/C++"
ms.date: "01/22/2019"
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
---
# E. Implementation-defined behaviors in OpenMP C/C++

This appendix summarizes the behaviors that are described as "implementation-defined" in this API.  Each behavior is cross-referenced back to its description in the main specification.

## Remarks

An implementation is required to define and document its behavior in these cases, but this list may be incomplete.

- **Number of threads:** If a parallel region is encountered while dynamic adjustment of the number of threads is disabled, and the number of threads requested for the parallel region is more than the number that the run-time system can supply, the behavior of the program is implementation-defined (see page 9).

   In Visual C++, for a non-nested parallel region, 64 threads (the maximum) will be provided.

- **Number of processors:** The number of physical processors actually hosting the threads at any given time is implementation-defined (see page 10).

   In Visual C++, this number isn't constant, and is controlled by the operating system.

- **Creating teams of threads:** The number of threads in a team that execute a nested parallel region is implementation-defined (see page 10).

   In Visual C++, this number is determined by the operating system.

- **schedule(runtime):** The decision about scheduling is deferred until run time. The schedule type and chunk size can be chosen at run time by setting the `OMP_SCHEDULE` environment variable. If this environment variable isn't set, the resulting schedule is implementation-defined (see page 13).

   In Visual C++, schedule type is `static` with no chunk size.

- **Default scheduling:** In the absence of the schedule clause, the default schedule is implementation-defined (see page 13).

   In Visual C++, the default schedule type is `static` with no chunk size.

- **ATOMIC:** It's implementation-defined whether an implementation replaces all `atomic` directives with `critical` directives that have the same unique name (see page 20).

   In Visual C++, if data modified by [atomic](reference/openmp-directives.md#atomic) isn't on a natural alignment or if it's one or two bytes long, all atomic operations that satisfy that property will use one critical section. Otherwise, critical sections won't be used.

- **[omp_get_num_threads](3-run-time-library-functions.md#312-omp_get_num_threads-function):** If the number of threads hasn't been explicitly set by the user, the default is implementation-defined (see page 9).

   In Visual C++, the default number of threads is equal to the number of processors.

- **[omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function):** The default for dynamic thread adjustment is implementation-defined.

   In Visual C++, the default is `FALSE`.

- **[omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function):** When nested parallelism is enabled, the number of threads used to execute nested parallel regions is implementation-defined.

   In Visual C++, the number of threads is determined by the operating system.

- [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule) environment variable: The default value for this environment variable is implementation-defined.

   In Visual C++, schedule type is `static` with no chunk size.

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) environment variable: If no value is specified for the `OMP_NUM_THREADS` environment variable, or if the value specified isn't a positive integer, or if the value is greater than the maximum number of threads the system can support, the number of threads to use is implementation-defined.

   In Visual C++, if value specified is zero or less, the number of threads is equal to the number of processors.  If value is greater than 64, the number of threads is 64.

- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) environment variable: The default value is implementation-defined.

   In Visual C++, the default is `FALSE`.
