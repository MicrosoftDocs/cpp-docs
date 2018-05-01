---
title: "How to: Use combinable to Improve Performance | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "combinable class, example"
  - "improving parallel performance with combinable [Concurrency Runtime]"
ms.assetid: fa730580-1c94-4b2d-8aec-57c91dc0497e
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Use combinable to Improve Performance
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This example shows how to use the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class to compute the sum of the numbers in a [std::array](../../standard-library/array-class-stl.md) object that are prime. The `combinable` class improves performance by eliminating shared state.  
  
> [!TIP]
>  In some cases, parallel map ([concurrency::parallel_transform](http://msdn.microsoft.com/library/3f61f693-2a7f-45a7-8904-b6df436a2818)) and reduce ([concurrency:: parallel_reduce](http://msdn.microsoft.com/library/275a2706-c12a-4c87-9ad6-f07d4fc205cc)) can provide performance improvements over `combinable`. For an example that uses map and reduce operations to produce the same results as this example, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).  
  
## Example  
 The following example uses the [std::accumulate](http://msdn.microsoft.com/library/9908525b-967c-402d-9ee9-aadacc241efc) function to compute the sum of the elements in an array that are prime. In this example, `a` is an `array` object and the `is_prime` function determines whether its input value is prime.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-parallel-sum-of-primes/cpp/parallel-sum-of-primes.cpp#1)]  
  
## Example  
 The following example shows a naïve way to parallelize the previous example. This example uses the [concurrency::parallel_for_each](http://msdn.microsoft.com/library/ff7ec2dd-63fd-4838-b202-225036b30f28) algorithm to process the array in parallel and a [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md) object to synchronize access to the `prime_sum` variable. This example does not scale because each thread must wait for the shared resource to become available.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-parallel-sum-of-primes/cpp/parallel-sum-of-primes.cpp#2)]  
  
## Example  
 The following example uses a `combinable` object to improve the performance of the previous example. This example eliminates the need for synchronization objects; it scales because the `combinable` object enables each thread to perform its task independently.  
  
 A `combinable` object is typically used in two steps. First, produce a series of fine-grained computations by performing work in parallel. Next, combine (or reduce) the computations into a final result. This example uses the [concurrency::combinable::local](http://msdn.microsoft.com/library/496c298e-f159-44f3-8c25-ebf8f5b175be) method to obtain a reference to the local sum. It then uses the [concurrency::combinable::combine](http://msdn.microsoft.com/library/492e55cc-c1f8-4e0e-8356-2636f25563de) method and a [std::plus](../../standard-library/plus-struct.md) object to combine the local computations into the final result.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#3](../../snippets/cpp/VS_Snippets_ConcRT/concrt-parallel-sum-of-primes/cpp/parallel-sum-of-primes.cpp#3)]  
  
## Example  
 The following complete example computes the sum of prime numbers both serially and in parallel. The example prints to the console the time that is required to perform both computations.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#4](../../snippets/cpp/VS_Snippets_ConcRT/concrt-parallel-sum-of-primes/cpp/parallel-sum-of-primes.cpp#4)]  
  
 The following sample output is for a computer that has four processors.  
  
```Output  
1709600813  
serial time: 6178 ms  
 
1709600813  
parallel time: 1638 ms  
```  
  
## Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-sum-of-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-sum-of-primes.cpp**  
  
## Robust Programming  
 For an example that uses map and reduce operations to produce the same results, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).  
  
## See Also  
 [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)   
 [combinable Class](../../parallel/concrt/reference/combinable-class.md)   
 [critical_section Class](../../parallel/concrt/reference/critical-section-class.md)
