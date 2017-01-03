---
title: "How to: Use combinable to Combine Sets | Microsoft Docs"
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
  - "combinable class, example"
  - "combining sets with combinable [Concurrency Runtime]"
ms.assetid: 66ffe8e3-6bbb-4e9f-b790-b612922a68a7
caps.latest.revision: 14
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
# How to: Use combinable to Combine Sets
This topic shows how to use the [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class to compute the set of prime numbers.  
  
## Example  
 The following example computes the set of prime numbers two times. Each computation stores the result in a [std::bitset](../../standard-library/bitset-class.md) object. The example first computes the set serially and then computes the set in parallel. The example also prints to the console the time that is required to perform both computations.  
  
 This example uses the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm and a `combinable` object to generate thread-local sets. It then uses the [concurrency::combinable::combine_each](reference/combinable-class.md#combine_each) method to combine the thread-local sets into the final set.  

  
 [!code-cpp[concrt-parallel-combine-primes#1](../../parallel/concrt/codesnippet/cpp/how-to-use-combinable-to-combine-sets_1.cpp)]  
  
 The following sample output is for a computer that has four processors.  
  
```Output  
serial time: 312 ms  
 
parallel time: 78 ms  
```  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `parallel-combine-primes.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-combine-primes.cpp**  
  
## See Also  
 [Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)   
 [combinable Class](../../parallel/concrt/reference/combinable-class.md)   
 [combinable::combine_each Method](reference/combinable-class.md#combine_each)


