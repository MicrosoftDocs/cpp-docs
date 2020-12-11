---
description: "Learn more about: Parallel Algorithms"
title: "Parallel Algorithms"
ms.date: "11/19/2018"
helpviewer_keywords: ["parallel algorithms [Concurrency Runtime]"]
ms.assetid: 045dca7b-4d73-4558-a44c-383b88a28473
---
# Parallel Algorithms

The Parallel Patterns Library (PPL) provides algorithms that concurrently perform work on collections of data. These algorithms resemble those provided by the C++ Standard Library.

The parallel algorithms are composed from existing functionality in the Concurrency Runtime. For example, the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm uses a [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) object to perform the parallel loop iterations. The `parallel_for` algorithm partitions work in an optimal way given the available number of computing resources.

## <a name="top"></a> Sections

- [The parallel_for Algorithm](#parallel_for)

- [The parallel_for_each Algorithm](#parallel_for_each)

- [The parallel_invoke Algorithm](#parallel_invoke)

- [The parallel_transform and parallel_reduce Algorithms](#parallel_transform_reduce)

  - [The parallel_transform Algorithm](#parallel_transform)

  - [The parallel_reduce Algorithm](#parallel_reduce)

  - [Example: Performing Map and Reduce in Parallel](#map_reduce_example)

- [Partitioning Work](#partitions)

- [Parallel Sorting](#parallel_sorting)

  - [Choosing a Sorting Algorithm](#choose_sort)

## <a name="parallel_for"></a> The parallel_for Algorithm

The [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm repeatedly performs the same task in parallel. Each of these tasks is parameterized by an iteration value. This algorithm is useful when you have a loop body that does not share resources among iterations of that loop.

The `parallel_for` algorithm partitions tasks in an optimum way for parallel execution. It uses a work-stealing algorithm and range stealing to balance these partitions when workloads are unbalanced. When one loop iteration blocks cooperatively, the runtime redistributes the range of iterations that is assigned to the current thread to other threads or processors. Similarly, when a thread completes a range of iterations, the runtime redistributes work from other threads to that thread. The `parallel_for` algorithm also supports *nested parallelism*. When one parallel loop contains another parallel loop, the runtime coordinates processing resources between the loop bodies in an efficient way for parallel execution.

The `parallel_for` algorithm has several overloaded versions. The first version takes a start value, an end value, and a work function (a lambda expression, function object, or function pointer). The second version takes a start value, an end value, a value by which to step, and a work function. The first version of this function uses 1 as the step value. The remaining versions take partitioner objects, which enable you to specify how `parallel_for` should partition ranges among threads. Partitioners are explained in greater detail in the section [Partitioning Work](#partitions) in this document.

You can convert many **`for`** loops to use `parallel_for`. However, the `parallel_for` algorithm differs from the **`for`** statement in the following ways:

- The `parallel_for` algorithm `parallel_for` does not execute the tasks in a pre-determined order.

- The `parallel_for` algorithm does not support arbitrary termination conditions. The `parallel_for` algorithm stops when the current value of the iteration variable is one less than `last`.

- The `_Index_type` type parameter must be an integral type. This integral type can be signed or unsigned.

- The loop iteration must be forward. The `parallel_for` algorithm throws an exception of type [std::invalid_argument](../../standard-library/invalid-argument-class.md) if the `_Step` parameter is less than 1.

- The exception-handling mechanism for the `parallel_for` algorithm differs from that of a **`for`** loop. If multiple exceptions occur simultaneously in a parallel loop body, the runtime propagates only one of the exceptions to the thread that called `parallel_for`. In addition, when one loop iteration throws an exception, the runtime does not immediately stop the overall loop. Instead, the loop is placed in the canceled state and the runtime discards any tasks that have not yet started. For more information about exception-handling and parallel algorithms, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Although the `parallel_for` algorithm does not support arbitrary termination conditions, you can use cancellation to stop all tasks. For more information about cancellation, see [Cancellation in the PPL](cancellation-in-the-ppl.md).

> [!NOTE]
> The scheduling cost that results from load balancing and support for features such as cancellation might not overcome the benefits of executing the loop body in parallel, especially when the loop body is relatively small. You can minimize this overhead by using a partitioner in your parallel loop. For more information, see [Partitioning Work](#partitions) later in this document.

### Example

The following example shows the basic structure of the `parallel_for` algorithm. This example prints to the console each value in the range [1, 5] in parallel.

[!code-cpp[concrt-parallel-for-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_1.cpp)]

This example produces the following sample output:

```Output
1 2 4 3 5
```

Because the `parallel_for` algorithm acts on each item in parallel, the order in which the values are printed to the console will vary.

For a complete example that uses the `parallel_for` algorithm, see [How to: Write a parallel_for Loop](../../parallel/concrt/how-to-write-a-parallel-for-loop.md).

[[Top](#top)]

## <a name="parallel_for_each"></a> The parallel_for_each Algorithm

The [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm performs tasks on an iterative container, such as those provided by the C++ Standard Library, in parallel. It uses the same partitioning logic that the `parallel_for` algorithm uses.

The `parallel_for_each` algorithm resembles the C++ Standard Library [std::for_each](../../standard-library/algorithm-functions.md#for_each) algorithm, except that the `parallel_for_each` algorithm executes the tasks concurrently. Like other parallel algorithms, `parallel_for_each` does not execute the tasks in a specific order.

Although the `parallel_for_each` algorithm works on both forward iterators and random access iterators, it performs better with random access iterators.

### Example

The following example shows the basic structure of the `parallel_for_each` algorithm. This example prints to the console each value in a [std::array](../../standard-library/array-class-stl.md) object in parallel.

[!code-cpp[concrt-parallel-for-each-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_2.cpp)]

This example produces the following sample output:

```Output
4 5 1 2 3
```

Because the `parallel_for_each` algorithm acts on each item in parallel, the order in which the values are printed to the console will vary.

For a complete example that uses the `parallel_for_each` algorithm, see [How to: Write a parallel_for_each Loop](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md).

[[Top](#top)]

## <a name="parallel_invoke"></a> The parallel_invoke Algorithm

The [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm executes a set of tasks in parallel. It does not return until each task finishes. This algorithm is useful when you have several independent tasks that you want to execute at the same time.

The `parallel_invoke` algorithm takes as its parameters a series of work functions (lambda functions, function objects, or function pointers). The `parallel_invoke` algorithm is overloaded to take between two and ten parameters. Every function that you pass to `parallel_invoke` must take zero parameters.

Like other parallel algorithms, `parallel_invoke` does not execute the tasks in a specific order. The topic [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md) explains how the `parallel_invoke` algorithm relates to tasks and task groups.

### Example

The following example shows the basic structure of the `parallel_invoke` algorithm. This example concurrently calls the `twice` function on three local variables and prints the result to the console.

[!code-cpp[concrt-parallel-invoke-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_3.cpp)]

This example produces the following output:

```Output
108 11.2 HelloHello
```

For complete examples that use the `parallel_invoke` algorithm, see [How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md) and [How to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md).

[[Top](#top)]

## <a name="parallel_transform_reduce"></a> The parallel_transform and parallel_reduce Algorithms

The [concurrency::parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform) and [concurrency::parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce) algorithms are parallel versions of the C++ Standard Library algorithms [std::transform](../../standard-library/algorithm-functions.md#transform) and [std::accumulate](../../standard-library/numeric-functions.md#accumulate), respectively. The Concurrency Runtime versions behave like the C++ Standard Library versions except that the operation order is not determined because they execute in parallel. Use these algorithms when you work with a set that is large enough to get performance and scalability benefits from being processed in parallel.

> [!IMPORTANT]
> The `parallel_transform` and `parallel_reduce` algorithms support only random access, bi-directional, and forward iterators because these iterators produce stable memory addresses. Also, these iterators must produce non-**`const`** l-values.

### <a name="parallel_transform"></a> The parallel_transform Algorithm

You can use the `parallel transform` algorithm to perform many data parallelization operations. For example, you can:

- Adjust the brightness of an image, and perform other image processing operations.

- Sum or take the dot product between two vectors, and perform other numeric calculations on vectors.

- Perform 3-D ray tracing, where each iteration refers to one pixel that must be rendered.

The following example shows the basic structure that is used to call the `parallel_transform` algorithm. This example negates each element of a std::[vector](../../standard-library/vector-class.md) object in two ways. The first way uses a lambda expression. The second way uses [std::negate](../../standard-library/negate-struct.md), which derives from [std::unary_function](../../standard-library/unary-function-struct.md).

[!code-cpp[concrt-basic-parallel-transform#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_4.cpp)]

> [!WARNING]
> This example demonstrates the basic use of `parallel_transform`. Because the work function does not perform a significant amount of work, a significant increase in performance is not expected in this example.

The `parallel_transform` algorithm has two overloads. The first overload takes one input range and a unary function. The unary function can be a lambda expression that takes one argument, a function object, or a type that derives from `unary_function`. The second overload takes two input ranges and a binary function. The binary function can be a lambda expression that takes two arguments, a function object, or a type that derives from [std::binary_function](../../standard-library/binary-function-struct.md). The following example illustrates these differences.

[!code-cpp[concrt-parallel-transform-vectors#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_5.cpp)]

> [!IMPORTANT]
> The iterator that you supply for the output of `parallel_transform` must completely overlap the input iterator or not overlap at all. The behavior of this algorithm is unspecified if the input and output iterators partially overlap.

### <a name="parallel_reduce"></a> The parallel_reduce Algorithm

The `parallel_reduce` algorithm is useful when you have a sequence of operations that satisfy the associative property. (This algorithm does not require the commutative property.) Here are some of the operations that you can perform with `parallel_reduce`:

- Multiply sequences of matrices to produce a matrix.

- Multiply a vector by a sequence of matrices to produce a vector.

- Compute the length of a sequence of strings.

- Combine a list of elements, such as strings, into one element.

The following basic example shows how to use the `parallel_reduce` algorithm to combine a sequence of strings into one string. As with the examples for `parallel_transform`, performance gains are not expected in this basic example.

[!code-cpp[concrt-basic-parallel-reduce#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_6.cpp)]

In many cases, you can think of `parallel_reduce` as shorthand for the use of the `parallel_for_each` algorithm together with the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class.

### <a name="map_reduce_example"></a> Example: Performing Map and Reduce in Parallel

A *map* operation applies a function to each value in a sequence. A *reduce* operation combines the elements of a sequence into one value. You can use the C++ Standard Library [std::transform](../../standard-library/algorithm-functions.md#transform) and [std::accumulate](../../standard-library/numeric-functions.md#accumulate) functions to perform map and reduce operations. However, for many problems, you can use the `parallel_transform` algorithm to perform the map operation in parallel and the `parallel_reduce` algorithm perform the reduce operation in parallel.

The following example compares the time that it takes to compute the sum of prime numbers serially and in parallel. The map phase transforms non-prime values to 0 and the reduce phase sums the values.

[!code-cpp[concrt-parallel-map-reduce-sum-of-primes#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_7.cpp)]

For another example that performs a map and reduce operation in parallel, see [How to: Perform Map and Reduce Operations in Parallel](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

[[Top](#top)]

## <a name="partitions"></a> Partitioning Work

To parallelize an operation on a data source, an essential step is to *partition* the source into multiple sections that can be accessed concurrently by multiple threads. A partitioner specifies how a parallel algorithm should partition ranges among threads. As explained previously in this document, the PPL uses a default partitioning mechanism that creates an initial workload and then uses a work-stealing algorithm and range stealing to balance these partitions when workloads are unbalanced. For example, when one loop iteration completes a range of iterations, the runtime redistributes work from other threads to that thread. However, for some scenarios, you might want to specify a different partitioning mechanism that is better suited to your problem.

The `parallel_for`, `parallel_for_each`, and `parallel_transform` algorithms provide overloaded versions that take an additional parameter, `_Partitioner`. This parameter defines the partitioner type that divides work. Here are the kinds of partitioners that the PPL defines:

[concurrency::affinity_partitioner](../../parallel/concrt/reference/affinity-partitioner-class.md)<br/>
Divides work into a fixed number of ranges (typically the number of worker threads that are available to work on the loop). This partitioner type resembles `static_partitioner`, but improves cache affinity by the way it maps ranges to worker threads. This partitioner type can improve performance when a loop is executed over the same data set multiple times (such as a loop within a loop) and the data fits in cache. This partitioner does not fully participate in cancellation. It also does not use cooperative blocking semantics and therefore cannot be used with parallel loops that have a forward dependency.

[concurrency::auto_partitioner](../../parallel/concrt/reference/auto-partitioner-class.md)<br/>
Divides work into an initial number of ranges (typically the number of worker threads that are available to work on the loop). The runtime uses this type by default when you do not call an overloaded parallel algorithm that takes a `_Partitioner` parameter. Each range can be divided into sub-ranges, and thereby enables load balancing to occur. When a range of work completes, the runtime redistributes sub-ranges of work from other threads to that thread. Use this partitioner if your workload does not fall under one of the other categories or you require full support for cancellation or cooperative blocking.

[concurrency::simple_partitioner](../../parallel/concrt/reference/simple-partitioner-class.md)<br/>
Divides work into ranges such that each range has at least the number of iterations that are specified by the given chunk size. This partitioner type participates in load balancing; however, the runtime does not divide ranges into sub-ranges. For each worker, the runtime checks for cancellation and performs load-balancing after `_Chunk_size` iterations complete.

[concurrency::static_partitioner](../../parallel/concrt/reference/static-partitioner-class.md)<br/>
Divides work into a fixed number of ranges (typically the number of worker threads that are available to work on the loop). This partitioner type can improve performance because it does not use work-stealing and therefore has less overhead. Use this partitioner type when each iteration of a parallel loop performs a fixed and uniform amount of work and you do not require support for cancellation or forward cooperative blocking.

> [!WARNING]
> The `parallel_for_each` and `parallel_transform` algorithms support only containers that use random access iterators (such as std::[vector](../../standard-library/vector-class.md)) for the static, simple, and affinity partitioners. The use of containers that use bidirectional and forward iterators produces a compile-time error. The default partitioner, `auto_partitioner`, supports all three of these iterator types.

Typically, these partitioners are used in the same way, except for `affinity_partitioner`. Most partitioner types do not maintain state and are not modified by the runtime. Therefore you can create these partitioner objects at the call site, as shown in the following example.

[!code-cpp[concrt-static-partitioner#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_8.cpp)]

However, you must pass an `affinity_partitioner` object as a non-**`const`**, l-value reference so that the algorithm can store state for future loops to reuse. The following example shows a basic application that performs the same operation on a data set in parallel multiple times. The use of `affinity_partitioner` can improve performance because the array is likely to fit in cache.

[!code-cpp[concrt-affinity-partitioner#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_9.cpp)]

> [!CAUTION]
> Use caution when you modify existing code that relies on cooperative blocking semantics to use `static_partitioner` or `affinity_partitioner`. These partitioner types do not use load balancing or range stealing, and therefore can alter the behavior of your application.

The best way to determine whether to use a partitioner in any given scenario is to experiment and measure how long it takes operations to complete under representative loads and computer configurations. For example, static partitioning might provide significant speedup on a multi-core computer that has only a few cores, but it might result in slowdowns on computers that have relatively many cores.

[[Top](#top)]

## <a name="parallel_sorting"></a> Parallel Sorting

The PPL provides three sorting algorithms: [concurrency::parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [concurrency::parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort), and [concurrency::parallel_radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). These sorting algorithms are useful when you have a data set that can benefit from being sorted in parallel. In particular, sorting in parallel is useful when you have a large dataset or when you use a computationally-expensive compare operation to sort your data. Each of these algorithms sorts elements in place.

The `parallel_sort` and `parallel_buffered_sort` algorithms are both compare-based algorithms. That is, they compare elements by value. The `parallel_sort` algorithm has no additional memory requirements, and is suitable for general-purpose sorting. The `parallel_buffered_sort` algorithm can perform better than `parallel_sort`, but it requires O(N) space.

The `parallel_radixsort` algorithm is hash-based. That is, it uses integer keys to sort elements. By using keys, this algorithm can directly compute the destination of an element instead of using comparisons. Like `parallel_buffered_sort`, this algorithm requires O(N) space.

The following table summarizes the important properties of the three parallel sorting algorithms.

|Algorithm|Description|Sorting mechanism|Sort Stability|Memory requirements|Time Complexity|Iterator access|
|---------------|-----------------|-----------------------|--------------------|-------------------------|---------------------|---------------------|
|`parallel_sort`|General-purpose compare-based sort.|Compare-based (ascending)|Unstable|None|O((N/P)log(N/P) + 2N((P-1)/P))|Random|
|`parallel_buffered_sort`|Faster general-purpose compare-based sort that requires O(N) space.|Compare-based (ascending)|Unstable|Requires additional O(N) space|O((N/P)log(N))|Random|
|`parallel_radixsort`|Integer key-based sort that requires O(N) space.|Hash-based|Stable|Requires additional O(N) space|O(N/P)|Random|

The following illustration  shows the important properties of the three parallel sorting algorithms more graphically.

![Comparison of the sorting algorithms](../../parallel/concrt/media/concrt_parallel_sorting.png "Comparison of the sorting algorithms")

These parallel sorting algorithms follow the rules of cancellation and exception handling. For more information about cancellation and exception handling in the Concurrency Runtime, see [Canceling Parallel Algorithms](../../parallel/concrt/cancellation-in-the-ppl.md#algorithms) and [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

> [!TIP]
> These parallel sorting algorithms support move semantics. You can define a move assignment operator to enable swap operations to occur more efficiently. For more information about move semantics and the move assignment operator, see [Rvalue Reference Declarator: &&](../../cpp/rvalue-reference-declarator-amp-amp.md), and [Move Constructors and Move Assignment Operators (C++)](../../cpp/move-constructors-and-move-assignment-operators-cpp.md). If you do not provide a move assignment operator or swap function, the sorting algorithms use the copy constructor.

The following basic example shows how to use `parallel_sort` to sort a `vector` of **`int`** values. By default, `parallel_sort` uses [std::less](../../standard-library/less-struct.md) to compare values.

[!code-cpp[concrt-basic-parallel-sort#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_10.cpp)]

This example shows how to provide a custom compare function. It uses the [std::complex::real](../../standard-library/complex-class.md#real) method to sort [std::complex\<double>](../../standard-library/complex-double.md) values in ascending order.

[!code-cpp[concrt-basic-parallel-sort#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_11.cpp)]

This example shows how to provide a hash function to the `parallel_radixsort` algorithm. This example sorts 3-D points. The points are sorted based on their distance from a reference point.

[!code-cpp[concrt-parallel-sort-points#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_12.cpp)]

For illustration, this example uses a relatively small data set. You can increase the initial size of the vector to experiment with performance improvements over larger sets of data.

This example uses a lambda expression as the hash function. You can also use one of the built-in implementations of the std::[hash class](../../standard-library/hash-class.md) or define your own specialization. You can also use a custom hash function object, as shown in this example:

[!code-cpp[concrt-parallel-sort-points#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_13.cpp)]

[!code-cpp[concrt-parallel-sort-points#3](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_14.cpp)]

The hash function must return an integral type ([std::is_integral::value](../../standard-library/is-integral-class.md) must be **`true`**). This integral type must be convertible to type `size_t`.

### <a name="choose_sort"></a> Choosing a Sorting Algorithm

In many cases, `parallel_sort` provides the best balance of speed and memory performance. However, as you increase the size of your data set, the number of available processors, or the complexity of your compare function, `parallel_buffered_sort` or `parallel_radixsort` can perform better. The best way to determine which sorting algorithm to use in any given scenario is to experiment and measure how long it takes to sort typical data under representative computer configurations. Keep the following guidelines in mind when you choose a sorting strategy.

- The size of your data set. In this document, a *small* dataset contains fewer than 1,000 elements, a *medium* dataset contains between 10,000 and 100,000 elements, and a *large* dataset contains more than 100,000 elements.

- The amount of work that your compare function or hash function performs.

- The amount of available computing resources.

- The characteristics of your data set. For example, one algorithm might perform well for data that is already nearly sorted, but not as well for data that is completely unsorted.

- The chunk size. The optional `_Chunk_size` argument specifies when the algorithm switches from a parallel to a serial sort implementation as it subdivides the overall sort into smaller units of work. For example, if you provide 512, the algorithm switches to serial implementation when a unit of work contains 512 or fewer elements. A serial implementation can improve overall performance because it eliminates the overhead that is required to process data in parallel.

It might not be worthwhile to sort a small dataset in parallel, even when you have a large number of available computing resources or your compare function or hash function performs a relatively large amount of work. You can use [std::sort](../../standard-library/algorithm-functions.md#sort) function to sort small datasets. (`parallel_sort` and `parallel_buffered_sort` call `sort` when you specify a chunk size that is larger than the dataset; however, `parallel_buffered_sort` would have to allocate O(N) space, which could take additional time due to lock contention or memory allocation.)

If you must conserve memory or your memory allocator is subject to lock contention, use `parallel_sort` to sort a medium-sized dataset. `parallel_sort` requires no additional space; the other algorithms require O(N) space.

Use `parallel_buffered_sort` to sort medium-sized datasets and when your application meets the additional O(N) space requirement. `parallel_buffered_sort` can be especially useful when you have a large number of computing resources or an expensive compare function or hash function.

Use `parallel_radixsort` to sort large datasets and when your application meets the additional O(N) space requirement. `parallel_radixsort` can be especially useful when the equivalent compare operation is more expensive or when both operations are expensive.

> [!CAUTION]
> Implementing a good hash function requires that you know the dataset range and how each element in the dataset is transformed to a corresponding unsigned value. Because the hash operation works on unsigned values, consider a different sorting strategy if unsigned hash values cannot be produced.

The following example compares the performance of `sort`, `parallel_sort`, `parallel_buffered_sort`, and `parallel_radixsort` against the same large set of random data.

[!code-cpp[concrt-choosing-parallel-sort#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_15.cpp)]

In this example, which assumes that it is acceptable to allocate O(N) space during the sort, `parallel_radixsort` performs the best on this dataset on this computer configuration.

[[Top](#top)]

## Related Topics

|Title|Description|
|-----------|-----------------|
|[How to: Write a parallel_for Loop](../../parallel/concrt/how-to-write-a-parallel-for-loop.md)|Shows how to use the `parallel_for` algorithm to perform matrix multiplication.|
|[How to: Write a parallel_for_each Loop](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md)|Shows how to use the `parallel_for_each` algorithm to compute the count of prime numbers in a [std::array](../../standard-library/array-class-stl.md) object in parallel.|
|[How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)|Shows how to use the `parallel_invoke` algorithm to improve the performance of the bitonic sort algorithm.|
|[How to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)|Shows how to use the `parallel_invoke` algorithm to improve the performance of a program that performs multiple operations on a shared data source.|
|[How to: Perform Map and Reduce Operations in Parallel](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md)|Shows how to use the `parallel_transform` and `parallel_reduce` algorithms to perform a map and reduce operation that counts the occurrences of words in files.|
|[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Describes the PPL, which provides an imperative programming model that promotes scalability and ease-of-use for developing concurrent applications.|
|[Cancellation in the PPL](cancellation-in-the-ppl.md)|Explains the role of cancellation in the PPL, how to cancel parallel work, and how to determine when a task group is canceled.|
|[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Explains the role of exception handling in the Concurrency Runtime.|

## Reference

[parallel_for Function](reference/concurrency-namespace-functions.md#parallel_for)

[parallel_for_each Function](reference/concurrency-namespace-functions.md#parallel_for_each)

[parallel_invoke Function](reference/concurrency-namespace-functions.md#parallel_invoke)

[affinity_partitioner Class](../../parallel/concrt/reference/affinity-partitioner-class.md)

[auto_partitioner Class](../../parallel/concrt/reference/auto-partitioner-class.md)

[simple_partitioner Class](../../parallel/concrt/reference/simple-partitioner-class.md)

[static_partitioner Class](../../parallel/concrt/reference/static-partitioner-class.md)

[parallel_sort Function](reference/concurrency-namespace-functions.md#parallel_sort)

[parallel_buffered_sort Function](reference/concurrency-namespace-functions.md#parallel_buffered_sort)

[parallel_radixsort Function](reference/concurrency-namespace-functions.md#parallel_radixsort)
