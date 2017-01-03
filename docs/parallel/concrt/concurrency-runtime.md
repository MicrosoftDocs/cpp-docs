---
title: "Concurrency Runtime | Microsoft Docs"
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
  - "Concurrency Runtime, getting started"
  - "ConcRT (see Concurrency Runtime)"
  - "Concurrency Runtime"
ms.assetid: 874bc58f-8dce-483e-a3a1-4dcc9e52ed2c
caps.latest.revision: 40
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
# Concurrency Runtime
The Concurrency Runtime for C++ helps you write robust, scalable, and responsive parallel applications. It raises the level of abstraction so that you do not have to manage the infrastructure details that are related to concurrency. You can also use it to specify scheduling policies that meet the quality of service demands of your applications. Use these resources to help you start working with the Concurrency Runtime.  
  
 For reference documentation, see [Reference](../../parallel/concrt/reference/reference-concurrency-runtime.md).  
  
> [!TIP]
>  The Concurrency Runtime relies heavily on C++11 features and adopts the more modern C++ style. To learn more, read  [Welcome Back to C++](../../cpp/welcome-back-to-cpp-modern-cpp.md).  
  
## Choosing Concurrency Runtime Features  
  
|||  
|-|-|  
|[Overview](../../parallel/concrt/asynchronous-message-blocks.md#overview)|Teaches why the Concurrency Runtime is important and describes its key features.|  
|[Comparing to Other Concurrency Models](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md)|Shows how the Concurrency Runtime compares to other concurrency models, such as the Windows thread pool and OpenMP, so that you can use the concurrency model that best fits your application requirements.|  
|[Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)|Compares OpenMP to the Concurrency Runtime and provides examples about how to migrate existing OpenMP code to use the Concurrency Runtime.|  
|[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Introduces you to the PPL, which provides parallel loops, tasks, and parallel containers.|  
|[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)|Introduces you to how to use asynchronous agents and message passing to easily incorporate dataflow and pipelining tasks in your applications.|  
|[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)|Introduces you to the Task Scheduler, which enables you to fine-tune the performance of your desktop apps that uses the Concurrency Runtime.|  
  
## Task Parallelism in the PPL  
  
|||  
|-|-|  
|[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br /><br /> [How to: Use parallel_invoke to Write a Parallel Sort Routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)<br /><br /> [How to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)<br /><br /> [How to: Create a Task that Completes After a Delay](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md)|Describes tasks and task groups, which can help you to write asynchronous code and decompose parallel work into smaller pieces.|  
|[Walkthrough: Implementing Futures](../../parallel/concrt/walkthrough-implementing-futures.md)|Demonstrates how to combine Concurrency Runtime features to do something more.|  
|[Walkthrough: Removing Work from a User-Interface Thread](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)|Shows how to move the work that is performed by the UI thread in a MFC application to a worker thread.|  
|[Best Practices in the Parallel Patterns Library](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Provides tips and best practices for working with the PPL.|  
  
## Data Parallelism in the PPL  
  
|||  
|-|-|  
|[Parallel Algorithms](../../parallel/concrt/parallel-algorithms.md)<br /><br /> [How to: Write a parallel_for Loop](../../parallel/concrt/how-to-write-a-parallel-for-loop.md)<br /><br /> [How to: Write a parallel_for_each Loop](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md)<br /><br /> [How to: Perform Map and Reduce Operations in Parallel](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md)|Describes `parallel_for`, `parallel_for_each`, `parallel_invoke`, and other parallel algorithms. Use parallel algorithms to solve *data parallel* problems that involve collections of data.|  
|[Parallel Containers and Objects](../../parallel/concrt/parallel-containers-and-objects.md)<br /><br /> [How to: Use Parallel Containers to Increase Efficiency](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br /><br /> [How to: Use combinable to Improve Performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br /><br /> [How to: Use combinable to Combine Sets](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)|Describes the `combinable` class, as well as `concurrent_vector`, `concurrent_queue`, `concurrent_unordered_map`, and other parallel containers. Use parallel containers and objects when you require containers that provide thread-safe access to their elements.|  
|[Best Practices in the Parallel Patterns Library](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Provides tips and best practices for working with the PPL.|  
  
## Canceling Tasks and Parallel Algorithms  
  
|||  
|-|-|  
|[Cancellation in the PPL](cancellation-in-the-ppl.md)|Describes the role of cancellation in the PPL, including how to initiate and respond to cancellation requests.|  
|[How to: Use Cancellation to Break from a Parallel Loop](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)<br /><br /> [How to: Use Exception Handling to Break from a Parallel Loop](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Demonstrates two ways to cancel data-parallel work.|  
  
## Windows Store Apps  
  
|||  
|-|-|  
|[Creating Asynchronous Operations in C++ for Windows Store Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)|Describes some of the key points to keep in mind when you use the Concurrency Runtime to produce asynchronous operations in a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app.|  
|[Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)|Shows how to combine PPL tasks with the `IXMLHTTPRequest2` and `IXMLHTTPRequest2Callback` interfaces to send HTTP GET and POST requests to a web service in a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app.|  
|[Windows Store app samples](http://code.msdn.microsoft.com/windowsapps)|Contains downloadable code samples and demo apps for [!INCLUDE[win8](../../build/reference/includes/win8_md.md)]. The C++ samples use Concurrency Runtime features such as PPL tasks to process data in the background to keep the UX responsive.|  
  
## Dataflow Programming in the Asynchronous Agents Library  
  
|||  
|-|-|  
|[Asynchronous Agents](../../parallel/concrt/asynchronous-agents.md)<br /><br /> [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br /><br /> [Message Passing Functions](../../parallel/concrt/message-passing-functions.md)<br /><br /> [How to: Implement Various Producer-Consumer Patterns](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)<br /><br /> [How to: Provide Work Functions to the call and transformer Classes](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)<br /><br /> [How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br /><br /> [How to: Select Among Completed Tasks](../../parallel/concrt/how-to-select-among-completed-tasks.md)<br /><br /> [How to: Send a Message at a Regular Interval](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)<br /><br /> [How to: Use a Message Block Filter](../../parallel/concrt/how-to-use-a-message-block-filter.md)|Describes asynchronous agents, message blocks, and message-passing functions, which are the building blocks for performing dataflow operations in the Concurrency Runtime.|  
|[Walkthrough: Creating an Agent-Based Application](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br /><br /> [Walkthrough: Creating a Dataflow Agent](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)|Shows how to create basic agent-based applications.|  
|[Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)|Shows how to create a network of asynchronous message blocks that perform image processing.|  
|[Walkthrough: Using join to Prevent Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)|Uses the dining philosophers problem to illustrate how to use the Concurrency Runtime to prevent deadlock in your application.|  
|[Walkthrough: Creating a Custom Message Block](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md)|Shows how to create a custom message block type that orders incoming messages by priority.|  
|[Best Practices in the Asynchronous Agents Library](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Provides tips and best practices for working with agents.|  
  
## Exception Handling and Debugging  
  
|||  
|-|-|  
|[Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Describes how to work with exceptions in the Concurrency Runtime.|  
|[Parallel Diagnostic Tools](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Teaches you how to fine-tune your applications and make the most effective use of the Concurrency Runtime.|  
  
## Tuning Performance  
  
|||  
|-|-|  
|[Parallel Diagnostic Tools](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Teaches you how to fine-tune your applications and make the most effective use of the Concurrency Runtime.|  
|[Scheduler Instances](../../parallel/concrt/scheduler-instances.md)<br /><br /> [How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br /><br /> [Scheduler Policies](../../parallel/concrt/scheduler-policies.md)<br /><br /> [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)<br /><br /> [How to: Create Agents that Use Specific Scheduler Policies](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)|Shows how to work with manage scheduler instances and scheduler policies. For desktop apps, scheduler policies enable you to associate specific rules with specific types of workloads. For example, you can create one scheduler instance to run some tasks at an elevated thread priority and use the default scheduler to run other tasks at the normal thread priority.|  
|[Schedule Groups](../../parallel/concrt/schedule-groups.md)<br /><br /> [How to: Use Schedule Groups to Influence Order of Execution](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)|Demonstrates how to use schedule groups to affinitize, or group, related tasks together. For example, you might require a high degree of locality among related tasks when those tasks benefit from executing on the same processor node.|  
|[Lightweight Tasks](../../parallel/concrt/lightweight-tasks.md)|Explains how lightweight tasks are useful for creating work that does not require load-balancing or cancellation, and how they are also useful for adapting existing code for use with the Concurrency Runtime.|  
|[Contexts](../../parallel/concrt/contexts.md)<br /><br /> [How to: Use the Context Class to Implement a Cooperative Semaphore](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br /><br /> [How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)|Describes how to control the behavior of the threads that are managed by the Concurrency Runtime.|  
|[Memory Management Functions](../../parallel/concrt/memory-management-functions.md)<br /><br /> [How to: Use Alloc and Free to Improve Memory Performance](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)|Describes the memory management functions that the Concurrency Runtime provides to help you allocate and free memory in a concurrent manner.|  
  
## Additional Resources  
  
|||  
|-|-|  
|[Async programming patterns and tips in Hilo (Windows Store apps using C++ and XAML)](http://msdn.microsoft.com/library/windows/apps/jj160321.aspx)|Learn how we used the Concurrency Runtime to implement asynchronous operations in Hilo, a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app using C++ and XAML.|  
|[Code samples for the Concurrency Runtime and Parallel Pattern Library in Visual Studio 2010](http://go.microsoft.com/fwlink/linkid=183875)|Provides sample applications and utilities that demonstrate the Concurrency Runtime.|  
|[Parallel Programming in Native Code blog](http://go.microsoft.com/fwlink/linkid=183873)|Provides additional in-depth blog articles about parallel programming in the Concurrency Runtime.|  
|[Parallel Computing in C++ and Native Code forum](http://go.microsoft.com/fwlink/linkid=183874)|Enables you to participate in community discussions about the Concurrency Runtime.|  
|[Parallel Programming](http://msdn.microsoft.com/library/4d83c690-ad2d-489e-a2e0-b85b898a672d)|Teaches you about the parallel programming model that is available in the [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)].|  
  
## See Also  
 [Reference](../../parallel/concrt/reference/reference-concurrency-runtime.md)


