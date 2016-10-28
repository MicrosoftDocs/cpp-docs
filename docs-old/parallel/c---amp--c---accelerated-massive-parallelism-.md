---
title: "C++ AMP (C++ Accelerated Massive Parallelism)"
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
  - "C++ AMP (see C++ Accelerated Massive Parallelism)"
  - "C++ Accelerated Massive Parallelism, getting started"
ms.assetid: e27824cb-3167-409b-8c3f-a0e476d8f349
caps.latest.revision: 21
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
# C++ AMP (C++ Accelerated Massive Parallelism)
C++ AMP (C++ Accelerated Massive Parallelism) accelerates the execution of your C++ code by taking advantage of the data-parallel hardware that's commonly present as a graphics processing unit (GPU) on a discrete graphics card. The C++ AMP programming model includes support for multidimensional arrays, indexing, memory transfer, and tiling. It also includes a mathematical function library. You can use C++ AMP language extensions to control how data is moved from the CPU to the GPU and back.  
  
## Related Topics  
  
|Title|Description|  
|-----------|-----------------|  
|[C++ AMP Overview](../parallel/c---amp-overview.md)|Describes the key features of C++ AMP and the mathematical library.|  
|[Using Lambdas, Function Objects, and Restricted Functions](../parallel/using-lambdas--function-objects--and-restricted-functions.md)|Describes how to use lambda expressions, function objects, and restricted functions in calls to the [parallel_for_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md) method.|  
|[Using Tiles](../parallel/using-tiles.md)|Describes how to use tiles to accelerate your C++ AMP code.|  
|[Using accelerator and accelerator_view Objects](../parallel/using-accelerator-and-accelerator_view-objects.md)|Describes how to use accelerators to customize execution of your code on the GPU.|  
|[Using C++ AMP in Windows Store Apps](../parallel/using-c---amp-in-windows-store-apps.md)|Describes how to use C++ AMP in [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps that use Windows Runtime types.|  
|[Graphics (C++ AMP)](../parallel/graphics--c---amp-.md)|Describes how to use the C++ AMP graphics library.|  
|[Walkthrough: Matrix Multiplication](../parallel/walkthrough--matrix-multiplication.md)|Demonstrates matrix multiplication using C++ AMP code and tiling.|  
|[Walkthrough: Debugging a C++ AMP Application](../parallel/walkthrough--debugging-a-c---amp-application.md)|Explains how to create and debug an application that uses parallel reduction to sum up a large array of integers.|  
  
## Reference  
 [Reference (C++ AMP)](../parallel/reference--c---amp-.md)  
  
 [tile_static Keyword](../cpp/tile_static-keyword.md)  
  
 [restrict (C++ AMP)](../cpp/restrict--c---amp-.md)  
  
## Other Resources  
 [Parallel Programming in Native Code Blog](http://go.microsoft.com/fwlink/p/?LinkId=238472)  
  
 [C++ AMP sample projects for download](http://go.microsoft.com/fwlink/p/?LinkId=248508)  
  
 [Analyzing C++ AMP Code with the Concurrency Visualizer](http://go.microsoft.com/fwlink/?LinkID=253987&clcid=0x409)