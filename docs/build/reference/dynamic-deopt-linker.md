---
title: "/DYNAMICDEOPT (Support C++ Dynamic Debugging) (Preview)"
description: "Learn more about: /DYNAMICDEOPT (Support C++ Dynamic Debugging)."
ms.date: 03/14/2025
f1_keywords: ["VC.Project.VCLinkerTool.GenerateDynamicDeoptInformation", "/dynamicdeopt"]
helpviewer_keywords: ["DYNAMICDEOPT linker option", "/DYNAMICDEOPT linker option", "-DYNAMICDEOPT linker option", "c++ dynamic debugging"]
---
# `/DYNAMICDEOPT` (Support C++ Dynamic Debugging) (Preview)

> [!IMPORTANT]
> The `/DYNAMICDEOPT` linker switch is currently in PREVIEW.
> This information relates to a prerelease feature that might be substantially modified before release. Microsoft makes no warranties, expressed or implied, with respect to the information provided here.

The **`/DYNAMICDEOPT`** linker option, when used with the compiler switch [`/dynamicdeopt`](dynamic-deopt.md), enables [C++ Dynamic Debugging (Preview)](/visualstudio/debugger/cpp-dynamic-debugging), which allows you to debug optimized code as if it were compiled deoptimized and step in anywhere with on-demand function deoptimization.

## Syntax

> **`/DYNAMICDEOPT`**\
> **`/DYNAMICDEOPT:SUFFIX=<suffix>`**\
> **`/DYNAMICDEOPT:SYNC`**

## Arguments

*`suffix`*\
Specify the file extension for the deoptimized output.

With no options and given `test.cpp` as input, the compiler output includes `test.obj`, `test.exe`, and `test.pdb`, as well as `test.alt.obj`, `test.alt.exe`, and `test.alt.pdb`. This switch allows you to change the suffix for the unoptimized binary build artifacts from `.alt` to something else. If you change the suffix, all files must use the new suffix, and it needs to match the name passed to the compiler using [`/dynamicdeopt:suffix` (Preview)](dynamic-deopt.md). You typically don't use this switch unless you need to avoid filename collisions with other files that you have.

*`SYNC`*\
Builds the deoptimized output after building the optimized output instead of in parallel. By default, the compiler spawns a parallel linker to link the unoptimized binary. This switch makes the second link run serially after the first one. This switch is provided in case this better suits your build environment.

## Remarks

This preview flag, available starting with Visual Studio 2022 Version 17.14 Preview 2, applies only to x64 projects.

IncrediBuild 10.24 supports C++ Dynamic Debugging builds.\
FastBuild v1.15 supports C++ Dynamic Debugging builds.

### Set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Linker** > **Debugging** property page.

### Set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## See also

[`/dynamicdeopt` (Enable C++ Dynamic Debugging) (Preview)](dynamic-deopt.md)\
[C++ Dynamic Debugging (Preview)](/visualstudio/debugger/cpp-dynamic-debugging)\
[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
