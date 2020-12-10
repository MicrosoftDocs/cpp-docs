---
description: "Learn more about: 4. Environment variables"
title: "4. Environment variables"
ms.date: "01/16/2019"
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
---
# 4. Environment variables

This chapter describes the OpenMP C and C++ API environment variables (or similar platform-specific mechanisms) that control the execution of parallel code.  The names of environment variables must be uppercase. The values assigned to them are case insensitive and may have leading and trailing white space.  Modifications to the values after the program has started are ignored.

The environment variables are as follows:

- [OMP_SCHEDULE](#41-omp_schedule) sets the run-time schedule type and chunk size.
- [OMP_NUM_THREADS](#42-omp_num_threads) sets the number of threads to use during execution.
- [OMP_DYNAMIC](#43-omp_dynamic) enables or disables the dynamic adjustment of the number of threads.
- [OMP_NESTED](#44-omp_nested) enables or disables nested parallelism.

The examples in this chapter only demonstrate how these variables might be set in Unix C shell (csh) environments. In the Korn shell and DOS environments, the actions are similar:

csh:  
`setenv OMP_SCHEDULE "dynamic"`

ksh:  
`export OMP_SCHEDULE="dynamic"`

DOS:  
`set OMP_SCHEDULE="dynamic"`

## <a name="41-omp_schedule"></a> 4.1 OMP_SCHEDULE

`OMP_SCHEDULE` applies only to `for` and `parallel for` directives that have the schedule type `runtime`. The schedule type and chunk size for all such loops can be set at run time. Set this environment variable to any recognized schedule type and to an optional *chunk_size*.

For `for` and `parallel for` directives that have a schedule type other than `runtime`, `OMP_SCHEDULE` is ignored. The default value for this environment variable is implementation-defined. If the optional *chunk_size* is set, the value must be positive. If *chunk_size* isn't set, a value of 1 is assumed, except when the schedule is `static`. For a `static` schedule, the default chunk size is set to the loop iteration space divided by the number of threads applied to the loop.

Example:

```csh
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

### Cross-references

- [for](2-directives.md#241-for-construct) directive
- [parallel for](2-directives.md#251-parallel-for-construct) directive

## <a name="42-omp_num_threads"></a> 4.2 OMP_NUM_THREADS

The `OMP_NUM_THREADS` environment variable sets the default number of threads to use during execution. `OMP_NUM_THREADS` is ignored if that number is explicitly changed by calling the `omp_set_num_threads` library routine. It's also ignored if there's an explicit `num_threads` clause on a `parallel` directive.

The value of the `OMP_NUM_THREADS` environment variable must be a positive integer. Its effect depends upon whether dynamic adjustment of the number of threads is enabled. For a comprehensive set of rules about the interaction between the `OMP_NUM_THREADS` environment variable and dynamic adjustment of threads, see [section 2.3](2-directives.md#23-parallel-construct).

The number of threads to use is implementation-defined if:

- the `OMP_NUM_THREADS` environment variable isn't specified,
- the value specified isn't a positive integer, or
- the value is greater than the maximum number of threads that the system can support.

Example:

```csh
setenv OMP_NUM_THREADS 16
```

### Cross-references

- [num_threads](2-directives.md#23-parallel-construct) clause
- [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function) function
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) function

## <a name="43-omp_dynamic"></a> 4.3 OMP_DYNAMIC

The `OMP_DYNAMIC` environment variable enables or disables dynamic adjustment of the number of threads available for the execution of parallel regions. `OMP_DYNAMIC` is ignored when dynamic adjustment is explicitly enabled or disabled by calling the `omp_set_dynamic` library routine. Its value must be `TRUE` or `FALSE`.

If `OMP_DYNAMIC` is set to `TRUE`, the number of threads that are used for executing parallel regions may be adjusted by the runtime environment to best use system resources.  If `OMP_DYNAMIC` is set to `FALSE`, dynamic adjustment is disabled. The default condition is implementation-defined.

Example:

```csh
setenv OMP_DYNAMIC TRUE
```

### Cross-references

- [Parallel regions](2-directives.md#23-parallel-construct)
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) function

## <a name="44-omp_nested"></a> 4.4 OMP_NESTED

The `OMP_NESTED` environment variable enables or disables nested parallelism unless nested parallelism is enabled or disabled by calling the `omp_set_nested` library routine. If `OMP_NESTED` is set to `TRUE`, nested parallelism is enabled. If `OMP_NESTED` is set to `FALSE`, nested parallelism is disabled. The default value is `FALSE`.

Example:

```csh
setenv OMP_NESTED TRUE
```

### Cross-reference

- [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) function
