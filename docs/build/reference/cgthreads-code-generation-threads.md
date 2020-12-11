---
description: "Learn more about: `/cgthreads` (Code generation threads)"
title: "/cgthreads (Code generation threads)"
ms.date: 07/31/2020
f1_keywords: ["/cgthreads"]
helpviewer_keywords: ["/cgthreads compiler option (C++)", "-cgthreads compiler option (C++)", "cgthreads compiler option (C++)", "cgthreads"]
ms.assetid: 64bc768c-6caa-4baf-9dea-7cfa1ffb01c2
---
# `/cgthreads` (Code generation threads)

Sets number of cl.exe threads to use for optimization and code generation.

## Syntax

> **`/cgthreads1`**\
> **`/cgthreads2`**\
> **`/cgthreads3`**\
> **`/cgthreads4`**\
> **`/cgthreads5`**\
> **`/cgthreads6`**\
> **`/cgthreads7`**\
> **`/cgthreads8`**

## Arguments

**`cgthreadsN`**\
The maximum number of threads for cl.exe to use, where *N* is a number in the range 1 to 8.

## Remarks

The **`cgthreads`** option specifies the maximum number of threads cl.exe uses in parallel for the optimization and code generation phases of compilation. Notice that there can be no space between **`cgthreads`** and the *number* argument. By default, cl.exe uses four threads, as if **`/cgthreads4`** were specified. If more processor cores are available, a larger *number* value can improve build times. This option is especially useful when it's combined with [`/GL` (Whole Program Optimization)](gl-whole-program-optimization.md).

Multiple levels of parallelism can be specified for a build. The msbuild.exe switch **`/maxcpucount`** specifies the number of MSBuild processes that can be run in parallel. The [`/MP` (Build with Multiple Processes)](mp-build-with-multiple-processes.md) compiler flag specifies the number of cl.exe processes that simultaneously compile the source files. The **`cgthreads`** option specifies the number of threads used by each cl.exe process. The processor can only run as many threads at the same time as there are processor cores. It's not useful to specify larger values for all of these options at the same time, and it can be counterproductive. For more information about how to build projects in parallel, see [Building Multiple Projects in Parallel](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **`cgthreadsN`**, where *`N`* is a value from 1 to 8, and then select **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
