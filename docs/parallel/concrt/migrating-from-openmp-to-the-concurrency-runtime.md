---
description: "Learn more about: Migrating from OpenMP to the Concurrency Runtime"
title: "Migrating from OpenMP to the Concurrency Runtime"
ms.date: "11/04/2016"
helpviewer_keywords: ["Concurrency Runtime, migrating from OpenMP", "OpenMP, migrating to the Concurrency Runtime"]
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
---
# Migrating from OpenMP to the Concurrency Runtime

The Concurrency Runtime enables a variety of programming models. These models may overlap or complement the models of other libraries. The documents in this section compare [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp) to the Concurrency Runtime and provide examples about how to migrate existing OpenMP code to use the Concurrency Runtime.

The OpenMP programming model is defined by an open standard and has well-defined bindings to the Fortran and C/C++ programming languages. OpenMP versions 2.0 and 2.5, which are supported by the Microsoft C++ compiler, are well-suited for parallel algorithms that are iterative; that is, they perform parallel iteration over an array of data. OpenMP 3.0 supports non-iterative tasks in addition to iterative tasks.

OpenMP is most efficient when the degree of parallelism is pre-determined and matches the available resources on the system. The OpenMP model is an especially good match for high-performance computing, where very large computational problems are distributed across the processing resources of one computer. In this scenario, the hardware environment is generally fixed and the developer can reasonably expect to have exclusive access to all computing resources when the algorithm is executed.

However, less constrained computing environments may not be a good match for OpenMP. For example, recursive problems (such as the quicksort algorithm or searching a tree of data) are more difficult to implement by using OpenMP 2.0 and 2.5. The Concurrency Runtime complements the capabilities of OpenMP by providing the [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) and the [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL). The Asynchronous Agents Library supports coarse-grained task parallelism; the PPL supports more fine-grained parallel tasks. The Concurrency Runtime provides the infrastructure that is required to perform operations in parallel so that you can focus on the logic of your application. However, because the Concurrency Runtime enables a variety of programming models, its scheduling overhead can be greater than other concurrency libraries such as OpenMP. Therefore, we recommend that you test performance incrementally when you convert your existing OpenMP code to use the Concurrency Runtime.

## When to Migrate from OpenMP to the Concurrency Runtime

It may be advantageous to migrate existing OpenMP code to use the Concurrency Runtime in the following cases.

|Cases|Advantages of the Concurrency Runtime|
|-----------|-------------------------------------------|
|You require an extensible concurrent programming framework.|Many of the features in the Concurrency Runtime can be extended. You can also combine existing features to compose new ones. Because OpenMP relies on compiler directives, it cannot be easily extended.|
|Your application would benefit from cooperative blocking.|When a task blocks because it requires a resource that is not yet available, the Concurrency Runtime can perform other tasks while the first task waits for the resource.|
|Your application would benefit from dynamic load balancing.|The Concurrency Runtime uses a scheduling algorithm that adjusts the allocation of computing resources as workloads change. In OpenMP, when the scheduler allocates computing resources to a parallel region, those resource allocations are fixed throughout the computation.|
|You require exception handling support.|The PPL lets you catch exceptions both inside and outside of a parallel region or loop. In OpenMP, you must handle the exception inside of the parallel region or loop.|
|You require a cancellation mechanism.|The PPL enables applications to cancel both individual tasks and parallel trees of work. OpenMP requires the application to implement its own cancellation mechanism.|
|You require parallel code to finish in a different context from which it starts.|The Concurrency Runtime lets you start a task in one context, and then wait on or cancel that task in another context. In OpenMP, all parallel work must finish in the context from which it starts.|
|You require enhanced debugging support.|Visual Studio provides the **Parallel Stacks** and **Parallel Tasks** windows so that you can more easily debug multithreaded applications.<br /><br /> For more information about debugging support for the Concurrency Runtime, see [Using the Tasks Window](/visualstudio/debugger/using-the-tasks-window), [Using the Parallel Stacks Window](/visualstudio/debugger/using-the-parallel-stacks-window), and [Walkthrough: Debugging a Parallel Application](/visualstudio/debugger/walkthrough-debugging-a-parallel-application).|

## When Not to Migrate from OpenMP to the Concurrency Runtime

The following cases describe when it might not be appropriate to migrate existing OpenMP code to use the Concurrency Runtime.

|Cases|Explanation|
|-----------|-----------------|
|Your application already meets your requirements.|If you are satisfied with application performance and current debugging support, migration might not be appropriate.|
|Your parallel loop bodies perform little work.|The overhead of the Concurrency Runtime task scheduler might not overcome the benefits of executing the loop body in parallel, especially when the loop body is relatively small.|
|Your application is written in C.|Because the Concurrency Runtime uses many C++ features, it might not be suitable when you cannot write code that enables the C application to fully use it.|

## Related Topics

[How to: Convert an OpenMP parallel for Loop to Use the Concurrency Runtime](../../parallel/concrt/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)

Given a basic loop that uses the OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel) and [for](../openmp/reference/openmp-directives.md#for-openmp) directives, demonstrates how to convert it to use the Concurrency Runtime [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algorithm.

[How to: Convert an OpenMP Loop that Uses Cancellation to Use the Concurrency Runtime](../../parallel/concrt/convert-an-openmp-loop-that-uses-cancellation.md)<br/>
Given an OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) loop that does not require all iterations to run, demonstrates how to convert it to use the Concurrency Runtime cancellation mechanism.

[How to: Convert an OpenMP Loop that Uses Exception Handling to Use the Concurrency Runtime](../../parallel/concrt/convert-an-openmp-loop-that-uses-exception-handling.md)<br/>
Given an OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) loop that performs exception handling, demonstrates how to convert it to use the Concurrency Runtime exception handling mechanism.

[How to: Convert an OpenMP Loop that Uses a Reduction Variable to Use the Concurrency Runtime](../../parallel/concrt/convert-an-openmp-loop-that-uses-a-reduction-variable.md)<br/>
Given an OpenMP [parallel](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md#parallel)[for](../openmp/reference/openmp-directives.md#for-openmp) loop that uses the [reduction](../openmp/reference/openmp-clauses.md#reduction) clause, demonstrates how to convert it to use the Concurrency Runtime.

## See also

[Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)<br/>
[OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)<br/>
[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)
