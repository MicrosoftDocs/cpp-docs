---
title: "How to: Use Alloc and Free to Improve Memory Performance"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
caps.latest.revision: 11
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
# How to: Use Alloc and Free to Improve Memory Performance
This document shows how to use the [concurrency::Alloc](../Topic/Alloc%20Function.md) and [concurrency::Free](../Topic/Free%20Function.md) functions to improve memory performance. It compares the time that is required to reverse the elements of an array in parallel for three different types that each specify the `new` and `delete` operators.  
  
 The `Alloc` and `Free` functions are most useful when multiple threads frequently call both `Alloc` and `Free`. The runtime holds a separate memory cache for each thread; therefore, the runtime manages memory without the use of locks or memory barriers.  
  
## Example  
 The following example shows three types that each specify the `new` and `delete` operators. The `new_delete` class uses the global `new` and `delete` operators, the `malloc_free` class uses the C Runtime [malloc](../VS_visualcpp/malloc.md) and [free](../VS_visualcpp/free.md) functions, and the `Alloc_Free` class uses the Concurrency Runtime `Alloc` and `Free` functions.  
  
 [!CODE [concrt-allocators#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-allocators#1)]  
  
## Example  
 The following example shows the `swap` and `reverse_array` functions. The `swap` function exchanges the contents of the array at the specified indices. It allocates memory from the heap for the temporary variable. The `reverse_array` function creates a large array and computes the time that is required to reverse that array several times in parallel.  
  
 [!CODE [concrt-allocators#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-allocators#2)]  
  
## Example  
 The following example shows the `wmain` function, which computes the time that is required for the `reverse_array` function to act on the `new_delete`, `malloc_free`, and `Alloc_Free` types, each of which uses a different memory allocation scheme.  
  
 [!CODE [concrt-allocators#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-allocators#3)]  
  
## Example  
 The complete example follows.  
  
 [!CODE [concrt-allocators#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-allocators#4)]  
  
 This example produces the following sample output for a computer that has four processors.  
  
 **Took 2031 ms with new/delete.**  
**Took 1672 ms with malloc/free.**  
**Took 656 ms with Alloc/Free.** In this example, the type that uses the `Alloc` and `Free` functions provides the best memory performance because the `Alloc` and `Free` functions are optimized for frequently allocating and freeing blocks of memory from multiple threads.  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `allocators.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc allocators.cpp**  
  
## See Also  
 [Memory Management Functions](../VS_visualcpp/Memory-Management-Functions.md)   
 [Alloc Function](../Topic/Alloc%20Function.md)   
 [Free Function](../Topic/Free%20Function.md)