---
title: "How to: Convert an OpenMP parallel for Loop to Use the Concurrency Runtime"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "converting from OpenMP to the Concurrency Runtime, parallel for loops"
  - "converting from OpenMP to the Concurrency Runtime, parallel loops"
  - "parallel for loops, converting from OpenMP to the Concurrency Runtime"
  - "parallel loops, converting from OpenMP to the Concurrency Runtime"
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
caps.latest.revision: 10
ms.author: "mithom"
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
This example demonstrates how to convert a basic loop that uses the OpenMP [parallel](../parallel/parallel.md) and [for](../parallel/for--openmp-.md) directives to use the Concurrency Runtime [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm.  
  
## Example  
 This example uses both OpenMP and the Concurrency Runtime to compute the count of prime numbers in an array of random values.  
  
 [!code[concrt-openmp#1](../parallel/codesnippet/CPP/how-to--convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]  
  
 This example produces the following output.  
  
 **Using OpenMP...**  
**found 107254 prime numbers.**  
**Using the Concurrency Runtime...**  
**found 107254 prime numbers.** The `parallel_for` algorithm and OpenMP 3.0 allow for the index type to be a signed integral type or an unsigned integral type. The `parallel_for` algorithm also makes sure that the specified range does not overflow a signed type. OpenMP versions 2.0 and 2.5 allow for signed integral index types only. OpenMP also does not validate the index range.  
  
 The version of this example that uses the Concurrency Runtime also uses a [concurrency::combinable](../parallel/combinable-class.md) object in place of the [atomic](../parallel/atomic.md) directive to increment the counter value without requiring synchronization.  
  
 For more information about `parallel_for` and other parallel algorithms, see [Parallel Algorithms](../parallel/parallel-algorithms.md). For more information about the `combinable` class, see [Parallel Containers and Objects](../parallel/parallel-containers-and-objects.md).  
  
## Example  
 This example modifies the previous one to act on an [std::array](../stdcpplib/array-class--stl-.md) object instead of on a native array. Because OpenMP versions 2.0 and 2.5 allow for signed integral index types only in a `parallel``for` construct, you cannot use iterators to access the elements of a Standard Template Library (STL) container in parallel. The Parallel Patterns Library (PPL) provides the [concurrency::parallel_for_each](../Topic/parallel_for_each%20Function.md) algorithm, which performs tasks, in parallel, on an iterative container such as those provided by the STL. It uses the same partitioning logic that the `parallel_for` algorithm uses. The `parallel_for_each` algorithm resembles the STL [std::for_each](../Topic/for_each.md) algorithm, except that the `parallel_for_each` algorithm executes the tasks concurrently.  
  
 [!code[concrt-openmp#10](../parallel/codesnippet/CPP/how-to--convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `concrt-omp-count-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc /openmp concrt-omp-count-primes.cpp**  
  
## See Also  
 [Migrating from OpenMP to the Concurrency Runtime](../parallel/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Parallel Algorithms](../parallel/parallel-algorithms.md)   
 [Parallel Containers and Objects](../parallel/parallel-containers-and-objects.md)