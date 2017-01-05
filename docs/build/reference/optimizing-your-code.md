---
title: "Optimizing Your Code | Microsoft Docs"
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
  - "performance, optimizing code"
  - "optimization"
  - "cl.exe compiler, performance"
  - "optimization, C++ code"
  - "code, optimizing"
  - "performance, compiler"
ms.assetid: 4f33e6c7-9870-43b3-9c2f-d7e44f764971
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
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
# Optimizing Your Code
By optimizing an executable, you can achieve a balance between fast execution speed and small code size. This topic discusses some of the mechanisms that Visual C++ provides to help you optimize code.  
  
## Language Features  
 The following topics describe some of the optimization features in the C/C++ language.  
  
 [Optimization Pragmas and Keywords](../../build/reference/optimization-pragmas-and-keywords.md)  
 A list of keywords and pragmas that you can use in your code to improve performance.  
  
 [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md)  
 A list of **/O** compiler options that specifically affect execution speed or code size.  
  
 [Rvalue Reference Declarator: &&](../../cpp/rvalue-reference-declarator-amp-amp.md)  
 Rvalue references support the implementation of *move semantics*. If move semantics are used to implement template libraries, the performance of applications that use those templates can significantly improve.  
  
### The optimize Pragma  
 If an optimized section of code causes errors or a slowdown, you can use the [optimize](../../preprocessor/optimize.md) pragma to turn off optimization for that section.  
  
 Enclose the code between two pragmas, as follows.  
  
```  
#pragma optimize("", off)  
// some code here   
#pragma optimize("", on)  
```  
  
## Programming Practices  
 You might notice additional warning messages when you compile your code with optimization. This behavior is expected because some warnings relate only to optimized code. You can avoid many optimization problems if you heed these warnings.  
  
 Paradoxically, optimizing a program for speed could cause code to run slower. This is because some optimizations for speed increase code size. For example, inlining functions eliminates the overhead of function calls. However, inlining too much code might make your program so large that the number of virtual-memory page faults increases. Therefore, the speed gained from eliminating function calls may be lost to memory swapping.  
  
 The following topics discuss good programming practices.  
  
 [Tips for Improving Time-Critical Code](../../build/reference/tips-for-improving-time-critical-code.md)  
 Better coding techniques can yield better performance. This topic suggests coding techniques that can help you make sure that the time-critical parts of your code perform satisfactorily.  
  
 [Optimization Best Practices](../../build/reference/optimization-best-practices.md)  
 Provides general guidelines about how best to optimize your application.  
  
## Debugging Optimized Code  
 Because optimization might change the code created by the compiler, we recommend that you debug your application and measure its performance, and then optimize your code.  
  
 The following topics provide basic information about how to debug.  
  
-   [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)  
  
-   [Common Problems When Creating a Release Build](../../build/reference/common-problems-when-creating-a-release-build.md)  
  
 The following topics provide more advanced information about how to debug.  
  
-   [How to: Debug Optimized Code](http://msdn.microsoft.com/Library/fc8eeeb8-6629-4c9b-99f7-2016aee81dff)  
  
-   [Why Floating-Point Numbers May Lose Precision](../../build/reference/why-floating-point-numbers-may-lose-precision.md)  
  
 The following assortment of topics provide information about how to optimize building, loading, and executing your code.  
  
-   [Improving Compiler Throughput](../../build/reference/improving-compiler-throughput.md)  
  
-   [Using Function Name Without () Produces No Code](../../build/reference/using-function-name-without-parens-produces-no-code.md)  
  
-   [Optimizing Inline Assembly](../../assembler/inline/optimizing-inline-assembly.md)  
  
-   [Specifying Compiler Optimization for an ATL Project](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)  
  
-   [What optimization techniques should I use to improve the client application's performance when loading?](../../build/what-optimization-techniques-should-i-use.md)  
  
-   [!INCLUDE[crabout](../../build/reference/includes/crabout_md.md)] how to reduce the time to load DLL methods, see "Optimizing DLL Load Time Performance" in the "Under the Hood" column in the "MSDN Magazine" on the [MSDN Library](http://go.microsoft.com/fwlink/?linkid=556) Web site.  
  
-   [!INCLUDE[crabout](../../build/reference/includes/crabout_md.md)] how to minimize paging in applications, see "Improving Runtime Performance with the Smooth Working Set Tool" and "Improving Runtime Performance with the Smooth Working Set Tool—Part 2" in the "Bugslayer" column in the "MSDN Magazine" on the [MSDN Library](http://go.microsoft.com/fwlink/?linkid=556) Web site.  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)