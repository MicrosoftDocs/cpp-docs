---
description: "Learn more about: How to: Use combinable to Improve Performance"
title: "How to: Use combinable to Improve Performance"
ms.date: "11/04/2016"
helpviewer_keywords: ["combinable class, example", "improving parallel performance with combinable [Concurrency Runtime]"]
ms.assetid: fa730580-1c94-4b2d-8aec-57c91dc0497e
---
# How to: Use combinable to Improve Performance

This example shows how to use the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class to compute the sum of the numbers in a [std::array](../../standard-library/array-class-stl.md) object that are prime. The `combinable` class improves performance by eliminating shared state.

> [!TIP]
> In some cases, parallel map ([concurrency::parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform)) and reduce ([concurrency:: parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce)) can provide performance improvements over `combinable`. For an example that uses map and reduce operations to produce the same results as this example, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## Example - accumulate

The following example uses the [std::accumulate](../../standard-library/numeric-functions.md#accumulate) function to compute the sum of the elements in an array that are prime. In this example, `a` is an `array` object and the `is_prime` function determines whether its input value is prime.

[!code-cpp[concrt-parallel-sum-of-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_1.cpp)]

## Example - parallel_for_each

The following example shows a naïve way to parallelize the previous example. This example uses the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm to process the array in parallel and a [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md) object to synchronize access to the `prime_sum` variable. This example does not scale because each thread must wait for the shared resource to become available.

[!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_2.cpp)]

## Example - combinable

The following example uses a `combinable` object to improve the performance of the previous example. This example eliminates the need for synchronization objects; it scales because the `combinable` object enables each thread to perform its task independently.

A `combinable` object is typically used in two steps. First, produce a series of fine-grained computations by performing work in parallel. Next, combine (or reduce) the computations into a final result. This example uses the [concurrency::combinable::local](reference/combinable-class.md#local) method to obtain a reference to the local sum. It then uses the [concurrency::combinable::combine](reference/combinable-class.md#combine) method and a [std::plus](../../standard-library/plus-struct.md) object to combine the local computations into the final result.

[!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_3.cpp)]

## Example - serial and parallel

The following complete example computes the sum of prime numbers both serially and in parallel. The example prints to the console the time that is required to perform both computations.

[!code-cpp[concrt-parallel-sum-of-primes#4](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-improve-performance_4.cpp)]

The following sample output is for a computer that has four processors.

```Output
1709600813
serial time: 6178 ms

1709600813
parallel time: 1638 ms
```

## Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-sum-of-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc parallel-sum-of-primes.cpp**

## Robust Programming

For an example that uses map and reduce operations to produce the same results, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).

## See also

[Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[combinable Class](../../parallel/concrt/reference/combinable-class.md)<br/>
[critical_section Class](../../parallel/concrt/reference/critical-section-class.md)
