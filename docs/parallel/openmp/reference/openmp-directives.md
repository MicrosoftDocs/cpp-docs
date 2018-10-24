---
title: "OpenMP Directives | Microsoft Docs"
ms.custom: ""
ms.date: "10/22/2018"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["OpenMP directives", "atomic", "barrier", "critical", "flush", "for", "master", "ordered", "parallel", "section", "SECTIONS", "single", "threadprivate"]
dev_langs: ["C++"]
helpviewer_keywords: ["OpenMP directives", "atomic OpenMP directive", "barrier OpenMP directive", "critical OpenMP directive", "flush OpenMP directive", "for OpenMP directive", "master OpenMP directive", "ordered OpenMP directive", "parallel OpenMP directive", "sections OpenMP directive", "single OpenMP directive", "threadprivate OpenMP directive"]
ms.assetid: 0562c263-344c-466d-843e-de830d918940
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP directives

Provides links to directives used in the OpenMP API.

Visual C++ supports the following OpenMP directives:

Directive                             | Description
------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[atomic](#atomic)                     | Specifies that a memory location that will be updated atomically.
[barrier](#barrier)                   | Synchronizes all threads in a team; all threads pause at the barrier, until all threads execute the barrier.
[critical](#critical)                 | Specifies that code is only executed on one thread at a time.
[flush](#flush-openmp)                | Specifies that all threads have the same view of memory for all shared objects.
[for](#for-openmp)                    | Causes the work done in a `for` loop inside a parallel region to be divided among threads.
[master](#master)                     | Specifies that only the master thread should execute a section of the program.
[ordered](#ordered-openmp-directives) | Specifies that code under a parallelized `for` loop should be executed like a sequential loop.
[parallel](#parallel)                 | Defines a parallel region, which is code that will be executed by multiple threads in parallel.
[sections](#sections-openmp)          | Identifies code sections to be divided among all threads.
[single](#single)                     | Lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.
[threadprivate](#threadprivate)       | Specifies that a variable is private to a thread.

## <a name="atomic"></a>atomic

Specifies that a memory location that will be updated atomically.

```
#pragma omp atomic
   expression
```

### Parameters

*expression*<br/>
The statement that has the lvalue, whose memory location you want to protect against more than one write. For more information about legal expression forms, see the OpenMP specification.

### Remarks

The `atomic` directive supports no OpenMP clauses.

For more information, see [2.6.4 atomic Construct](../../../parallel/openmp/2-6-4-atomic-construct.md).

### Example

```
// omp_atomic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define MAX 10

int main() {
   int count = 0;
   #pragma omp parallel num_threads(MAX)
   {
      #pragma omp atomic
      count++;
   }
   printf_s("Number of threads: %d\n", count);
}
```

```Output
Number of threads: 10
```

## <a name="barrier"></a>barrier

Synchronizes all threads in a team; all threads pause at the barrier, until all threads execute the barrier.

```
#pragma omp barrier
```

### Remarks

The `barrier` directive supports no OpenMP clauses.

For more information, see [2.6.3 barrier Directive](../../../parallel/openmp/2-6-3-barrier-directive.md).

### Example

For a sample of how to use `barrier`, see [master](#master).

## <a name="critical"></a>critical

Specifies that code is only be executed on one thread at a time.

```
#pragma omp critical [(name)]
{
   code_block
}
```

### Parameters

*name*<br/>
(Optional) A name to identify the critical code. Note that name must be enclosed in parentheses.

### Remarks

The `critical` directive supports no OpenMP clauses.

For more information, see [2.6.2 critical Construct](../../../parallel/openmp/2-6-2-critical-construct.md).

### Example

```
// omp_critical.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int i;
    int max;
    int a[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        a[i] = rand();
        printf_s("%d\n", a[i]);
    }

    max = a[0];
    #pragma omp parallel for num_threads(4)
        for (i = 1; i < SIZE; i++)
        {
            if (a[i] > max)
            {
                #pragma omp critical
                {
                    // compare a[i] and max again because max
                    // could have been changed by another thread after
                    // the comparison outside the critical section
                    if (a[i] > max)
                        max = a[i];
                }
            }
        }

    printf_s("max = %d\n", max);
}
```

```Output
41
18467
6334
26500
19169
15724
11478
29358
26962
24464
max = 29358
```

## <a name="flush-openmp"></a>flush (OpenMP)

Specifies that all threads have the same view of memory for all shared objects.

```
#pragma omp flush [(var)]
```

### Parameters

*var*<br/>
(Optional) A comma-separated list of variables that represent objects you want to synchronize. If `var` isn't specified, all memory is flushed.

### Remarks

The `flush` directive supports no OpenMP clauses.

For more information, see [2.6.5 flush Directive](../../../parallel/openmp/2-6-5-flush-directive.md).

### Example

```
// omp_flush.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

void read(int *data) {
   printf_s("read data\n");
   *data = 1;
}

void process(int *data) {
   printf_s("process data\n");
   (*data)++;
}

int main() {
   int data;
   int flag;

   flag = 0;

   #pragma omp parallel sections num_threads(2)
   {
      #pragma omp section
      {
         printf_s("Thread %d: ", omp_get_thread_num( ));
         read(&data);
         #pragma omp flush(data)
         flag = 1;
         #pragma omp flush(flag)
         // Do more work.
      }

      #pragma omp section
      {
         while (!flag) {
            #pragma omp flush(flag)
         }
         #pragma omp flush(data)

         printf_s("Thread %d: ", omp_get_thread_num( ));
         process(&data);
         printf_s("data = %d\n", data);
      }
   }
}
```

```Output
Thread 0: read data
Thread 1: process data
data = 2
```

## <a name="for-openmp"></a>for (OpenMP)

Causes the work done in a `for` loop inside a parallel region to be divided among threads.

```
#pragma omp [parallel] for [clauses]
   for_statement
```

### Parameters

*clauses*<br/>
(Optional) Zero or more clauses. See the Remarks section for a list of the clauses supported by `for`.

*for_statement*<br/>
A `for` loop. Undefined behavior will result if user code in the `for` loop changes the index variable.

### Remarks

The `for` directive supports the following OpenMP clauses:

- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [lastprivate](../../../parallel/openmp/reference/lastprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)
- [schedule](../../../parallel/openmp/reference/schedule.md)

If `parallel` is also specified, `clauses` can be any clause accepted by the `parallel` or `for` directives, except `nowait`.

For more information, see [2.4.1 for Construct](../../../parallel/openmp/2-4-1-for-construct.md).

### Example

```
// omp_for.cpp
// compile with: /openmp
#include <stdio.h>
#include <math.h>
#include <omp.h>

#define NUM_THREADS 4
#define NUM_START 1
#define NUM_END 10

int main() {
   int i, nRet = 0, nSum = 0, nStart = NUM_START, nEnd = NUM_END;
   int nThreads = 0, nTmp = nStart + nEnd;
   unsigned uTmp = (unsigned((abs(nStart - nEnd) + 1)) *
                               unsigned(abs(nTmp))) / 2;
   int nSumCalc = uTmp;

   if (nTmp < 0)
      nSumCalc = -nSumCalc;

   omp_set_num_threads(NUM_THREADS);

   #pragma omp parallel default(none) private(i) shared(nSum, nThreads, nStart, nEnd)
   {
      #pragma omp master
      nThreads = omp_get_num_threads();

      #pragma omp for
      for (i=nStart; i<=nEnd; ++i) {
            #pragma omp atomic
            nSum += i;
      }
   }

   if  (nThreads == NUM_THREADS) {
      printf_s("%d OpenMP threads were used.\n", NUM_THREADS);
      nRet = 0;
   }
   else {
      printf_s("Expected %d OpenMP threads, but %d were used.\n",
               NUM_THREADS, nThreads);
      nRet = 1;
   }

   if (nSum != nSumCalc) {
      printf_s("The sum of %d through %d should be %d, "
               "but %d was reported!\n",
               NUM_START, NUM_END, nSumCalc, nSum);
      nRet = 1;
   }
   else
      printf_s("The sum of %d through %d is %d\n",
               NUM_START, NUM_END, nSum);
}
```

```Output
4 OpenMP threads were used.
The sum of 1 through 10 is 55
```

## <a name="master"></a>master

Specifies that only the master thread should execute a section of the program.

```
#pragma omp master
{
   code_block
}
```

### Remarks

The `master` directive supports no OpenMP clauses.

The [single](#single) directive lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.

For more information, see [2.6.1 master Construct](../../../parallel/openmp/2-6-1-master-construct.md).

### Example

```
// omp_master.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>

int main( )
{
    int a[5], i;

    #pragma omp parallel
    {
        // Perform some computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] = i * i;

        // Print intermediate results.
        #pragma omp master
            for (i = 0; i < 5; i++)
                printf_s("a[%d] = %d\n", i, a[i]);

        // Wait.
        #pragma omp barrier

        // Continue with the computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] += i;
    }
}
```

```Output
a[0] = 0
a[1] = 1
a[2] = 4
a[3] = 9
a[4] = 16
```

## <a name="ordered-openmp-directives"></a>ordered (OpenMP directives)

Specifies that code under a parallelized `for` loop should be executed like a sequential loop.

```
#pragma omp ordered
   structured-block
```

### Remarks

The `ordered` directive must be within the dynamic extent of a [for](#for-openmp) or `parallel for` construct with an `ordered` clause.

The `ordered` directive supports no OpenMP clauses.

For more information, see [2.6.6 ordered Construct](../../../parallel/openmp/2-6-6-ordered-construct.md).

### Example

```
// omp_ordered.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

static float a[1000], b[1000], c[1000];

void test(int first, int last)
{
    #pragma omp for schedule(static) ordered
    for (int i = first; i <= last; ++i) {
        // Do something here.
        if (i % 2)
        {
            #pragma omp ordered
            printf_s("test() iteration %d\n", i);
        }
    }
}

void test2(int iter)
{
    #pragma omp ordered
    printf_s("test2() iteration %d\n", iter);
}

int main( )
{
    int i;
    #pragma omp parallel
    {
        test(1, 8);
        #pragma omp for ordered
        for (i = 0 ; i < 5 ; i++)
            test2(i);
    }
}
```

```Output
test() iteration 1
test() iteration 3
test() iteration 5
test() iteration 7
test2() iteration 0
test2() iteration 1
test2() iteration 2
test2() iteration 3
test2() iteration 4
```

## <a name="parallel"></a>parallel

Defines a parallel region, which is code that will be executed by multiple threads in parallel.

```
#pragma omp parallel [clauses]
{
   code_block
}
```

### Parameters

*clauses*<br/>
(Optional) Zero or more clauses.  See the Remarks section for a list of the clauses supported by `parallel`.

### Remarks

The `parallel` directive supports the following OpenMP clauses:

- [copyin](../../../parallel/openmp/reference/copyin.md)
- [default](../../../parallel/openmp/reference/default-openmp.md)
- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [if](../../../parallel/openmp/reference/if-openmp.md)
- [num_threads](../../../parallel/openmp/reference/num-threads.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)
- [shared](../../../parallel/openmp/reference/shared-openmp.md)

`parallel` can also be used with the [sections](#sections-openmp) and [for](#for-openmp) directives.

For more information, see [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).

### Example

The following sample shows how to set the number of threads and define a parallel region. The number of threads is equal by default to the number of logical processors on the machine. For example, if you have a machine with one physical processor that has hyperthreading enabled, it will have two logical processors and two threads.

```
// omp_parallel.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
   #pragma omp parallel num_threads(4)
   {
      int i = omp_get_thread_num();
      printf_s("Hello from thread %d\n", i);
   }
}
```

```Output
Hello from thread 0
Hello from thread 1
Hello from thread 2
Hello from thread 3
```

### Comment

Note that the order of output can vary on different machines.

## <a name="sections-openmp"></a>sections (OpenMP)

Identifies code sections to be divided among all threads.

```
#pragma omp [parallel] sections [clauses]
{
   #pragma omp section
   {
      code_block
   } 
}
```

### Parameters

*clauses*<br/>
(Optional) Zero or more clauses. See the Remarks section for a list of the clauses supported by `sections`.

### Remarks

The `sections` directive can contain zero or more `section` directives.

The `sections` directive supports the following OpenMP clauses:

- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [lastprivate](../../../parallel/openmp/reference/lastprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)

If `parallel` is also specified, `clauses` can be any clause accepted by the `parallel` or `sections` directives, except `nowait`.

For more information, see [2.4.2 sections Construct](../../../parallel/openmp/2-4-2-sections-construct.md).

### Example

```
// omp_sections.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel sections num_threads(4)
    {
        printf_s("Hello from thread %d\n", omp_get_thread_num());
        #pragma omp section
        printf_s("Hello from thread %d\n", omp_get_thread_num());
    }
}
```

```Output
Hello from thread 0
Hello from thread 0
```

## <a name="single"></a>single

Lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.

```
#pragma omp single [clauses] 
{
   code_block
}
```

### Parameters

*clauses*<br/>
(Optional) Zero or more clauses. See the Remarks section for a list of the clauses supported by `single`.

### Remarks

The `single` directive supports the following OpenMP clauses:

- [copyprivate](../../../parallel/openmp/reference/copyprivate.md)
- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)

The [master](#master) directive lets you specify that a section of code should be executed only on the master thread.

For more information, see [2.4.3 single Construct](../../../parallel/openmp/2-4-3-single-construct.md).

### Example

```cpp
// omp_single.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
   #pragma omp parallel num_threads(2)
   {
      #pragma omp single
      // Only a single thread can read the input.
      printf_s("read input\n");

      // Multiple threads in the team compute the results.
      printf_s("compute results\n");

      #pragma omp single
      // Only a single thread can write the output.
      printf_s("write output\n");
    }
}
```

```Output
read input
compute results
compute results
write output
```

## <a name="threadprivate"></a>threadprivate

Specifies that a variable is private to a thread.

```
#pragma omp threadprivate(var)
```

### Parameters

*var*<br/>
A comma-separated list of variables that you want to make private to a thread. `var` must be either a global- or namespace-scoped variable or a local static variable.

### Remarks

The `threadprivate` directive supports no OpenMP clauses.

For more information, see [2.7.1 threadprivate Directive](../../../parallel/openmp/2-7-1-threadprivate-directive.md).

The `threadprivate` directive is based on the [thread](../../../cpp/thread.md) attribute using the [__declspec](../../../cpp/declspec.md) keyword; limits on `__declspec(thread)` apply to `threadprivate`.

You can't use `threadprivate` in any DLL that will be loaded via [LoadLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibrarya).  This prohibition includes DLLs that are loaded with [/DELAYLOAD (Delay Load Import)](../../../build/reference/delayload-delay-load-import.md), which also uses `LoadLibrary`.

You can use `threadprivate` in a DLL that is statically loaded at process startup.

Because `threadprivate` is based on `__declspec(thread)`, a `threadprivate` variable will exist in any thread started in the process, not just those threads that are part of a thread team spawned by a parallel region.  Be aware of this implementation detail; you may notice, for example, that constructors for a `threadprivate` user-defined type are called more often then expected.

A `threadprivate` variable of a destructable type isn't guaranteed to have its destructor called.  For example:

```
struct MyType
{
    ~MyType();
};

MyType threaded_var;
#pragma omp threadprivate(threaded_var)
int main()
{
    #pragma omp parallel
    {}
}
```

Users have no control as to when the threads constituting the parallel region will terminate.  If those threads exist when the process exits, the threads won't be notified about the process exit, and the destructor won't be called for `threaded_var` on any thread except the one that exits (here, the primary thread).  So code shouldn't count on proper destruction of `threadprivate` variables.

### Example

For a sample of using `threadprivate`, see [private](../../../parallel/openmp/reference/private-openmp.md).
