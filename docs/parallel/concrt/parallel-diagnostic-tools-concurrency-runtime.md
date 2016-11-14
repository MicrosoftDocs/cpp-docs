---
title: "Parallel Diagnostic Tools (Concurrency Runtime) | Microsoft Docs"
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
  - "Parallel Diagnostic Tools [Concurrency Runtime]"
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
caps.latest.revision: 15
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
# Parallel Diagnostic Tools (Concurrency Runtime)
[!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] provides extensive support for debugging and profiling multi-threaded applications.  
  
## Debugging  
 The Visual Studio debugger includes the **Parallel Stacks** window, **Parallel Tasks** window, and **Parallel Watch** window. For more information, see [Walkthrough: Debugging a Parallel Application](../Topic/Walkthrough:%20Debugging%20a%20Parallel%20Application.md) and [How to: Use the Parallel Watch Window](../Topic/How%20to:%20Use%20the%20Parallel%20Watch%20Window.md).  
  
## Profiling  
 The profiling tools provide three data views that display graphical, tabular and numerical information about how a multi-threaded application interacts with itself and with other programs. The views enable you to quickly identify areas of concern, and to navigate from points on the graphical displays to call stacks, call sites, and source code. For more information, see [Concurrency Visualizer](/visualstudio/profiling/concurrency-visualizer).  
  
## Event Tracing  
 The Concurrency Runtime uses [Event Tracing for Windows](http://msdn.microsoft.com/library/windows/desktop/bb968803) (ETW) to notify instrumentation tools, such as profilers, when various events occur. These events include when a scheduler is activated or deactivated, when a context begins, ends, blocks, unblocks, or yields, and when a parallel algorithm begins or ends.  
  
 Tools such as the [Concurrency Visualizer](/visualstudio/profiling/concurrency-visualizer) utilize this functionality; therefore, you typically do not have to work with these events directly. However, these events are useful when you are developing a custom profiler or when you use event tracing tools such as [Xperf](http://go.microsoft.com/fwlink/LinkID=160628).  
  
 The Concurrency Runtime raises these events only when tracing is enabled. Call the [concurrency::EnableTracing](../Topic/EnableTracing%20Function.md) function to enable event tracing and the [concurrency::DisableTracing](../Topic/DisableTracing%20Function.md) function to disable tracing.  
  
 The following table describes the events that the runtime raises when event tracing is enabled:  
  
|Event|Description|Value|  
|-----------|-----------------|-----------|  
|[concurrency::ConcRT_ProviderGuid](../Topic/ConcRT_ProviderGuid%20Constant.md)|The ETW provider identifier for the Concurrency Runtime.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|  
|[concurrency::ContextEventGuid](../Topic/ContextEventGuid%20Constant.md)|Marks events that are related to contexts.|`5727a00f-50be-4519-8256-f7699871fecb`|  
|[concurrency::PPLParallelForEventGuid](../Topic/PPLParallelForEventGuid%20Constant.md)|Marks the entrance and exit to calls to the [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm.|`31c8da6b-6165-4042-8b92-949e315f4d84`|  
|[concurrency::PPLParallelForeachEventGuid](../Topic/PPLParallelForeachEventGuid%20Constant.md)|Marks the entrance and exit to calls to the [concurrency::parallel_for_each](../Topic/parallel_for_each%20Function.md) algorithm.|`5cb7d785-9d66-465d-bae1-4611061b5434`|  
|[concurrency::PPLParallelInvokeEventGuid](../Topic/PPLParallelInvokeEventGuid%20Constant.md)|Marks the entrance and exit to calls to the [concurrency::parallel_invoke](../Topic/parallel_invoke%20Function.md) algorithm.|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|  
|[concurrency::SchedulerEventGuid](../Topic/SchedulerEventGuid%20Constant.md)|Marks events that are related to the [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|  
|[concurrency::VirtualProcessorEventGuid](../Topic/VirtualProcessorEventGuid%20Constant.md)|Marks events that are related to virtual processors.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|  
  
 The Concurrency Runtime defines, but does not currently raise, the following events. The runtime reserves these events for future use:  
  
-   [concurrency::ConcRTEventGuid](../Topic/ConcRTEventGuid%20Constant.md)  
  
-   [concurrency::ScheduleGroupEventGuid](../Topic/SchedulerEventGuid%20Constant.md)  
  
-   [concurrency::ChoreEventGuid](../Topic/ChoreEventGuid%20Constant.md)  
  
-   [concurrency::LockEventGuid](../Topic/LockEventGuid%20Constant.md)  
  
-   [concurrency::ResourceManagerEventGuid](../Topic/ResourceManagerEventGuid%20Constant.md)  
  
 The [concurrency::ConcRT_EventType](../Topic/ConcRT_EventType%20Enumeration.md) enumeration specifies the possible operations that an event tracks. For example, at the entrance of the `parallel_for` algorithm, the runtime raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_START` as the operation. Before the `parallel_for` algorithm returns, the runtime again raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_END` as the operation.  
  
 The following example illustrates how to enable tracing for a call to `parallel_for`. The runtime does not trace the first call to `parallel_for` because tracing it not enabled. The call to `EnableTracing` enables the runtime to trace the second call to `parallel_for`.  
  
 [!code-cpp[concrt-etw#1](../../parallel/concrt/codesnippet/CPP/parallel-diagnostic-tools-concurrency-runtime_1.cpp)]  
  
 The runtime tracks the number of times that you call `EnableTracing` and `DisableTracing`. Therefore, if you call `EnableTracing` multiple times, you must call `DisableTracing` the same number of times in order to disable tracing.  
  
## See Also  
 [Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)

