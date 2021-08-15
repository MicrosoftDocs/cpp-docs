---
description: "Learn more about: C++ AMP (C++ Accelerated Massive Parallelism)"
title: "C++ AMP (C++ Accelerated Massive Parallelism)"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ AMP (see C++ Accelerated Massive Parallelism)", "C++ Accelerated Massive Parallelism, getting started"]
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
---
# C++ AMP (C++ Accelerated Massive Parallelism)

C++ AMP (C++ Accelerated Massive Parallelism) accelerates the execution of your C++ code by taking advantage of the data-parallel hardware that's commonly present as a graphics processing unit (GPU) on a discrete graphics card. The C++ AMP programming model includes support for multidimensional arrays, indexing, memory transfer, and tiling. It also includes a mathematical function library. You can use C++ AMP language extensions to control how data is moved from the CPU to the GPU and back.

## Related Topics

|Title|Description|
|-----------|-----------------|
|[C++ AMP Overview](../../parallel/amp/cpp-amp-overview.md)|Describes the key features of C++ AMP and the mathematical library.|
|[Using Lambdas, Function Objects, and Restricted Functions](../../parallel/amp/using-lambdas-function-objects-and-restricted-functions.md)|Describes how to use lambda expressions, function objects, and restricted functions in calls to the [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) method.|
|[Using Tiles](../../parallel/amp/using-tiles.md)|Describes how to use tiles to accelerate your C++ AMP code.|
|[Using accelerator and accelerator_view Objects](../../parallel/amp/using-accelerator-and-accelerator-view-objects.md)|Describes how to use accelerators to customize execution of your code on the GPU.|
|[Using C++ AMP in UWP Apps](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)|Describes how to use C++ AMP in Universal Windows Platform (UWP) apps that use Windows Runtime types.|
|[Graphics (C++ AMP)](../../parallel/amp/graphics-cpp-amp.md)|Describes how to use the C++ AMP graphics library.|
|[Walkthrough: Matrix Multiplication](../../parallel/amp/walkthrough-matrix-multiplication.md)|Demonstrates matrix multiplication using C++ AMP code and tiling.|
|[Walkthrough: Debugging a C++ AMP Application](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)|Explains how to create and debug an application that uses parallel reduction to sum up a large array of integers.|

## Reference

[Reference (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)<br/>
[tile_static Keyword](../../cpp/tile-static-keyword.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)

## Other Resources

[Parallel Programming in Native Code Blog](/archive/blogs/nativeconcurrency/)<br/>
[C++ AMP sample projects for download](/archive/blogs/nativeconcurrency/c-amp-sample-projects-for-download)<br/>
[Analyzing C++ AMP Code with the Concurrency Visualizer](/archive/blogs/nativeconcurrency/analyzing-c-amp-code-with-the-concurrency-visualizer)
