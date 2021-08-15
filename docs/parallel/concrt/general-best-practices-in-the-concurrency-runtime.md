---
description: "Learn more about: General Best Practices in the Concurrency Runtime"
title: "General Best Practices in the Concurrency Runtime"
ms.date: "11/04/2016"
helpviewer_keywords: ["Concurrency Runtime, general best practices"]
ms.assetid: ce5c784c-051e-44a6-be84-8b3e1139c18b
---
# General Best Practices in the Concurrency Runtime

This document describes best practices that apply to multiple areas of the Concurrency Runtime.

## <a name="top"></a> Sections

This document contains the following sections:

- [Use Cooperative Synchronization Constructs When Possible](#synchronization)

- [Avoid Lengthy Tasks That Do Not Yield](#yield)

- [Use Oversubscription to Offset Operations That Block or Have High Latency](#oversubscription)

- [Use Concurrent Memory Management Functions When Possible](#memory)

- [Use RAII to Manage the Lifetime of Concurrency Objects](#raii)

- [Do Not Create Concurrency Objects at Global Scope](#global-scope)

- [Do Not Use Concurrency Objects in Shared Data Segments](#shared-data)

## <a name="synchronization"></a> Use Cooperative Synchronization Constructs When Possible

The Concurrency Runtime provides many concurrency-safe constructs that do not require an external synchronization object. For example, the [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) class provides concurrency-safe append and element access operations. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order. However, for cases where you require exclusive access to a resource, the runtime provides the [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md), [concurrency::reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md), and [concurrency::event](../../parallel/concrt/reference/event-class.md) classes. These types behave cooperatively; therefore, the task scheduler can reallocate processing resources to another context as the first task waits for data. When possible, use these synchronization types instead of other synchronization mechanisms, such as those provided by the Windows API, which do not behave cooperatively. For more information about these synchronization types and a code example, see [Synchronization Data Structures](../../parallel/concrt/synchronization-data-structures.md) and [Comparing Synchronization Data Structures to the Windows API](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).

[[Top](#top)]

## <a name="yield"></a> Avoid Lengthy Tasks That Do Not Yield

Because the task scheduler behaves cooperatively, it does not provide fairness among tasks. Therefore, a task can prevent other tasks from starting. Although this is acceptable in some cases, in other cases this can cause deadlock or starvation.

The following example performs more tasks than the number of allocated processing resources. The first task does not yield to the task scheduler and therefore the second task does not start until the first task finishes.

[!code-cpp[concrt-cooperative-tasks#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_1.cpp)]

This example produces the following output:

1: 250000000 1: 500000000 1: 750000000 1: 1000000000 2: 250000000 2: 500000000 2: 750000000 2: 1000000000

There are several ways to enable cooperation between the two tasks. One way is to occasionally yield to the task scheduler in a long-running task. The following example modifies the `task` function to call the [concurrency::Context::Yield](reference/context-class.md#yield) method to yield execution to the task scheduler so that another task can run.

[!code-cpp[concrt-cooperative-tasks#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_2.cpp)]

This example produces the following output:

```Output
1: 250000000
2: 250000000
1: 500000000
2: 500000000
1: 750000000
2: 750000000
1: 1000000000
2: 1000000000
```

The `Context::Yield` method yields only another active thread on the scheduler to which the current thread belongs, a lightweight task, or another operating system thread. This method does not yield to work that is scheduled to run in a [concurrency::task_group](reference/task-group-class.md) or [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) object but has not yet started.

There are other ways to enable cooperation among long-running tasks. You can break a large task into smaller subtasks. You can also enable oversubscription during a lengthy task. Oversubscription lets you create more threads than the available number of hardware threads. Oversubscription is especially useful when a lengthy task contains a high amount of latency, for example, reading data from disk or from a network connection. For more information about lightweight tasks and oversubscription, see [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[[Top](#top)]

## <a name="oversubscription"></a> Use Oversubscription to Offset Operations That Block or Have High Latency

The Concurrency Runtime provides synchronization primitives, such as [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md), that enable tasks to cooperatively block and yield to each other. When one task cooperatively blocks or yields, the task scheduler can reallocate processing resources to another context as the first task waits for data.

There are cases in which you cannot use the cooperative blocking mechanism that is provided by the Concurrency Runtime. For example, an external library that you use might use a different synchronization mechanism. Another example is when you perform an operation that could have a high amount of latency, for example, when you use the Windows API `ReadFile` function to read data from a network connection. In these cases, oversubscription can enable other tasks to run when another task is idle. Oversubscription lets you create more threads than the available number of hardware threads.

Consider the following function, `download`, which downloads the file at the given URL. This example uses the [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) method to temporarily increase the number of active threads.

[!code-cpp[concrt-download-oversubscription#4](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_3.cpp)]

Because the `GetHttpFile` function performs a potentially latent operation, oversubscription can enable other tasks to run as the current task waits for data. For the complete version of this example, see [How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

[[Top](#top)]

## <a name="memory"></a> Use Concurrent Memory Management Functions When Possible

Use the memory management functions, [concurrency::Alloc](reference/concurrency-namespace-functions.md#alloc) and [concurrency::Free](reference/concurrency-namespace-functions.md#free), when you have fine-grained tasks that frequently allocate small objects that have a relatively short lifetime. The Concurrency Runtime holds a separate memory cache for each running thread. The `Alloc` and `Free` functions allocate and free memory from these caches without the use of locks or memory barriers.

For more information about these memory management functions, see [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md). For an example that uses these functions, see [How to: Use Alloc and Free to Improve Memory Performance](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).

[[Top](#top)]

## <a name="raii"></a> Use RAII to Manage the Lifetime of Concurrency Objects

The Concurrency Runtime uses exception handling to implement features such as cancellation. Therefore, write exception-safe code when you call into the runtime or call another library that calls into the runtime.

The *Resource Acquisition Is Initialization* (RAII) pattern is one way to safely manage the lifetime of a concurrency object under a given scope. Under the RAII pattern, a data structure is allocated on the stack. That data structure initializes or acquires a resource when it is created and destroys or releases that resource when the data structure is destroyed. The RAII pattern guarantees that the destructor is called before the enclosing scope exits. This pattern is useful when a function contains multiple **`return`** statements. This pattern also helps you write exception-safe code. When a **`throw`** statement causes the stack to unwind, the destructor for the RAII object is called; therefore, the resource is always correctly deleted or released.

The runtime defines several classes that use the RAII pattern, for example, [concurrency::critical_section::scoped_lock](../../parallel/concrt/reference/critical-section-class.md#critical_section__scoped_lock_class) and [concurrency::reader_writer_lock::scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class). These helper classes are known as *scoped locks*. These classes provide several benefits when you work with [concurrency::critical_section](../../parallel/concrt/reference/critical-section-class.md) or [concurrency::reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) objects. The constructor of these classes acquires access to the provided `critical_section` or `reader_writer_lock` object; the destructor releases access to that object. Because a scoped lock releases access to its mutual exclusion object automatically when it is destroyed, you do not manually unlock the underlying object.

Consider the following class, `account`, which is defined by an external library and therefore cannot be modified.

[!code-cpp[concrt-account-transactions#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_4.h)]

The following example performs multiple transactions on an `account` object in parallel. The example uses a `critical_section` object to synchronize access to the `account` object because the `account` class is not concurrency-safe. Each parallel operation uses a `critical_section::scoped_lock` object to guarantee that the `critical_section` object is unlocked when the operation either succeeds or fails. When the account balance is negative, the `withdraw` operation fails by throwing an exception.

[!code-cpp[concrt-account-transactions#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_5.cpp)]

This example produces the following sample output:

```Output
Balance before deposit: 1924
Balance after deposit: 2924
Balance before withdrawal: 2924
Balance after withdrawal: -76
Balance before withdrawal: -76
Error details:
    negative balance: -76
```

For additional examples that use the RAII pattern to manage the lifetime of concurrency objects, see [Walkthrough: Removing Work from a User-Interface Thread](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md), [How to: Use the Context Class to Implement a Cooperative Semaphore](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md), and [How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

[[Top](#top)]

## <a name="global-scope"></a> Do Not Create Concurrency Objects at Global Scope

When you create a concurrency object at global scope you can cause issues such as deadlock or memory access violations to occur in your application.

For example, when you create a Concurrency Runtime object, the runtime creates a default scheduler for you if one was not yet created. A runtime object that is created during global object construction will accordingly cause the runtime to create this default scheduler. However, this process takes an internal lock, which can interfere with the initialization of other objects that support the Concurrency Runtime infrastructure. This internal lock might be required by another infrastructure object that has not yet been initialized, and can thus cause deadlock to occur in your application.

The following example demonstrates the creation of a global [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) object. This pattern applies not only to the `Scheduler` class but all other types that are provided by the Concurrency Runtime. We recommend that you do not follow this pattern because it can cause unexpected behavior in your application.

[!code-cpp[concrt-global-scheduler#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_6.cpp)]

For examples of the correct way to create `Scheduler` objects, see [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[[Top](#top)]

## <a name="shared-data"></a> Do Not Use Concurrency Objects in Shared Data Segments

The Concurrency Runtime does not support the use of concurrency objects in a shared data section, for example, a data section that is created by the [data_seg](../../preprocessor/data-seg.md)`#pragma` directive. A concurrency object that is shared across process boundaries could put the runtime in an inconsistent or invalid state.

[[Top](#top)]

## See also

[Concurrency Runtime Best Practices](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Synchronization Data Structures](../../parallel/concrt/synchronization-data-structures.md)<br/>
[Comparing Synchronization Data Structures to the Windows API](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)<br/>
[How to: Use Alloc and Free to Improve Memory Performance](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)<br/>
[How to: Use Oversubscription to Offset Latency](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)<br/>
[How to: Use the Context Class to Implement a Cooperative Semaphore](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br/>
[Walkthrough: Removing Work from a User-Interface Thread](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)<br/>
[Best Practices in the Parallel Patterns Library](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br/>
[Best Practices in the Asynchronous Agents Library](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)
