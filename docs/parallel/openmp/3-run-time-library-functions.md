---
description: "Learn more about: 3. Run-time library functions"
title: "3. Run-time library functions"
ms.date: "05/13/2019"
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
---
# 3. Run-time library functions

This section describes the OpenMP C and C++ run-time library functions. The header **\<omp.h>** declares two types, several functions that can be used to control and query the parallel execution environment, and lock functions that can be used to synchronize access to data.

The type `omp_lock_t` is an object type capable of representing that a lock is available, or that a thread owns a lock. These locks are referred to as *simple locks*.

The type `omp_nest_lock_t` is an object type capable of representing either that a lock is available, or both the identity of the thread that owns the lock and a *nesting count* (described below). These locks are referred to as *nestable locks*.

The library functions are external functions with "C" linkage.

The descriptions in this chapter are divided into the following topics:

- [Execution environment functions](#31-execution-environment-functions)
- [Lock functions](#32-lock-functions)
- [Timing routines](#33-timing-routines)

## 3.1 Execution environment functions

The functions described in this section affect and monitor threads, processors, and the parallel environment:

- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_get_max_threads](#313-omp_get_max_threads-function)
- [omp_get_thread_num](#314-omp_get_thread_num-function)
- [omp_get_num_procs](#315-omp_get_num_procs-function)
- [omp_in_parallel](#316-omp_in_parallel-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [omp_get_dynamic](#318-omp_get_dynamic-function)
- [omp_set_nested](#319-omp_set_nested-function)
- [omp_get_nested](#3110-omp_get_nested-function)

### <a name="311-omp_set_num_threads-function"></a> 3.1.1 omp_set_num_threads function

The `omp_set_num_threads` function sets the default number of threads to use for later parallel regions that don't specify a `num_threads` clause. The format is as follows:

```cpp
#include <omp.h>
void omp_set_num_threads(int num_threads);
```

The value of the parameter *num_threads* must be a positive integer. Its effect depends upon whether dynamic adjustment of the number of threads is enabled. For a comprehensive set of rules about the interaction between the `omp_set_num_threads` function and dynamic adjustment of threads, see [section 2.3](2-directives.md#23-parallel-construct).

This function has the effects described above when called from a portion of the program where the `omp_in_parallel` function returns zero. If it's called from a portion of the program where the `omp_in_parallel` function returns a nonzero value, the behavior of this function is undefined.

This call has precedence over the `OMP_NUM_THREADS` environment variable. The default value for the number of threads, which may be established by calling `omp_set_num_threads` or by setting the `OMP_NUM_THREADS` environment variable, can be explicitly overridden on a single `parallel` directive by specifying the `num_threads` clause.

For more information, see [omp_set_dynamic](#317-omp_set_dynamic-function).

#### Cross-references

- [omp_set_dynamic](#317-omp_set_dynamic-function) function
- [omp_get_dynamic](#318-omp_get_dynamic-function) function
- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) environment variable
- [num_threads](2-directives.md#23-parallel-construct) clause

### <a name="312-omp_get_num_threads-function"></a> 3.1.2 omp_get_num_threads function

The `omp_get_num_threads` function returns the number of threads currently in the team executing the parallel region from which it's called. The format is as follows:

```cpp
#include <omp.h>
int omp_get_num_threads(void);
```

The `num_threads` clause, the `omp_set_num_threads` function, and the `OMP_NUM_THREADS` environment variable control the number of threads in a team.

If the number of threads hasn't been explicitly set by the user, the default is implementation-defined. This function binds to the closest enclosing `parallel` directive. If called from a serial portion of a program, or from a nested parallel region that's serialized, this function returns 1.

For more information, see [omp_set_dynamic](#317-omp_set_dynamic-function).

#### Cross-references

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- [num_threads](2-directives.md#23-parallel-construct)
- [parallel](2-directives.md#23-parallel-construct)

### <a name="313-omp_get_max_threads-function"></a> 3.1.3 omp_get_max_threads function

The `omp_get_max_threads` function returns an integer that's guaranteed to be at least as large as the number of threads that would be used to form a team if a parallel region without a `num_threads` clause were to be seen at that point in the code. The format is as follows:

```cpp
#include <omp.h>
int omp_get_max_threads(void);
```

The following expresses a lower bound on the value of `omp_get_max_threads`:

> *threads-used-for-next-team* <= `omp_get_max_threads`

Note that if another parallel region uses the `num_threads` clause to request a specific number of threads, the guarantee on the lower bound of the result of `omp_get_max_threads` no longer holds.

The `omp_get_max_threads` function's return value can be used to dynamically allocate sufficient storage for all threads in the team formed at the next parallel region.

#### Cross-references

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [num_threads](2-directives.md#23-parallel-construct)

### <a name="314-omp_get_thread_num-function"></a> 3.1.4 omp_get_thread_num function

The `omp_get_thread_num` function returns the thread number, within its team, of the thread executing the function. The thread number lies between 0 and `omp_get_num_threads()`-1, inclusive. The master thread of the team is thread 0.

The format is as follows:

```cpp
#include <omp.h>
int omp_get_thread_num(void);
```

If called from a serial region, `omp_get_thread_num` returns 0. If called from within a nested parallel region that's serialized, this function returns 0.

#### Cross-references

- [omp_get_num_threads](#312-omp_get_num_threads-function) function

### <a name="315-omp_get_num_procs-function"></a> 3.1.5 omp_get_num_procs function

The `omp_get_num_procs` function returns the number of processors that are available to the program at the time the function is called. The format is as follows:

```cpp
#include <omp.h>
int omp_get_num_procs(void);
```

### <a name="316-omp_in_parallel-function"></a> 3.1.6 omp_in_parallel function

The `omp_in_parallel` function returns a nonzero value if it's called within the dynamic extent of a parallel region executing in parallel; otherwise, it returns 0. The format is as follows:

```cpp
#include <omp.h>
int omp_in_parallel(void);
```

This function returns a nonzero value when called from within a region executing in parallel, including nested regions that are serialized.

### <a name="317-omp_set_dynamic-function"></a> 3.1.7 omp_set_dynamic function

The `omp_set_dynamic` function enables or disables dynamic adjustment of the number of threads available for execution of parallel regions. The format is as follows:

```cpp
#include <omp.h>
void omp_set_dynamic(int dynamic_threads);
```

If *dynamic_threads* evaluates to a nonzero value, the number of threads that are used for executing upcoming parallel regions may be adjusted automatically by the run-time environment to best use system resources. As a consequence, the number of threads specified by the user is the maximum thread count. The number of threads in the team executing a parallel region stays fixed for the duration of that parallel region and is reported by the `omp_get_num_threads` function.

If *dynamic_threads* evaluates to 0, dynamic adjustment is disabled.

This function has the effects described above when called from a portion of the program where the `omp_in_parallel` function returns zero. If it's called from a portion of the program where the `omp_in_parallel` function returns a nonzero value, the behavior of this function is undefined.

A call to `omp_set_dynamic` has precedence over the `OMP_DYNAMIC` environment variable.

The default for the dynamic adjustment of threads is implementation-defined. As a result, user codes that depend on a specific number of threads for correct execution should explicitly disable dynamic threads. Implementations aren't required to provide the ability to dynamically adjust the number of threads, but they're required to provide the interface to support portability across all platforms.

#### Microsoft-specific

The current support of `omp_get_dynamic` and `omp_set_dynamic` is as follows:

The input parameter to `omp_set_dynamic` does not affect the threading policy and does not change the number of threads. `omp_get_num_threads` always returns either the user-defined number, if that is set, or the default thread number. In the current Microsoft implementation, `omp_set_dynamic(0)` turns off dynamic threading so that the existing set of threads can be reused for the following parallel region. `omp_set_dynamic(1)` turns on dynamic threading by discarding the existing set of threads and creating a new set for the upcoming parallel region. The number of threads in the new set is the same as the old set, and is based on the return value of `omp_get_num_threads`. Therefore, for best performance, use `omp_set_dynamic(0)` to reuse the existing threads.

#### Cross-references

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="318-omp_get_dynamic-function"></a> 3.1.8 omp_get_dynamic function

The `omp_get_dynamic` function returns a nonzero value if dynamic adjustment of threads is enabled, and returns 0 otherwise. The format is as follows:

```cpp
#include <omp.h>
int omp_get_dynamic(void);
```

If the implementation doesn't implement dynamic adjustment of the number of threads, this function always returns 0. For more information, see [omp_set_dynamic](#317-omp_set_dynamic-function).

#### Cross-references

- For a description of dynamic thread adjustment, see [omp_set_dynamic](#317-omp_set_dynamic-function).

### <a name="319-omp_set_nested-function"></a> 3.1.9 omp_set_nested function

The `omp_set_nested` function enables or disables nested parallelism. The format is as follows:

```cpp
#include <omp.h>
void omp_set_nested(int nested);
```

If *nested* evaluates to 0, nested parallelism is disabled, which is the default, and nested parallel regions are serialized and executed by the current thread. Otherwise, nested parallelism is enabled, and parallel regions that are nested may deploy additional threads to form nested teams.

This function has the effects described above when called from a portion of the program where the `omp_in_parallel` function returns zero. If it's called from a portion of the program where the `omp_in_parallel` function returns a nonzero value, the behavior of this function is undefined.

This call has precedence over the `OMP_NESTED` environment variable.

When nested parallelism is enabled, the number of threads used to execute nested parallel regions is implementation-defined. As a result, OpenMP-compliant implementations are allowed to serialize nested parallel regions even when nested parallelism is enabled.

#### Cross-references

- [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="3110-omp_get_nested-function"></a> 3.1.10 omp_get_nested function

The `omp_get_nested` function returns a nonzero value if nested parallelism is enabled and 0 if it's disabled. For more information on nested parallelism, see [omp_set_nested](#319-omp_set_nested-function). The format is as follows:

```cpp
#include <omp.h>
int omp_get_nested(void);
```

If an implementation doesn't implement nested parallelism, this function always returns 0.

## 3.2 Lock functions

The functions described in this section manipulate locks used for synchronization.

For the following functions, the lock variable must have type `omp_lock_t`. This variable must only be accessed through these functions. All lock functions require an argument that has a pointer to `omp_lock_t` type.

- The [omp_init_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) function initializes a simple lock.
- The [omp_destroy_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) function removes a simple lock.
- The [omp_set_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) function waits until a simple lock is available.
- The [omp_unset_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) function releases a simple lock.
- The [omp_test_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) function tests a simple lock.

For the following functions, the lock variable must have type `omp_nest_lock_t`.  This variable must only be accessed through these functions. All nestable lock functions require an argument that has a pointer to `omp_nest_lock_t` type.

- The [omp_init_nest_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) function initializes a nestable lock.
- The [omp_destroy_nest_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) function removes a nestable lock.
- The [omp_set_nest_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) function waits until a nestable lock is available.
- The [omp_unset_nest_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) function releases a nestable lock.
- The [omp_test_nest_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) function tests a nestable lock.

The OpenMP lock functions access the lock variable in such a way that they always read and update the most current value of the lock variable. Therefore, it isn't necessary for an OpenMP program to include explicit `flush` directives to make sure that the lock variable's value is consistent among different threads. (There may be a need for `flush` directives to make the values of other variables consistent.)

### <a name="321-omp_init_lock-and-omp_init_nest_lock-functions"></a> 3.2.1 omp_init_lock and omp_init_nest_lock functions

These functions provide the only means of initializing a lock. Each function initializes the lock associated with the parameter *lock* for use in upcoming calls. The format is as follows:

```cpp
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

The initial state is unlocked (that is, no thread owns the lock). For a nestable lock, the initial nesting count is zero. It's noncompliant to call either of these routines with a lock variable that has already been initialized.

### <a name="322-omp_destroy_lock-and-omp_destroy_nest_lock-functions"></a> 3.2.2 omp_destroy_lock and omp_destroy_nest_lock functions

These functions make sure that the pointed to lock variable *lock* is uninitialized. The format is as follows:

```cpp
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

It's noncompliant to call either of these routines with a lock variable that's uninitialized or unlocked.

### <a name="323-omp_set_lock-and-omp_set_nest_lock-functions"></a> 3.2.3 omp_set_lock and omp_set_nest_lock functions

Each of these functions blocks the thread executing the function until the specified lock is available and then sets the lock. A simple lock is available if it's unlocked. A nestable lock is available if it's unlocked or if it's already owned by the thread executing the function. The format is as follows:

```cpp
#include <omp.h>
void omp_set_lock(omp_lock_t *lock);
void omp_set_nest_lock(omp_nest_lock_t *lock);
```

For a simple lock, the argument to the `omp_set_lock` function must point to an initialized lock variable. Ownership of the lock is granted to the thread executing the function.

For a nestable lock, the argument to the `omp_set_nest_lock` function must point to an initialized lock variable. The nesting count is incremented, and the thread is granted, or keeps, ownership of the lock.

### <a name="324-omp_unset_lock-and-omp_unset_nest_lock-functions"></a> 3.2.4 omp_unset_lock and omp_unset_nest_lock functions

These functions provide the means of releasing ownership of a lock. The format is as follows:

```cpp
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

The argument to each of these functions must point to an initialized lock variable owned by the thread executing the function. The behavior is undefined if the thread doesn't own that lock.

For a simple lock, the `omp_unset_lock` function releases the thread executing the function from ownership of the lock.

For a nestable lock, the `omp_unset_nest_lock` function decrements the nesting count, and releases the thread executing the function from ownership of the lock if the resulting count is zero.

### <a name="325-omp_test_lock-and-omp_test_nest_lock-functions"></a> 3.2.5 omp_test_lock and omp_test_nest_lock functions

These functions attempt to set a lock but don't block execution of the thread. The format is as follows:

```cpp
#include <omp.h>
int omp_test_lock(omp_lock_t *lock);
int omp_test_nest_lock(omp_nest_lock_t *lock);
```

The argument must point to an initialized lock variable. These functions attempt to set a lock in the same manner as `omp_set_lock` and `omp_set_nest_lock`, except that they don't block execution of the thread.

For a simple lock, the `omp_test_lock` function returns a nonzero value if the lock is successfully set; otherwise, it returns zero.

For a nestable lock, the `omp_test_nest_lock` function returns the new nesting count if the lock is successfully set; otherwise, it returns zero.

## 3.3 Timing routines

The functions described in this section support a portable wall-clock timer:

- The [omp_get_wtime](#331-omp_get_wtime-function) function returns elapsed wall-clock time.
- The [omp_get_wtick](#332-omp_get_wtick-function) function returns seconds between successive clock ticks.

### <a name="331-omp_get_wtime-function"></a> 3.3.1 omp_get_wtime function

The `omp_get_wtime` function returns a double-precision floating point value equal to the elapsed wall clock time in seconds since some "time in the past".  The actual "time in the past" is arbitrary, but it's guaranteed not to change during the execution of the application program. The format is as follows:

```cpp
#include <omp.h>
double omp_get_wtime(void);
```

It's anticipated that the function will be used to measure elapsed times as shown in the following example:

```cpp
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

The times returned are "per-thread times" by which is meant they aren't required to be globally consistent across all the threads participating in an application.

### <a name="332-omp_get_wtick-function"></a> 3.3.2 omp_get_wtick function

The `omp_get_wtick` function returns a double-precision floating point value equal to the number of seconds between successive clock ticks. The format is as follows:

```cpp
#include <omp.h>
double omp_get_wtick(void);
```
