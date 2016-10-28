---
title: "Walkthrough: Using the Concurrency Runtime in a COM-Enabled Application"
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
  - "Concurrency Runtime, use with COM"
  - "COM, use with the Concurrency Runtime"
ms.assetid: a7c798b8-0fc8-4bee-972f-22ef158f7f48
caps.latest.revision: 11
ms.author: "mithom"
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
# Walkthrough: Using the Concurrency Runtime in a COM-Enabled Application
This document demonstrates how to use the Concurrency Runtime in an application that uses the Component Object Model (COM).  
  
## Prerequisites  
 Read the following documents before you start this walkthrough:  
  
-   [Task Parallelism](../parallel/task-parallelism--concurrency-runtime-.md)  
  
-   [Parallel Algorithms](../parallel/parallel-algorithms.md)  
  
-   [Asynchronous Agents](../parallel/asynchronous-agents.md)  
  
-   [Exception Handling](../parallel/exception-handling-in-the-concurrency-runtime.md)  
  
 For more information about COM, see [Component Object Model (COM)](http://msdn.microsoft.com/library/windows/desktop/ms680573).  
  
## Managing the Lifetime of the COM Library  
 Although the use of COM with the Concurrency Runtime follows the same principles as any other concurrency mechanism, the following guidelines can help you use these libraries together effectively.  
  
-   A thread must call [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) before it uses the COM library.  
  
-   A thread can call `CoInitializeEx` multiple times as long as it provides the same arguments to every call.  
  
-   For each call to `CoInitializeEx`, a thread must also call [CoUninitialize](http://msdn.microsoft.com/library/windows/desktop/ms688715). In other words, calls to `CoInitializeEx` and `CoUninitialize` must be balanced.  
  
-   To switch from one thread apartment to another, a thread must completely free the COM library before it calls `CoInitializeEx` with the new threading specification.  
  
 Other COM principles apply when you use COM with the Concurrency Runtime. For example, an application that creates an object in a single-threaded apartment (STA) and marshals that object to another apartment must also provide a message loop to process incoming messages. Also remember that marshaling objects between apartments can decrease performance.  
  
### Using COM with the Parallel Patterns Library  
 When you use COM with a component in the Parallel Patterns Library (PPL), for example, a task group or parallel algorithm, call `CoInitializeEx` before you use the COM library during each task or iteration, and call `CoUninitialize` before each task or iteration finishes. The following example shows how to manage the lifetime of the COM library with a [concurrency::structured_task_group](../parallel/structured_task_group-class.md) object.  
  
 [!code[concrt-parallel-scripts#1](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_1.cpp)]  
  
 You must make sure that the COM library is correctly freed when a task or parallel algorithm is canceled or when the task body throws an exception. To guarantee that the task calls `CoUninitialize` before it exits, use a `try-finally` block or the *Resource Acquisition Is Initialization* (RAII) pattern. The following example uses a `try-finally` block to free the COM library when the task completes or is canceled, or when an exception is thrown.  
  
 [!code[concrt-parallel-scripts#2](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_2.cpp)]  
  
 The following example uses the RAII pattern to define the `CCoInitializer` class, which manages the lifetime of the COM library in a given scope.  
  
 [!code[concrt-parallel-scripts#3](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_3.cpp)]  
  
 You can use the `CCoInitializer` class to automatically free the COM library when the task exits, as follows.  
  
 [!code[concrt-parallel-scripts#4](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_4.cpp)]  
  
 For more information about cancellation in the Concurrency Runtime, see [Cancellation](../parallel/cancellation-in-the-ppl.md).  
  
### Using COM with Asynchronous Agents  
 When you use COM with asynchronous agents, call `CoInitializeEx` before you use the COM library in the [concurrency::agent::run](../Topic/agent::run%20Method.md) method for your agent. Then call `CoUninitialize` before the `run` method returns. Do not use COM management routines in the constructor or destructor of your agent, and do not override the [concurrency::agent::start](../Topic/agent::start%20Method.md) or [concurrency::agent::done](../Topic/agent::done%20Method.md) methods because these methods are called from a different thread than the `run` method.  
  
 The following example shows a basic agent class, named `CCoAgent`, which manages the COM library in the `run` method.  
  
 [!code[concrt-parallel-scripts#5](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_5.cpp)]  
  
 A complete example is provided later in this walkthrough.  
  
### Using COM with Lightweight Tasks  
 The document [Task Scheduler](../parallel/task-scheduler--concurrency-runtime-.md) describes the role of lightweight tasks in the Concurrency Runtime. You can use COM with a lightweight task just as you would with any thread routine that you pass to the `CreateThread` function in the Windows API. This is shown in the following example.  
  
 [!code[concrt-parallel-scripts#6](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_6.cpp)]  
  
## An Example of a COM-Enabled Application  
 This section shows a complete COM-enabled application that uses the `IScriptControl` interface to execute a script that computes the n<sup>th</sup> Fibonacci number. This example first calls the script from the main thread, and then uses the PPL and agents to call the script concurrently.  
  
 Consider the following helper function, `RunScriptProcedure`, which calls a procedure in an `IScriptControl` object.  
  
 [!code[concrt-parallel-scripts#7](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_7.cpp)]  
  
 The `wmain` function creates an `IScriptControl` object, adds script code to it that computes the n<sup>th</sup> Fibonacci number, and then calls the `RunScriptProcedure` function to run that script.  
  
 [!code[concrt-parallel-scripts#8](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_8.cpp)]  
  
### Calling the Script from the PPL  
 The following function, `ParallelFibonacci`, uses the [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm to call the script in parallel. This function uses the `CCoInitializer` class to manage the lifetime of the COM library during every iteration of the task.  
  
 [!code[concrt-parallel-scripts#9](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_9.cpp)]  
  
 To use the `ParallelFibonacci` function with the example, add the following code before the `wmain` function returns.  
  
 [!code[concrt-parallel-scripts#10](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_10.cpp)]  
  
### Calling the Script from an Agent  
 The following example shows the `FibonacciScriptAgent` class, which calls a script procedure to compute the n<sup>th</sup> Fibonacci number. The `FibonacciScriptAgent` class uses message passing to receive, from the main program, input values to the script function. The `run` method manages the lifetime of the COM library throughout the task.  
  
 [!code[concrt-parallel-scripts#11](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_11.cpp)]  
  
 The following function, `AgentFibonacci`, creates several `FibonacciScriptAgent` objects and uses message passing to send several input values to those objects.  
  
 [!code[concrt-parallel-scripts#12](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_12.cpp)]  
  
 To use the `AgentFibonacci` function with the example, add the following code before the `wmain` function returns.  
  
 [!code[concrt-parallel-scripts#13](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_13.cpp)]  
  
### The Complete Example  
 The following code shows the complete example, which uses parallel algorithms and asynchronous agents to call a script procedure that computes Fibonacci numbers.  
  
 [!code[concrt-parallel-scripts#14](../parallel/codesnippet/CPP/walkthrough--using-the-concurrency-runtime-in-a-com-enabled-application_14.cpp)]  
  
 The example produces the following sample output.  
  
 **Main Thread:**  
**fib(15) = 610**  
**Parallel Fibonacci:**  
**fib(15) = 610**  
**fib(10) = 55**  
**fib(16) = 987**  
**fib(18) = 2584**  
**fib(11) = 89**  
**fib(17) = 1597**  
**fib(19) = 4181**  
**fib(12) = 144**  
**fib(13) = 233**  
**fib(14) = 377**  
**Agent Fibonacci:**  
**fib(30) = 832040**  
**fib(22) = 17711**  
**fib(10) = 55**  
**fib(12) = 144**   
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `parallel-scripts.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc parallel-scripts.cpp /link ole32.lib**  
  
## See Also  
 [Concurrency Runtime Walkthroughs](../parallel/concurrency-runtime-walkthroughs.md)   
 [Task Parallelism](../parallel/task-parallelism--concurrency-runtime-.md)   
 [Parallel Algorithms](../parallel/parallel-algorithms.md)   
 [Asynchronous Agents](../parallel/asynchronous-agents.md)   
 [Exception Handling](../parallel/exception-handling-in-the-concurrency-runtime.md)   
 [Cancellation](../parallel/cancellation-in-the-ppl.md)   
 [Task Scheduler](../parallel/task-scheduler--concurrency-runtime-.md)