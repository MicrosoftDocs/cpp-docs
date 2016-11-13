---
title: "Profile-Guided Optimizations | Microsoft Docs"
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
  - "profile-guided optimizations"
  - "optimization, profile-guided [C++]"
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
caps.latest.revision: 26
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
# Profile-Guided Optimizations
Profile-guided optimization lets you optimize an output file, where the optimizer uses data from test runs of the .exe or .dll file. The data represents how the program is likely to perform in a production environment.  
  
 Profile-guided optimizations are only available for x86 or [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] native targets. Profile-guided optimizations are not available for output files that will run on the common language runtime. Even if you produce an assembly with mixed native and managed code (compile with **/clr**), you cannot use profile-guided optimization on just the native code. If you attempt to build a project with these options set in the IDE, a build error will result.  
  
> [!NOTE]
>  Information that is gathered from profiling test runs will override optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [/Ob (Inline Function Expansion)](../../build/reference/ob-inline-function-expansion.md) and [/Os, /Ot (Favor Small Code, Favor Fast Code)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).  
  
 You can use the automated Profile Guided Optimization for Visual C++ plug-in in the Performance and Diagnostics Hub to simplify and streamline the optimization process within Visual Studio, or you can perform the optimization steps manually in Visual Studio or on the command line. We recommend the plug-in because it is easier to use. For information on how to get the plug-in and use it to optimize your app, see [Profile Guided Optimization Plug-In](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md).  
  
 Both the Profile Guided Optimization plug-in and manual profile-guided optimization follow these steps to optimize your app:  
  
-   Compile one or more source code files with [/GL](../../build/reference/gl-whole-program-optimization.md).  
  
     Each module built with /GL can be examined during profile-guided optimization test runs to capture run-time behavior. Every module in a profile-guided optimization build does not have to be compiled with /GL. However, only those modules compiled with /GL will be instrumented and later available for profile-guided optimizations.  
  
-   Link using [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) and [/GENPROFILE](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).  
  
     Using both /LTCG and /GENPROFILE creates an empty .pgd file. After test-run data is added to the .pgd file, it can be used as input to the next link step (creating the optimized image). When specifying /GENPROFILE, you can optionally add :PGD=`filename` to specify a nondefault name or location for the .pgd file.  
  
-   Profile the application.  
  
     Each time a profiled EXE session ends or a profiled DLL is unloaded, a *appname*!#.pgc file is created. A .pgc file contains information about a particular application test run. # is a number starting with 1 that is incremented based on the number of other *appname*!#.pgc files in the directory. You can delete a .pgc file if the test run does not represent a scenario you want to optimize.  
  
     During a test run, you can force closure of the currently open .pgc file and the creation of a new .pgc file with the [pgosweep](../../build/reference/pgosweep.md) utility (for example, when the end of a test scenario does not coincide with application shutdown).  
  
     You can use the `PogoSafeMode` option when you profile your application. This option enables you to specify whether you want to profile the application in safe mode or fast mode. For more information about these modes, see [PogoSafeMode](../../build/reference/pogosafemode.md).  
  
-   Link using /LTCG and /USEPROFILE.  
  
     Using both /LTCG and /USEPROFILE creates the optimized image. This step takes as input the .pgd file. When specifying /USEPROFILE, you can optionally add :PGD=`filename` to specify a nondefault name or location for the .pgd file. For more information, see [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  
  
 It is even possible to create the optimized output file and later determine that additional profiling would be useful to create a more optimized image. If the instrumented image and its .pgd file are available, you can do additional test runs and rebuilt the optimized image with the newer .pgd file.  
  
 The following is a list of the profile-guided optimizations:  
  
-   **Inlining** – For example, if there exists a function A that frequently calls function B, and function B is relatively small, then profile-guided optimizations will inline function B in function A.  
  
-   **Virtual Call Speculation** – If a virtual call, or other call through a function pointer, frequently targets a certain function, a profile-guided optimization can insert a conditionally-executed direct call to the frequently-targeted function, and the direct call can be inlined.  
  
-   **Register Allocation** – Optimizing with profile data results in better register allocation.  
  
-   **Basic Block Optimization** – Basic block optimization allows commonly executed basic blocks that temporally execute within a given frame to be placed in the same set of pages (locality). This minimizes the number of pages used, thus minimizing memory overhead.  
  
-   **Size/Speed Optimization** – Functions where the program spends a lot of time can be optimized for speed.  
  
-   **Function Layout** – Based on the call graph and profiled caller/callee behavior, functions that tend to be along the same execution path are placed in the same section.  
  
-   **Conditional Branch Optimization** – With the value probes, profile-guided optimizations can find if a given value in a switch statement is used more often than other values.  This value can then be pulled out of the switch statement.  The same can be done with if/else instructions where the optimizer can order the if/else so that either the if or else block is placed first depending on which block is more frequently true.  
  
-   **Dead Code Separation** – Code that is not called during profiling is moved to a special section that is appended to the end of the set of sections. This effectively keeps this section out of the often-used pages.  
  
-   **EH Code Separation** – The EH code, being exceptionally executed, can often be moved to a separate section when profile-guided optimizations can determine that the exceptions occur only on exceptional conditions.  
  
-   **Memory Intrinsics** – The expansion of intrinsics can be decided better if it can be determined if an intrinsic is called frequently. An intrinsic can also be optimized based on the block size of moves or copies.  
  
 For more information on performing manual optimization in the IDE or on the command line, see [Profile Guided Optimization Plug-In](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md).  
  
## In This Section  
 [Profile Guided Optimization Plug-In](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md)  
  
 [Tools for Manual Profile-Guided Optimization](../../build/reference/tools-for-manual-profile-guided-optimization.md)  
  
 [How to: Merge Multiple PGO Profiles into a Single Profile](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)  
  
## See Also  
 [C/C++ Build Tools](../../build/reference/c-cpp-build-tools.md)