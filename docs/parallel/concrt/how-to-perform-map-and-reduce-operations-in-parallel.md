---
title: "How to: Perform Map and Reduce Operations in Parallel | Microsoft Docs"
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
  - "parallel_transform function, example"
  - "parallel map and reduce, example"
  - "parallel_reduce function, example"
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Perform Map and Reduce Operations in Parallel

This example shows how to use the [concurrency::parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform) and [concurrency::parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce) algorithms and the [concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) class to count the occurrences of words in files.  
  
 A *map* operation applies a function to each value in a sequence. A *reduce* operation combines the elements of a sequence into one value. You can use the Standard Template Library (STL) [std::transform](http://msdn.microsoft.com/Library/99396865-54fb-47dd-a661-38ce03467854)[std::accumulate](../../standard-library/numeric-functions.md#accumulate) classes to perform map and reduce operations. However, to improve performance for many problems, you can use the `parallel_transform` algorithm to perform the map operation in parallel and the `parallel_reduce` algorithm to perform the reduce operation in parallel. In some cases, you can use `concurrent_unordered_map` to perform the map and the reduce in one operation.  
  
## Example  
 The following example counts the occurrences of words in files. It uses [std::vector](../../standard-library/vector-class.md) to represent the contents of two files. The map operation computes the occurrences of each word in each vector. The reduce operation accumulates the word counts across both vectors.  
  
 [!code-cpp[concrt-parallel-map-reduce#1](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_1.cpp)]  
  
## Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-map-reduce.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-map-reduce.cpp**  
  
## Robust Programming  
 In this example, you can use the `concurrent_unordered_map` class—which is defined in concurrent_unordered_map.h—to perform the map and reduce in one operation.  
  
 [!code-cpp[concrt-parallel-map-reduce#2](../../parallel/concrt/codesnippet/cpp/how-to-perform-map-and-reduce-operations-in-parallel_2.cpp)]  
  
 Typically, you parallelize only the outer or the inner loop. Parallelize the inner loop if you have relatively few files and each file contains many words. Parallelize the outer loop if you have relatively many files and each file contains few words.  
  
## See Also  
 [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)   
 [parallel_transform Function](reference/concurrency-namespace-functions.md#parallel_transform)   
 [parallel_reduce Function](reference/concurrency-namespace-functions.md#parallel_reduce)   
 [concurrent_unordered_map Class](../../parallel/concrt/reference/concurrent-unordered-map-class.md)
