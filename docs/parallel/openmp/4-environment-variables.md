---
title: "4. Environment Variables"
ms.date: "11/04/2016"
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
---
# 4. Environment Variables

This chapter describes the OpenMP C and C++ API environment variables (or equivalent platform-specific mechanisms) that control the execution of parallel code.  The names of environment variables must be uppercase. The values assigned to them are case insensitive and may have leading and trailing white space.  Modifications to the values after the program has started are ignored.

The environment variables are as follows:

- [OMP_SCHEDULE](#4-1-omp-schedule) sets the run-time schedule type and chunk size.

- [OMP_NUM_THREADS](#4-2-omp-num-threads) sets the number of threads to use during execution.

- [OMP_DYNAMIC](#4-3-omp-dynamic) enables or disables dynamic adjustment of the number of threads.

- [OMP_NESTED](#4-4-omp-nested) enables or disables nested parallelism.

The examples in this chapter only demonstrate how these variables might be set in Unix C shell (csh) environments. In Korn shell and DOS environments the actions are similar, as follows:

csh:  
`setenv OMP_SCHEDULE "dynamic"`

ksh:  
`export OMP_SCHEDULE="dynamic"`

DOS:  
`set OMP_SCHEDULE="dynamic"`

## 4.1 OMP_SCHEDULE

`OMP_SCHEDULE` applies only to `for` and `parallel for` directives that have the schedule type `runtime`. The schedule type and chunk size for all such loops can be set at run time by setting this environment variable to any of the recognized schedule types and to an optional *chunk_size*.

For `for` and `parallel for` directives that have a schedule type other than `runtime`, `OMP_SCHEDULE` is ignored. The default value for this environment variable is implementation-defined. If the optional *chunk_size* is set, the value must be positive. If *chunk_size* is not set, a value of 1 is assumed, except in the case of a `static` schedule. For a `static` schedule, the default chunk size is set to the loop iteration space divided by the number of threads applied to the loop.

Example:

```shell
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

### Cross-references

- [for](2-4-1-for-construct.md) directive
- [parallel for](2-5-1-parallel-for-construct.md) directive

## 4.2 OMP_NUM_THREADS

The `OMP_NUM_THREADS` environment variable sets the default number of threads to use during execution, unless that number is explicitly changed by calling the `omp_set_num_threads` library routine or by an explicit `num_threads` clause on a `parallel` directive.

The value of the `OMP_NUM_THREADS` environment variable must be a positive integer. Its effect depends upon whether dynamic adjustment of the number of threads is enabled. For a comprehensive set of rules about the interaction between the `OMP_NUM_THREADS` environment variable and dynamic adjustment of threads, see Section 2.3.

If no value is specified for the `OMP_NUM_THREADS` environment variable, or if the value specified is not a positive integer, or if the value is greater than the maximum number of threads the system can support, the number of threads to use is implementation-defined.

Example:

```shell
setenv OMP_NUM_THREADS 16
```

### Cross-references

- [num_threads](2-3-parallel-construct.md) clause
- [omp_set_num_threads](3-1-1-omp-set-num-threads-function.md) function
- [omp_set_dynamic](3-1-7-omp-set-dynamic-function.md) function

## 4.3 OMP_DYNAMIC

The `OMP_DYNAMIC` environment variable enables or disables dynamic adjustment of the number of threads available for execution of parallel regions unless dynamic adjustment is explicitly enabled or disabled by calling the `omp_set_dynamic` library routine. Its value must be `TRUE` or `FALSE`.

If set to `TRUE`, the number of threads that are used for executing parallel regions may be adjusted by the runtime environment to best utilize system resources.  If set to `FALSE`, dynamic adjustment is disabled. The default condition is implementation-defined.

Example:

```shell
setenv OMP_DYNAMIC TRUE
```

### Cross-references

- [Parallel regions](2-3-parallel-construct.md)
- [omp_set_dynamic](3-1-7-omp-set-dynamic-function.md) function

## 4.4 OMP_NESTED

The `OMP_NESTED` environment variable enables or disables nested parallelism unless nested parallelism is enabled or disabled by calling the `omp_set_nested` library routine. If set to `TRUE`, nested parallelism is enabled; if it is set to `FALSE`, nested parallelism is disabled. The default value is `FALSE`.

Example:

```shell
setenv OMP_NESTED TRUE
```

### Cross-reference

- [omp_set_nested](3-1-9-omp-set-nested-function.md) function
