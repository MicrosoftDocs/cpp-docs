---
description: "Learn more about: Comparing the Concurrency Runtime to Other Concurrency Models"
title: "Comparing the Concurrency Runtime to Other Concurrency Models"
ms.date: "11/04/2016"
helpviewer_keywords: ["Concurrency Runtime, compared to other models"]
ms.assetid: d8b9a1f4-f15f-43c3-a5b4-c0991edf9c86
---
# Comparing the Concurrency Runtime to Other Concurrency Models

This document describes the differences between the features and programming models of the Concurrency Runtime and other technologies. By understanding how the benefits of the Concurrency Runtime compare to the benefits of other programming models, you can select the technology that best satisfies the requirements of your applications.

If you are currently using another programming model, such as the Windows thread pool or OpenMP, there are situations where it can be appropriate to migrate to the Concurrency Runtime. For example, the topic [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md) describes when it can be appropriate to migrate from OpenMP to the Concurrency Runtime. However, if you are satisfied with application performance and current debugging support, migration is not required.

You can use the features and productivity benefits of the Concurrency Runtime to complement your existing application that uses another concurrency model. The Concurrency Runtime cannot guarantee load balancing when multiple task schedulers compete for the same computing resources. However, when workloads do not overlap, this effect is minimal.

## <a name="top"></a> Sections

- [Comparing Preemptive Scheduling to Cooperative Scheduling](#models)

- [Comparing the Concurrency Runtime to the Windows API](#winapi)

- [Comparing the Concurrency Runtime to OpenMP](#openmp)

## <a name="models"></a> Comparing Preemptive Scheduling to Cooperative Scheduling

The preemptive model and cooperative scheduling models are two common ways to enable multiple tasks to share computing resources, for example, processors or hardware threads.

### Preemptive and Cooperative Scheduling

*Preemptive scheduling* is a round-robin, priority-based mechanism that gives every task exclusive access to a computing resource for a given time period, and then switches to another task. Preemptive scheduling is common in multitasking operating systems such as Windows. *Cooperative scheduling* is a mechanism that gives every task exclusive access to a computing resource until the task finishes or until the task yields its access to the resource. The Concurrency Runtime uses cooperative scheduling together with the preemptive scheduler of the operating system to achieve maximum usage of processing resources.

### Differences Between Preemptive and Cooperative Schedulers

Preemptive schedulers seek to give multiple threads equal access to computing resources to ensure that every thread makes progress. On computers that have many computing resources, ensuring fair access becomes less problematic; however, ensuring efficient utilization of the resources becomes more problematic.

A preemptive kernel-mode scheduler requires the application code to rely on the operating system to make scheduling decisions. Conversely, a user-mode cooperative scheduler enables application code to make its own scheduling decisions. Because cooperative scheduling enables many scheduling decisions to be made by the application, it reduces much of the overhead that is associated with kernel-mode synchronization. A cooperative scheduler typically defers scheduling decisions to the operating system kernel when it has no other work to schedule. A cooperative scheduler also defers to the operating system scheduler when there is a blocking operation that is communicated to the kernel, but that operation is not communicated to the user-mode scheduler.

### Cooperative Scheduling and Efficiency

To a preemptive scheduler, all work that has the same priority level is equal. A preemptive scheduler typically schedules threads in the order in which they are created. Furthermore, a preemptive scheduler gives every thread a time slice in a round-robin manner, based on thread priority. Although this mechanism provides fairness (every thread makes forward progress), it comes at some cost of efficiency. For example, many computation-intensive algorithms do not require fairness. Instead, it is important that related tasks finish in the least overall time. Cooperative scheduling enables an application to more efficiently schedule work. For example, consider an application that has many threads. Scheduling threads that do not share resources to run concurrently can reduce synchronization overhead and thereby increase efficiency. Another efficient way to schedule tasks is to run pipelines of tasks (where each task acts on the output of the previous one) on the same processor so that the input of each pipeline stage is already loaded into the memory cache.

### Using Preemptive and Cooperative Scheduling Together

Cooperative scheduling does not solve all scheduling problems. For example, tasks that do not fairly yield to other tasks can consume all available computing resources and prevent other tasks from making progress. The Concurrency Runtime uses the efficiency benefits of cooperative scheduling to complement the fairness guarantees of preemptive scheduling. By default, the Concurrency Runtime provides a cooperative scheduler that uses a work-stealing algorithm to efficiently distribute work among computing resources. However, the Concurrency Runtime scheduler also relies on the preemptive scheduler of the operating system to fairly distribute resources among applications. You can also create custom schedulers and scheduler policies in your applications to produce fine-grained control over thread execution.

[[Top](#top)]

## <a name="winapi"></a> Comparing the Concurrency Runtime to the Windows API

The Microsoft Windows application programming interface, which is typically referred to as the Windows API (and formerly known as Win32), provides a programming model that enables concurrency in your applications. The Concurrency Runtime builds on the Windows API to provide additional programming models that are not available from the underlying operating system.

The Concurrency Runtime builds on the Windows API thread model to perform parallel work. It also uses the Windows API memory management and thread-local storage mechanisms. On Windows 7 and Windows Server 2008 R2, it uses Windows API support for user-schedulable threads and computers that have more than 64 hardware threads. The Concurrency Runtime extends the Windows API model by providing a cooperative task scheduler and a work-stealing algorithm to maximize the use of computing resources, and by enabling multiple simultaneous scheduler instances.

### Programming Languages

The Windows API uses the C programming language to expose the programming model. The Concurrency Runtime provides a C++ programming interface that takes advantage of the newest features in the C++ language. For example, lambda functions provide a succinct, type-safe mechanism for defining parallel work functions. For more information about the newest C++ features that the Concurrency Runtime uses, see [Overview](../../parallel/concrt/asynchronous-message-blocks.md).

### Threads and Thread Pools

The central concurrency mechanism in the Windows API is the thread. You typically use the [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function to create threads. Although threads are relatively easy to create and use, the operating system allocates a significant amount of time and other resources to manage them. Additionally, although each thread is guaranteed to receive the same execution time as any other thread at the same priority level, the associated overhead requires that you create sufficiently large tasks. For smaller or more fine-grained tasks, the overhead that is associated with concurrency can outweigh the benefit of running the tasks in parallel.

Thread pools are one way to reduce the cost of thread management. Custom thread pools and the thread pool implementation that is provided by the Windows API both enable small work items to efficiently run in parallel. The Windows thread pool maintains work items in a first-in, first-out (FIFO) queue. Each work item is started in the order in which it was added to the pool.

The Concurrency Runtime implements a work-stealing algorithm to extend the FIFO scheduling mechanism. The algorithm moves tasks that have not yet started to threads that run out of work items. Although the work-stealing algorithm can balance workloads, it can also cause work items to be reordered. This reordering process can cause a work item to start in a different order than it was submitted. This is useful with recursive algorithms, where there is a better chance that data is shared among newer tasks than among older ones. Getting the new items to run first means fewer cache misses and possibly fewer page faults.

From the perspective of the operating system, work stealing is unfair. However, when an application implements an algorithm or task to run in parallel, fairness among the sub-tasks does not always matter. What does matter is how quickly the overall task finishes. For other algorithms, FIFO is the appropriate scheduling strategy.

### Behavior on Various Operating Systems

On Windows XP and Windows Vista, applications that use the Concurrency Runtime behave similarly, except that heap performance is improved on Windows Vista.

In Windows 7 and Windows Server 2008 R2, the operating system further supports concurrency and scalability. For example, these operating systems support computers that have more than 64 hardware threads. An existing application that uses the Windows API must be modified to take advantage of these new features. However, an application that uses the Concurrency Runtime automatically uses these features and does not require modifications.

[base.user-mode_scheduling](/windows/win32/procthread/user-mode-scheduling)

[[Top](#top)]

## <a name="openmp"></a> Comparing the Concurrency Runtime to OpenMP

The Concurrency Runtime enables a variety of programming models. These models may overlap or complement the models of other libraries. This section compares the Concurrency Runtime to [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp).

The OpenMP programming model is defined by an open standard and has well-defined bindings to the Fortran and C/C++ programming languages. OpenMP versions 2.0 and 2.5 are well-suited for parallel algorithms that are iterative; that is, they perform parallel iteration over an array of data. OpenMP is most efficient when the degree of parallelism is pre-determined and matches the available resources on the system. The OpenMP model is an especially good match for high-performance computing, where very large computational problems are distributed across the processing resources of a single computer. In this scenario, the hardware environment is known and the developer can reasonably expect to have exclusive access to computing resources when the algorithm is executed.

However, other, less constrained computing environments may not be a good match for OpenMP. For example, recursive problems (such as the quicksort algorithm or searching a tree of data) are more difficult to implement by using OpenMP. The Concurrency Runtime complements the capabilities of OpenMP by providing the [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL) and the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md). Unlike OpenMP, the Concurrency Runtime provides a dynamic scheduler that adapts to available resources and adjusts the degree of parallelism as workloads change.

Many of the features in the Concurrency Runtime can be extended. You can also combine existing features to compose new ones. Because OpenMP relies on compiler directives, it cannot be extended easily.

For more information about how the Concurrency Runtime compares to OpenMP and how to migrate existing OpenMP code to use the Concurrency Runtime, see [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md).

[[Top](#top)]

## See also

[Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)<br/>
[Overview](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)
