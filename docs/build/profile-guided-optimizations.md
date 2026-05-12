---
description: "Learn more about: Profile-guided optimizations"
title: "Profile-guided optimizations"
ms.date: 05/11/2026
helpviewer_keywords: ["profile-guided optimizations", "optimization, profile-guided [C++]"]
---
# Profile-guided optimizations

Profile-guided optimization (PGO) lets you optimize a whole executable file. The optimizer uses data from test runs of the .exe or .dll file. The data represents the likely performance of the program in a production environment.

> [!NOTE]
> SPGO (Sample Profile-Guided Optimization) is an alternative approach that uses hardware CPU Windows Performance Counters instead of instrumentation. SPGO requires no instrumented build - you profile an existing release binary by using `xperf`. For more information, see [Sample Profile-Guided Optimization (SPGO) tutorial](sample-profile-guided-optimization.md).

Profile-guided optimizations are only available for x86, x64, or ARM64 native targets. Profile-guided optimizations aren't available for executable files that run on the common language runtime. Even if you produce an assembly with mixed native and managed code (by using the **/clr** compiler option), you can't use profile-guided optimization on just the native code. If you attempt to build a project with these options set in the IDE, a build error results.

> [!NOTE]
> Information gathered from profiling test runs overrides optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [/Ob (Inline Function Expansion)](reference/ob-inline-function-expansion.md) and [/Os, /Ot (Favor Small Code, Favor Fast Code)](reference/os-ot-favor-small-code-favor-fast-code.md).

## Steps to optimize your app

To use profile-guided optimization, follow these steps to optimize your app:

- Compile one or more source code files with [/GL](reference/gl-whole-program-optimization.md).

   The compiler examines each module built with **/GL** during profile-guided optimization test runs to capture run-time behavior. You don't need to compile every module in a profile-guided optimization build with **/GL**. However, only modules compiled with **/GL** are instrumented and later available for profile-guided optimizations.

- Link by using [/LTCG](reference/ltcg-link-time-code-generation.md) and [/GENPROFILE or /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md).

   When you use both **/LTCG** and **/GENPROFILE** or **/FASTGENPROFILE**, the instrumented app creates a `.pgd` file when it runs. After test-run data is added to the `.pgd` file, you can use it as input to the next link step (creating the optimized image). When you specify **/GENPROFILE**, you can optionally add a **PGD=**_filename_ argument to specify a nondefault name or location for the `.pgd` file. The combination of **/LTCG** and **/GENPROFILE** or **/FASTGENPROFILE** linker options replaces the deprecated **/LTCG:PGINSTRUMENT** linker option.

- Profile the application.

   Each time a profiled EXE session ends, or a profiled DLL unloads, the process creates an `appname!N.pgc` file. A `.pgc` file contains information about a particular application test run. *appname* is the name of your app, and *N* is a number starting with 1. It increments based on the number of other `appname!N.pgc` files in the directory. You can delete a `.pgc` file if the test run doesn't represent a scenario you want to optimize.

   During a test run, you can force closure of the currently open `.pgc` file and the creation of a new `.pgc` file by using the [pgosweep](pgosweep.md) utility (for example, when the end of a test scenario doesn't coincide with application shutdown).

   Your application can also directly invoke a PGO function, [PgoAutoSweep](pgoautosweep.md), to capture the profile data at the point of the call as a `.pgc` file. It can give you finer control over the code covered by the captured data in your `.pgc` files. For an example of how to use this function, see the [PgoAutoSweep](pgoautosweep.md) documentation.

   When you create your instrumented build, by default, data collection is done in non-thread-safe mode, which is faster but may be imprecise. By using the **EXACT** argument to **/GENPROFILE** or **/FASTGENPROFILE**, you can specify data collection in thread-safe mode, which is more precise, but slower. This option is also available if you set the deprecated [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md#pogosafemode) environment variable, or the deprecated **/POGOSAFEMODE** linker option, when you create your instrumented build.

- Link by using **/LTCG** and **/USEPROFILE**.

   Use both the **/LTCG** and [/USEPROFILE](reference/useprofile.md) linker options to create the optimized image. This step takes the `.pgd` file as input. When you specify **/USEPROFILE**, you can optionally add a **PGD=**_filename_ argument to specify a nondefault name or location for the `.pgd` file. You can also specify this name by using the deprecated **/PGD** linker option. The combination of **/LTCG** and **/USEPROFILE** linker options replaces the deprecated **/LTCG:PGOPTIMIZE** and **/LTCG:PGUPDATE** linker options.

It's even possible to create the optimized executable file and later determine that more profiling would be useful to create a more optimized image. If the instrumented image and its `.pgd` file are available, you can do more test runs and rebuild the optimized image with the newer `.pgd` file by using the same **/LTCG** and **/USEPROFILE** linker options.

> [!NOTE]
> Both `.pgc` and `.pgd` files are binary file types. If you store them in a source control system, avoid any automatic transformation that might be made to text files.

## Optimizations performed by PGO

Profile-guided optimizations include these checks and improvements:

- **Inlining** - For example, if function A frequently calls function B, and function B is relatively small, the profile-guided optimizations inline function B in function A.

- **Virtual Call Speculation** - If a virtual call, or other call through a function pointer, frequently targets a certain function, a profile-guided optimization can insert a conditionally executed direct call to the frequently targeted function, and the direct call can be inlined.

- **Register Allocation** - Optimization based on profile data results in better register allocation.

- **Basic Block Optimization** - Basic block optimization allows commonly executed basic blocks that temporally execute within a given frame to be placed in the same set of pages (locality). It minimizes the number of pages used, which minimizes memory overhead.

- **Size/Speed Optimization** - Functions where the program spends the most execution time can be optimized for speed.

- **Function Layout** - Based on the call graph and profiled caller/callee behavior, functions that tend to be along the same execution path are placed in the same section.

- **Conditional Branch Optimization** - With the value probes, profile-guided optimizations can find if a given value in a switch statement is used more often than other values. This value can then be pulled out of the switch statement.  The same optimization can be done with **`if`**...**`else`** instructions where the optimizer can order the **`if`**...**`else`** so that either the **`if`** or **`else`** block is placed first, depending on which block is more frequently true.

- **Dead Code Separation** - Profile-guided optimization moves code that isn't called during profiling to a special section at the end of the section set. It effectively keeps this section out of the often-used pages.

- **EH Code Separation** - Because EH code is only exceptionally executed, it can often be moved to a separate section. Profile-guided optimizations move it when they determine that the exceptions occur only on exceptional conditions.

- **Memory Intrinsics** - Whether to expand an intrinsic or not depends on whether it gets called frequently. An intrinsic can also be optimized based on the block size of moves or copies.

## Next steps

To learn more about these environment variables, functions, and tools you can use in profile-guided optimizations, see the following resources:

[Environment variables for profile-guided optimizations](environment-variables-for-profile-guided-optimizations.md)\
These variables specify the run-time behavior of testing scenarios. They're now deprecated and replaced by new linker options. This document shows you how to move from the environment variables to the linker options.

[PgoAutoSweep](pgoautosweep.md)\
A function you can add to your app to provide fine-grained `.pgc` file data capture control.

[pgosweep](pgosweep.md)\
A command-line utility that writes all profile data to the `.pgc` file, closes the `.pgc` file, and opens a new `.pgc` file.

[pgomgr](pgomgr.md)\
A command-line utility that adds profile data from one or more `.pgc` files to the `.pgd` file.

[How to: Merge multiple PGO profiles into a single profile](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)\
Examples of **pgomgr** usage.

[Sample Profile-Guided Optimization (SPGO) tutorial](sample-profile-guided-optimization.md)\
Use CPU hardware performance counters instead of instrumentation. No instrumented build required - profile your existing release binary with `xperf`.

## See also

[Additional MSVC build tools](reference/c-cpp-build-tools.md)
