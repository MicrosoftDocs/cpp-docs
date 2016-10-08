---
title: "How to: Use parallel_invoke to Write a Parallel Sort Routine"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 53979a2a-525d-4437-8952-f1ff85b37673
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# How to: Use parallel_invoke to Write a Parallel Sort Routine
This document describes how to use the [parallel_invoke](../Topic/parallel_invoke%20Function.md) algorithm to improve the performance of the bitonic sort algorithm. The bitonic sort algorithm recursively divides the input sequence into smaller sorted partitions. The bitonic sort algorithm can run in parallel because each partition operation is independent of all other operations.  
  
 Although the bitonic sort is an example of a *sorting network* that sorts all combinations of input sequences, this example sorts sequences whose lengths are a power of two.  
  
> [!NOTE]
>  This example uses a parallel sort routine for illustration. You can also use the built-in sorting algorithms that the PPL provides: [concurrency::parallel_sort](../Topic/parallel_sort%20Function.md), [concurrency::parallel_buffered_sort](../Topic/parallel_buffered_sort%20Function.md), and [concurrency::parallel_radixsort](../Topic/parallel_radixsort%20Function.md). For more information, see [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md).  
  
##  <a name="top"></a> Sections  
 This document describes the following tasks:  
  
-   [Performing Bitonic Sort Serially](#serial)  
  
-   [Using parallel_invoke to Perform Bitonic Sort in Parallel](#parallel)  
  
##  <a name="serial"></a> Performing Bitonic Sort Serially  
 The following example shows the serial version of the bitonic sort algorithm. The `bitonic_sort` function divides the sequence into two partitions, sorts those partitions in opposite directions, and then merges the results. This function calls itself two times recursively to sort each partition.  
  
 [!CODE [concrt-parallel-bitonic-sort#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#1)]  
  
 [[Top](#top)]  
  
##  <a name="parallel"></a> Using parallel_invoke to Perform Bitonic Sort in Parallel  
 This section describes how to use the `parallel_invoke` algorithm to perform the bitonic sort algorithm in parallel.  
  
### Procedures  
  
##### To perform the bitonic sort algorithm in parallel  
  
1.  Add a `#include` directive for the header file ppl.h.  
  
     [!CODE [concrt-parallel-bitonic-sort#10](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#10)]  
  
2.  Add a `using` directive for the `concurrency` namespace.  
  
     [!CODE [concrt-parallel-bitonic-sort#11](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#11)]  
  
3.  Create a new function, called `parallel_bitonic_mege`, which uses the `parallel_invoke` algorithm to merge the sequences in parallel if there is sufficient amount of work to do. Otherwise, call `bitonic_merge` to merge the sequences serially.  
  
     [!CODE [concrt-parallel-bitonic-sort#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#2)]  
  
4.  Perform a process that resembles the one in the previous step, but for the `bitonic_sort` function.  
  
     [!CODE [concrt-parallel-bitonic-sort#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#3)]  
  
5.  Create an overloaded version of the `parallel_bitonic_sort` function that sorts the array in increasing order.  
  
     [!CODE [concrt-parallel-bitonic-sort#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#4)]  
  
 The `parallel_invoke` algorithm reduces overhead by performing the last of the series of tasks on the calling context. For example, in the `parallel_bitonic_sort` function, the first task runs on a separate context, and the second task runs on the calling context.  
  
 [!CODE [concrt-parallel-bitonic-sort#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#5)]  
  
 The following complete example performs both the serial and the parallel versions of the bitonic sort algorithm. The example also prints to the console the time that is required to perform each computation.  
  
 [!CODE [concrt-parallel-bitonic-sort#8](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#8)]  
  
 The following sample output is for a computer that has four processors.  
  
 **serial time: 4353**  
**parallel time: 1248** [[Top](#top)]  
  
## Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-bitonic-sort.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-bitonic-sort.cpp**  
  
## Robust Programming  
 This example uses the `parallel_invoke` algorithm instead of the [concurrency::task_group](../Topic/task_group%20Class.md) class because the lifetime of each task group does not extend beyond a function. We recommend that you use `parallel_invoke` when you can because it has less execution overhead than `task group` objects, and therefore lets you write better performing code.  
  
 The parallel versions of some algorithms perform better only when there is sufficient work to do. For example, the `parallel_bitonic_merge` function calls the serial version, `bitonic_merge`, if there are 500 or fewer elements in the sequence. You can also plan your overall sorting strategy based on the amount of work. For example, it might be more efficient to use the serial version of the quick sort algorithm if the array contains fewer than 500 items, as shown in the following example:  
  
 [!CODE [concrt-parallel-bitonic-sort#9](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-bitonic-sort#9)]  
  
 As with any parallel algorithm, we recommend that you profile and tune your code as appropriate.  
  
## See Also  
 [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)   
 [parallel_invoke Function](../Topic/parallel_invoke%20Function.md)