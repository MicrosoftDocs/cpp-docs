---
title: "How to: Use Cancellation to Break from a Parallel Loop | Microsoft Docs"
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
  - "writing a parallel search algorithm [Concurrency Runtime]"
  - "parallel search algorithm, writing [Concurrency Runtime]"
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Use Cancellation to Break from a Parallel Loop
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This example shows how to use cancellation to implement a basic parallel search algorithm.  
  
## Example  
 The following example uses cancellation to search for an element in an array. The `parallel_find_any` function uses the [concurrency::parallel_for](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d) algorithm and the [concurrency::run_with_cancellation_token](http://msdn.microsoft.com/library/02083191-ebc9-4565-9438-2ca39fcd31f6) function to search for the position that contains the given value. When the parallel loop finds the value, it calls the [concurrency::cancellation_token_source::cancel](http://msdn.microsoft.com/library/9e438b95-d38e-49b4-b716-46034623515d) method to cancel future work.  
  
 [!code-cpp[concrt-parallel-array-search#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-parallel-array-search/cpp/parallel-array-search.cpp#1)]  
  
 The [concurrency::parallel_for](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d) algorithm acts concurrently. Therefore, it does not perform the operations in a pre-determined order. If the array contains multiple instances of the value, the result can be any one of its positions.  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `parallel-array-search.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-array-search.cpp**  
  
## See Also  
 [Cancellation](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation_in_the_ppl)   
 [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)   
 [parallel_for Function](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d)   
 [cancellation_token_source Class](../../parallel/concrt/reference/cancellation-token-source-class.md)
