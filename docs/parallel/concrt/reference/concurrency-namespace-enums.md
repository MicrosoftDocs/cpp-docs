---
title: "concurrency namespace enums | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: a40e3b2d-ad21-4229-9880-2cfa84f7ab8f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# concurrency namespace enums
||||  
|-|-|-|  
|[Agents_EventType Enumeration](#agents_eventtype)|[ConcRT_EventType Enumeration](#concrt_eventtype)|[Concrt_TraceFlags Enumeration](#concrt_traceflags)|  
|[CriticalRegionType Enumeration](#criticalregiontype)|[DynamicProgressFeedbackType Enumeration](#dynamicprogressfeedbacktype)|[PolicyElementKey Enumeration](#policyelementkey)|  
|[SchedulerType Enumeration](#schedulertype)|[SchedulingProtocolType Enumeration](#schedulingprotocoltype)|[SwitchingProxyState Enumeration](#switchingproxystate)|  
|[WinRTInitializationType Enumeration](#winrtinitializationtype)|[agent_status Enumeration](#agent_status)|[join_type Enumeration](#join_type)|  
|[message_status Enumeration](#message_status)|[task_group_status Enumeration](#task_group_status)|  
  
##  <a name="agent_status"></a>  agent_status Enumeration  
 The valid states for an `agent`.  
  
```
enum agent_status;
```  
  
### Remarks  
 For more information, see [Asynchronous Agents](../../../parallel/concrt/asynchronous-agents.md).  
  
##  <a name="agents_eventtype"></a>  Agents_EventType Enumeration  
 The types of events that can be traced using the tracing functionality offered by the Agents Library  
  
```
enum Agents_EventType;
```  
  
##  <a name="concrt_eventtype"></a>  ConcRT_EventType Enumeration  
 The types of events that can be traced using the tracing functionality offered by the Concurrency Runtime.  
  
```
enum ConcRT_EventType;
```  
  
##  <a name="concrt_traceflags"></a>  Concrt_TraceFlags Enumeration  
 Trace flags for the event types  
  
```
enum Concrt_TraceFlags;
```  
  
##  <a name="criticalregiontype"></a>  CriticalRegionType Enumeration  
 The type of critical region a context is inside.  
  
```
enum CriticalRegionType;
```  
  
##  <a name="dynamicprogressfeedbacktype"></a>  DynamicProgressFeedbackType Enumeration  
 Used by the `DynamicProgressFeedback` policy to describe whether resources for the scheduler will be rebalanced according to statistical information gathered from the scheduler or only based on virtual processors going in and out of the idle state through calls to the `Activate` and `Deactivate` methods on the `IVirtualProcessorRoot` interface. For more information on available scheduler policies, see [PolicyElementKey Enumeration](concurrency-namespace-enums.md).  
  
```
enum DynamicProgressFeedbackType;
```  
  
##  <a name="join_type"></a>  join_type Enumeration  
 The type of a `join` messaging block.  
  
```
enum join_type;
```  
  
##  <a name="message_status"></a>  message_status Enumeration  
 The valid responses for an offer of a `message` object to a block.  
  
```
enum message_status;
```  
  
##  <a name="policyelementkey"></a>  PolicyElementKey Enumeration  
 Policy keys describing aspects of scheduler behavior. Each policy element is described by a key-value pair. For more information about scheduler policies and their impact on schedulers, see [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
```
enum PolicyElementKey;
```  
  
##  <a name="schedulertype"></a>  SchedulerType Enumeration  
 Used by the `SchedulerKind` policy to describe the type of threads that the scheduler should utilize for underlying execution contexts. For more information on available scheduler policies, see [PolicyElementKey Enumeration](concurrency-namespace-enums.md).  
  
```
enum SchedulerType;
```  
  
##  <a name="schedulingprotocoltype"></a>  SchedulingProtocolType Enumeration  
 Used by the `SchedulingProtocol` policy to describe which scheduling algorithm will be utilized for the scheduler. For more information on available scheduler policies, see [PolicyElementKey Enumeration](concurrency-namespace-enums.md).  
  
```
enum SchedulingProtocolType;
```  
  
##  <a name="switchingproxystate"></a>  SwitchingProxyState Enumeration  
 Used to denote the state a thread proxy is in, when it is executing a cooperative context switch to a different thread proxy.  
  
```
enum SwitchingProxyState;
```  
  
### Remarks  
 A parameter of type `SwitchingProxyState` is passed in to the method `IThreadProxy::SwitchTo` to instruct the Resource Manager how to treat the thread proxy that is making the call.  
  
 For more information on how this type is used, see [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto).  
  
##  <a name="task_group_status"></a>  task_group_status Enumeration  
 Describes the execution status of a `task_group` or `structured_task_group` object. A value of this type is returned by numerous methods that wait on tasks scheduled to a task group to complete.  
  
```
enum task_group_status;
```  
  
##  <a name="winrtinitializationtype"></a>  WinRTInitializationType Enumeration  
 Used by the `WinRTInitialization` policy to describe whether and how the Windows Runtime will be initialized on scheduler threads for an application which runs on operating systems with version Windows 8 or higher. For more information on available scheduler policies, see [PolicyElementKey Enumeration](concurrency-namespace-enums.md).  
  
```
enum WinRTInitializationType;
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
