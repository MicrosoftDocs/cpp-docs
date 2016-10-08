---
title: "How to: Use Cancellation to Break from a Parallel Loop"
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
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Use Cancellation to Break from a Parallel Loop
This example shows how to use cancellation to implement a basic parallel search algorithm.  
  
## Example  
 The following example uses cancellation to search for an element in an array. The `parallel_find_any` function uses the [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm and the [concurrency::run_with_cancellation_token](../Topic/run_with_cancellation_token%20Function.md) function to search for the position that contains the given value. When the parallel loop finds the value, it calls the [concurrency::cancellation_token_source::cancel](../Topic/cancellation_token_source::cancel%20Method.md) method to cancel future work.  
  
 [!CODE [concrt-parallel-array-search#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-array-search#1)]  
  
 The [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm acts concurrently. Therefore, it does not perform the operations in a pre-determined order. If the array contains multiple instances of the value, the result can be any one of its positions.  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `parallel-array-search.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-array-search.cpp**  
  
## See Also  
 [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)   
 [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)   
 [parallel_for Function](../Topic/parallel_for%20Function.md)   
 [cancellation_token_source Class](../VS_visualcpp/cancellation_token_source-Class.md)