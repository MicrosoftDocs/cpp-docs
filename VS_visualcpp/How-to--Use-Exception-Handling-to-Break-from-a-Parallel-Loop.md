---
title: "How to: Use Exception Handling to Break from a Parallel Loop"
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
ms.assetid: 16d7278c-2d10-4014-9f58-f1899e719ff9
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
# How to: Use Exception Handling to Break from a Parallel Loop
This topic shows how to write a search algorithm for a basic tree structure.  
  
 The topic [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md) explains the role of cancellation in the Parallel Patterns Library. The use of exception handling is a less efficient way to cancel parallel work than the use of the [concurrency::task_group::cancel](../Topic/task_group::cancel%20Method.md) and [concurrency::structured_task_group::cancel](../Topic/structured_task_group::cancel%20Method.md) methods. However, one scenario where the use of exception handling to cancel work is appropriate is when you call into a third-party library that uses tasks or parallel algorithms but does not provide a `task_group` or `structured_task_group` object to cancel.  
  
## Example  
 The following example shows a basic `tree` type that contains a data element and a list of child nodes. The following section shows the body of the `for_all` method, which recursively performs a work function on each child node.  
  
 [!CODE [concrt-task-tree-search#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-task-tree-search#2)]  
  
## Example  
 The following example shows the `for_all` method. It uses the [concurrency::parallel_for_each](../Topic/parallel_for_each%20Function.md) algorithm to perform a work function on each node of the tree in parallel.  
  
 [!CODE [concrt-task-tree-search#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-task-tree-search#1)]  
  
## Example  
 The following example shows the `search_for_value` function, which searches for a value in the provided `tree` object. This function passes to the `for_all` method a work function that throws when it finds a tree node that contains the provided value.  
  
 Assume that the `tree` class is provided by a third-party library, and that you cannot modify it. In this case, the use of exception handling is appropriate because the `for_all` method does not provide a `task_group` or `structured_task_group` object to the caller. Therefore, the work function is unable to directly cancel its parent task group.  
  
 When the work function that you provide to a task group throws an exception, the runtime stops all tasks that are in the task group (including any child task groups) and discards any tasks that have not yet started. The `search_for_value` function uses a `try`-`catch` block to capture the exception and print the result to the console.  
  
 [!CODE [concrt-task-tree-search#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-task-tree-search#3)]  
  
## Example  
 The following example creates a `tree` object and searches it for several values in parallel. The `build_tree` function is shown later in this topic.  
  
 [!CODE [concrt-task-tree-search#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-task-tree-search#4)]  
  
 This example uses the [concurrency::parallel_invoke](../Topic/parallel_invoke%20Function.md) algorithm to search for values in parallel. For more information about this algorithm, see [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md).  
  
## Example  
 The following complete example uses exception handling to search for values in a basic tree structure.  
  
 [!CODE [concrt-task-tree-search#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-task-tree-search#5)]  
  
 This example produces the following sample output.  
  
 **Found a node with value 32614.**  
**Found a node with value 86131.**  
**Did not find node with value 17522.**   
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `task-tree-search.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc task-tree-search.cpp**  
  
## See Also  
 [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)   
 [Exception Handling](../VS_visualcpp/Exception-Handling-in-the-Concurrency-Runtime.md)   
 [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)   
 [Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)   
 [task_group Class](../Topic/task_group%20Class.md)   
 [structured_task_group Class](../VS_visualcpp/structured_task_group-Class.md)   
 [parallel_for_each Function](../Topic/parallel_for_each%20Function.md)