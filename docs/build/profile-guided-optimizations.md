---
description: "Learn more about: Profile-guided optimizations"
title: "Profile-guided optimizations"
ms.date: "04/23/2019"
helpviewer_keywords: ["profile-guided optimizations", "optimization, profile-guided [C++]"]
ms.assetid: 2225c307-d3ae-42c1-8345-a5a959d132dc
---
# Profile-guided optimizations

Profile-guided optimization (PGO) lets you optimize a whole executable file, where the optimizer uses data from test runs of the .exe or .dll file. The data represents the likely performance of the program in a production environment.

Profile-guided optimizations are only available for x86 or x64 native targets. Profile-guided optimizations aren't available for executable files that run on the common language runtime. Even if you produce an assembly with mixed native and managed code (by using the **/clr** compiler option), you can't use profile-guided optimization on just the native code. If you attempt to build a project with these options set in the IDE, a build error results.

> [!NOTE]
> Information that's gathered from profiling test runs overrides optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [/Ob (Inline Function Expansion)](reference/ob-inline-function-expansion.md) and [/Os, /Ot (Favor Small Code, Favor Fast Code)](reference/os-ot-favor-small-code-favor-fast-code.md).

## Steps to optimize your app

To use profile-guided optimization, follow these steps to optimize your app:

- Compile one or more source code files with [/GL](reference/gl-whole-program-optimization.md).

   Each module built with **/GL** can be examined during profile-guided optimization test runs to capture run-time behavior. Every module in a profile-guided optimization build doesn't have to be compiled with **/GL**. However, only those modules compiled with **/GL** are instrumented and later available for profile-guided optimizations.

- Link using [/LTCG](reference/ltcg-link-time-code-generation.md) and [/GENPROFILE or /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   Using both **/LTCG** and **/GENPROFILE** or **/FASTGENPROFILE** creates a `.pgd` file when the instrumented app is run. After test-run data is added to the `.pgd` file, it can be used as input to the next link step (creating the optimized image). When specifying **/GENPROFILE**, you can optionally add a **PGD=**_filename_ argument to specify a nondefault name or location for the `.pgd` file. The combination of **/LTCG** and **/GENPROFILE** or **/FASTGENPROFILE** linker options replaces the deprecated **/LTCG:PGINSTRUMENT** linker option.

- Profile the application.

   Each time a profiled EXE session ends, or a profiled DLL is unloaded, a `appname!N.pgc` file is created. A `.pgc` file contains information about a particular application test run. *appname* is the name of your app, and *N* is a number starting with 1 that's incremented based on the number of other `appname!N.pgc` files in the directory. You can delete a `.pgc` file if the test run doesn't represent a scenario you want to optimize.

   During a test run, you can force closure of the currently open `.pgc` file and the creation of a new `.pgc` file with the [pgosweep](pgosweep.md) utility (for example, when the end of a test scenario doesn't coincide with application shutdown).

   Your application can also directly invoke a PGO function, [PgoAutoSweep](pgoautosweep.md), to capture the profile data at the point of the call as a `.pgc` file. It can give you finer control over the code covered by the captured data in your `.pgc` files. For an example of how to use this function, see the [PgoAutoSweep](pgoautosweep.md) documentation.

   When you create your instrumented build, by default, data collection is done in non-thread-safe mode, which is faster but may be imprecise. By using the **EXACT** argument to **/GENPROFILE** or **/FASTGENPROFILE**, you can specify data collection in thread-safe mode, which is more precise, but slower. This option is also available if you set the deprecated [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) environment variable, or the deprecated **/POGOSAFEMODE** linker option, when you create your instrumented build.

- Link using **/LTCG** and **/USEPROFILE**.

   Use both the **/LTCG** and [/USEPROFILE](reference/useprofile.md) linker options to create the optimized image. This step takes as input the `.pgd` file. When you specify **/USEPROFILE**, you can optionally add a **PGD=**_filename_ argument to specify a non-default name or location for the `.pgd` file. You can also specify this name by using the deprecated **/PGD** linker option. The combination of **/LTCG** and **/USEPROFILE** replaces the deprecated **/LTCG:PGOPTIMIZE** and **/LTCG:PGUPDATE** linker options.

It's even possible to create the optimized executable file and later determine that additional profiling would be useful to create a more optimized image. If the instrumented image and its `.pgd` file are available, you can do additional test runs and rebuild the optimized image with the newer `.pgd` file, by using the same **/LTCG** and **/USEPROFILE** linker options.

> [!NOTE]
> Both `.pgc` and `.pgd` files are binary file types. If stored in a source control system, avoid any automatic transformation that may be made to text files.

## Optimizations performed by PGO

The profile-guided optimizations include these checks and improvements:

- **Inlining** - For example, if a function A frequently calls function B, and function B is relatively small, then profile-guided optimizations inline function B in function A.

- **Virtual Call Speculation** - If a virtual call, or other call through a function pointer, frequently targets a certain function, a profile-guided optimization can insert a conditionally executed direct call to the frequently targeted function, and the direct call can be inlined.

- **Register Allocation** - Optimization based on profile data results in better register allocation.

- **Basic Block Optimization** - Basic block optimization allows commonly executed basic blocks that temporally execute within a given frame to be placed in the same set of pages (locality). It minimizes the number of pages used, which minimizes memory overhead.

- **Size/Speed Optimization** - Functions where the program spends the most execution time can be optimized for speed.

- **Function Layout** - Based on the call graph and profiled caller/callee behavior, functions that tend to be along the same execution path are placed in the same section.

- **Conditional Branch Optimization** - With the value probes, profile-guided optimizations can find if a given value in a switch statement is used more often than other values.  This value can then be pulled out of the switch statement.  The same can be done with **`if`**...**`else`** instructions where the optimizer can order the **`if`**...**`else`** so that either the **`if`** or **`else`** block is placed first, depending on which block is more frequently true.

- **Dead Code Separation** - Code that isn't called during profiling is moved to a special section that's appended to the end of the set of sections. It effectively keeps this section out of the often-used pages.

- **EH Code Separation** - Because EH code is only exceptionally executed, it can often be moved to a separate section. It's moved when profile-guided optimizations can determine that the exceptions occur only on exceptional conditions.

- **Memory Intrinsics** - Whether to expand an intrinsic or not depends on whether it's called frequently. An intrinsic can also be optimized based on the block size of moves or copies.

## Next steps

Read more about these environment variables, functions, and tools you can use in profile-guided optimizations:

[Environment variables for profile-guided optimizations](environment-variables-for-profile-guided-optimizations.md)<br/>
These variables were used to specify run-time behavior of testing scenarios. They're now deprecated and replaced by new linker options. This document shows you how to move from the environment variables to the linker options.

[PgoAutoSweep](pgoautosweep.md)<br/>
A function you can add to your app to provide fine-grained `.pgc` file data capture control.

[pgosweep](pgosweep.md)<br/>
A command-line utility that writes all profile data to the `.pgc` file, closes the `.pgc` file, and opens a new `.pgc` file.

[pgomgr](pgomgr.md)<br/>
A command-line utility that adds profile data from one or more `.pgc` files to the `.pgd` file.

[How to: Merge multiple PGO profiles into a single profile](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)<br/>
Examples of **pgomgr** usage.

## See also

[Additional MSVC build tools](reference/c-cpp-build-tools.md)
