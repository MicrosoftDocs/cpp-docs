---
title: "Schedule Groups"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "schedule groups"
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
caps.latest.revision: 6
ms.author: "mithom"
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
# Schedule Groups
This document describes the role of schedule groups in the Concurrency Runtime. A *schedule group* affinitizes, or groups, related tasks together. Every scheduler has one or more schedule groups. Use schedule groups when you require a high degree of locality among tasks, for example, when a group of related tasks benefit from executing on the same processor node. Conversely, use scheduler instances when your application has specific quality requirements, for example, when you want to limit the amount of processing resources that are allocated to a set of tasks. For more information about scheduler instances, see [Scheduler Instances](../parallel/scheduler-instances.md).  
  
> [!TIP]
>  The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the [Parallel Patterns Library (PPL)](../parallel/parallel-patterns-library--ppl-.md) or the [Asynchronous Agents Library](../parallel/asynchronous-agents-library.md) if you are new to the Concurrency Runtime.  
  
 Every `Scheduler` object has a default schedule group for every scheduling node. A *scheduling node* maps to the underlying system topology. The runtime creates one scheduling node for every processor package or Non-Uniform Memory Architecture (NUMA) node, whichever number is larger. If you do not explicitly associate a task with a schedule group, the scheduler chooses which group to add the task to.  
  
 The `SchedulingProtocol` scheduler policy influences the order in which the scheduler executes the tasks in each schedule group. When `SchedulingProtocol` is set to `EnhanceScheduleGroupLocality` (which is the default), the Task Scheduler chooses the next task from the schedule group that it is working on when the current task finishes or cooperatively yields. The Task Scheduler searches the current schedule group for work before it moves to the next available group. Conversely, when `SchedulingProtocol` is set to `EnhanceForwardProgress`, the scheduler moves to the next schedule group after each task finishes or yields. For an example that compares these policies, see [How to: Use Schedule Groups to Influence Order of Execution](../parallel/how-to--use-schedule-groups-to-influence-order-of-execution.md).  
  
 The runtime uses the [concurrency::ScheduleGroup](../parallel/schedulegroup-class.md) class to represent schedule groups. To create a `ScheduleGroup` object, call the [concurrency::CurrentScheduler::CreateScheduleGroup](../Topic/CurrentScheduler::CreateScheduleGroup%20Method.md) or [concurrency::Scheduler::CreateScheduleGroup](../Topic/Scheduler::CreateScheduleGroup%20Method.md) method. The runtime uses a reference-counting mechanism to control the lifetime of `ScheduleGroup` objects, just as it does with `Scheduler` objects. When you create a `ScheduleGroup` object, the runtime sets the reference counter to one. The [concurrency::ScheduleGroup::Reference](../Topic/ScheduleGroup::Reference%20Method.md) method increments the reference counter by one. The [concurrency::ScheduleGroup::Release](../Topic/ScheduleGroup::Release%20Method.md) method decrements the reference counter by one.  
  
 Many types in the Concurrency Runtime let you associate an object together with a schedule group. For example, the [concurrency::agent](../parallel/agent-class.md) class and message block classes such as [concurrency::unbounded_buffer](../Topic/unbounded_buffer%20Class.md), [concurrency::join](../parallel/join-class.md), and concurrency::"timer", provide overloaded versions of the constructor that take a `ScheduleGroup` object. The runtime uses the `Scheduler` object that is associated with this `ScheduleGroup` object to schedule the task.  
  
 You can also use the [concurrency::ScheduleGroup::ScheduleTask](../Topic/ScheduleGroup::ScheduleTask%20Method.md) method to schedule a lightweight task. For more information about lightweight tasks, see [Lightweight Tasks](../parallel/lightweight-tasks.md).  
  
## Example  
 For an example that uses schedule groups to control the order of task execution, see [How to: Use Schedule Groups to Influence Order of Execution](../parallel/how-to--use-schedule-groups-to-influence-order-of-execution.md).  
  
## See Also  
 [Task Scheduler](../parallel/task-scheduler--concurrency-runtime-.md)   
 [Scheduler Instances](../parallel/scheduler-instances.md)   
 [How to: Use Schedule Groups to Influence Order of Execution](../parallel/how-to--use-schedule-groups-to-influence-order-of-execution.md)