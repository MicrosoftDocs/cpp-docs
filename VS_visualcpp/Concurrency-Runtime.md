---
title: "Concurrency Runtime"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 874bc58f-8dce-483e-a3a1-4dcc9e52ed2c
caps.latest.revision: 39
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Concurrency Runtime
The Concurrency Runtime for C++ helps you write robust, scalable, and responsive parallel applications. It raises the level of abstraction so that you do not have to manage the infrastructure details that are related to concurrency. You can also use it to specify scheduling policies that meet the quality of service demands of your applications. Use these resources to help you start working with the Concurrency Runtime.  
  
 For reference documentation, see [Reference](../VS_visualcpp/Reference--Concurrency-Runtime-.md).  
  
> [!TIP]
>  The Concurrency Runtime relies heavily on C++11 features and adopts the more modern C++ style. To learn more, read  [Welcome Back to C++](../VS_visualcpp/Welcome-Back-to-C----Modern-C---.md).  
  
## Choosing Concurrency Runtime Features  
  
|||  
|-|-|  
|[Overview](../VS_visualcpp/Overview-of-the-Concurrency-Runtime.md)|Teaches why the Concurrency Runtime is important and describes its key features.|  
|[Comparing to Other Concurrency Models](../VS_visualcpp/Comparing-the-Concurrency-Runtime-to-Other-Concurrency-Models.md)|Shows how the Concurrency Runtime compares to other concurrency models, such as the Windows thread pool and OpenMP, so that you can use the concurrency model that best fits your application requirements.|  
|[Migrating from OpenMP to the Concurrency Runtime](../VS_visualcpp/Migrating-from-OpenMP-to-the-Concurrency-Runtime.md)|Compares OpenMP to the Concurrency Runtime and provides examples about how to migrate existing OpenMP code to use the Concurrency Runtime.|  
|[Parallel Patterns Library (PPL)](../VS_visualcpp/Parallel-Patterns-Library--PPL-.md)|Introduces you to the PPL, which provides parallel loops, tasks, and parallel containers.|  
|[Asynchronous Agents Library](../VS_visualcpp/Asynchronous-Agents-Library.md)|Introduces you to how to use asynchronous agents and message passing to easily incorporate dataflow and pipelining tasks in your applications.|  
|[Task Scheduler](../VS_visualcpp/Task-Scheduler--Concurrency-Runtime-.md)|Introduces you to the Task Scheduler, which enables you to fine-tune the performance of your desktop apps that uses the Concurrency Runtime.|  
  
## Task Parallelism in the PPL  
  
|||  
|-|-|  
|[Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)<br /><br /> [How to: Use parallel_invoke to Write a Parallel Sort Routine](../VS_visualcpp/How-to--Use-parallel_invoke-to-Write-a-Parallel-Sort-Routine.md)<br /><br /> [How to: Use parallel_invoke to Execute Parallel Operations](../VS_visualcpp/How-to--Use-parallel_invoke-to-Execute-Parallel-Operations.md)<br /><br /> [How to: Create a Task that Completes After a Delay](../VS_visualcpp/How-to--Create-a-Task-that-Completes-After-a-Delay.md)|Describes tasks and task groups, which can help you to write asynchronous code and decompose parallel work into smaller pieces.|  
|[Walkthrough: Implementing Futures](../VS_visualcpp/Walkthrough--Implementing-Futures.md)|Demonstrates how to combine Concurrency Runtime features to do something more.|  
|[Walkthrough: Removing Work from a User-Interface Thread](../VS_visualcpp/Walkthrough--Removing-Work-from-a-User-Interface-Thread.md)|Shows how to move the work that is performed by the UI thread in a MFC application to a worker thread.|  
|[Best Practices in the Parallel Patterns Library](../VS_visualcpp/Best-Practices-in-the-Parallel-Patterns-Library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../VS_visualcpp/General-Best-Practices-in-the-Concurrency-Runtime.md)|Provides tips and best practices for working with the PPL.|  
  
## Data Parallelism in the PPL  
  
|||  
|-|-|  
|[Parallel Algorithms](../VS_visualcpp/Parallel-Algorithms.md)<br /><br /> [How to: Write a parallel_for Loop](../VS_visualcpp/How-to--Write-a-parallel_for-Loop.md)<br /><br /> [How to: Write a parallel_for_each Loop](../VS_visualcpp/How-to--Write-a-parallel_for_each-Loop.md)<br /><br /> [How to: Perform Map and Reduce Operations in Parallel](../VS_visualcpp/How-to--Perform-Map-and-Reduce-Operations-in-Parallel.md)|Describes `parallel_for`, `parallel_for_each`, `parallel_invoke`, and other parallel algorithms. Use parallel algorithms to solve *data parallel* problems that involve collections of data.|  
|[Parallel Containers and Objects](../VS_visualcpp/Parallel-Containers-and-Objects.md)<br /><br /> [How to: Use Parallel Containers to Increase Efficiency](../VS_visualcpp/How-to--Use-Parallel-Containers-to-Increase-Efficiency.md)<br /><br /> [How to: Use combinable to Improve Performance](../VS_visualcpp/How-to--Use-combinable-to-Improve-Performance.md)<br /><br /> [How to: Use combinable to Combine Sets](../VS_visualcpp/How-to--Use-combinable-to-Combine-Sets.md)|Describes the `combinable` class, as well as `concurrent_vector`, `concurrent_queue`, `concurrent_unordered_map`, and other parallel containers. Use parallel containers and objects when you require containers that provide thread-safe access to their elements.|  
|[Best Practices in the Parallel Patterns Library](../VS_visualcpp/Best-Practices-in-the-Parallel-Patterns-Library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../VS_visualcpp/General-Best-Practices-in-the-Concurrency-Runtime.md)|Provides tips and best practices for working with the PPL.|  
  
## Canceling Tasks and Parallel Algorithms  
  
|||  
|-|-|  
|[Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)|Describes the role of cancellation in the PPL, including how to initiate and respond to cancellation requests.|  
|[How to: Use Cancellation to Break from a Parallel Loop](../VS_visualcpp/How-to--Use-Cancellation-to-Break-from-a-Parallel-Loop.md)<br /><br /> [How to: Use Exception Handling to Break from a Parallel Loop](../VS_visualcpp/How-to--Use-Exception-Handling-to-Break-from-a-Parallel-Loop.md)|Demonstrates two ways to cancel data-parallel work.|  
  
## Windows Store Apps  
  
|||  
|-|-|  
|[Creating Asynchronous Operations in C++ for Windows Store Apps](../VS_visualcpp/Creating-Asynchronous-Operations-in-C---for-Windows-Store-Apps.md)|Describes some of the key points to keep in mind when you use the Concurrency Runtime to produce asynchronous operations in a Windows 8.x Store app.|  
|[Walkthrough: Connecting Using Tasks and XML HTTP Requests](../VS_visualcpp/Walkthrough--Connecting-Using-Tasks-and-XML-HTTP-Requests.md)|Shows how to combine PPL tasks with the `IXMLHTTPRequest2` and `IXMLHTTPRequest2Callback` interfaces to send HTTP GET and POST requests to a web service in a Windows 8.x Store app.|  
|[Windows Store app samples](http://code.msdn.microsoft.com/windowsapps)|Contains downloadable code samples and demo apps for Windows 8. The C++ samples use Concurrency Runtime features such as PPL tasks to process data in the background to keep the UX responsive.|  
  
## Dataflow Programming in the Asynchronous Agents Library  
  
|||  
|-|-|  
|[Asynchronous Agents](../VS_visualcpp/Asynchronous-Agents.md)<br /><br /> [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)<br /><br /> [Message Passing Functions](../VS_visualcpp/Message-Passing-Functions.md)<br /><br /> [How to: Implement Various Producer-Consumer Patterns](../VS_visualcpp/How-to--Implement-Various-Producer-Consumer-Patterns.md)<br /><br /> [How to: Provide Work Functions to the call and transformer Classes](../VS_visualcpp/How-to--Provide-Work-Functions-to-the-call-and-transformer-Classes.md)<br /><br /> [How to: Use transformer in a Data Pipeline](../VS_visualcpp/How-to--Use-transformer-in-a-Data-Pipeline.md)<br /><br /> [How to: Select Among Completed Tasks](../VS_visualcpp/How-to--Select-Among-Completed-Tasks.md)<br /><br /> [How to: Send a Message at a Regular Interval](../VS_visualcpp/How-to--Send-a-Message-at-a-Regular-Interval.md)<br /><br /> [How to: Use a Message Block Filter](../VS_visualcpp/How-to--Use-a-Message-Block-Filter.md)|Describes asynchronous agents, message blocks, and message-passing functions, which are the building blocks for performing dataflow operations in the Concurrency Runtime.|  
|[Walkthrough: Creating an Agent-Based Application](../VS_visualcpp/Walkthrough--Creating-an-Agent-Based-Application.md)<br /><br /> [Walkthrough: Creating a Dataflow Agent](../VS_visualcpp/Walkthrough--Creating-a-Dataflow-Agent.md)|Shows how to create basic agent-based applications.|  
|[Walkthrough: Creating an Image-Processing Network](../VS_visualcpp/Walkthrough--Creating-an-Image-Processing-Network.md)|Shows how to create a network of asynchronous message blocks that perform image processing.|  
|[Walkthrough: Using join to Prevent Deadlock](../VS_visualcpp/Walkthrough--Using-join-to-Prevent-Deadlock.md)|Uses the dining philosophers problem to illustrate how to use the Concurrency Runtime to prevent deadlock in your application.|  
|[Walkthrough: Creating a Custom Message Block](../VS_visualcpp/Walkthrough--Creating-a-Custom-Message-Block.md)|Shows how to create a custom message block type that orders incoming messages by priority.|  
|[Best Practices in the Asynchronous Agents Library](../VS_visualcpp/Best-Practices-in-the-Asynchronous-Agents-Library.md)<br /><br /> [General Best Practices in the Concurrency Runtime](../VS_visualcpp/General-Best-Practices-in-the-Concurrency-Runtime.md)|Provides tips and best practices for working with agents.|  
  
## Exception Handling and Debugging  
  
|||  
|-|-|  
|[Exception Handling](../VS_visualcpp/Exception-Handling-in-the-Concurrency-Runtime.md)|Describes how to work with exceptions in the Concurrency Runtime.|  
|[Parallel Diagnostic Tools](../VS_visualcpp/Parallel-Diagnostic-Tools--Concurrency-Runtime-.md)|Teaches you how to fine-tune your applications and make the most effective use of the Concurrency Runtime.|  
  
## Tuning Performance  
  
|||  
|-|-|  
|[Parallel Diagnostic Tools](../VS_visualcpp/Parallel-Diagnostic-Tools--Concurrency-Runtime-.md)|Teaches you how to fine-tune your applications and make the most effective use of the Concurrency Runtime.|  
|[Scheduler Instances](../VS_visualcpp/Scheduler-Instances.md)<br /><br /> [How to: Manage a Scheduler Instance](../VS_visualcpp/How-to--Manage-a-Scheduler-Instance.md)<br /><br /> [Scheduler Policies](../VS_visualcpp/Scheduler-Policies.md)<br /><br /> [How to: Specify Specific Scheduler Policies](../VS_visualcpp/How-to--Specify-Specific-Scheduler-Policies.md)<br /><br /> [How to: Create Agents that Use Specific Scheduler Policies](../VS_visualcpp/How-to--Create-Agents-that-Use-Specific-Scheduler-Policies.md)|Shows how to work with manage scheduler instances and scheduler policies. For desktop apps, scheduler policies enable you to associate specific rules with specific types of workloads. For example, you can create one scheduler instance to run some tasks at an elevated thread priority and use the default scheduler to run other tasks at the normal thread priority.|  
|[Schedule Groups](../VS_visualcpp/Schedule-Groups.md)<br /><br /> [How to: Use Schedule Groups to Influence Order of Execution](../VS_visualcpp/How-to--Use-Schedule-Groups-to-Influence-Order-of-Execution.md)|Demonstrates how to use schedule groups to affinitize, or group, related tasks together. For example, you might require a high degree of locality among related tasks when those tasks benefit from executing on the same processor node.|  
|[Lightweight Tasks](../VS_visualcpp/Lightweight-Tasks.md)|Explains how lightweight tasks are useful for creating work that does not require load-balancing or cancellation, and how they are also useful for adapting existing code for use with the Concurrency Runtime.|  
|[Contexts](../VS_visualcpp/Contexts.md)<br /><br /> [How to: Use the Context Class to Implement a Cooperative Semaphore](../VS_visualcpp/How-to--Use-the-Context-Class-to-Implement-a-Cooperative-Semaphore.md)<br /><br /> [How to: Use Oversubscription to Offset Latency](../VS_visualcpp/How-to--Use-Oversubscription-to-Offset-Latency.md)|Describes how to control the behavior of the threads that are managed by the Concurrency Runtime.|  
|[Memory Management Functions](../VS_visualcpp/Memory-Management-Functions.md)<br /><br /> [How to: Use Alloc and Free to Improve Memory Performance](../VS_visualcpp/How-to--Use-Alloc-and-Free-to-Improve-Memory-Performance.md)|Describes the memory management functions that the Concurrency Runtime provides to help you allocate and free memory in a concurrent manner.|  
  
## Additional Resources  
  
|||  
|-|-|  
|[Async programming patterns and tips in Hilo (Windows Store apps using C++ and XAML)](http://msdn.microsoft.com/library/windows/apps/jj160321.aspx)|Learn how we used the Concurrency Runtime to implement asynchronous operations in Hilo, a Windows 8.x Store app using C++ and XAML.|  
|[Code samples for the Concurrency Runtime and Parallel Pattern Library in Visual Studio 2010](http://go.microsoft.com/fwlink/?LinkID=183875)|Provides sample applications and utilities that demonstrate the Concurrency Runtime.|  
|[Parallel Programming in Native Code blog](http://go.microsoft.com/fwlink/?LinkID=183873)|Provides additional in-depth blog articles about parallel programming in the Concurrency Runtime.|  
|[Parallel Computing in C++ and Native Code forum](http://go.microsoft.com/fwlink/?LinkID=183874)|Enables you to participate in community discussions about the Concurrency Runtime.|  
|[Parallel Programming](../Topic/Parallel%20Programming%20in%20the%20.NET%20Framework.md)|Teaches you about the parallel programming model that is available in the .NET Framework.|  
  
## See Also  
 [Reference](../VS_visualcpp/Reference--Concurrency-Runtime-.md)