---
title: "Parallel Diagnostic Tools (Concurrency Runtime) | Microsoft Docs"
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
  - "Parallel Diagnostic Tools [Concurrency Runtime]"
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parallel Diagnostic Tools (Concurrency Runtime)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

[!INCLUDE[vsprvs](../../includes/vsprvs-md.md)] provides extensive support for debugging and profiling multi-threaded applications.  
  
## Debugging  
 The Visual Studio debugger includes the **Parallel Stacks** window, **Parallel Tasks** window, and **Parallel Watch** window. For more information, see [Walkthrough: Debugging a Parallel Application](http://msdn.microsoft.com/library/2820ac4c-c893-4d87-8c62-83981d561493) and [How to: Use the Parallel Watch Window](http://msdn.microsoft.com/library/28004d9b-420c-48f7-b80e-ab1519802558).  
  
## Profiling  
 The profiling tools provide three data views that display graphical, tabular and numerical information about how a multi-threaded application interacts with itself and with other programs. The views enable you to quickly identify areas of concern, and to navigate from points on the graphical displays to call stacks, call sites, and source code. For more information, see [Concurrency Visualizer](http://msdn.microsoft.com/library/ae5879a0-1e1a-455a-ba72-148e57f59289).  
  
## Event Tracing  
 The Concurrency Runtime uses [Event Tracing for Windows](http://msdn.microsoft.com/library/windows/desktop/bb968803) (ETW) to notify instrumentation tools, such as profilers, when various events occur. These events include when a scheduler is activated or deactivated, when a context begins, ends, blocks, unblocks, or yields, and when a parallel algorithm begins or ends.  
  
 Tools such as the [Concurrency Visualizer](http://msdn.microsoft.com/library/ae5879a0-1e1a-455a-ba72-148e57f59289) utilize this functionality; therefore, you typically do not have to work with these events directly. However, these events are useful when you are developing a custom profiler or when you use event tracing tools such as [Xperf](http://go.microsoft.com/fwlink/LinkID=160628).  
  
 The Concurrency Runtime raises these events only when tracing is enabled. Call the [concurrency::EnableTracing](http://msdn.microsoft.com/library/66ece37f-97f1-490f-bd78-d5ff1e43b805) function to enable event tracing and the [concurrency::DisableTracing](http://msdn.microsoft.com/library/deccd704-c8de-4026-81e9-9214dbb5d71e) function to disable tracing.  
  
 The following table describes the events that the runtime raises when event tracing is enabled:  
  
|Event|Description|Value|  
|-----------|-----------------|-----------|  
|[concurrency::ConcRT_ProviderGuid](http://msdn.microsoft.com/library/5849a265-ee6a-485f-a571-b3aba71425d0)|The ETW provider identifier for the Concurrency Runtime.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|  
|[concurrency::ContextEventGuid](http://msdn.microsoft.com/library/c3aec997-4941-433a-bdb6-f7ef6e5219fe)|Marks events that are related to contexts.|`5727a00f-50be-4519-8256-f7699871fecb`|  
|[concurrency::PPLParallelForEventGuid](http://msdn.microsoft.com/library/db0a6329-840f-4db5-8f84-1f531d9cc382)|Marks the entrance and exit to calls to the [concurrency::parallel_for](http://msdn.microsoft.com/library/97521998-db27-4a52-819a-17c9cfe09b2d) algorithm.|`31c8da6b-6165-4042-8b92-949e315f4d84`|  
|[concurrency::PPLParallelForeachEventGuid](http://msdn.microsoft.com/library/3b00d409-83ea-4836-bec6-af40cf1a5902)|Marks the entrance and exit to calls to the [concurrency::parallel_for_each](http://msdn.microsoft.com/library/ff7ec2dd-63fd-4838-b202-225036b30f28) algorithm.|`5cb7d785-9d66-465d-bae1-4611061b5434`|  
|[concurrency::PPLParallelInvokeEventGuid](http://msdn.microsoft.com/library/52dfc38b-44e9-435d-9207-ad9d16b6bd53)|Marks the entrance and exit to calls to the [concurrency::parallel_invoke](http://msdn.microsoft.com/library/8c8fe553-f372-4138-b9c6-e31b0e83eb9b) algorithm.|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|  
|[concurrency::SchedulerEventGuid](http://msdn.microsoft.com/library/76e2cf6b-e042-4052-8df1-ddfcf453a112)|Marks events that are related to the [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|  
|[concurrency::VirtualProcessorEventGuid](http://msdn.microsoft.com/library/ab73a4da-a44d-43de-bb34-193062afc334)|Marks events that are related to virtual processors.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|  
  
 The Concurrency Runtime defines, but does not currently raise, the following events. The runtime reserves these events for future use:  
  
-   [concurrency::ConcRTEventGuid](http://msdn.microsoft.com/library/78e621f4-cd16-402f-b4e4-520d56ee3269)  
  
-   [concurrency::ScheduleGroupEventGuid](http://msdn.microsoft.com/library/76e2cf6b-e042-4052-8df1-ddfcf453a112)  
  
-   [concurrency::ChoreEventGuid](http://msdn.microsoft.com/library/1c0ec298-ce70-41b1-9458-6384c0bbf45e)  
  
-   [concurrency::LockEventGuid](http://msdn.microsoft.com/library/f771e726-9ac6-4732-a96a-fccbe32001dd)  
  
-   [concurrency::ResourceManagerEventGuid](http://msdn.microsoft.com/library/b5d7a70b-0130-44d4-b03a-a1e9a789b8bd)  
  
 The [concurrency::ConcRT_EventType](http://msdn.microsoft.com/library/f593d554-ce66-4f72-bd33-00dd1a0cf52e) enumeration specifies the possible operations that an event tracks. For example, at the entrance of the `parallel_for` algorithm, the runtime raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_START` as the operation. Before the `parallel_for` algorithm returns, the runtime again raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_END` as the operation.  
  
 The following example illustrates how to enable tracing for a call to `parallel_for`. The runtime does not trace the first call to `parallel_for` because tracing it not enabled. The call to `EnableTracing` enables the runtime to trace the second call to `parallel_for`.  
  
 [!code-cpp[concrt-etw#1](../../snippets/cpp/VS_Snippets_ConcRT/concrt-etw/cpp/etw.cpp#1)]  
  
 The runtime tracks the number of times that you call `EnableTracing` and `DisableTracing`. Therefore, if you call `EnableTracing` multiple times, you must call `DisableTracing` the same number of times in order to disable tracing.  
  
## See Also  
 [Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)

