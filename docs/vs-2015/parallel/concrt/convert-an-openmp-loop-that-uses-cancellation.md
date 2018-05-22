---
title: "How to: Convert an OpenMP Loop that Uses Cancellation to Use the Concurrency Runtime | Microsoft Docs"
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
  - "converting from OpenMP to the Concurrency Runtime, cancellation"
  - "cancellation, converting from OpenMP to the Concurrency Runtime"
ms.assetid: 4b0b3c33-bfa9-4e96-ae08-aef245a39cbb
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Convert an OpenMP Loop that Uses Cancellation to Use the Concurrency Runtime
[!INCLUDE[blank_token](../../includes/blank-token.md)]

Some parallel loops do not require that all iterations be executed. For example, an algorithm that searches for a value can terminate after the value is found. OpenMP does not provide a mechanism to break out of a parallel loop. However, you can use a Boolean value, or flag, to enable an iteration of the loop to indicate that the solution has been found. The Concurrency Runtime provides functionality that enables one task to cancel other tasks that have not yet started.  
  
 This example demonstrates how to convert an OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../../parallel/openmp/reference/for-openmp.md) loop that does not require for all iterations to run to use the Concurrency Runtime cancellation mechanism.  
  
## Example  
 This example uses both OpenMP and the Concurrency Runtime to implement a parallel version of the [std::any_of](http://msdn.microsoft.com/library/c0a685f6-8242-42c6-b1bc-3956d25ae535) algorithm. The OpenMP version of this example uses a flag to coordinate among all parallel loop iterations that the condition has been met. The version that uses the Concurrency Runtime uses the [concurrency::structured_task_group::cancel](http://msdn.microsoft.com/library/8b6015cd-cc68-4fe8-9467-a34386adbd69) method to stop the overall operation when the condition is met.  
  
 [!code-cpp[concrt-openmp#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-openmp/cpp/concrt-omp-parallel-any-of.cpp#2)]  
  
 This example produces the following output.  
  
```Output  
Using OpenMP...  
9114046 is in the array.  
Using the Concurrency Runtime...  
9114046 is in the array.  
```  
  
 In the version of that uses OpenMP, all iterations of the loop execute, even when the flag is set. Furthermore, if a task were to have any child tasks, the flag would also have to be available to those child tasks to communicate cancellation. In the Concurrency Runtime, when a task group is cancelled, the runtime cancels the entire tree of work, including child tasks. The [concurrency::parallel_for_each](http://msdn.microsoft.com/library/ff7ec2dd-63fd-4838-b202-225036b30f28) algorithm uses tasks to perform work. Therefore, when one iteration of the loop cancels the root task, the entire tree of computation is also cancelled. When a tree of work is cancelled, the runtime does not start new tasks. However, the runtime allows tasks that have already started to finish. Therefore, in the case of the `parallel_for_each` algorithm, active loop iterations can clean up their resources.  
  
 In both versions of this example, if the array contains more than one copy of the value to search for, multiple loop iterations can each simultaneously set the result and cancel the overall operation. You can use a synchronization primitive, such as a critical section, if your problem requires that only one task performs work when a condition is met.  
  
 You can also use exception handling to cancel tasks that use the PPL. For more information about cancellation, see [Cancellation](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation_in_the_ppl).  
  
 For more information about `parallel_for_each` and other parallel algorithms, see [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md).  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `concrt-omp-parallel-any-of.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc /openmp concrt-omp-parallel-any-of.cpp**  
  
## See Also  
 [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Cancellation](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation_in_the_ppl)   
 [Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)

