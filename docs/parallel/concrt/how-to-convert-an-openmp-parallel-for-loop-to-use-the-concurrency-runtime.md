---
title: "How to: Convert an OpenMP parallel for Loop to Use the Concurrency Runtime | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "converting from OpenMP to the Concurrency Runtime, parallel for loops"
  - "converting from OpenMP to the Concurrency Runtime, parallel loops"
  - "parallel for loops, converting from OpenMP to the Concurrency Runtime"
  - "parallel loops, converting from OpenMP to the Concurrency Runtime"
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Convert an OpenMP parallel for Loop to Use the Concurrency Runtime

This example demonstrates how to convert a basic loop that uses the OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) and [for](../../parallel/openmp/reference/for-openmp.md) directives to use the Concurrency Runtime [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm.  
  
## Example  
 This example uses both OpenMP and the Concurrency Runtime to compute the count of prime numbers in an array of random values.  
  
 [!code-cpp[concrt-openmp#1](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]  
  
 This example produces the following output.  
  
```Output  
Using OpenMP...  
found 107254 prime numbers.  
Using the Concurrency Runtime...  
found 107254 prime numbers.  
```  
  
 The `parallel_for` algorithm and OpenMP 3.0 allow for the index type to be a signed integral type or an unsigned integral type. The `parallel_for` algorithm also makes sure that the specified range does not overflow a signed type. OpenMP versions 2.0 and 2.5 allow for signed integral index types only. OpenMP also does not validate the index range.  
  
 The version of this example that uses the Concurrency Runtime also uses a [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) object in place of the [atomic](../../parallel/openmp/reference/atomic.md) directive to increment the counter value without requiring synchronization.  
  
 For more information about `parallel_for` and other parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md). For more information about the `combinable` class, see [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Example  

 This example modifies the previous one to act on an [std::array](../../standard-library/array-class-stl.md) object instead of on a native array. Because OpenMP versions 2.0 and 2.5 allow for signed integral index types only in a `parallel``for` construct, you cannot use iterators to access the elements of a Standard Template Library (STL) container in parallel. The Parallel Patterns Library (PPL) provides the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm, which performs tasks, in parallel, on an iterative container such as those provided by the STL. It uses the same partitioning logic that the `parallel_for` algorithm uses. The `parallel_for_each` algorithm resembles the STL [std::for_each](http://msdn.microsoft.com/Library/8cb2ae72-bef6-488b-b011-0475c0787e33) algorithm, except that the `parallel_for_each` algorithm executes the tasks concurrently.  
  
 [!code-cpp[concrt-openmp#10](../../parallel/concrt/codesnippet/cpp/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `concrt-omp-count-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc /openmp concrt-omp-count-primes.cpp**  
  
## See Also  
 [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)   
 [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)

