---
title: "Scheduler Policies | Microsoft Docs"
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
  - "scheduler policies"
ms.assetid: 58fb68bd-4a57-40a8-807b-6edb6f083cd9
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Scheduler Policies
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This document describes the role of scheduler policies in the Concurrency Runtime. A *scheduler policy* controls the strategy that the scheduler uses when it manages tasks. For example, consider an application that requires some tasks to execute at `THREAD_PRIORITY_NORMAL` and other tasks to execute at `THREAD_PRIORITY_HIGHEST`.  You can create two scheduler instances: one that specifies the `ContextPriority` policy to be `THREAD_PRIORITY_NORMAL` and another that specifies the same policy to be `THREAD_PRIORITY_HIGHEST`.  
  
 By using scheduler policies, you can divide the available processing resources and assign a fixed set of resources to each scheduler. For example, consider a parallel algorithm that does not scale beyond four processors. You can create a scheduler policy that limits its tasks to use no more than four processors concurrently.  
  
> [!TIP]
>  The Concurrency Runtime provides a default scheduler. Therefore, you don't have to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) or the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.  
  
 When you use the [concurrency::CurrentScheduler::Create](http://msdn.microsoft.com/library/3cce2755-d7af-4613-ba11-6783e9bf0a62), [concurrency::Scheduler::Create](http://msdn.microsoft.com/library/cedf71a9-e1f4-4e7e-9e01-6a2e74df65c8), or [concurrency::Scheduler::SetDefaultSchedulerPolicy](http://msdn.microsoft.com/library/87bf9d4c-05ed-4b38-bbcd-1aaf541271d3) method to create a scheduler instance, you provide a [concurrency::SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) object that contains a collection of key-value pairs that specify the behavior of the scheduler. The `SchedulerPolicy` constructor takes a variable number of arguments. The first argument is the number of policy elements that you are about to specify. The remaining arguments are key-value pairs for each policy element. The following example creates a `SchedulerPolicy` object that specifies three policy elements. The runtime uses default values for the policy keys that are not specified.  
  
 [!code-cpp[concrt-scheduler-policy#2](../../snippets/cpp/VS_Snippets_ConcRT/concrt-scheduler-policy/cpp/scheduler-policy.cpp#2)]  
  
 The [concurrency::PolicyElementKey](http://msdn.microsoft.com/library/6376ca26-54c8-4804-863f-c081e387fe36) enumeration defines the policy keys that are associated with the Task Scheduler. The following table describes the policy keys and the default value that the runtime uses for each of them.  
  
|Policy Key|Description|Default Value|  
|----------------|-----------------|-------------------|  
|`SchedulerKind`|A [concurrency::SchedulerType](http://msdn.microsoft.com/library/df44b4bc-788a-407f-a0c4-148d6876ebb2) value that specifies the type of threads to use to schedule tasks.|`ThreadScheduler` (use normal threads). This is the only valid value for this key.|  
|`MaxConcurrency`|An `unsigned int` value that specifies the maximum number of concurrency resources that the scheduler uses.|[concurrency::MaxExecutionResources](http://msdn.microsoft.com/library/7cef895d-f0d6-41bc-b4c3-b4254fa07898)|  
|`MinConcurrency`|An `unsigned int` value that specifies the minimum number of concurrency resources that the scheduler uses.|`1`|  
|`TargetOversubscriptionFactor`|An `unsigned int` value that specifies how many threads to allocate to each processing resource.|`1`|  
|`LocalContextCacheSize`|An `unsigned int` value that specifies the maximum number of contexts that can be cached in the local queue of each virtual processor.|`8`|  
|`ContextStackSize`|An `unsigned int` value that specifies the size of the stack, in kilobytes, to reserve for each context.|`0` (use the default stack size)|  
|`ContextPriority`|An `int` value that specifies the thread priority of each context. This can be any value that you can pass to [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) or `INHERIT_THREAD_PRIORITY`.|`THREAD_PRIORITY_NORMAL`|  
|`SchedulingProtocol`|A [concurrency::SchedulingProtocolType](http://msdn.microsoft.com/library/a4bb87b9-bec3-4918-bb06-1993c53e1069) value that specifies the scheduling algorithm to use.|`EnhanceScheduleGroupLocality`|  
|`DynamicProgressFeedback`|A [concurrency::DynamicProgressFeedbackType](http://msdn.microsoft.com/library/25c43ad3-f0f6-4d70-8358-d33caf1e5820) value that specifies whether to rebalance resources according to statistics-based progress information.<br /><br /> **Note** Do not set this policy to `ProgressFeedbackDisabled` because it is reserved for use by the runtime.|`ProgressFeedbackEnabled`|  
  
 Each scheduler uses its own policy when it schedules tasks. The policies that are associated with one scheduler do not affect the behavior of any other scheduler. In addition, you cannot change the scheduler policy after you create the `Scheduler` object.  
  
> [!IMPORTANT]
>  Use only scheduler policies to control the attributes for threads that the runtime creates. Do not change the thread affinity or priority of threads that are created by the runtime because that might cause undefined behavior.  
  
 The runtime creates a default scheduler for you if you do not explicitly create one. If you want to use the default scheduler in your application, but you want to specify a policy for that scheduler to use, call the [concurrency::Scheduler::SetDefaultSchedulerPolicy](http://msdn.microsoft.com/library/87bf9d4c-05ed-4b38-bbcd-1aaf541271d3) method before you schedule parallel work. If you do not call the `Scheduler::SetDefaultSchedulerPolicy` method, the runtime uses the default policy values from the table.  
  
 Use the [concurrency::CurrentScheduler::GetPolicy](http://msdn.microsoft.com/library/890bd21e-8442-4d54-acf4-26c7da37a53b) and the [concurrency::Scheduler::GetPolicy](http://msdn.microsoft.com/library/db8ccac3-7b62-4321-a056-5861d2ac719b) methods to retrieve a copy of the scheduler policy. The policy values that you receive from these methods can differ from the policy values that you specify when you create the scheduler.  
  
## Example  
 To examine examples that use specific scheduler policies to control the behavior of the scheduler, see [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md) and [How to: Create Agents that Use Specific Scheduler Policies](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## See Also  
 [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)   
 [How to: Create Agents that Use Specific Scheduler Policies](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)

