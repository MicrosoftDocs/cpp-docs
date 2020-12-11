---
description: "Learn more about: Overview of the Concurrency Runtime"
title: "Overview of the Concurrency Runtime"
ms.date: "11/19/2018"
helpviewer_keywords: ["Concurrency Runtime, requirements", "Concurrency Runtime, architecture", "Concurrency Runtime, overview", "Concurrency Runtime, lambda expressions"]
ms.assetid: 56237d96-10b0-494a-9cb4-f5c5090436c5
---
# Overview of the Concurrency Runtime

This document provides an overview of the Concurrency Runtime. It describes the benefits of the Concurrency Runtime, when to use it, and how its components interact with each other and with the operating system and applications.

## <a name="top"></a> Sections

This document contains the following sections:

- [Concurrency Runtime implementation history](#dlls)

- [Why a Runtime for Concurrency is Important](#runtime)

- [Architecture](#architecture)

- [C++ Lambda Expressions](#lambda)

- [Requirements](#requirements)

## <a name="dlls"></a> Concurrency Runtime implementation history

In Visual Studio 2010 through 2013, the Concurrency Runtime was incorporated within msvcr100.dll through msvcr120.dll.  When the UCRT refactoring occurred in Visual Studio 2015, that DLL was refactored into three parts:

- ucrtbase.dll – C API, shipped in Windows 10 and serviced downlevel via Windows Update-

- vcruntime140.dll – Compiler support functions and EH runtime, shipped via Visual Studio

- concrt140.dll – Concurrency Runtime, shipped via Visual Studio. Required for parallel containers and algorithms such as `concurrency::parallel_for`. Also, the STL requires this DLL on Windows XP to power synchronization primitives, because Windows XP does not have condition variables.

In Visual Studio 2015 and later, the Concurrency Runtime Task Scheduler is no longer the scheduler for the task class and related types in ppltasks.h. Those types now use the Windows ThreadPool for better performance and interoperability with Windows synchronization primitives.

## <a name="runtime"></a> Why a Runtime for Concurrency is Important

A runtime for concurrency provides uniformity and predictability to applications and application components that run simultaneously. Two examples of the benefits of the Concurrency Runtime are *cooperative task scheduling* and *cooperative blocking*.

The Concurrency Runtime uses a cooperative task scheduler that implements a work-stealing algorithm to efficiently distribute work among computing resources. For example, consider an application that has two threads that are both managed by the same runtime. If one thread finishes its scheduled task, it can offload work from the other thread. This mechanism balances the overall workload of the application.

The Concurrency Runtime also provides synchronization primitives that use cooperative blocking to synchronize access to resources. For example, consider a task that must have exclusive access to a shared resource. By blocking cooperatively, the runtime can use the remaining quantum to perform another task as the first task waits for the resource. This mechanism promotes maximum usage of computing resources.

[[Top](#top)]

## <a name="architecture"></a> Architecture

The Concurrency Runtime is divided into four components: the Parallel Patterns Library (PPL), the Asynchronous Agents Library, the Task Scheduler, and the Resource Manager. These components reside between the operating system and applications. The following illustration shows how the Concurrency Runtime components interact among the operating system and applications:

**Concurrency Runtime Architecture**

![The Concurrency Runtime Architecture](../../parallel/concrt/media/concurrencyrun.png "The Concurrency Runtime Architecture")

> [!IMPORTANT]
> The Task Scheduler and Resource Manager components are not available from a Universal Windows Platform (UWP) app or when you use the task class or other types in ppltasks.h.

The Concurrency Runtime is highly *composable*, that is, you can combine existing functionality to do more. The Concurrency Runtime composes many features, such as parallel algorithms, from lower-level components.

The Concurrency Runtime also provides synchronization primitives that use cooperative blocking to synchronize access to resources. For more information about these synchronization primitives, see [Synchronization Data Structures](../../parallel/concrt/synchronization-data-structures.md).

The following sections provide a brief overview of what each component provides and when to use it.

### Parallel Patterns Library

The Parallel Patterns Library (PPL) provides general-purpose containers and algorithms for performing fine-grained parallelism. The PPL enables *imperative data parallelism* by providing parallel algorithms that distribute computations on collections or on sets of data across computing resources. It also enables *task parallelism* by providing task objects that distribute multiple independent operations across computing resources.

Use the Parallel Patterns Library when you have a local computation that can benefit from parallel execution. For example, you can use the [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm to transform an existing **`for`** loop to act in parallel.

For more information about the Parallel Patterns Library, see [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md).

### Asynchronous Agents Library

The Asynchronous Agents Library (or just *Agents Library*) provides both an actor-based programming model and message passing interfaces for coarse-grained dataflow and pipelining tasks. Asynchronous agents enable you to make productive use of latency by performing work as other components wait for data.

Use the Agents Library when you have multiple entities that communicate with each other asynchronously. For example, you can create an agent that reads data from a file or network connection and then uses the message passing interfaces to send that data to another agent.

For more information about the Agents Library, see [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md).

### Task Scheduler

The Task Scheduler schedules and coordinates tasks at run time. The Task Scheduler is cooperative and uses a work-stealing algorithm to achieve maximum usage of processing resources.

The Concurrency Runtime provides a default scheduler so that you do not have to manage infrastructure details. However, to meet the quality needs of your application, you can also provide your own scheduling policy or associate specific schedulers with specific tasks.

For more information about the Task Scheduler, see [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

### Resource Manager

The role of the Resource Manager is to manage computing resources, such as processors and memory. The Resource Manager responds to workloads as they change at run time by assigning resources to where they can be most effective.

The Resource Manager serves as an abstraction over computing resources and primarily interacts with the Task Scheduler. Although you can use the Resource Manager to fine-tune the performance of your libraries and applications, you typically use the functionality that is provided by the Parallel Patterns Library, the Agents Library, and the Task Scheduler. These libraries use the Resource Manager to dynamically rebalance resources as workloads change.

[[Top](#top)]

## <a name="lambda"></a> C++ Lambda Expressions

Many of the types and algorithms that are defined by the Concurrency Runtime are implemented as C++ templates. Some of these types and algorithms take as a parameter a routine that performs work. This parameter can be a lambda function, a function object, or a function pointer. These entities are also referred to as *work functions* or *work routines*.

Lambda expressions are an important new Visual C++ language feature because they provide a succinct way to define work functions for parallel processing. Function objects and function pointers enable you to use the Concurrency Runtime with your existing code. However, we recommend that you use lambda expressions when you write new code because of the safety and productivity benefits that they provide.

The following example compares the syntax of lambda functions, function objects, and function pointers in multiple calls to the [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algorithm. Each call to `parallel_for_each` uses a different technique to compute the square of each element in a [std::array](../../standard-library/array-class-stl.md) object.

[!code-cpp[concrt-comparing-work-functions#1](../../parallel/concrt/codesnippet/cpp/overview-of-the-concurrency-runtime_1.cpp)]

**Output**

```Output
1
256
6561
65536
390625
```

For more information about lambda functions in C++, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).

[[Top](#top)]

## <a name="requirements"></a> Requirements

The following table shows the header files that are associated with each component of the Concurrency Runtime:

|Component|Header Files|
|---------------|------------------|
|Parallel Patterns Library (PPL)|ppl.h<br /><br /> concurrent_queue.h<br /><br /> concurrent_vector.h|
|Asynchronous Agents Library|agents.h|
|Task Scheduler|concrt.h|
|Resource Manager|concrtrm.h|

The Concurrency Runtime is declared in the [Concurrency](../../parallel/concrt/reference/concurrency-namespace.md) namespace. (You can also use [concurrency](../../parallel/concrt/reference/concurrency-namespace.md), which is an alias for this namespace.) The `concurrency::details` namespace supports the Concurrency Runtime framework, and is not intended to be used directly from your code.

The Concurrency Runtime is provided as part of the C Runtime Library (CRT). For more information about how to build an application that uses the CRT, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).

[[Top](#top)]
