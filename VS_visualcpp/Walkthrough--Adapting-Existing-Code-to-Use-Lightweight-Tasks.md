---
title: "Walkthrough: Adapting Existing Code to Use Lightweight Tasks"
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
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
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
# Walkthrough: Adapting Existing Code to Use Lightweight Tasks
This topic shows how to adapt existing code that uses the Windows API to create and execute a thread to use a lightweight task.  
  
 A *lightweight task* is a task that you schedule directly from a [concurrency::Scheduler](../VS_visualcpp/Scheduler-Class.md) or [concurrency::ScheduleGroup](../VS_visualcpp/ScheduleGroup-Class.md) object. Lightweight tasks are useful when you adapt existing code to use the scheduling functionality of the Concurrency Runtime.  
  
## Prerequisites  
 Before you start this walkthrough, read the topic [Task Scheduler](../VS_visualcpp/Task-Scheduler--Concurrency-Runtime-.md).  
  
## Example  
  
### Description  
 The following example illustrates typical usage of the Windows API to create and execute a thread. This example uses the [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) function to call the `MyThreadFunction` on a separate thread.  
  
### Code  
 [!CODE [concrt-windows-threads#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-windows-threads#1)]  
  
### Comments  
 This example produces the following output.  
  
 **Parameters = 50, 100** The following steps show how to adapt the code example to use the Concurrency Runtime to perform the same task.  
  
### To adapt the example to use a lightweight task  
  
1.  Add a `#include` directive for the header file concrt.h.  
  
     [!CODE [concrt-migration-lwt#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#2)]  
  
2.  Add a `using` directive for the `concurrency` namespace.  
  
     [!CODE [concrt-migration-lwt#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#3)]  
  
3.  Change the declaration of `MyThreadFunction` to use the `__cdecl` calling convention and to return `void`.  
  
     [!CODE [concrt-migration-lwt#4](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#4)]  
  
4.  Modify the `MyData` structure to include a [concurrency::event](../VS_visualcpp/event-Class.md) object that signals to the main application that the task has finished.  
  
     [!CODE [concrt-migration-lwt#5](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#5)]  
  
5.  Replace the call to `CreateThread` with a call to the [concurrency::CurrentScheduler::ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md) method.  
  
     [!CODE [concrt-migration-lwt#6](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#6)]  
  
6.  Replace the call to `WaitForSingleObject` with a call to the [concurrency::event::wait](../Topic/event::wait%20Method.md) method to wait for the task to finish.  
  
     [!CODE [concrt-migration-lwt#7](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#7)]  
  
7.  Remove the call to `CloseHandle`.  
  
8.  Change the signature of the definition of `MyThreadFunction` to match step 3.  
  
     [!CODE [concrt-migration-lwt#8](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#8)]  
  
9. At the end of the `MyThreadFunction` function, call the [concurrency::event::set](../Topic/event::set%20Method.md) method to signal to the main application that the task has finished.  
  
     [!CODE [concrt-migration-lwt#9](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#9)]  
  
10. Remove the `return` statement from `MyThreadFunction`.  
  
## Example  
  
### Description  
 The following completed example shows code that uses a lightweight task to call the `MyThreadFunction` function.  
  
### Code  
 [!CODE [concrt-migration-lwt#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-migration-lwt#1)]  
  
### Comments  
  
## See Also  
 [Task Scheduler](../VS_visualcpp/Task-Scheduler--Concurrency-Runtime-.md)   
 [Scheduler Class](../VS_visualcpp/Scheduler-Class.md)