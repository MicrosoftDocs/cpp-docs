---
title: "How to: Manage a Scheduler Instance | Microsoft Docs"
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
  - "managing a scheduler instance [Concurrency Runtime]"
  - "scheduler instances, managing [Concurrency Runtime]"
ms.assetid: 2cc804f0-5ff3-498b-97f1-a9f67a005448
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Manage a Scheduler Instance
Scheduler instances let you associate specific scheduling policies with various kinds of workloads. This topic contains two basic examples that show how to create and manage a scheduler instance.  
  
 The examples create schedulers that use the default scheduler policies. For an example that creates a scheduler that uses a custom policy, see [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).  
  
### To manage a scheduler instance in your application  
  
1.  Create a [concurrency::SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) object that contains the policy values for the scheduler to use.  
  

2.  Call the [concurrency::CurrentScheduler::Create](reference/currentscheduler-class.md#create) method or the [concurrency::Scheduler::Create](reference/scheduler-class.md#create) method to create a scheduler instance.  
  
     If you use the `Scheduler::Create` method, call the [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) method when you need to associate the scheduler with the current context.  
  
3.  Call the [CreateEvent](http://msdn.microsoft.com/library/windows/desktop/ms682396) function to create a handle to a non-signaled, auto-reset event object.  
  
4.  Pass the handle to the event object that you just created to the [concurrency::CurrentScheduler::RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) method or the [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) method. This registers the event to be set when the scheduler is destroyed.  
  
5.  Perform the tasks that you want the current scheduler to schedule.  
  
6.  Call the [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) method to detach the current scheduler and restore the previous scheduler as the current one.  
  
     If you use the `Scheduler::Create` method, call the [concurrency::Scheduler::Release](reference/scheduler-class.md#release) method to decrement the reference count of the `Scheduler` object.  
  
7.  Pass the handle to the event to the [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032) function to wait for the scheduler to shut down.  
  
8.  Call the [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) function to close the handle to the event object.  
  
## Example  
 The following code shows two ways to manage a scheduler instance. Each example first uses the default scheduler to perform a task that prints out the unique identifier of the current scheduler. Each example then uses a scheduler instance to perform the same task again. Finally, each example restores the default scheduler as the current one and performs the task one more time.  
  
 The first example uses the [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) class to create a scheduler instance and associate it with the current context. The second example uses the [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) class to perform the same task. Typically, the `CurrentScheduler` class is used to work with the current scheduler. The second example, which uses the `Scheduler` class, is useful when you want to control when the scheduler is associated with the current context or when you want to associate specific schedulers with specific tasks.  
  
 [!code-cpp[concrt-scheduler-instance#1](../../parallel/concrt/codesnippet/cpp/how-to-manage-a-scheduler-instance_1.cpp)]  
  
 This example produces the following output.  
  
```Output  
Using CurrentScheduler class...  
 
Current scheduler id: 0  
Creating and attaching scheduler...  
Current scheduler id: 1  
Detaching scheduler...  
Current scheduler id: 0  
 
Using Scheduler class...  
 
Current scheduler id: 0  
Creating scheduler...  
Attaching scheduler...  
Current scheduler id: 2  
Detaching scheduler...  
Current scheduler id: 0  
```  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `scheduler-instance.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc scheduler-instance.cpp**  
  
## See Also  
 [Scheduler Instances](../../parallel/concrt/scheduler-instances.md)   
 [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)

