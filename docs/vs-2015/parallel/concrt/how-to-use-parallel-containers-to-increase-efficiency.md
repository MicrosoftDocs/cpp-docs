---
title: "How to: Use Parallel Containers to Increase Efficiency | Microsoft Docs"
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
  - "increasing efficiency with parallel containers [Concurrency Runtime]"
  - "concurrent_queue class, examples"
  - "concurrent_vector class, examples"
ms.assetid: bd00046d-e9b6-4ae1-b661-3995f671b867
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Use Parallel Containers to Increase Efficiency
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This topic shows how to use parallel containers to efficiently store and access data in parallel.  
  
 The example code computes the set of prime and Carmichael numbers in parallel. Then, for each Carmichael number, the code computes the prime factors of that number.  
  
## Example  
 The following example shows the `is_prime` function, which determines whether an input value is a prime number, and the `is_carmichael` function, which determines whether the input value is a Carmichael number.  
  
 [!code-cpp[concrt-carmichael-primes#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-carmichael-primes/cpp/carmichael-primes.cpp#1)]  
  
## Example  
 The following example uses the `is_prime` and `is_carmichael` functions to compute the sets of prime and Carmichael numbers. The example uses the [concurrency::parallel_invoke](http://msdn.microsoft.com/library/8c8fe553-f372-4138-b9c6-e31b0e83eb9b) and [concurrency::parallel_for](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d) algorithms to compute each set in parallel. For more information about parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).  
  
 This example uses a [concurrency::concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) object to hold the set of Carmichael numbers because it will later use that object as a work queue. It uses a [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) object to hold the set of prime numbers because it will later iterate through this set to find prime factors.  
  
 [!code-cpp[concrt-carmichael-primes#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-carmichael-primes/cpp/carmichael-primes.cpp#2)]  
  
## Example  
 The following example shows the `prime_factors_of` function, which uses trial division to find all prime factors of the given value.  
  
 This function uses the [concurrency::parallel_for_each](http://msdn.microsoft.com/library/ff7ec2dd-63fd-4838-b202-225036b30f28) algorithm to iterate through the collection of prime numbers. The `concurrent_vector` object enables the parallel loop to concurrently add prime factors to the result.  
  
 [!code-cpp[concrt-carmichael-primes#3](../../snippets/cpp/VS_Snippets_ConcRT/concrt-carmichael-primes/cpp/carmichael-primes.cpp#3)]  
  
## Example  
 This example processes each element in the queue of Carmichael numbers by calling the `prime_factors_of` function to compute its prime factors. It uses a task group to perform this work in parallel. For more information about task groups, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 This example prints the prime factors for each Carmichael number if that number has more than four prime factors.  
  
 [!code-cpp[concrt-carmichael-primes#4](../../snippets/cpp/VS_Snippets_ConcRT/concrt-carmichael-primes/cpp/carmichael-primes.cpp#4)]  
  
## Example  
 The following code shows the complete example, which uses parallel containers to compute the prime factors of the Carmichael numbers.  
  
 [!code-cpp[concrt-carmichael-primes#5](../../snippets/cpp/VS_Snippets_ConcRT/concrt-carmichael-primes/cpp/carmichael-primes.cpp#5)]  
  
 This example produces the following sample output.  
  
```Output  
Prime factors of 9890881 are: 7 11 13 41 241.  
Prime factors of 825265 are: 5 7 17 19 73.  
Prime factors of 1050985 are: 5 13 19 23 37.  
```  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `carmichael-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc carmichael-primes.cpp**  
  
## See Also  
 [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)   
 [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [concurrent_vector Class](../../parallel/concrt/reference/concurrent-vector-class.md)   
 [concurrent_queue Class](../../parallel/concrt/reference/concurrent-queue-class.md)   
 [parallel_invoke Function](http://msdn.microsoft.com/library/8c8fe553-f372-4138-b9c6-e31b0e83eb9b)   
 [parallel_for Function](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d)   
 [task_group Class](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7)
