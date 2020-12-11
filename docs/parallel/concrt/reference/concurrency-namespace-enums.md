---
description: "Learn more about: concurrency namespace enums"
title: "concurrency namespace enums"
ms.date: "11/04/2016"
f1_keywords: ["CONCRT/concurrency::Agents_EventType", "CONCRT/concurrency::Concrt_TraceFlags", "CONCRT/concurrency::CriticalRegionType", "CONCRT/concurrency::PolicyElementKey", "CONCRT/concurrency::SchedulerType", "CONCRT/concurrency::SwitchingProxyState", "CONCRT/concurrency::WinRTInitializationType", "CONCRT/concurrency::join_type", "CONCRT/concurrency::message_status Enumeration"]
ms.assetid: a40e3b2d-ad21-4229-9880-2cfa84f7ab8f
---
# concurrency namespace enums

:::row:::
   :::column span="":::
      [`agent_status`](#agent_status)\
      [`Agents_EventType`](#agents_eventtype)\
      [`ConcRT_EventType`](#concrt_eventtype)\
      [`Concrt_TraceFlags`](#concrt_traceflags)\
      [`CriticalRegionType`](#criticalregiontype)
   :::column-end:::
   :::column span="":::
      [`DynamicProgressFeedbackType`](#dynamicprogressfeedbacktype)\
      [`join_type`](#join_type)\
      [`message_status`](#message_status)\
      [`PolicyElementKey`](#policyelementkey)\
      [`SchedulerType`](#schedulertype)
   :::column-end:::
   :::column span="":::
      [`SchedulingProtocolType`](#schedulingprotocoltype)\
      [`SwitchingProxyState`](#switchingproxystate)\
      [`task_group_status`](#task_group_status)\
      [`WinRTInitializationType`](#winrtinitializationtype)
   :::column-end:::
:::row-end:::

## <a name="agent_status"></a> agent_status Enumeration

The valid states for an `agent`.

```cpp
enum agent_status;
```

### Values

|Name|Description|
|----------|-----------------|
|`agent_canceled`|The `agent` was canceled.|
|`agent_created`|The `agent` has been created but not started.|
|`agent_done`|The `agent` finished without being canceled.|
|`agent_runnable`|The `agent` has been started, but not entered its `run` method.|
|`agent_started`|The `agent` has started.|

### Remarks

For more information, see [Asynchronous Agents](../../../parallel/concrt/asynchronous-agents.md).

### Requirements

**Header:** concrt.h

## <a name="agents_eventtype"></a> Agents_EventType Enumeration

The types of events that can be traced using the tracing functionality offered by the Agents Library

```cpp
enum Agents_EventType;
```

### Values

|Name|Description|
|----------|-----------------|
|`AGENTS_EVENT_CREATE`|An event type that represents the creation of an object|
|`AGENTS_EVENT_DESTROY`|An event type that represents the deletion of an object|
|`AGENTS_EVENT_END`|An event type that represents the conclusion of some processing|
|`AGENTS_EVENT_LINK`|An event type that represents the linking of message blocks|
|`AGENTS_EVENT_NAME`|An event type that represents the name for an object|
|`AGENTS_EVENT_SCHEDULE`|An event type that represents the scheduling of a process|
|`AGENTS_EVENT_START`|An event type that represents the initiation of some processing|
|`AGENTS_EVENT_UNLINK`|An event type that represents the unlinking of message blocks|

### Requirements

**Header:** concrt.h

## <a name="concrt_eventtype"></a> ConcRT_EventType Enumeration

The types of events that can be traced using the tracing functionality offered by the Concurrency Runtime.

```cpp
enum ConcRT_EventType;
```

### Values

|Name|Description|
|----------|-----------------|
|`CONCRT_EVENT_ATTACH`|An event type that represents the act of a attaching to a scheduler.|
|`CONCRT_EVENT_BLOCK`|An event type that represents the act of a context blocking.|
|`CONCRT_EVENT_DETACH`|An event type that represents the act of a detaching from a scheduler.|
|`CONCRT_EVENT_END`|An event type that marks the beginning of a start/end event pair.|
|`CONCRT_EVENT_GENERIC`|An event type used for miscellaneous events.|
|`CONCRT_EVENT_IDLE`|An event type that represents the act of a context becoming idle.|
|`CONCRT_EVENT_START`|An event type that marks the beginning of a start/end event pair.|
|`CONCRT_EVENT_UNBLOCK`|An event type that represents the act of unblocking a context.|
|`CONCRT_EVENT_YIELD`|An event type that represents the act of a context yielding.|

### Requirements

**Header:** concrt.h
**Namespace:** concurrency

## <a name="concrt_traceflags"></a> Concrt_TraceFlags Enumeration

Trace flags for the event types

```cpp
enum Concrt_TraceFlags;
```

### Values

|Name|Description|
|----------|-----------------|
|`AgentEventFlag`||
|`AllEventsFlag`||
|`ContextEventFlag`||
|`PPLEventFlag`||
|`ResourceManagerEventFlag`||
|`SchedulerEventFlag`||
|`VirtualProcessorEventFlag`||

### Requirements

**Header:** concrt.h

## <a name="criticalregiontype"></a> CriticalRegionType Enumeration

The type of critical region a context is inside.

```cpp
enum CriticalRegionType;
```

### Values

|Name|Description|
|----------|-----------------|
|`InsideCriticalRegion`|Indicates that the context is inside a critical region. When inside a critical region, asynchronous suspensions are hidden from the scheduler. Should such a suspension happen, the Resource Manager will wait for the thread to become runnable and simply resume it instead of invoking the scheduler again. Any locks taken inside such a region must be taken with extreme care.|
|`InsideHyperCriticalRegion`|Indicates that the context is inside a hyper-critical region. When inside a hyper-critical region, both synchronous and asynchronous suspensions are hidden from the scheduler. Should such a suspension or blocking happen, the resource manager will wait for the thread to become runnable and simply resume it instead of invoking the scheduler again. Locks taken inside such a region must never be shared with code running outside such a region. Doing so will cause unpredictable deadlock.|
|`OutsideCriticalRegion`|Indicates that the context is outside any critical region.|

### Requirements

**Header:** concrtrm.h

## <a name="dynamicprogressfeedbacktype"></a> DynamicProgressFeedbackType Enumeration

Used by the `DynamicProgressFeedback` policy to describe whether resources for the scheduler will be rebalanced according to statistical information gathered from the scheduler or only based on virtual processors going in and out of the idle state through calls to the `Activate` and `Deactivate` methods on the `IVirtualProcessorRoot` interface. For more information on available scheduler policies, see [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum DynamicProgressFeedbackType;
```

### Values

|Name|Description|
|----------|-----------------|
|`ProgressFeedbackDisabled`|The scheduler does not gather progress information. Rebalancing is done based solely on the subscription level of the underlying hardware thread. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](IExecutionResource-structure.md).<br /><br /> This value is reserved for use by the runtime.|
|`ProgressFeedbackEnabled`|The scheduler gathers progress information and passes it to the resource manager. The resource manager will utilize this statistical information to rebalance resources on behalf of the scheduler in addition to the subscription level of the underlying hardware thread. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](IExecutionResource-structure.md).|

## <a name="join_type"></a> join_type Enumeration

The type of a `join` messaging block.

```cpp
enum join_type;
```

### Values

|Name|Description|
|----------|-----------------|
|`greedy`|Greedy `join` messaging blocks immediately accept a message upon propagation. This is more efficient, but has the possibility for live-lock, depending on the network configuration.|
|`non_greedy`|Non-greedy `join` messaging blocks postpone messages and try and consume them after all have arrived. These are guaranteed to work, but slower.|

### Requirements

**Header:** agents.h

## <a name="message_status"></a> message_status Enumeration

The valid responses for an offer of a `message` object to a block.

```cpp
enum message_status;
```

### Values

|Name|Description|
|----------|-----------------|
|`accepted`|The target accepted the message.|
|`declined`|The target did not accept the message.|
|`missed`|The target tried to accept the message, but it was no longer available.|
|`postponed`|The target postponed the message.|

### Requirements

**Header:** agents.h

## <a name="policyelementkey"></a> PolicyElementKey Enumeration

Policy keys describing aspects of scheduler behavior. Each policy element is described by a key-value pair. For more information about scheduler policies and their impact on schedulers, see [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).

```cpp
enum PolicyElementKey;
```

### Values

|Name|Description|
|----------|-----------------|
|`ContextPriority`|The operating system thread priority of each context in the scheduler. If this key is set to the value `INHERIT_THREAD_PRIORITY` the contexts in the scheduler will inherit the priority of the thread that created the scheduler.<br /><br /> Valid values : Any of the valid values for the Windows `SetThreadPriority` function and the special value `INHERIT_THREAD_PRIORITY`<br /><br /> Default value : `THREAD_PRIORITY_NORMAL`|
|`ContextStackSize`|The reserved stack size of each context in the scheduler in kilobytes.<br /><br /> Valid values : Positive integers<br /><br /> Default value : `0`, indicating that the process' default value for stack size be used.|
|`DynamicProgressFeedback`|Determines whether the resources for the scheduler will be rebalanced according to statistical information gathered from the scheduler or only based on the subscription level of underlying hardware threads. For more information, see [DynamicProgressFeedbackType](#dynamicprogressfeedbacktype).<br /><br /> Valid values : A member of the `DynamicProgressFeedbackType` enumeration, either `ProgressFeedbackEnabled` or `ProgressFeedbackDisabled`<br /><br /> Default value : `ProgressFeedbackEnabled`|
|`LocalContextCacheSize`|When the `SchedulingProtocol` policy key is set to the value `EnhanceScheduleGroupLocality`, this specifies the maximum number of runnable contexts allowed to be cached in per virtual processor local queues. Such contexts will typically run in last-in-first-out (LIFO) order on the virtual processor that caused them to become runnable. Note that this policy key has no meaning when the `SchedulingProtocol` key is set to the value `EnhanceForwardProgress`.<br /><br /> Valid values : Non-negative integers<br /><br /> Default value : `8`|
|`MaxConcurrency`|The maximum concurrency level desired by the scheduler. The resource manager will try to initially allocate this many virtual processors. The special value [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indicates that the desired concurrency level is same as the number of hardware threads on the machine. If the value specified for `MinConcurrency` is greater than the number of hardware threads on the machine and `MaxConcurrency` is specified as `MaxExecutionResources`, the value for `MaxConcurrency` is raised to match what is set for `MinConcurrency`.<br /><br /> Valid values : Positive integers and the special value `MaxExecutionResources`<br /><br /> Default value : `MaxExecutionResources`|
|`MaxPolicyElementKey`|The maximum policy element key. Not a valid element key.|
|`MinConcurrency`|The minimum concurrency level that must be provided to the scheduler by the resource manager. The number of virtual processors assigned to a scheduler will never go below the minimum. The special value [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indicates that the minimum concurrency level is same as the number of hardware threads on the machine. If the value specified for `MaxConcurrency` is less than the number of hardware threads on the machine and `MinConcurrency` is specified as `MaxExecutionResources`, the value for `MinConcurrency` is lowered to match what is set for `MaxConcurrency`.<br /><br /> Valid values : Non-negative integers and the special value `MaxExecutionResources`. Note that for scheduler policies used for the construction of Concurrency Runtime schedulers, the value `0` is invalid.<br /><br /> Default value : `1`|
|`SchedulerKind`|The type of threads that the scheduler will utilize for underlying execution contexts. For more information, see [SchedulerType](#schedulertype).<br /><br /> Valid values : A member of the `SchedulerType` enumeration, for example, `ThreadScheduler`<br /><br /> Default value : `ThreadScheduler`. This translates to Win32 threads on all operating systems.|
|`SchedulingProtocol`|Describes which scheduling algorithm will be used by the scheduler. For more information, see [SchedulingProtocolType](#schedulingprotocoltype).<br /><br /> Valid values : A member of the `SchedulingProtocolType` enumeration, either `EnhanceScheduleGroupLocality` or `EnhanceForwardProgress`<br /><br /> Default value : `EnhanceScheduleGroupLocality`|
|`TargetOversubscriptionFactor`|Tentative number of virtual processors per hardware thread. The target oversubscription factor can be increased by the Resource Manager, if necessary, to satisfy `MaxConcurrency` with the hardware threads on the machine.<br /><br /> Valid values : Positive integers<br /><br /> Default value : `1`|
|`WinRTInitialization`||

### Requirements

**Header:** concrt.h

## <a name="schedulertype"></a> SchedulerType Enumeration

Used by the `SchedulerKind` policy to describe the type of threads that the scheduler should utilize for underlying execution contexts. For more information on available scheduler policies, see [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulerType;
```

### Values

|Name|Description|
|----------|-----------------|
|`ThreadScheduler`|Indicates an explicit request of regular Win32 threads.|
|`UmsThreadDefault`|User-mode schedulable (UMS) threads are not supported in the Concurrency Runtime in Visual Studio 2013. Using `UmsThreadDefault` as a value for the `SchedulerType` policy will not result in an error. However, a scheduler created with that policy will default to using Win32 threads.|

### Requirements

**Header:** concrt.h

## <a name="schedulingprotocoltype"></a> SchedulingProtocolType Enumeration

Used by the `SchedulingProtocol` policy to describe which scheduling algorithm will be utilized for the scheduler. For more information on available scheduler policies, see [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulingProtocolType;
```

### Values

|Name|Description|
|----------|-----------------|
|`EnhanceForwardProgress`|The scheduler prefers to round-robin through schedule groups after executing each task. Unblocked contexts are typically scheduled in a first-in-first-out (FIFO) fashion. Virtual processors do not cache unblocked contexts.|
|`EnhanceScheduleGroupLocality`|The scheduler prefers to continue to work on tasks within the current schedule group before moving to another schedule group. Unblocked contexts are cached per virtual-processor and are typically scheduled in a last-in-first-out (LIFO) fashion by the virtual processor which unblocked them.|

### Requirements

**Header:** concrt.h

## <a name="switchingproxystate"></a> SwitchingProxyState Enumeration

Used to denote the state a thread proxy is in, when it is executing a cooperative context switch to a different thread proxy.

```cpp
enum SwitchingProxyState;
```

### Values

|Name|Description|
|----------|-----------------|
|`Blocking`|Indicates that the calling thread is cooperatively blocking and should be exclusively owned by the caller until subsequently running again and performing other action.|
|`Idle`|Indicates that the calling thread is no longer needed by the scheduler and is being returned to the Resource Manager. The context which was being dispatched is no longer able to be utilized by the Resource Manager.|
|`Nesting`|Indicates that the calling thread is nesting a child scheduler and is needed by the caller, in order to attach to a different scheduler.|

### Remarks

A parameter of type `SwitchingProxyState` is passed in to the method `IThreadProxy::SwitchTo` to instruct the Resource Manager how to treat the thread proxy that is making the call.

For more information on how this type is used, see [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto).

## <a name="task_group_status"></a> task_group_status Enumeration

Describes the execution status of a `task_group` or `structured_task_group` object. A value of this type is returned by numerous methods that wait on tasks scheduled to a task group to complete.

```cpp
enum task_group_status;
```

### Values

|Name|Description|
|----------|-----------------|
|`canceled`|The `task_group` or `structured_task_group` object was canceled. One or more tasks may not have executed.|
|`completed`|The tasks queued to the `task_group` or `structured_task_group` object completed successfully.|
|`not_complete`|The tasks queued to the `task_group` object have not completed. Note that this value is not presently returned by the Concurrency Runtime.|

### Requirements

**Header:** pplinterface.h

## <a name="winrtinitializationtype"></a> WinRTInitializationType Enumeration

Used by the `WinRTInitialization` policy to describe whether and how the Windows Runtime will be initialized on scheduler threads for an application which runs on operating systems with version Windows 8 or higher. For more information on available scheduler policies, see [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum WinRTInitializationType;
```

### Values

|Name|Description|
|----------|-----------------|
|`DoNotInitializeWinRT`|When the application is run on operating systems with version Windows 8 or higher, threads within the scheduler will not initialize the Windows Runtime .|
|`InitializeWinRTAsMTA`|When the application is run on operating systems with version Windows 8 or higher, each thread within the scheduler will initialize the Windows Runtime and declare that it is part of the multithreaded apartment.|

## Requirements

**Header:** concrt.h

## See also

[concurrency Namespace](concurrency-namespace.md)
