---
description: "Learn more about: How to: Write a parallel_for Loop"
title: "How to: Write a parallel_for Loop"
ms.date: "11/04/2016"
helpviewer_keywords: ["writing a parallel_for loop [Concurrency Runtime]", "parallel_for function, example"]
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
---
# How to: Write a parallel_for Loop

This example demonstrates how to use [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) to compute the product of two matrices.

## Example: Compute the product of two matrices

The following example shows the `matrix_multiply` function, which computes the product of two square matrices.

[!code-cpp[concrt-parallel-matrix-multiply#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_1.cpp)]

## Example: Compute a matrix multiply in parallel

The following example shows the `parallel_matrix_multiply` function, which uses the `parallel_for` algorithm to perform the outer loop in parallel.

[!code-cpp[concrt-parallel-matrix-multiply#2](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_2.cpp)]

This example parallelizes the outer loop only because it performs enough work to benefit from the overhead for parallel processing. If you parallelize the inner loop, you will not receive a gain in performance because the small amount of work that the inner loop performs does not overcome the overhead for parallel processing. Therefore, parallelizing the outer loop only is the best way to maximize the benefits of concurrency on most systems.

## Example: Finished parallel_for loop code sample

The following more complete example compares the performance of the `matrix_multiply` function versus the `parallel_matrix_multiply` function.

[!code-cpp[concrt-parallel-matrix-multiply#3](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_3.cpp)]

The following sample output is for a computer that has four processors.

```Output
serial: 3853
parallel: 1311
```

## Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-matrix-multiply.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc parallel-matrix-multiply.cpp**

## See also

[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br/>
[parallel_for Function](reference/concurrency-namespace-functions.md#parallel_for)
