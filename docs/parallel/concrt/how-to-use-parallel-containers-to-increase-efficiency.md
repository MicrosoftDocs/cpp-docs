---
description: "Learn more about: How to: Use Parallel Containers to Increase Efficiency"
title: "How to: Use Parallel Containers to Increase Efficiency"
ms.date: "11/04/2016"
helpviewer_keywords: ["increasing efficiency with parallel containers [Concurrency Runtime]", "concurrent_queue class, examples", "concurrent_vector class, examples"]
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
---
# How to: Use Parallel Containers to Increase Efficiency

This topic shows how to use parallel containers to efficiently store and access data in parallel.

The example code computes the set of prime and Carmichael numbers in parallel. Then, for each Carmichael number, the code computes the prime factors of that number.

## Example: Determine if an input value is a prime number

The following example shows the `is_prime` function, which determines whether an input value is a prime number, and the `is_carmichael` function, which determines whether the input value is a Carmichael number.

[!code-cpp[concrt-carmichael-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_1.cpp)]

## Example: Compute prime and Carmichael numbers

The following example uses the `is_prime` and `is_carmichael` functions to compute the sets of prime and Carmichael numbers. The example uses the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) and [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithms to compute each set in parallel. For more information about parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

This example uses a [concurrency::concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) object to hold the set of Carmichael numbers because it will later use that object as a work queue. It uses a [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) object to hold the set of prime numbers because it will later iterate through this set to find prime factors.

[!code-cpp[concrt-carmichael-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_2.cpp)]

## Example: Find all prime factors of a given value

The following example shows the `prime_factors_of` function, which uses trial division to find all prime factors of the given value.

This function uses the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm to iterate through the collection of prime numbers. The `concurrent_vector` object enables the parallel loop to concurrently add prime factors to the result.

[!code-cpp[concrt-carmichael-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_3.cpp)]

## Example: Processes each element in the queue of Carmichael numbers

This example processes each element in the queue of Carmichael numbers by calling the `prime_factors_of` function to compute its prime factors. It uses a task group to perform this work in parallel. For more information about task groups, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

This example prints the prime factors for each Carmichael number if that number has more than four prime factors.

[!code-cpp[concrt-carmichael-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_4.cpp)]

## Example: Finished parallel container code sample

The following code shows the complete example, which uses parallel containers to compute the prime factors of the Carmichael numbers.

[!code-cpp[concrt-carmichael-primes#5](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-containers-to-increase-efficiency_5.cpp)]

This example produces the following sample output.

```Output
Prime factors of 9890881 are: 7 11 13 41 241.
Prime factors of 825265 are: 5 7 17 19 73.
Prime factors of 1050985 are: 5 13 19 23 37.
```

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `carmichael-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc carmichael-primes.cpp**

## See also

[Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[concurrent_vector Class](../../parallel/concrt/reference/concurrent-vector-class.md)<br/>
[concurrent_queue Class](../../parallel/concrt/reference/concurrent-queue-class.md)<br/>
[parallel_invoke Function](reference/concurrency-namespace-functions.md#parallel_invoke)<br/>
[parallel_for Function](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[task_group Class](reference/task-group-class.md)
