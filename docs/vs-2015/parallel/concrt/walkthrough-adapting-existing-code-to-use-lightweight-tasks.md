---
title: "Walkthrough: Adapting Existing Code to Use Lightweight Tasks | Microsoft Docs"
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
  - "using lightweight tasks [Concurrency Runtime]"
  - "lightweight tasks, using [Concurrency Runtime]"
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Walkthrough: Adapting Existing Code to Use Lightweight Tasks
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This topic shows how to adapt existing code that uses the Windows API to create and execute a thread to use a lightweight task.  
  
 A *lightweight task* is a task that you schedule directly from a [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) or [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) object. Lightweight tasks are useful when you adapt existing code to use the scheduling functionality of the Concurrency Runtime.  
  
## Prerequisites  
 Before you start this walkthrough, read the topic [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
## Example  
  
### Description  
 The following example illustrates typical usage of the Windows API to create and execute a thread. This example uses the [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) function to call the `MyThreadFunction` on a separate thread.  
  
### Code  
 [!code-cpp[concrt-windows-threads#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-windows-threads/cpp/windows-threads.cpp#1)]  
  
### Comments  
 This example produces the following output.  
  
```Output  
Parameters = 50, 100  
```  
  
 The following steps show how to adapt the code example to use the Concurrency Runtime to perform the same task.  
  
### To adapt the example to use a lightweight task  
  
1.  Add a `#include` directive for the header file concrt.h.  
  
 [!code-cpp[concrt-migration-lwt#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#2)]  
  
2.  Add a `using` directive for the `concurrency` namespace.  
  
 [!code-cpp[concrt-migration-lwt#3](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#3)]  
  
3.  Change the declaration of `MyThreadFunction` to use the `__cdecl` calling convention and to return `void`.  
  
 [!code-cpp[concrt-migration-lwt#4](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#4)]  
  
4.  Modify the `MyData` structure to include a [concurrency::event](../../parallel/concrt/reference/event-class.md) object that signals to the main application that the task has finished.  
  
 [!code-cpp[concrt-migration-lwt#5](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#5)]  
  
5.  Replace the call to `CreateThread` with a call to the [concurrency::CurrentScheduler::ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md) method.  
  
 [!code-cpp[concrt-migration-lwt#6](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#6)]  
  
6.  Replace the call to `WaitForSingleObject` with a call to the [concurrency::event::wait](../Topic/event::wait%20Method.md) method to wait for the task to finish.  
  
 [!code-cpp[concrt-migration-lwt#7](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#7)]  
  
7.  Remove the call to `CloseHandle`.  
  
8.  Change the signature of the definition of `MyThreadFunction` to match step 3.  
  
 [!code-cpp[concrt-migration-lwt#8](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#8)]  
  
9. At the end of the `MyThreadFunction` function, call the [concurrency::event::set](../Topic/event::set%20Method.md) method to signal to the main application that the task has finished.  
  
 [!code-cpp[concrt-migration-lwt#9](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#9)]  
  
10. Remove the `return` statement from `MyThreadFunction`.  
  
## Example  
  
### Description  
 The following completed example shows code that uses a lightweight task to call the `MyThreadFunction` function.  
  
### Code  
 [!code-cpp[concrt-migration-lwt#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-migration-lwt/cpp/migration-lwt.cpp#1)]  
  
### Comments  
  
## See Also  
 [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Scheduler Class](../../parallel/concrt/reference/scheduler-class.md)
