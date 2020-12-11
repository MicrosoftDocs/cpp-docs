---
description: "Learn more about: OpenMP Clauses"
title: "OpenMP Clauses"
ms.date: "03/20/2019"
f1_keywords: ["OpenMP clauses", "copyin", "copyprivate", "default", "firstprivate", "lastprivate", "nowait", "num_threads", "ordered", "private", "reduction", "schedule", "shared"]
helpviewer_keywords: ["OpenMP clauses", "copyin OpenMP clause", "copyprivate OpenMP clause", "default OpenMP clause", "defaults, OpenMP clause", "firstprivate OpenMP clause", "if OpenMP clause", "lastprivate OpenMP clause", "nowait OpenMP clause", "num_threads OpenMP clause", "ordered OpenMP clause", "private OpenMP clause", "reduction OpenMP clause", "schedule OpenMP clause", "shared OpenMP clause"]
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
---
# OpenMP Clauses

Provides links to clauses used in the OpenMP API.

Visual C++ supports the following OpenMP clauses.

For general attributes:

|Clause|Description|
|------|-----------|
|[if](#if-openmp)|Specifies whether a loop should be executed in parallel or in serial.|
|[num_threads](#num-threads)|Sets the number of threads in a thread team.|
|[ordered](#ordered-openmp-clauses)|Required on a parallel [for](openmp-directives.md#for-openmp) statement if an [ordered](openmp-directives.md#ordered-openmp-directives) directive is to be used in the loop.|
|[schedule](#schedule)|Applies to the [for](openmp-directives.md#for-openmp) directive.|
|[nowait](#nowait)|Overrides the barrier implicit in a directive.|

For data-sharing attributes:

|Clause|Description|
|------|-----------|
|[private](#private-openmp)|Specifies that each thread should have its own instance of a variable.|
|[firstprivate](#firstprivate)|Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.|
|[lastprivate](#lastprivate)|Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).|
|[shared](#shared-openmp)|Specifies that one or more variables should be shared among all threads.|
|[default](#default-openmp)|Specifies the behavior of unscoped variables in a parallel region.|
|[reduction](#reduction)|Specifies that one or more variables that are private to each thread are the subject of a reduction operation at the end of the parallel region.|
|[copyin](#copyin)|Allows threads to access the master thread's value, for a [threadprivate](openmp-directives.md#threadprivate) variable.|
|[copyprivate](#copyprivate)|Specifies that one or more variables should be shared among all threads.|

## <a name="copyin"></a> copyin

Allows threads to access the master thread's value, for a [threadprivate](openmp-directives.md#threadprivate) variable.

```cpp
copyin(var)
```

### Parameters

*var*<br/>
The `threadprivate` variable that will be initialized with the variable's value in the master thread, as it exists before the parallel construct.

### Remarks

`copyin` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.7.2.7 copyin](../2-directives.md#2727-copyin).

### Example

See [threadprivate](openmp-directives.md#threadprivate) for an example of using `copyin`.

## <a name="copyprivate"></a> copyprivate

Specifies that one or more variables should be shared among all threads.

```cpp
copyprivate(var)
```

### Parameters

*var*<br/>
One or more variables to share. If more than one variable is specified, separate variable names with a comma.

### Remarks

`copyprivate` applies to the [single](openmp-directives.md#single) directive.

For more information, see [2.7.2.8 copyprivate](../2-directives.md#2728-copyprivate).

### Example

```cpp
// omp_copyprivate.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

float x, y, fGlobal = 1.0;
#pragma omp threadprivate(x, y)

float get_float() {
   fGlobal += 0.001;
   return fGlobal;
}

void use_float(float f, int t) {
   printf_s("Value = %f, thread = %d\n", f, t);
}

void CopyPrivate(float a, float b) {
   #pragma omp single copyprivate(a, b, x, y)
   {
      a = get_float();
      b = get_float();
      x = get_float();
      y = get_float();
    }

   use_float(a, omp_get_thread_num());
   use_float(b, omp_get_thread_num());
   use_float(x, omp_get_thread_num());
   use_float(y, omp_get_thread_num());
}

int main() {
   float a = 9.99, b = 123.456;

   printf_s("call CopyPrivate from a single thread\n");
   CopyPrivate(9.99, 123.456);

   printf_s("call CopyPrivate from a parallel region\n");
   #pragma omp parallel
   {
      CopyPrivate(a, b);
   }
}
```

```Output
call CopyPrivate from a single thread
Value = 1.001000, thread = 0
Value = 1.002000, thread = 0
Value = 1.003000, thread = 0
Value = 1.004000, thread = 0
call CopyPrivate from a parallel region
Value = 1.005000, thread = 0
Value = 1.005000, thread = 1
Value = 1.006000, thread = 0
Value = 1.006000, thread = 1
Value = 1.007000, thread = 0
Value = 1.007000, thread = 1
Value = 1.008000, thread = 0
Value = 1.008000, thread = 1
```

## <a name="default-openmp"></a> default

Specifies the behavior of unscoped variables in a parallel region.

```cpp
default(shared | none)
```

### Remarks

`shared`, which is in effect if the `default` clause is unspecified, means that any variable in a parallel region will be treated as if it were specified with the [shared](#shared-openmp) clause. `none` means that any variables used in a parallel region that aren't scoped with the [private](#private-openmp), [shared](#shared-openmp), [reduction](#reduction), [firstprivate](#firstprivate), or [lastprivate](#lastprivate) clause will cause a compiler error.

`default` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.7.2.5 default](../2-directives.md#2725-default).

### Example

See [private](#private-openmp) for an example of using `default`.

## <a name="firstprivate"></a> firstprivate

Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.

```cpp
firstprivate(var)
```

### Parameters

*var*<br/>
The variable to have instances in each thread and that will be initialized with the variable's value, because it exists before the parallel construct. If more than one variable is specified, separate variable names with a comma.

### Remarks

`firstprivate` applies to the following directives:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [sections](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

For more information, see [2.7.2.2 firstprivate](../2-directives.md#2722-firstprivate).

### Example

For an example of using `firstprivate`, see the example in [private](#private-openmp).

## <a name="if-openmp"></a> if (OpenMP)

Specifies whether a loop should be executed in parallel or in serial.

```cpp
if(expression)
```

### Parameters

*expression*<br/>
An integral expression that, if it evaluates to true (nonzero), causes the code in the parallel region to execute in parallel. If the expression evaluates to false (zero), the parallel region is executed in serial (by a single thread).

### Remarks

`if` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.3 parallel construct](../2-directives.md#23-parallel-construct).

### Example

```cpp
// omp_if.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

void test(int val)
{
    #pragma omp parallel if (val)
    if (omp_in_parallel())
    {
        #pragma omp single
        printf_s("val = %d, parallelized with %d threads\n",
                 val, omp_get_num_threads());
    }
    else
    {
        printf_s("val = %d, serialized\n", val);
    }
}

int main( )
{
    omp_set_num_threads(2);
    test(0);
    test(2);
}
```

```Output
val = 0, serialized
val = 2, parallelized with 2 threads
```

## <a name="lastprivate"></a> lastprivate

Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).

```cpp
lastprivate(var)
```

### Parameters

*var*<br/>
The variable that is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).

### Remarks

`lastprivate` applies to the following directives:

- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.7.2.3 lastprivate](../2-directives.md#2723-lastprivate).

### Example

See [schedule](#schedule) for an example of using `lastprivate` clause.

## <a name="nowait"></a> nowait

Overrides the barrier implicit in a directive.

```cpp
nowait
```

### Remarks

`nowait` applies to the following directives:

- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

For more information, see [2.4.1 for construct](../2-directives.md#241-for-construct), [2.4.2 sections construct](../2-directives.md#242-sections-construct), and [2.4.3 single construct](../2-directives.md#243-single-construct).

### Example

```cpp
// omp_nowait.cpp
// compile with: /openmp /c
#include <stdio.h>

#define SIZE 5

void test(int *a, int *b, int *c, int size)
{
    int i;
    #pragma omp parallel
    {
        #pragma omp for nowait
        for (i = 0; i < size; i++)
            b[i] = a[i] * a[i];

        #pragma omp for nowait
        for (i = 0; i < size; i++)
            c[i] = a[i]/2;
    }
}

int main( )
{
    int a[SIZE], b[SIZE], c[SIZE];
    int i;

    for (i=0; i<SIZE; i++)
        a[i] = i;

    test(a,b,c, SIZE);

    for (i=0; i<SIZE; i++)
        printf_s("%d, %d, %d\n", a[i], b[i], c[i]);
}
```

```Output
0, 0, 0
1, 1, 0
2, 4, 1
3, 9, 1
4, 16, 2
```

## <a name="num-threads"></a> num_threads

Sets the number of threads in a thread team.

```cpp
num_threads(num)
```

### Parameters

*num*<br/>
The number of threads

### Remarks

The `num_threads` clause has the same functionality as the [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) function.

`num_threads` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.3 parallel construct](../2-directives.md#23-parallel-construct).

### Example

See [parallel](openmp-directives.md#parallel) for an example of using `num_threads` clause.

## <a name="ordered-openmp-clauses"></a> ordered

Required on a parallel [for](openmp-directives.md#for-openmp) statement if an [ordered](openmp-directives.md#ordered-openmp-directives) directive is to be used in the loop.

```cpp
ordered
```

### Remarks

`ordered` applies to the [for](openmp-directives.md#for-openmp) directive.

For more information, see [2.4.1 for construct](../2-directives.md#241-for-construct).

### Example

See [ordered](openmp-directives.md#ordered-openmp-directives) for an example of using `ordered` clause.

## <a name="private-openmp"></a> private

Specifies that each thread should have its own instance of a variable.

```cpp
private(var)
```

### Parameters

*var*<br/>
The variable to have instances in each thread.

### Remarks

`private` applies to the following directives:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [sections](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

For more information, see [2.7.2.1 private](../2-directives.md#2721-private).

### Example

```c
// openmp_private.c
// compile with: /openmp
#include <windows.h>
#include <assert.h>
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define SLEEP_THREAD 1
#define NUM_LOOPS 2

enum Types {
   ThreadPrivate,
   Private,
   FirstPrivate,
   LastPrivate,
   Shared,
   MAX_TYPES
};

int nSave[NUM_THREADS][MAX_TYPES][NUM_LOOPS] = {{0}};
int nThreadPrivate;

#pragma omp threadprivate(nThreadPrivate)
#pragma warning(disable:4700)

int main() {
   int nPrivate = NUM_THREADS;
   int nFirstPrivate = NUM_THREADS;
   int nLastPrivate = NUM_THREADS;
   int nShared = NUM_THREADS;
   int nRet = 0;
   int i;
   int j;
   int nLoop = 0;

   nThreadPrivate = NUM_THREADS;
   printf_s("These are the variables before entry "
           "into the parallel region.\n");
   printf_s("nThreadPrivate = %d\n", nThreadPrivate);
   printf_s("      nPrivate = %d\n", nPrivate);
   printf_s(" nFirstPrivate = %d\n", nFirstPrivate);
   printf_s("  nLastPrivate = %d\n", nLastPrivate);
   printf_s("       nShared = %d\n\n", nShared);
   omp_set_num_threads(NUM_THREADS);

   #pragma omp parallel copyin(nThreadPrivate) private(nPrivate) shared(nShared) firstprivate(nFirstPrivate)
   {
      #pragma omp for schedule(static) lastprivate(nLastPrivate)
      for (i = 0 ; i < NUM_THREADS ; ++i) {
         for (j = 0 ; j < NUM_LOOPS ; ++j) {
            int nThread = omp_get_thread_num();
            assert(nThread < NUM_THREADS);

            if (nThread == SLEEP_THREAD)
               Sleep(100);
            nSave[nThread][ThreadPrivate][j] = nThreadPrivate;
            nSave[nThread][Private][j] = nPrivate;
            nSave[nThread][Shared][j] = nShared;
            nSave[nThread][FirstPrivate][j] = nFirstPrivate;
            nSave[nThread][LastPrivate][j] = nLastPrivate;
            nThreadPrivate = nThread;
            nPrivate = nThread;
            nShared = nThread;
            nLastPrivate = nThread;
            --nFirstPrivate;
         }
      }
   }

   for (i = 0 ; i < NUM_LOOPS ; ++i) {
      for (j = 0 ; j < NUM_THREADS ; ++j) {
         printf_s("These are the variables at entry of "
                  "loop %d of thread %d.\n", i + 1, j);
         printf_s("nThreadPrivate = %d\n",
                  nSave[j][ThreadPrivate][i]);
         printf_s("      nPrivate = %d\n",
                  nSave[j][Private][i]);
         printf_s(" nFirstPrivate = %d\n",
                  nSave[j][FirstPrivate][i]);
         printf_s("  nLastPrivate = %d\n",
                  nSave[j][LastPrivate][i]);
         printf_s("       nShared = %d\n\n",
                  nSave[j][Shared][i]);
      }
   }

   printf_s("These are the variables after exit from "
            "the parallel region.\n");
   printf_s("nThreadPrivate = %d (The last value in the "
            "master thread)\n", nThreadPrivate);
   printf_s("      nPrivate = %d (The value prior to "
            "entering parallel region)\n", nPrivate);
   printf_s(" nFirstPrivate = %d (The value prior to "
            "entering parallel region)\n", nFirstPrivate);
   printf_s("  nLastPrivate = %d (The value from the "
            "last iteration of the loop)\n", nLastPrivate);
   printf_s("       nShared = %d (The value assigned, "
            "from the delayed thread, %d)\n\n",
            nShared, SLEEP_THREAD);
}
```

```Output
These are the variables before entry into the parallel region.
nThreadPrivate = 4
      nPrivate = 4
nFirstPrivate = 4
  nLastPrivate = 4
       nShared = 4

These are the variables at entry of loop 1 of thread 0.
nThreadPrivate = 4
      nPrivate = 1310720
nFirstPrivate = 4
  nLastPrivate = 1245104
       nShared = 3

These are the variables at entry of loop 1 of thread 1.
nThreadPrivate = 4
      nPrivate = 4488
nFirstPrivate = 4
  nLastPrivate = 19748
       nShared = 0

These are the variables at entry of loop 1 of thread 2.
nThreadPrivate = 4
      nPrivate = -132514848
nFirstPrivate = 4
  nLastPrivate = -513199792
       nShared = 4

These are the variables at entry of loop 1 of thread 3.
nThreadPrivate = 4
      nPrivate = 1206
nFirstPrivate = 4
  nLastPrivate = 1204
       nShared = 2

These are the variables at entry of loop 2 of thread 0.
nThreadPrivate = 0
      nPrivate = 0
nFirstPrivate = 3
  nLastPrivate = 0
       nShared = 0

These are the variables at entry of loop 2 of thread 1.
nThreadPrivate = 1
      nPrivate = 1
nFirstPrivate = 3
  nLastPrivate = 1
       nShared = 1

These are the variables at entry of loop 2 of thread 2.
nThreadPrivate = 2
      nPrivate = 2
nFirstPrivate = 3
  nLastPrivate = 2
       nShared = 2

These are the variables at entry of loop 2 of thread 3.
nThreadPrivate = 3
      nPrivate = 3
nFirstPrivate = 3
  nLastPrivate = 3
       nShared = 3

These are the variables after exit from the parallel region.
nThreadPrivate = 0 (The last value in the master thread)
      nPrivate = 4 (The value prior to entering parallel region)
nFirstPrivate = 4 (The value prior to entering parallel region)
  nLastPrivate = 3 (The value from the last iteration of the loop)
       nShared = 1 (The value assigned, from the delayed thread, 1)
```

## <a name="reduction"></a> reduction

Specifies that one or more variables that are private to each thread are the subject of a reduction operation at the end of the parallel region.

```cpp
reduction(operation:var)
```

### Parameters

*operation*<br/>
The operator for the operation to do on the variables *var* at the end of the parallel region.

*var*<br/>
One or more variables on which to do scalar reduction. If more than one variable is specified, separate variable names with a comma.

### Remarks

`reduction` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.7.2.6 reduction](../2-directives.md#2726-reduction).

### Example

```cpp
// omp_reduction.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define SUM_START   1
#define SUM_END     10
#define FUNC_RETS   {1, 1, 1, 1, 1}

int bRets[5] = FUNC_RETS;
int nSumCalc = ((SUM_START + SUM_END) * (SUM_END - SUM_START + 1)) / 2;

int func1( ) {return bRets[0];}
int func2( ) {return bRets[1];}
int func3( ) {return bRets[2];}
int func4( ) {return bRets[3];}
int func5( ) {return bRets[4];}

int main( )
{
    int nRet = 0,
        nCount = 0,
        nSum = 0,
        i,
        bSucceed = 1;

    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel reduction(+ : nCount)
    {
        nCount += 1;

        #pragma omp for reduction(+ : nSum)
        for (i = SUM_START ; i <= SUM_END ; ++i)
            nSum += i;

        #pragma omp sections reduction(&& : bSucceed)
        {
            #pragma omp section
            {
                bSucceed = bSucceed && func1( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func2( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func3( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func4( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func5( );
            }
        }
    }

    printf_s("The parallel section was executed %d times "
             "in parallel.\n", nCount);
    printf_s("The sum of the consecutive integers from "
             "%d to %d, is %d\n", 1, 10, nSum);

    if (bSucceed)
        printf_s("All of the functions, func1 through "
                 "func5 succeeded!\n");
    else
        printf_s("One or more of the functions, func1 "
                 "through func5 failed!\n");

    if (nCount != NUM_THREADS)
    {
        printf_s("ERROR: For %d threads, %d were counted!\n",
                 NUM_THREADS, nCount);
        nRet |= 0x1;
   }

    if (nSum != nSumCalc)
    {
        printf_s("ERROR: The sum of %d through %d should be %d, "
                "but %d was reported!\n",
                SUM_START, SUM_END, nSumCalc, nSum);
        nRet |= 0x10;
    }

    if (bSucceed != (bRets[0] && bRets[1] &&
                     bRets[2] && bRets[3] && bRets[4]))
    {
        printf_s("ERROR: The sum of %d through %d should be %d, "
                 "but %d was reported!\n",
                 SUM_START, SUM_END, nSumCalc, nSum);
        nRet |= 0x100;
    }
}
```

```Output
The parallel section was executed 4 times in parallel.
The sum of the consecutive integers from 1 to 10, is 55
All of the functions, func1 through func5 succeeded!
```

## <a name="schedule"></a> schedule

Applies to the [for](openmp-directives.md#for-openmp) directive.

```cpp
schedule(type[,size])
```

### Parameters

*type*<br/>
The kind of scheduling, either `dynamic`, `guided`, `runtime`, or `static`.

*size*<br/>
(Optional) Specifies the size of iterations. *size* must be an integer. Not valid when *type* is `runtime`.

### Remarks

For more information, see [2.4.1 for construct](../2-directives.md#241-for-construct).

### Example

```cpp
// omp_schedule.cpp
// compile with: /openmp
#include <windows.h>
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define STATIC_CHUNK 5
#define DYNAMIC_CHUNK 5
#define NUM_LOOPS 20
#define SLEEP_EVERY_N 3

int main( )
{
    int nStatic1[NUM_LOOPS],
        nStaticN[NUM_LOOPS];
    int nDynamic1[NUM_LOOPS],
        nDynamicN[NUM_LOOPS];
    int nGuided[NUM_LOOPS];

    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel
    {
        #pragma omp for schedule(static, 1)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nStatic1[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(static, STATIC_CHUNK)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nStaticN[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(dynamic, 1)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nDynamic1[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(dynamic, DYNAMIC_CHUNK)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nDynamicN[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(guided)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nGuided[i] = omp_get_thread_num( );
        }
    }

    printf_s("------------------------------------------------\n");
    printf_s("| static | static | dynamic | dynamic | guided |\n");
    printf_s("|    1   |    %d   |    1    |    %d    |        |\n",
             STATIC_CHUNK, DYNAMIC_CHUNK);
    printf_s("------------------------------------------------\n");

    for (int i=0; i<NUM_LOOPS; ++i)
    {
        printf_s("|    %d   |    %d   |    %d    |    %d    |"
                 "    %d   |\n",
                 nStatic1[i], nStaticN[i],
                 nDynamic1[i], nDynamicN[i], nGuided[i]);
    }

    printf_s("------------------------------------------------\n");
}
```

```Output
------------------------------------------------
| static | static | dynamic | dynamic | guided |
|    1   |    5   |    1    |    5    |        |
------------------------------------------------
|    0   |    0   |    0    |    2    |    1   |
|    1   |    0   |    3    |    2    |    1   |
|    2   |    0   |    3    |    2    |    1   |
|    3   |    0   |    3    |    2    |    1   |
|    0   |    0   |    2    |    2    |    1   |
|    1   |    1   |    2    |    3    |    3   |
|    2   |    1   |    2    |    3    |    3   |
|    3   |    1   |    0    |    3    |    3   |
|    0   |    1   |    0    |    3    |    3   |
|    1   |    1   |    0    |    3    |    2   |
|    2   |    2   |    1    |    0    |    2   |
|    3   |    2   |    1    |    0    |    2   |
|    0   |    2   |    1    |    0    |    3   |
|    1   |    2   |    2    |    0    |    3   |
|    2   |    2   |    2    |    0    |    0   |
|    3   |    3   |    2    |    1    |    0   |
|    0   |    3   |    3    |    1    |    1   |
|    1   |    3   |    3    |    1    |    1   |
|    2   |    3   |    3    |    1    |    1   |
|    3   |    3   |    0    |    1    |    3   |
------------------------------------------------
```

## <a name="shared-openmp"></a> shared

Specifies that one or more variables should be shared among all threads.

```cpp
shared(var)
```

### Parameters

*var*<br/>
One or more variables to share. If more than one variable is specified, separate variable names with a comma.

### Remarks

Another way to share variables among threads is with the [copyprivate](#copyprivate) clause.

`shared` applies to the following directives:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [sections](openmp-directives.md#sections-openmp)

For more information, see [2.7.2.4 shared](../2-directives.md#2724-shared).

### Example

See [private](#private-openmp) for an example of using `shared`.
