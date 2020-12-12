---
description: "Learn more about: Parallel Diagnostic Tools (Concurrency Runtime)"
title: "Parallel Diagnostic Tools (Concurrency Runtime)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Parallel Diagnostic Tools [Concurrency Runtime]"]
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
---
# Parallel Diagnostic Tools (Concurrency Runtime)

Visual Studio provides extensive support for debugging and profiling multi-threaded applications.

## Debugging

The Visual Studio debugger includes the **Parallel Stacks** window, **Parallel Tasks** window, and **Parallel Watch** window. For more information, see [Walkthrough: Debugging a Parallel Application](/visualstudio/debugger/walkthrough-debugging-a-parallel-application) and [How to: Use the Parallel Watch Window](/visualstudio/debugger/how-to-use-the-parallel-watch-window).

## Profiling

The profiling tools provide three data views that display graphical, tabular and numerical information about how a multi-threaded application interacts with itself and with other programs. The views enable you to quickly identify areas of concern, and to navigate from points on the graphical displays to call stacks, call sites, and source code. For more information, see [Concurrency Visualizer](/visualstudio/profiling/concurrency-visualizer).

## Event Tracing

The Concurrency Runtime uses [Event Tracing for Windows](/windows/win32/ETW/event-tracing-portal) (ETW) to notify instrumentation tools, such as profilers, when various events occur. These events include when a scheduler is activated or deactivated, when a context begins, ends, blocks, unblocks, or yields, and when a parallel algorithm begins or ends.

Tools such as the [Concurrency Visualizer](/visualstudio/profiling/concurrency-visualizer) utilize this functionality; therefore, you typically do not have to work with these events directly. However, these events are useful when you are developing a custom profiler or when you use event tracing tools such as [Xperf](https://go.microsoft.com/fwlink/p/?linkid=160628).

The Concurrency Runtime raises these events only when tracing is enabled. Call the [concurrency::EnableTracing](reference/concurrency-namespace-functions.md#enabletracing) function to enable event tracing and the [concurrency::DisableTracing](reference/concurrency-namespace-functions.md#disabletracing) function to disable tracing.

The following table describes the events that the runtime raises when event tracing is enabled:

|Event|Description|Value|
|-----------|-----------------|-----------|
|[concurrency::ConcRT_ProviderGuid](reference/concurrency-namespace-constants1.md#concrt_providerguid)|The ETW provider identifier for the Concurrency Runtime.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|
|[concurrency::ContextEventGuid](reference/concurrency-namespace-constants1.md#contexteventguid)|Marks events that are related to contexts.|`5727a00f-50be-4519-8256-f7699871fecb`|
|[concurrency::PPLParallelForEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeventguid)|Marks the entrance and exit to calls to the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm.|`31c8da6b-6165-4042-8b92-949e315f4d84`|
|[concurrency::PPLParallelForeachEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeacheventguid)|Marks the entrance and exit to calls to the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm.|`5cb7d785-9d66-465d-bae1-4611061b5434`|
|[concurrency::PPLParallelInvokeEventGuid](reference/concurrency-namespace-constants1.md#pplparallelinvokeeventguid)|Marks the entrance and exit to calls to the [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algorithm.|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|
|[concurrency::SchedulerEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)|Marks events that are related to the [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|
|[concurrency::VirtualProcessorEventGuid](reference/concurrency-namespace-constants1.md#virtualprocessoreventguid)|Marks events that are related to virtual processors.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|

The Concurrency Runtime defines, but does not currently raise, the following events. The runtime reserves these events for future use:

- [concurrency::ConcRTEventGuid](reference/concurrency-namespace-constants1.md#concrteventguid)

- [concurrency::ScheduleGroupEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)

- [concurrency::ChoreEventGuid](reference/concurrency-namespace-constants1.md#choreeventguid)

- [concurrency::LockEventGuid](reference/concurrency-namespace-constants1.md#lockeventguid)

- [concurrency::ResourceManagerEventGuid](reference/concurrency-namespace-constants1.md#resourcemanagereventguid)

The [concurrency::ConcRT_EventType](reference/concurrency-namespace-enums.md#concrt_eventtype) enumeration specifies the possible operations that an event tracks. For example, at the entrance of the `parallel_for` algorithm, the runtime raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_START` as the operation. Before the `parallel_for` algorithm returns, the runtime again raises the `PPLParallelForEventGuid` event and provides `CONCRT_EVENT_END` as the operation.

The following example illustrates how to enable tracing for a call to `parallel_for`. The runtime does not trace the first call to `parallel_for` because tracing it not enabled. The call to `EnableTracing` enables the runtime to trace the second call to `parallel_for`.

[!code-cpp[concrt-etw#1](../../parallel/concrt/codesnippet/cpp/parallel-diagnostic-tools-concurrency-runtime_1.cpp)]

The runtime tracks the number of times that you call `EnableTracing` and `DisableTracing`. Therefore, if you call `EnableTracing` multiple times, you must call `DisableTracing` the same number of times in order to disable tracing.

## See also

[Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)
