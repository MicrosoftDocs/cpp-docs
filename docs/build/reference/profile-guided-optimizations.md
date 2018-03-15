---
title: "Profile-Guided Optimizations | Microsoft Docs"
ms.custom: ""
ms.date: "03/14/2018"
ms.technology: ["cpp-tools"]
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["profile-guided optimizations", "optimization, profile-guided [C++]"]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Profile-Guided Optimizations

Profile-guided optimization lets you optimize an output file, where the optimizer uses data from test runs of the .exe or .dll file. The data represents how the program is likely to perform in a production environment.

Profile-guided optimizations are only available for x86 or x64 native targets. Profile-guided optimizations are not available for output files that will run on the common language runtime. Even if you produce an assembly with mixed native and managed code (compile with **/clr**), you cannot use profile-guided optimization on just the native code. If you attempt to build a project with these options set in the IDE, a build error results.

> [!NOTE]
> Information that is gathered from profiling test runs overrides optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [/Ob (Inline Function Expansion)](../../build/reference/ob-inline-function-expansion.md) and [/Os, /Ot (Favor Small Code, Favor Fast Code)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md).

To use profile-guided optimization, follow these steps to optimize your app:

- Compile one or more source code files with [/GL](../../build/reference/gl-whole-program-optimization.md).

   Each module built with **/GL** can be examined during profile-guided optimization test runs to capture run-time behavior. Every module in a profile-guided optimization build does not have to be compiled with **/GL**. However, only those modules compiled with **/GL** are instrumented and later available for profile-guided optimizations.

- Link using [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) and [/GENPROFILE](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   Using both **/LTCG** and **/GENPROFILE** creates an empty .pgd file. After test-run data is added to the .pgd file, it can be used as input to the next link step (creating the optimized image). When specifying **/GENPROFILE**, you can optionally add **:PGD=**_filename_ to specify a nondefault name or location for the .pgd file.

- Profile the application.

   Each time a profiled EXE session ends or a profiled DLL is unloaded, a *appname*!#.pgc file is created. A .pgc file contains information about a particular application test run. # is a number starting with 1 that is incremented based on the number of other *appname*!#.pgc files in the directory. You can delete a .pgc file if the test run does not represent a scenario you want to optimize.

   During a test run, you can force closure of the currently open .pgc file and the creation of a new .pgc file with the [pgosweep](../../build/reference/pgosweep.md) utility (for example, when the end of a test scenario does not coincide with application shutdown).

   You can use the [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) environment variable, or the **/POGOSAFEMODE** linker option. When you profile your application, these options enable you to specify whether you want to profile the application in *safe mode*, which is slower but thread safe, or  the default, *fast mode* which is faster but not thread safe.

- Link using **/LTCG** and **/USEPROFILE**.

   Using both **/LTCG** and **/USEPROFILE** creates the optimized image. This step takes as input the .pgd file. When you specify **/USEPROFILE**, you can optionally add **:PGD=**_filename_ to specify a non-default name or location for the .pgd file. For more information, see [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).

It is even possible to create the optimized output file and later determine that additional profiling would be useful to create a more optimized image. If the instrumented image and its .pgd file are available, you can do additional test runs and rebuild the optimized image with the newer .pgd file.

The following is a list of the profile-guided optimizations:

- **Inlining** - For example, if there exists a function A that frequently calls function B, and function B is relatively small, then profile-guided optimizations will inline function B in function A.

- **Virtual Call Speculation** - If a virtual call, or other call through a function pointer, frequently targets a certain function, a profile-guided optimization can insert a conditionally-executed direct call to the frequently-targeted function, and the direct call can be inlined.

- **Register Allocation** - Optimizing with profile data results in better register allocation.

- **Basic Block Optimization** - Basic block optimization allows commonly executed basic blocks that temporally execute within a given frame to be placed in the same set of pages (locality). This minimizes the number of pages used, thus minimizing memory overhead.

- **Size/Speed Optimization** - Functions where the program spends a lot of time can be optimized for speed.

- **Function Layout** - Based on the call graph and profiled caller/callee behavior, functions that tend to be along the same execution path are placed in the same section.

- **Conditional Branch Optimization** - With the value probes, profile-guided optimizations can find if a given value in a switch statement is used more often than other values.  This value can then be pulled out of the switch statement.  The same can be done with if/else instructions where the optimizer can order the if/else so that either the if or else block is placed first depending on which block is more frequently true.

- **Dead Code Separation** - Code that is not called during profiling is moved to a special section that is appended to the end of the set of sections. This effectively keeps this section out of the often-used pages.

- **EH Code Separation** - The EH code, being exceptionally executed, can often be moved to a separate section when profile-guided optimizations can determine that the exceptions occur only on exceptional conditions.

- **Memory Intrinsics** - The expansion of intrinsics can be decided better if it can be determined if an intrinsic is called frequently. An intrinsic can also be optimized based on the block size of moves or copies.

If you use Visual Studio 2013, you can use the automated [Profile Guided Optimization Plug-In](../../build/reference/profile-guided-optimization-in-the-performance-and-diagnostics-hub.md) for Visual C++ in the Performance and Diagnostics Hub to simplify and streamline the optimization process within Visual Studio. This plug-in is not available in later versions of Visual Studio.

## In this section

[Tools for Manual Profile-Guided Optimization](../../build/reference/tools-for-manual-profile-guided-optimization.md)

[How to: Merge Multiple PGO Profiles into a Single Profile](../../build/reference/how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)

## See also

[C/C++ Build Tools](../../build/reference/c-cpp-build-tools.md)
