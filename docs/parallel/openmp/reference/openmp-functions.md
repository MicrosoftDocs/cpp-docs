---
title: "OpenMP Functions | Microsoft Docs"
ms.custom: ""
ms.date: "10/23/2018"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["OpenMP functions", "omp_destroy_lock", "omp_destroy_nest_lock", "omp_get_dynamic", "omp_get_max_threads", "omp_get_nested", "omp_get_num_procs", "omp_get_num_threads", "omp_get_thread_num", "omp_get_wtick", "omp_get_wtime", "omp_in_parallel", "omp_init_lock", "omp_init_nest_lock", "omp_set_dynamic", "omp_set_lock", "omp_set_nest_lock", "omp_set_nested", "omp_set_num_threads", "omp_test_lock", "omp_test_nest_lock", "omp_unset_lock", "omp_unset_nest_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["OpenMP functions", "omp_destroy_lock OpenMP function", "omp_destroy_nest_lock OpenMP function", "omp_get_dynamic OpenMP function", "omp_get_max_threads OpenMP function", "omp_get_nested OpenMP function", "omp_get_num_procs OpenMP function", "omp_get_num_threads OpenMP function", "omp_get_thread_num OpenMP function", "omp_get_wtick OpenMP function", "omp_get_wtime OpenMP function", "omp_in_parallel OpenMP function", "omp_init_lock OpenMP function", "omp_init_nest_lock OpenMP function", "omp_set_dynamic OpenMP function", "omp_set_lock OpenMP function", "omp_set_nest_lock OpenMP function", "omp_set_nested OpenMP function", "omp_set_num_threads OpenMP function", "omp_test_lock OpenMP function", "omp_test_nest_lock OpenMP function", "omp_unset_lock OpenMP function", "omp_unset_nest_lock OpenMP function"]
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP functions

Provides links to functions used in the OpenMP API.

The Visual C++ implementation of the OpenMP standard includes the following functions.

Function                                        | Description
----------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[omp_destroy_lock](#omp-destroy-lock)           | Uninitializes a lock.
[omp_destroy_nest_lock](#omp-destroy-nest-lock) | Uninitializes a nestable lock.
[omp_get_dynamic](#omp-get-dynamic)             | Returns a value that indicates if the number of threads available in subsequent parallel region can be adjusted by the run time.
[omp_get_max_threads](#omp-get-max-threads)     | Returns an integer that is equal to or greater than the number of threads that would be available if a parallel region without [num_threads](openmp-clauses.md#num-threads) were defined at that point in the code.
[omp_get_nested](#omp-get-nested)               | Returns a value that indicates if nested parallelism is enabled.
[omp_get_num_procs](#omp-get-num-procs)         | Returns the number of processors that are available when the function is called.
[omp_get_num_threads](#omp-get-num-threads)     | Returns the number of threads in the parallel region.
[omp_get_thread_num](#omp-get-thread-num)       | Returns the thread number of the thread executing within its thread team.
[omp_get_wtick](#omp-get-wtick)                 | Returns the number of seconds between processor clock ticks.
[omp_get_wtime](#omp-get-wtime)                 | Returns a value in seconds of the time elapsed from some point.
[omp_in_parallel](#omp-in-parallel)             | Returns nonzero if called from within a parallel region.
[omp_init_lock](#omp-init-lock)                 | Initializes a simple lock.
[omp_init_nest_lock](#omp-init-nest-lock)       | Initializes a lock.
[omp_set_dynamic](#omp-set-dynamic)             | Indicates that the number of threads available in subsequent parallel region can be adjusted by the run time.
[omp_set_lock](#omp-set-lock)                   | Blocks thread execution until a lock is available.
[omp_set_nest_lock](#omp-set-nest-lock)         | Blocks thread execution until a lock is available.
[omp_set_nested](#omp-set-nested)               | Enables nested parallelism.
[omp_set_num_threads](#omp-set-num-threads)     | Sets the number of threads in subsequent parallel regions, unless overridden by a [num_threads](openmp-clauses.md#num-threads) clause.
[omp_test_lock](#omp-test-lock)                 | Attempts to set a lock but does not block thread execution.
[omp_test_nest_lock](#omp-test-nest-lock)       | Attempts to set a nestable lock but does not block thread execution.
[omp_unset_lock](#omp-unset-lock)               | Releases a lock.
[omp_unset_nest_lock](#omp-unset-nest-lock)     | Releases a nestable lock.

## <a name="omp-destroy-lock"></a>omp_destroy_lock

Uninitializes a lock.

```
void omp_destroy_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](openmp-data-types.md#omp-lock-t) that was initialized with [omp_init_lock](#omp-init-lock).

### Remarks

For more information, see [3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).

### Example

See [omp_init_lock](#omp-init-lock) for an example of using `omp_destroy_lock`.

## <a name="omp-destroy-nest-lock"></a>omp_destroy_nest_lock

Uninitializes a nestable lock.

```
void omp_destroy_nest_lock(
   omp_nest_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) that was initialized with [omp_init_nest_lock](#omp-init-nest-lock).

### Remarks

For more information, see [3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).

### Example

See [omp_init_nest_lock](#omp-init-nest-lock) for an example of using `omp_destroy_nest_lock`.

## <a name="omp-get-dynamic"></a>omp_get_dynamic

Returns a value that indicates if the number of threads available in subsequent parallel region can be adjusted by the run time.

```
int omp_get_dynamic();
```

### Return value

If nonzero, dynamic adjustment of threads is enabled.

### Remarks

Dynamic adjustment of threads is specified with [omp_set_dynamic](#omp-set-dynamic) and [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic).

For more information, see [3.1.7 omp_set_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).

### Example

See [omp_set_dynamic](#omp-set-dynamic) for an example of using `omp_get_dynamic`.

## <a name="omp-get-max-threads"></a>omp_get_max_threads

Returns an integer that is equal to or greater than the number of threads that would be available if a parallel region without [num_threads](openmp-clauses.md#num-threads) were defined at that point in the code.

```
int omp_get_max_threads( )
```

### Remarks

For more information, see [3.1.3 omp_get_max_threads Function](../../../parallel/openmp/3-1-3-omp-get-max-threads-function.md).

### Example

```
// omp_get_max_threads.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_num_threads(8);
    printf_s("%d\n", omp_get_max_threads( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));

    #pragma omp parallel num_threads(3)
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));
}
```

```Output
8
8
8
8
8
```

## <a name="omp-get-nested"></a>omp_get_nested

Returns a value that indicates if nested parallelism is enabled.

```
int omp_get_nested( );
```

### Return value

If nonzero, nested parallelism is enabled.

### Remarks

Nested parallelism is specified with [omp_set_nested](#omp-set-nested) and [OMP_NESTED](openmp-environment-variables.md#omp-nested).

For more information, see [3.1.10 omp_get_nested Function](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).

### Example

See [omp_set_nested](#omp-set-nested) for an example of using `omp_get_nested`.

## <a name="omp-get-num-procs"></a>omp_get_num_procs

Returns the number of processors that are available when the function is called.

```
int omp_get_num_procs();
```

### Remarks

For more information, see [3.1.5 omp_get_num_procs Function](../../../parallel/openmp/3-1-5-omp-get-num-procs-function.md).

### Example

```
// omp_get_num_procs.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    printf_s("%d\n", omp_get_num_procs( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_procs( ));
        }
}
```

```Output
// Expect the following output when the example is run on a two-processor machine:
2
2
```

## <a name="omp-get-num-threads"></a>omp_get_num_threads

Returns the number of threads in the parallel region.

```
int omp_get_num_threads( );
```

### Remarks

For more information, see [3.1.2 omp_get_num_threads Function](../../../parallel/openmp/3-1-2-omp-get-num-threads-function.md).

### Example

```
// omp_get_num_threads.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main()
{
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_num_threads( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_threads( ));
        }

    printf_s("%d\n", omp_get_num_threads( ));

    #pragma omp parallel num_threads(3)
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_threads( ));
        }

    printf_s("%d\n", omp_get_num_threads( ));
}
```

```Output
1
4
1
3
1
```

## <a name="omp-get-thread-num"></a>omp_get_thread_num

Returns the thread number of the thread executing within its thread team.

```
int omp_get_thread_num( );
```

### Remarks

For more information, see [3.1.4 omp_get_thread_num Function](../../../parallel/openmp/3-1-4-omp-get-thread-num-function.md).

### Example

See [parallel](openmp-directives.md#parallel) for an example of using `omp_get_thread_num`.

## <a name="omp-get-wtick"></a>omp_get_wtick

Returns the number of seconds between processor clock ticks.

```
double omp_get_wtick( );
```

### Remarks

For more information, see [3.3.2 omp_get_wtick Function](../../../parallel/openmp/3-3-2-omp-get-wtick-function.md).

### Example

See [omp_get_wtime](#omp-get-wtime) for an example of using `omp_get_wtick`.

## <a name="omp-get-wtime"></a>omp_get_wtime

Returns a value in seconds of the time elapsed from some point.

```
double omp_get_wtime( );
```

### Return value

Returns a value in seconds of the time elapsed from some arbitrary, but consistent point.

### Remarks

That point will remain consistent during program execution, making subsequent comparisons possible.

For more information, see [3.3.1 omp_get_wtime Function](../../../parallel/openmp/3-3-1-omp-get-wtime-function.md).

### Example

```
// omp_get_wtime.cpp
// compile with: /openmp
#include "omp.h"
#include <stdio.h>
#include <windows.h>

int main() {
    double start = omp_get_wtime( );
    Sleep(1000);
    double end = omp_get_wtime( );
    double wtick = omp_get_wtick( );

    printf_s("start = %.16g\nend = %.16g\ndiff = %.16g\n",
             start, end, end - start);

    printf_s("wtick = %.16g\n1/wtick = %.16g\n",
             wtick, 1.0 / wtick);
}
```

```Output
start = 594255.3671159324
end = 594256.3664474116
diff = 0.9993314791936427
wtick = 2.793651148400146e-007
1/wtick = 3579545
```

## <a name="omp-in-parallel"></a>omp_in_parallel

Returns nonzero if called from within a parallel region.

```
int omp_in_parallel( );
```

### Remarks

For more information, see [3.1.6 omp_in_parallel Function](../../../parallel/openmp/3-1-6-omp-in-parallel-function.md).

### Example

```
// omp_in_parallel.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_num_threads(4);
    printf_s("%d\n", omp_in_parallel( ));

    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_in_parallel( ));
        }
}
```

```Output
0
1
```

## <a name="omp-init-lock"></a>omp_init_lock

Initializes a simple lock.

```
void omp_init_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](openmp-data-types.md#omp-lock-t).

### Remarks

For more information, see [3.2.1 omp_init_lock and omp_init_nest_lock Functions](../../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md).

### Example

```
// omp_init_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_lock_t my_lock;

int main() {
   omp_init_lock(&my_lock);

   #pragma omp parallel num_threads(4)
   {
      int tid = omp_get_thread_num( );
      int i, j;

      for (i = 0; i < 5; ++i) {
         omp_set_lock(&my_lock);
         printf_s("Thread %d - starting locked region\n", tid);
         printf_s("Thread %d - ending locked region\n", tid);
         omp_unset_lock(&my_lock);
      }
   }

   omp_destroy_lock(&my_lock);
}
```

```Output
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
```

## <a name="omp-init-nest-lock"></a>omp_init_nest_lock

Initializes a lock.

```
void omp_init_nest_lock(
   omp_nest_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t).

### Remarks

The initial nesting count is zero.

For more information, see [3.2.1 omp_init_lock and omp_init_nest_lock Functions](../../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md).

### Example

```
// omp_init_nest_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_nest_lock_t my_lock;

void Test() {
   int tid = omp_get_thread_num( );
   omp_set_nest_lock(&my_lock);
   printf_s("Thread %d - starting nested locked region\n", tid);
   printf_s("Thread %d - ending nested locked region\n", tid);
   omp_unset_nest_lock(&my_lock);
}

int main() {
   omp_init_nest_lock(&my_lock);

   #pragma omp parallel num_threads(4)
   {
      int i, j;

      for (i = 0; i < 5; ++i) {
         omp_set_nest_lock(&my_lock);
            if (i % 3)
               Test();
            omp_unset_nest_lock(&my_lock);
        }
    }

    omp_destroy_nest_lock(&my_lock);
}
```

```Output
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
```

## <a name="omp-set-dynamic"></a>omp_set_dynamic

Indicates that the number of threads available in subsequent parallel region can be adjusted by the run time.

```
void omp_set_dynamic(
   int val
);
```

### Parameters

*val*<br/>
A value that indicates if the number of threads available in subsequent parallel region can be adjusted by the runtime.  If nonzero, the runtime can adjust the number of threads, if zero, the runtime will not dynamically adjust the number of threads.

### Remarks

The number of threads will never exceed the value set by [omp_set_num_threads](#omp-set-num-threads) or by [OMP_NUM_THREADS](openmp-environment-variables.md#omp-num-threads).

Use [omp_get_dynamic](#omp-get-dynamic) to display the current setting of `omp_set_dynamic`.

The setting for `omp_set_dynamic` will override the setting of the [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic) environment variable.

For more information, see [3.1.7 omp_set_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).

### Example

```
// omp_set_dynamic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main()
{
    omp_set_dynamic(9);
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_dynamic( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_dynamic( ));
        }
}
```

```Output
1
1
```

## <a name="omp-set-lock"></a>omp_set_lock

Blocks thread execution until a lock is available.

```
void omp_set_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](openmp-data-types.md#omp-lock-t) that was initialized with [omp_init_lock](#omp-init-lock).

### Remarks

For more information, see [3.2.3 omp_set_lock and omp_set_nest_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).

### Examples

See [omp_init_lock](#omp-init-lock) for an example of using `omp_set_lock`.

## <a name="omp-set-nest-lock"></a>omp_set_nest_lock

Blocks thread execution until a lock is available.

```
void omp_set_nest_lock(
   omp_nest_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) that was initialized with [omp_init_nest_lock](#omp-init-nest-lock).

### Remarks

For more information, see [3.2.3 omp_set_lock and omp_set_nest_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).

### Examples

See [omp_init_nest_lock](#omp-init-nest-lock) for an example of using `omp_set_nest_lock`.

## <a name="omp-set-nested"></a>omp_set_nested

Enables nested parallelism.

```
void omp_set_nested(
   int val
);
```

### Parameters

*val*<br/>
If nonzero, enables nested parallelism. If zero, disables nested parallelism.

### Remarks

OMP nested parallelism can be turned on with `omp_set_nested`, or by setting the [OMP_NESTED](openmp-environment-variables.md#omp-nested) environment variable.

The setting for `omp_set_nested` will override the setting of the `OMP_NESTED` environment variable.

When enabled, the environment variable can break an otherwise operational program because the number of threads increases exponentially when nesting parallel regions.  For example a function that recurses 6 times with the number of OMP threads set to 4 requires 4,096 (4 to the power of 6) threads  In general, the performance of your application will degrade if the number of thread exceeds the number of processors. One exception to this would be I/O bound applications.

Use [omp_get_nested](#omp-get-nested) to display the current setting of `omp_set_nested`.

For more information, see [3.1.9 omp_set_nested Function](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).

### Example

```
// omp_set_nested.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_nested(1);
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_nested( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_nested( ));
        }
}
```

```Output
1
1
```

## <a name="omp-set-num-threads"></a>omp_set_num_threads

Sets the number of threads in subsequent parallel regions, unless overridden by a [num_threads](openmp-clauses.md#num-threads) clause.

```
void omp_set_num_threads(
   int num_threads
);
```

### Parameters

*num_threads*<br/>
The number of threads in the parallel region.

### Remarks

For more information, see [3.1.1 omp_set_num_threads Function](../../../parallel/openmp/3-1-1-omp-set-num-threads-function.md).

### Example

See [omp_get_num_threads](#omp-get-num-threads) for an example of using `omp_set_num_threads`.

## <a name="omp-test-lock"></a>omp_test_lock

Attempts to set a lock but does not block thread execution.

```
int omp_test_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](openmp-data-types.md#omp-lock-t) that was initialized with [omp_init_lock](#omp-init-lock).

### Remarks

For more information, see [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).

### Example

```
// omp_test_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_lock_t simple_lock;

int main() {
    omp_init_lock(&simple_lock);

    #pragma omp parallel num_threads(4)
    {
        int tid = omp_get_thread_num();

        while (!omp_test_lock(&simple_lock))
            printf_s("Thread %d - failed to acquire simple_lock\n",
                     tid);

        printf_s("Thread %d - acquired simple_lock\n", tid);

        printf_s("Thread %d - released simple_lock\n", tid);
        omp_unset_lock(&simple_lock);
    }

    omp_destroy_lock(&simple_lock);
}
```

```Output
Thread 1 - acquired simple_lock
Thread 1 - released simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 2 - acquired simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 2 - released simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - acquired simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - released simple_lock
Thread 3 - failed to acquire simple_lock
Thread 3 - acquired simple_lock
Thread 3 - released simple_lock
```

## <a name="omp-test-nest-lock"></a>omp_test_nest_lock

Attempts to set a nestable lock but does not block thread execution.

```
int omp_test_nest_lock(
   omp_nest_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) that was initialized with [omp_init_nest_lock](#omp-init-nest-lock).

### Remarks

For more information, see [3.2.5 omp_test_lock and omp_test_nest_lock Functions](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).

### Example

```
// omp_test_nest_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_nest_lock_t nestable_lock;

int main() {
   omp_init_nest_lock(&nestable_lock);

   #pragma omp parallel num_threads(4)
   {
      int tid = omp_get_thread_num();
      while (!omp_test_nest_lock(&nestable_lock))
         printf_s("Thread %d - failed to acquire nestable_lock\n",
                tid);

      printf_s("Thread %d - acquired nestable_lock\n", tid);

      if (omp_test_nest_lock(&nestable_lock)) {
         printf_s("Thread %d - acquired nestable_lock again\n",
                tid);
         printf_s("Thread %d - released nestable_lock\n",
                tid);
         omp_unset_nest_lock(&nestable_lock);
      }

      printf_s("Thread %d - released nestable_lock\n", tid);
      omp_unset_nest_lock(&nestable_lock);
   }

   omp_destroy_nest_lock(&nestable_lock);
}
```

```Output
Thread 1 - acquired nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 1 - acquired nestable_lock again
Thread 0 - failed to acquire nestable_lock
Thread 1 - released nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 1 - released nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 3 - acquired nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 3 - acquired nestable_lock again
Thread 0 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 3 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 3 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - acquired nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - acquired nestable_lock again
Thread 2 - failed to acquire nestable_lock
Thread 0 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - acquired nestable_lock
Thread 2 - acquired nestable_lock again
Thread 2 - released nestable_lock
Thread 2 - released nestable_lock
```

## <a name="omp-unset-lock"></a>omp_unset_lock

Releases a lock.

```
void omp_unset_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](openmp-data-types.md#omp-lock-t) that was initialized with [omp_init_lock](#omp-init-lock), owned by the thread and executing in the function.

### Remarks

For more information, see [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).

### Example

See [omp_init_lock](#omp-init-lock) for an example of using `omp_unset_lock`.

## <a name="omp-unset-nest-lock"></a>omp_unset_nest_lock

Releases a nestable lock.

```
void omp_unset_nest_lock( 
   omp_nest_lock_t *lock 
);
```

### Parameters

*lock*<br/>
A variable of type [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) that was initialized with [omp_init_nest_lock](#omp-init-nest-lock), owned by the thread and executing in the function.

### Remarks

For more information, see [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).

### Example

See [omp_init_nest_lock](#omp-init-nest-lock) for an example of using `omp_unset_nest_lock`.
