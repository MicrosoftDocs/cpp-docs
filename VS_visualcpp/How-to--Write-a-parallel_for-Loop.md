---
title: "How to: Write a parallel_for Loop"
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
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
caps.latest.revision: 12
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
# How to: Write a parallel_for Loop
This example demonstrates how to use [concurrency::parallel_for](../Topic/parallel_for%20Function.md) to compute the product of two matrices.  
  
## Example  
 The following example shows the `matrix_multiply` function, which computes the product of two square matrices.  
  
 [!CODE [concrt-parallel-matrix-multiply#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-matrix-multiply#1)]  
  
## Example  
 The following example shows the `parallel_matrix_multiply` function, which uses the `parallel_for` algorithm to perform the outer loop in parallel.  
  
 [!CODE [concrt-parallel-matrix-multiply#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-matrix-multiply#2)]  
  
 This example parallelizes the outer loop only because it performs enough work to benefit from the overhead for parallel processing. If you parallelize the inner loop, you will not receive a gain in performance because the small amount of work that the inner loop performs does not overcome the overhead for parallel processing. Therefore, parallelizing the outer loop only is the best way to maximize the benefits of concurrency on most systems.  
  
## Example  
 The following more complete example compares the performance of the `matrix_multiply` function versus the `parallel_matrix_multiply` function.  
  
 [!CODE [concrt-parallel-matrix-multiply#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-parallel-matrix-multiply#3)]  
  
 The following sample output is for a computer that has four processors.  
  
 **serial: 3853**  
**parallel: 1311**   
## Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `parallel-matrix-multiply.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-matrix-multiply.cpp**  
  
## See Also  
 [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)   
 [parallel_for Function](../Topic/parallel_for%20Function.md)