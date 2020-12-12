---
description: "Learn more about: A. Examples"
title: "A. Examples"
ms.date: "01/18/2019"
ms.assetid: c0f6192f-a205-449b-b84c-cb30dbcc8b8f
---
# A. Examples

The following are examples of the constructs defined in this document. A statement following a directive is compound only when necessary, and a non-compound statement is indented from a directive preceding it.

## A.1 A simple loop in parallel

The following example demonstrates how to parallelize a loop using the [parallel for](2-directives.md#251-parallel-for-construct) directive. The loop iteration variable is private by default, so it isn't necessary to specify it explicitly in a private clause.

```cpp
#pragma omp parallel for
    for (i=1; i<n; i++)
        b[i] = (a[i] + a[i-1]) / 2.0;
```

## A.2 Conditional compilation

The following examples illustrate the use of conditional compilation using the OpenMP macro [_OPENMP](2-directives.md#22-conditional-compilation). With OpenMP compilation, the `_OPENMP` macro becomes defined.

```cpp
# ifdef _OPENMP
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

The defined preprocessor operator allows more than one macro to be tested in a single directive.

```cpp
# if defined(_OPENMP) && defined(VERBOSE)
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

## A.3 Parallel regions

The [parallel](2-directives.md#23-parallel-construct) directive can be used in coarse-grain parallel programs. In the following example, each thread in the parallel region decides what part of the global array `x` to work on, based on the thread number:

```cpp
#pragma omp parallel shared(x, npoints) private(iam, np, ipoints)
{
    iam = omp_get_thread_num();
    np =  omp_get_num_threads();
    ipoints = npoints / np;
    subdomain(x, iam, ipoints);
}
```

## A.4 The nowait clause

If there are many independent loops within a parallel region, you can use the [nowait](2-directives.md#241-for-construct) clause to avoid the implied barrier at the end of the `for` directive, as follows:

```cpp
#pragma omp parallel
{
    #pragma omp for nowait
        for (i=1; i<n; i++)
             b[i] = (a[i] + a[i-1]) / 2.0;
    #pragma omp for nowait
        for (i=0; i<m; i++)
            y[i] = sqrt(z[i]);
}
```

## A.5 The critical directive

The following example includes several [critical](2-directives.md#262-critical-construct) directives. The example illustrates a queuing model in which a task is dequeued and worked on. To guard against many threads dequeuing the same task, the dequeuing operation must be in a `critical` section. Because the two queues in this example are independent, they're protected by `critical` directives with different names, *xaxis* and *yaxis*.

```cpp
#pragma omp parallel shared(x, y) private(x_next, y_next)
{
    #pragma omp critical ( xaxis )
        x_next = dequeue(x);
    work(x_next);
    #pragma omp critical ( yaxis )
        y_next = dequeue(y);
    work(y_next);
}
```

## A.6 The lastprivate clause

Correct execution sometimes depends on the value that the last iteration of a loop assigns to a variable. Such programs must list all such variables as arguments to a [lastprivate](2-directives.md#2723-lastprivate) clause so that the values of the variables are the same as when the loop is executed sequentially.

```cpp
#pragma omp parallel
{
   #pragma omp for lastprivate(i)
      for (i=0; i<n-1; i++)
         a[i] = b[i] + b[i+1];
}
a[i]=b[i];
```

In the preceding example, the value of `i` at the end of the parallel region will equal `n-1`, as in the sequential case.

## A.7 The reduction clause

The following example demonstrates the [reduction](2-directives.md#2726-reduction) clause:

```cpp
#pragma omp parallel for private(i) shared(x, y, n) \
                         reduction(+: a, b)
    for (i=0; i<n; i++) {
        a = a + x[i];
        b = b + y[i];
    }
```

## A.8 Parallel sections

In the following example (for [section 2.4.2](2-directives.md#242-sections-construct)), functions *xaxis*, *yaxis*, and *zaxis* can be executed concurrently. The first `section` directive is optional.  All `section` directives need to appear in the lexical extent of the `parallel sections` construct.

```cpp
#pragma omp parallel sections
{
    #pragma omp section
        xaxis();
    #pragma omp section
        yaxis();
    #pragma omp section
        zaxis();
}
```

## A.9 Single directives

The following example demonstrates the [single](2-directives.md#243-single-construct) directive. In the example, only one thread (usually the first thread that encounters the `single` directive) prints the progress message. The user must not make any assumptions as to which thread will execute the `single` section. All other threads will skip the `single` section and stop at the barrier at the end of the `single` construct. If other threads can proceed without waiting for the thread executing the `single` section, a `nowait` clause can be specified on the `single` directive.

```cpp
#pragma omp parallel
{
    #pragma omp single
        printf_s("Beginning work1.\n");
    work1();
    #pragma omp single
        printf_s("Finishing work1.\n");
    #pragma omp single nowait
        printf_s("Finished work1 and beginning work2.\n");
    work2();
}
```

## A.10 Sequential ordering

[Ordered sections](2-directives.md#266-ordered-construct) are useful for sequentially ordering the output from work that's done in parallel. The following program prints out the indexes in sequential order:

```cpp
#pragma omp for ordered schedule(dynamic)
    for (i=lb; i<ub; i+=st)
        work(i);
void work(int k)
{
    #pragma omp ordered
        printf_s(" %d", k);
}
```

## A.11 A fixed number of threads

Some programs rely on a fixed, prespecified number of threads to execute correctly.  Because the default setting for the dynamic adjustment of the number of threads is implementation-defined, such programs can choose to turn off the dynamic threads capability and set the number of threads explicitly to keep portability. The following example shows how to do this using [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function), and [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function):

```cpp
omp_set_dynamic(0);
omp_set_num_threads(16);
#pragma omp parallel shared(x, npoints) private(iam, ipoints)
{
    if (omp_get_num_threads() != 16)
      abort();
    iam = omp_get_thread_num();
    ipoints = npoints/16;
    do_by_16(x, iam, ipoints);
}
```

In this example, the program executes correctly only if it's executed by 16 threads. If the implementation isn't capable of supporting 16 threads, the behavior of this example is implementation-defined.

The number of threads executing a parallel region stays constant during a parallel region, regardless of the dynamic threads setting. The dynamic threads mechanism determines the number of threads to use at the start of the parallel region and keeps it constant for the duration of the region.

## A.12 The atomic directive

The following example avoids race conditions (simultaneous updates of an element of *x* by many threads) by using the [atomic](2-directives.md#264-atomic-construct) directive:

```cpp
#pragma omp parallel for shared(x, y, index, n)
    for (i=0; i<n; i++)
    {
        #pragma omp atomic
            x[index[i]] += work1(i);
        y[i] += work2(i);
    }
```

The advantage of using the `atomic` directive in this example is that it allows updates of two different elements of x to occur in parallel. If a [critical](2-directives.md#262-critical-construct) directive is used instead, then all updates to elements of *x* are executed serially (though not in any guaranteed order).

The `atomic` directive applies only to the C or C++ statement immediately following it.  As a result, elements of *y* aren't updated atomically in this example.

## A.13 A flush directive with a list

The following example uses the `flush` directive for point-to-point synchronization of specific objects between pairs of threads:

```cpp
int   sync[NUMBER_OF_THREADS];
float work[NUMBER_OF_THREADS];
#pragma omp parallel private(iam,neighbor) shared(work,sync)
{
    iam = omp_get_thread_num();
    sync[iam] = 0;
    #pragma omp barrier

    // Do computation into my portion of work array
    work[iam] = ...;

    //  Announce that I am done with my work
    // The first flush ensures that my work is
    // made visible before sync.
    // The second flush ensures that sync is made visible.
    #pragma omp flush(work)
    sync[iam] = 1;
    #pragma omp flush(sync)

    // Wait for neighbor
    neighbor = (iam>0 ? iam : omp_get_num_threads()) - 1;
    while (sync[neighbor]==0)
    {
        #pragma omp flush(sync)
    }

    // Read neighbor's values of work array
    ... = work[neighbor];
}
```

## A.14 A flush directive without a list

The following example (for [section 2.6.5](2-directives.md#265-flush-directive)) distinguishes the shared objects affected by a `flush` directive with no list from the shared objects that aren't affected:

```cpp
// omp_flush_without_list.c
#include <omp.h>

int x, *p = &x;

void f1(int *q)
{
    *q = 1;
    #pragma omp flush
    // x, p, and *q are flushed
    //   because they are shared and accessible
    // q is not flushed because it is not shared.
}

void f2(int *q)
{
    #pragma omp barrier
    *q = 2;

    #pragma omp barrier
    // a barrier implies a flush
    // x, p, and *q are flushed
    //   because they are shared and accessible
    // q is not flushed because it is not shared.
}

int g(int n)
{
    int i = 1, j, sum = 0;
    *p = 1;

    #pragma omp parallel reduction(+: sum) num_threads(10)
    {
        f1(&j);
        // i, n and sum were not flushed
        //   because they were not accessible in f1
        // j was flushed because it was accessible
        sum += j;
        f2(&j);
        // i, n, and sum were not flushed
        //   because they were not accessible in f2
        // j was flushed because it was accessible
        sum += i + j + *p + n;
    }
    return sum;
}

int main()
{
}
```

## A.15 The number of threads used

Consider the following incorrect example (for [section 3.1.2](3-run-time-library-functions.md#312-omp_get_num_threads-function)):

```cpp
np = omp_get_num_threads(); // misplaced
#pragma omp parallel for schedule(static)
    for (i=0; i<np; i++)
        work(i);
```

The `omp_get_num_threads()` call returns 1 in the serial section of the code, so *np* will always be equal to 1 in the preceding example. To determine the number of threads that will be deployed for the parallel region, the call should be inside the parallel region.

The following example shows how to rewrite this program without including a query for the number of threads:

```cpp
#pragma omp parallel private(i)
{
    i = omp_get_thread_num();
    work(i);
}
```

## A.16 Locks

In the following example (for [section 3.2](3-run-time-library-functions.md#32-lock-functions)), the argument to the lock functions should have type `omp_lock_t`, and that there's no need to flush it.  The lock functions cause the threads to be idle while waiting for entry to the first critical section, but to do other work while waiting for entry to the second.  The `omp_set_lock` function blocks, but the `omp_test_lock` function doesn't, allowing the work in `skip()` to be done.

```cpp
// omp_using_locks.c
// compile with: /openmp /c
#include <stdio.h>
#include <omp.h>

void work(int);
void skip(int);

int main() {
   omp_lock_t lck;
   int id;

   omp_init_lock(&lck);
   #pragma omp parallel shared(lck) private(id)
   {
      id = omp_get_thread_num();

      omp_set_lock(&lck);
      printf_s("My thread id is %d.\n", id);

      // only one thread at a time can execute this printf
      omp_unset_lock(&lck);

      while (! omp_test_lock(&lck)) {
         skip(id);   // we do not yet have the lock,
                     // so we must do something else
      }
      work(id);     // we now have the lock
                    // and can do the work
      omp_unset_lock(&lck);
   }
   omp_destroy_lock(&lck);
}
```

## A.17 Nestable locks

The following example (for [section 3.2](3-run-time-library-functions.md#32-lock-functions)) demonstrates how a nestable lock can be used to synchronize updates both to a whole structure and to one of its members.

```cpp
#include <omp.h>
typedef struct {int a,b; omp_nest_lock_t lck;} pair;

void incr_a(pair *p, int a)
{
    // Called only from incr_pair, no need to lock.
    p->a += a;
}

void incr_b(pair *p, int b)
{
    // Called both from incr_pair and elsewhere,
    // so need a nestable lock.

    omp_set_nest_lock(&p->lck);
    p->b += b;
    omp_unset_nest_lock(&p->lck);
}

void incr_pair(pair *p, int a, int b)
{
    omp_set_nest_lock(&p->lck);
    incr_a(p, a);
    incr_b(p, b);
    omp_unset_nest_lock(&p->lck);
}

void f(pair *p)
{
    extern int work1(), work2(), work3();
    #pragma omp parallel sections
    {
        #pragma omp section
            incr_pair(p, work1(), work2());
        #pragma omp section
            incr_b(p, work3());
    }
}
```

## A.18 Nested for directives

The following example of `for` [directive nesting](2-directives.md#29-directive-nesting) is compliant because the inner and outer `for` directives bind to different parallel regions:

```cpp
#pragma omp parallel default(shared)
{
    #pragma omp for
        for (i=0; i<n; i++)
        {
            #pragma omp parallel shared(i, n)
            {
                #pragma omp for
                    for (j=0; j<n; j++)
                        work(i, j);
            }
        }
}
```

A following variation of the preceding example is also compliant:

```cpp
#pragma omp parallel default(shared)
{
    #pragma omp for
        for (i=0; i<n; i++)
            work1(i, n);
}

void work1(int i, int n)
{
    int j;
    #pragma omp parallel default(shared)
    {
        #pragma omp for
            for (j=0; j<n; j++)
                work2(i, j);
    }
    return;
}
```

## A.19 Examples showing incorrect nesting of work-sharing directives

The examples in this section illustrate the [directive nesting](2-directives.md#29-directive-nesting) rules.

The following example is noncompliant because the inner and outer `for` directives are nested and bind to the same `parallel` directive:

```cpp
void wrong1(int n)
{
  #pragma omp parallel default(shared)
  {
      int i, j;
      #pragma omp for
      for (i=0; i<n; i++) {
          #pragma omp for
              for (j=0; j<n; j++)
                 work(i, j);
     }
   }
}
```

The following dynamically nested version of the preceding example is also noncompliant:

```cpp
void wrong2(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++)
        work1(i, n);
  }
}

void work1(int i, int n)
{
  int j;
  #pragma omp for
    for (j=0; j<n; j++)
      work2(i, j);
}
```

The following example is noncompliant because the `for` and `single` directives are nested, and they bind to the same parallel region:

```cpp
void wrong3(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++) {
        #pragma omp single
          work(i);
      }
  }
}
```

The following example is noncompliant because a `barrier` directive inside a `for` can result in deadlock:

```cpp
void wrong4(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++) {
        work1(i);
        #pragma omp barrier
        work2(i);
      }
  }
}
```

The following example is noncompliant because the `barrier` results in deadlock due to the fact that only one thread at a time can enter the critical section:

```cpp
void wrong5()
{
  #pragma omp parallel
  {
    #pragma omp critical
    {
       work1();
       #pragma omp barrier
       work2();
    }
  }
}
```

The following example is noncompliant because the `barrier` results in deadlock due to the fact that only one thread executes the `single` section:

```cpp
void wrong6()
{
  #pragma omp parallel
  {
    setup();
    #pragma omp single
    {
      work1();
      #pragma omp barrier
      work2();
    }
    finish();
  }
}
```

## A.20 Bind barrier directives

The directive binding rules call for a `barrier` directive to bind to the closest enclosing `parallel` directive. For more information on directive binding, see [section 2.8](2-directives.md#28-directive-binding).

In the following example, the call from *main* to *sub2* is compliant because the `barrier` (in *sub3*) binds to the parallel region in *sub2*. The call from *main* to *sub1* is compliant because the `barrier` binds to the parallel region in subroutine *sub2*.  The call from *main* to *sub3* is compliant because the `barrier` doesn't bind to any parallel region and is ignored. Also, the `barrier` only synchronizes the team of threads in the enclosing parallel region and not all the threads created in *sub1*.

```cpp
int main()
{
    sub1(2);
    sub2(2);
    sub3(2);
}

void sub1(int n)
{
    int i;
    #pragma omp parallel private(i) shared(n)
    {
        #pragma omp for
        for (i=0; i<n; i++)
            sub2(i);
    }
}

void sub2(int k)
{
     #pragma omp parallel shared(k)
     sub3(k);
}

void sub3(int n)
{
    work(n);
    #pragma omp barrier
    work(n);
}
```

## A.21 Scope variables with the private clause

The values of `i` and `j` in the following example are undefined on exit from the parallel region:

```cpp
int i, j;
i = 1;
j = 2;
#pragma omp parallel private(i) firstprivate(j)
{
  i = 3;
  j = j + 2;
}
printf_s("%d %d\n", i, j);
```

For more information on the `private` clause, see [section 2.7.2.1](2-directives.md#2721-private).

## A.22 The default(none) clause

The following example distinguishes the variables that are affected by the `default(none)` clause from the variables that aren't:

```cpp
// openmp_using_clausedefault.c
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int x, y, z[1000];
#pragma omp threadprivate(x)

void fun(int a) {
   const int c = 1;
   int i = 0;

   #pragma omp parallel default(none) private(a) shared(z)
   {
      int j = omp_get_num_thread();
             //O.K.  - j is declared within parallel region
      a = z[j];       // O.K.  - a is listed in private clause
                      //      - z is listed in shared clause
      x = c;          // O.K.  - x is threadprivate
                      //      - c has const-qualified type
      z[i] = y;       // C3052 error - cannot reference i or y here

      #pragma omp for firstprivate(y)
         for (i=0; i<10 ; i++) {
            z[i] = y;  // O.K. - i is the loop control variable
                       // - y is listed in firstprivate clause
          }
       z[i] = y;   // Error - cannot reference i or y here
   }
}
```

For more information on the `default` clause, see [section 2.7.2.5](2-directives.md#2725-default).

## A.23 Examples of the ordered directive

It's possible to have many ordered sections with a `for` specified with the `ordered` clause. The first example is noncompliant because the API specifies the following rule:

"An iteration of a loop with a `for` construct must not execute the same `ordered` directive more than once, and it must not execute more than one `ordered` directive." (See [section 2.6.6](2-directives.md#266-ordered-construct).)

In this noncompliant example, all iterations execute two ordered sections:

```cpp
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    #pragma omp ordered
    { ... }
    ...
    #pragma omp ordered
    { ... }
    ...
}
```

The following compliant example shows a `for` with more than one ordered section:

```cpp
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    if (i <= 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
    (i > 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
}
```

## A.24 Example of the private clause

The [private](2-directives.md#2721-private) clause of a parallel region is only in effect for the lexical extent of the region, not for the dynamic extent of the region.  Therefore, in the example that follows, any uses of the variable *a* within the `for` loop in the routine *f* refers to a private copy of *a*, while a usage in routine *g* refers to the global *a*.

```cpp
int a;

void f(int n)
{
    a = 0;

    #pragma omp parallel for private(a)
    for (int i=1; i<n; i++)
    {
        a = i;
        g(i, n);
        d(a);     // Private copy of "a"
        ...
    }
    ...

void g(int k, int n)
{
    h(k,a); // The global "a", not the private "a" in f
}
```

## A.25 Examples of the copyprivate data attribute clause

**Example 1:** The [copyprivate](2-directives.md#2728-copyprivate) clause can be used to broadcast values acquired by a single thread directly to all instances of the private variables in the other threads.

```cpp
float x, y;
#pragma omp threadprivate(x, y)

void init( )
{
    float a;
    float b;

    #pragma omp single copyprivate(a,b,x,y)
    {
        get_values(a,b,x,y);
    }

    use_values(a, b, x, y);
}
```

If routine *init* is called from a serial region, its behavior isn't affected by the presence of the directives. After the call to the *get_values* routine has been executed by one thread, no thread leaves the construct until the private objects designated by *a*, *b*, *x*, and *y* in all threads have become defined with the values read.

**Example 2:** In contrast to the previous example, suppose the read must be performed by a particular thread, say the master thread. In this case, the `copyprivate` clause can't be used to do the broadcast directly, but it can be used to provide access to a temporary shared object.

```cpp
float read_next( )
{
    float * tmp;
    float return_val;

    #pragma omp single copyprivate(tmp)
    {
        tmp = (float *) malloc(sizeof(float));
    }

    #pragma omp master
    {
        get_float( tmp );
    }

    #pragma omp barrier
    return_val = *tmp;
    #pragma omp barrier

    #pragma omp single
    {
       free(tmp);
    }

    return return_val;
}
```

**Example 3:** Suppose that the number of lock objects required within a parallel region can't easily be determined prior to entering it. The `copyprivate` clause can be used to provide access to shared lock objects that are allocated within that parallel region.

```cpp
#include <omp.h>

omp_lock_t *new_lock()
{
    omp_lock_t *lock_ptr;

    #pragma omp single copyprivate(lock_ptr)
    {
        lock_ptr = (omp_lock_t *) malloc(sizeof(omp_lock_t));
        omp_init_lock( lock_ptr );
    }

    return lock_ptr;
}
```

## A.26 The threadprivate directive

The following examples demonstrate how to use the [threadprivate](2-directives.md#271-threadprivate-directive) directive to give each thread a separate counter.

### Example 1

```cpp
int counter = 0;
#pragma omp threadprivate(counter)

int sub()
{
    counter++;
    return(counter);
}
```

### Example 2

```cpp
int sub()
{
    static int counter = 0;
    #pragma omp threadprivate(counter)
    counter++;
    return(counter);
}
```

## A.27 C99 variable length arrays

The following example demonstrates how to use C99 Variable Length Arrays (VLAs) in a [firstprivate](2-directives.md#2722-firstprivate) directive.

> [!NOTE]
> Variable length arrays aren't currently supported in Visual C++.

```cpp
void f(int m, int C[m][m])
{
    double v1[m];
    ...
    #pragma omp parallel firstprivate(C, v1)
    ...
}
```

## A.28 The num_threads clause

The following example demonstrates the [num_threads](2-directives.md#23-parallel-construct) clause. The parallel region is executed with a maximum of 10 threads.

```cpp
#include <omp.h>
main()
{
    omp_set_dynamic(1);
    ...
    #pragma omp parallel num_threads(10)
    {
        ... parallel region ...
    }
}
```

## A.29 Work-sharing constructs inside a critical construct

The following example demonstrates using a work-sharing construct inside a `critical` construct. This example is compliant because the work-sharing construct and the `critical` construct don't bind to the same parallel region.

```cpp
void f()
{
  int i = 1;
  #pragma omp parallel sections
  {
    #pragma omp section
    {
      #pragma omp critical (name)
      {
        #pragma omp parallel
        {
          #pragma omp single
          {
            i++;
          }
        }
      }
    }
  }
}
```

## A.30 Reprivatization

The following example demonstrates the reprivatization of variables. Private variables can be marked `private` again in a nested directive. You don't need to share those variables in the enclosing parallel region.

```cpp
int i, a;
...
#pragma omp parallel private(a)
{
  ...
  #pragma omp parallel for private(a)
  for (i=0; i<10; i++)
     {
       ...
     }
}
```

## A.31 Thread-safe lock functions

The following C++ example demonstrates how to initialize an array of locks in a parallel region by using [omp_init_lock](3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions).

```cpp
// A_13_omp_init_lock.cpp
// compile with: /openmp
#include <omp.h>

omp_lock_t *new_locks() {
   int i;
   omp_lock_t *lock = new omp_lock_t[1000];
   #pragma omp parallel for private(i)
   for (i = 0 ; i < 1000 ; i++)
      omp_init_lock(&lock[i]);

   return lock;
}

int main () {}
```
