---
description: "Learn more about: How to: Use Cancellation to Break from a Parallel Loop"
title: "How to: Use Cancellation to Break from a Parallel Loop"
ms.date: "11/04/2016"
helpviewer_keywords: ["writing a parallel search algorithm [Concurrency Runtime]", "parallel search algorithm, writing [Concurrency Runtime]"]
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
---
# How to: Use Cancellation to Break from a Parallel Loop

This example shows how to use cancellation to implement a basic parallel search algorithm.

## Example

The following example uses cancellation to search for an element in an array. The `parallel_find_any` function uses the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm and the [concurrency::run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) function to search for the position that contains the given value. When the parallel loop finds the value, it calls the [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) method to cancel future work.

[!code-cpp[concrt-parallel-array-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-cancellation-to-break-from-a-parallel-loop_1.cpp)]

The [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm acts concurrently. Therefore, it does not perform the operations in a pre-determined order. If the array contains multiple instances of the value, the result can be any one of its positions.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `parallel-array-search.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc parallel-array-search.cpp**

## See also

[Cancellation in the PPL](cancellation-in-the-ppl.md)<br/>
[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br/>
[parallel_for Function](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[cancellation_token_source Class](../../parallel/concrt/reference/cancellation-token-source-class.md)
