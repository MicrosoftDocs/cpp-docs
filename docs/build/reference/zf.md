---
description: "Learn more about: /Zf (Faster PDB generation)"
title: "/Zf (Faster PDB generation)"
ms.date: "03/29/2018"
f1_keywords: ["/Zf"]
helpviewer_keywords: ["/Zf", "-Zf"]
---
# /Zf (Faster PDB generation)

Enable faster PDB generation in parallel builds by minimizing RPC calls to mspdbsrv.exe.

## Syntax

> **/Zf**

## Remarks

The **/Zf** option enables compiler support for faster generation of PDB files when using the [/MP (Build with Multiple Processes)](mp-build-with-multiple-processes.md) option, or when the build system (for example, [MSBuild](/visualstudio/msbuild/msbuild-reference) or [CMake](../cmake-projects-in-visual-studio.md)) may run multiple cl.exe compiler processes at the same time. This option causes the compiler front end to delay generation of type indexes for each type record in the PDB file until the end of compilation, then requests them all in a single RPC call to mspdbsrv.exe, instead of making an RPC request for each record. This can substantially improve build throughput by reducing the RPC load on the mspdbsrv.exe process in an environment where multiple cl.exe compiler processes run simultaneously.

Because the **/Zf** option only applies to PDB generation, it requires the [/Zi](z7-zi-zi-debug-information-format.md) or [/ZI](z7-zi-zi-debug-information-format.md) option.

The **/Zf** option is available beginning in Visual Studio 2017 version 15.1, where it is off by default. Starting in Visual Studio 2017 version 15.7 Preview 3, this option is on by default when the **/Zi** or **/ZI** option is enabled.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zf** and then choose **OK**.

## See also

[Compiler Options Listed Alphabetically](compiler-options-listed-alphabetically.md)<br/>
[/MP (Build with Multiple Processes)](mp-build-with-multiple-processes.md)<br/>
