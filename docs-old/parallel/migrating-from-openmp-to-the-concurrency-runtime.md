---
title: "Migrating from OpenMP to the Concurrency Runtime"
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
  - "Concurrency Runtime, migrating from OpenMP"
  - "OpenMP, migrating to the Concurrency Runtime"
ms.assetid: 9bab7bb1-e45d-44b2-8509-3b226be2c93b
caps.latest.revision: 11
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
# Migrating from OpenMP to the Concurrency Runtime
The Concurrency Runtime enables a variety of programming models. These models may overlap or complement the models of other libraries. The documents in this section compare [OpenMP](../parallel/openmp-in-visual-c--.md) to the Concurrency Runtime and provide examples about how to migrate existing OpenMP code to use the Concurrency Runtime.  
  
 The OpenMP programming model is defined by an open standard and has well-defined bindings to the Fortran and C/C++ programming languages. OpenMP versions 2.0 and 2.5, which are supported by the Visual C++ compiler, are well-suited for parallel algorithms that are iterative; that is, they perform parallel iteration over an array of data. OpenMP 3.0 supports non-iterative tasks in addition to iterative tasks.  
  
 OpenMP is most efficient when the degree of parallelism is pre-determined and matches the available resources on the system. The OpenMP model is an especially good match for high-performance computing, where very large computational problems are distributed across the processing resources of one computer. In this scenario, the hardware environment is generally fixed and the developer can reasonably expect to have exclusive access to all computing resources when the algorithm is executed.  
  
 However, less constrained computing environments may not be a good match for OpenMP. For example, recursive problems (such as the quicksort algorithm or searching a tree of data) are more difficult to implement by using OpenMP 2.0 and 2.5. The Concurrency Runtime complements the capabilities of OpenMP by providing the [Asynchronous Agents Library](../parallel/asynchronous-agents-library.md) and the [Parallel Patterns Library](../parallel/parallel-patterns-library--ppl-.md) (PPL). The Asynchronous Agents Library supports coarse-grained task parallelism; the PPL supports more fine-grained parallel tasks. The Concurrency Runtime provides the infrastructure that is required to perform operations in parallel so that you can focus on the logic of your application. However, because the Concurrency Runtime enables a variety of programming models, its scheduling overhead can be greater than other concurrency libraries such as OpenMP. Therefore, we recommend that you test performance incrementally when you convert your existing OpenMP code to use the Concurrency Runtime.  
  
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
|You require enhanced debugging support.|Visual Studio provides the **Parallel Stacks** and **Parallel Tasks** windows so that you can more easily debug multithreaded applications.<br /><br /> For more information about debugging support for the Concurrency Runtime, see [Using the Tasks Window](../Topic/Using%20the%20Tasks%20Window.md), [Using the Parallel Stacks Window](../Topic/Using%20the%20Parallel%20Stacks%20Window.md), and [Walkthrough: Debugging a Parallel Application](../Topic/Walkthrough:%20Debugging%20a%20Parallel%20Application.md).|  
  
## When Not to Migrate from OpenMP to the Concurrency Runtime  
 The following cases describe when it might not be appropriate to migrate existing OpenMP code to use the Concurrency Runtime.  
  
|Cases|Explanation|  
|-----------|-----------------|  
|Your application already meets your requirements.|If you are satisfied with application performance and current debugging support, migration might not be appropriate.|  
|Your parallel loop bodies perform little work.|The overhead of the Concurrency Runtime task scheduler might not overcome the benefits of executing the loop body in parallel, especially when the loop body is relatively small.|  
|Your application is written in C.|Because the Concurrency Runtime uses many C++ features, it might not be suitable when you cannot write code that enables the C application to fully use it.|  
  
## Related Topics  
 [How to: Convert an OpenMP parallel for Loop to Use the Concurrency Runtime](../parallel/how-to--convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime.md)  
 Given a basic loop that uses the OpenMP [parallel](../parallel/parallel.md) and [for](../parallel/for--openmp-.md) directives, demonstrates how to convert it to use the Concurrency Runtime [concurrency::parallel_for](../Topic/parallel_for%20Function.md) algorithm.  
  
 [How to: Convert an OpenMP Loop that Uses Cancellation to Use the Concurrency Runtime](../parallel/how-to--convert-an-openmp-loop-that-uses-cancellation-to-use-the-concurrency-runtime.md)  
 Given an OpenMP [parallel](../parallel/parallel.md)[for](../parallel/for--openmp-.md) loop that does not require all iterations to run, demonstrates how to convert it to use the Concurrency Runtime cancellation mechanism.  
  
 [How to: Convert an OpenMP Loop that Uses Exception Handling to Use the Concurrency Runtime](../parallel/how-to--convert-an-openmp-loop-that-uses-exception-handling-to-use-the-concurrency-runtime.md)  
 Given an OpenMP [parallel](../parallel/parallel.md)[for](../parallel/for--openmp-.md) loop that performs exception handling, demonstrates how to convert it to use the Concurrency Runtime exception handling mechanism.  
  
 [How to: Convert an OpenMP Loop that Uses a Reduction Variable to Use the Concurrency Runtime](../parallel/how-to--convert-an-openmp-loop-that-uses-a-reduction-variable-to-use-the-concurrency-runtime.md)  
 Given an OpenMP [parallel](../parallel/parallel.md)[for](../parallel/for--openmp-.md) loop that uses the [reduction](../parallel/reduction.md) clause, demonstrates how to convert it to use the Concurrency Runtime.  
  
## See Also  
 [Concurrency Runtime](../parallel/concurrency-runtime.md)   
 [OpenMP](../parallel/openmp-in-visual-c--.md)   
 [Parallel Patterns Library (PPL)](../parallel/parallel-patterns-library--ppl-.md)   
 [Asynchronous Agents Library](../parallel/asynchronous-agents-library.md)