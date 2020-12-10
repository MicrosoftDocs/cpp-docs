---
description: "Learn more about: D. The schedule clause"
title: "D. The schedule clause"
ms.date: "01/22/2019"
ms.assetid: bf3d8f51-ea05-4803-bf55-657c12e91efe
---
# D. The schedule clause

A parallel region has at least one barrier, at its end, and may have additional barriers within it. At each barrier, the other members of the team must wait for the last thread to arrive. To minimize this wait time, shared work should be distributed so that all threads arrive at the barrier at about the same time. If some of that shared work is contained in `for` constructs, the `schedule` clause can be used for this purpose.

When there are repeated references to the same objects, the choice of schedule for a `for` construct may be determined primarily by characteristics of the memory system, such as the presence and size of caches and whether memory access times are uniform or nonuniform. Such considerations may make it preferable to have each thread consistently refer to the same set of elements of an array in a series of loops, even if some threads are assigned relatively less work in some of the loops. This setup can be done by using the `static` schedule with the same bounds for all the loops. In the following example, zero is used as the lower bound in the second loop, even though `k` would be more natural if the schedule were not important.

```cpp
#pragma omp parallel
{
#pragma omp for schedule(static)
  for(i=0; i<n; i++)
    a[i] = work1(i);
#pragma omp for schedule(static)
  for(i=0; i<n; i++)
    if(i>=k) a[i] += work2(i);
}
```

In the remaining examples, it's assumed that memory access isn't the dominant consideration. Unless otherwise stated, that all threads receive comparable computational resources. In these cases, the choice of schedule for a `for` construct depends on all the shared work that's to be performed between the nearest preceding barrier and either the implied closing barrier or the nearest upcoming  barrier, if there's a `nowait` clause. For each kind of schedule, a short example shows how that schedule kind is likely to be the best choice. A brief discussion follows each example.

The `static` schedule is also appropriate for the simplest case, a parallel region containing a single `for` construct, with each iteration requiring the same amount of work.

```cpp
#pragma omp parallel for schedule(static)
for(i=0; i<n; i++) {
  invariant_amount_of_work(i);
}
```

The `static` schedule is characterized by the properties that each thread gets approximately the same number of iterations as any other thread, and each thread can independently determine the iterations assigned to it. Thus no synchronization is required to distribute the work, and, under the assumption that each iteration requires the same amount of work, all threads should finish at about the same time.

For a team of *p* threads, let *ceiling(n/p)* be the integer *q*, which satisfies *n = p\*q - r* with *0 <= r < p*. One implementation of the `static` schedule for this example would assign *q* iterations to the first *p-1* threads, and *q-r* iterations to the last thread.  Another acceptable implementation would assign *q* iterations to the first *p-r* threads, and *q-1* iterations to the remaining *r* threads. This example illustrates why a program shouldn't rely on the details of a particular implementation.

The `dynamic` schedule is appropriate for the case of a `for` construct with the iterations requiring varying, or even unpredictable, amounts of work.

```cpp
#pragma omp parallel for schedule(dynamic)
  for(i=0; i<n; i++) {
    unpredictable_amount_of_work(i);
}
```

The `dynamic` schedule is characterized by the property that no thread waits at the barrier for longer than it takes another thread to execute its final iteration. This requirement means iterations must be assigned one at a time to threads as they become available, with synchronization for each assignment. The synchronization overhead can be reduced by specifying a minimum chunk size *k* greater than 1, so that threads are assigned *k* at a time until fewer than *k* remain. This guarantees that no thread waits at the barrier longer than it takes another thread to execute its final chunk of (at most) *k* iterations.

The `dynamic` schedule can be useful if the threads receive varying computational resources, which has much the same effect as varying amounts of work for each iteration. Similarly, the dynamic schedule can also be useful if the threads arrive at the `for` construct at varying times, though in some of these cases the `guided` schedule may be preferable.

The `guided` schedule is appropriate for the case in which the threads may arrive at varying times at a `for` construct with each iteration requiring about the same amount of work. This situation can happen if, for example, the `for` construct is preceded by one or more sections or `for` constructs with `nowait` clauses.

```cpp
#pragma omp parallel
{
  #pragma omp sections nowait
  {
    // ...
  }
  #pragma omp for schedule(guided)
  for(i=0; i<n; i++) {
    invariant_amount_of_work(i);
  }
}
```

Like `dynamic`, the `guided` schedule guarantees that no thread waits at the barrier longer than it takes another thread to execute its final iteration, or final *k* iterations if a chunk size of *k* is specified. Among such schedules, the `guided` schedule is characterized by the property that it requires the fewest synchronizations. For chunk size *k*, a typical implementation will assign *q = ceiling(n/p)* iterations to the first available thread, set *n* to the larger of *n-q* and *p\*k*, and repeat until all iterations are assigned.

When the choice of the optimum schedule isn't as clear as it is for these examples, the `runtime` schedule is convenient for experimenting with different schedules and chunk sizes without having to modify and recompile the program. It can also be useful when the optimum schedule depends (in some predictable way) on the input data to which the program is applied.

To see an example of the trade-offs between different schedules, consider sharing 1000 iterations among eight threads. Suppose there's an invariant amount of work in each iteration, and use that as the unit of time.

If all threads start at the same time, the `static` schedule will cause the construct to execute in 125 units, with no synchronization. But suppose that one thread is 100 units late in arriving. Then the remaining seven threads wait for 100 units at the barrier, and the execution time for the whole construct increases to 225.

Because both the `dynamic` and `guided` schedules make sure that no thread waits for more than one unit at the barrier, the delayed thread causes their execution times for the construct to increase only to 138 units, possibly increased by delays from synchronization. If such delays aren't negligible, it becomes important that the number of synchronizations is 1000 for `dynamic` but only 41 for `guided`, assuming the default chunk size of one. With a chunk size of 25, `dynamic` and `guided` both finish in 150 units, plus any delays from the required synchronizations, which now number only 40 and 20, respectively.
