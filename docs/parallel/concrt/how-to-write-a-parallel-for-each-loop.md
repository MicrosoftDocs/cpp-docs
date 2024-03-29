---
description: "Learn more about how to write a parallel_for_each Loop"
title: "How to: write a parallel_for_each Loop"
ms.date: 09/12/2022
helpviewer_keywords: ["writing a parallel_for_each loop [Concurrency Runtime]", "parallel_for_each function, example"]
---
# How to: Write a `parallel_for_each` Loop

This example shows how to use the [`concurrency::parallel_for_each`](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm to compute the count of prime numbers in a [`std::array`](../../standard-library/array-class-stl.md) object in parallel.

## Example

The following example computes the count of prime numbers in an array two times. The example first uses the [`std::for_each`](../../standard-library/algorithm-functions.md#for_each) algorithm to compute the count serially. The example then uses the `parallel_for_each` algorithm to perform the same task in parallel. The example also prints to the console the time that is required to perform both computations.

[!code-cpp[concrt-parallel-count-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-each-loop_1.cpp)]

The following sample output is for a computer that has four cores.

```Output
serial version:
found 17984 prime numbers
took 125 ms

parallel version:
found 17984 prime numbers
took 63 ms
```

## Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-count-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc parallel-count-primes.cpp**

## Robust Programming

The lambda expression that the example passes to the `parallel_for_each` algorithm uses the `InterlockedIncrement` function to enable parallel iterations of the loop to increment the counter simultaneously. If you use functions such as `InterlockedIncrement` to synchronize access to shared resources, you can present performance bottlenecks in your code. You can use a lock-free synchronization mechanism, for example, the [`concurrency::combinable`](../../parallel/concrt/reference/combinable-class.md) class, to eliminate simultaneous access to shared resources. For an example that uses the `combinable` class in this manner, see [How to: Use combinable to improve performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md).

## See also

[Parallel algorithms](../../parallel/concrt/parallel-algorithms.md)\
[`parallel_for_each` Function](reference/concurrency-namespace-functions.md#parallel_for_each)
