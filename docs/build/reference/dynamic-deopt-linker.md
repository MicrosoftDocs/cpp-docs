---
description: "Learn more about: /DYNAMICDEOPT (Support C++ Dynamic Debugging)"
title: "/DYNAMICDEOPT (Support C++ Dynamic Debugging)"
ms.date: 3/11/2025
f1_keywords: ["VC.Project.VCLinkerTool.GenerateDynamicDeoptInformation", "/dynamicdeopt"]
helpviewer_keywords: ["DYNAMICDEOPT linker option", "/DYNAMICDEOPT linker option", "-DYNAMICDEOPT linker option", "c++ dynamic debugging"]
---
# | `/DYNAMICDEOPT` (Support C++ Dynamic Debugging)

The **`/DYNAMICDEOPT`** linker option enables [C++ Dynamic Debugging](/visualstudio/debugger/cpp-dynamic-debugging.md), which allows you to debug optimized code as if it had been compiled deoptimized.

## Syntax

> **`/DYNAMICDEOPT`**

## Remarks

This flag, available starting with Visual Studio 2022 Version 17.14 Preview 2, applies only to x64 projects.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Linker** > **Debugging** property page.
1. Modify the **Generate Debug Info** property to enable or disable PDB generation. This property enables **`/DEBUG:FASTLINK`** by default in Visual Studio 2017 and later.
1. Modify the **Generate Full Program Database File** property to enable **`/DEBUG:FULL`** for full PDB generation for every incremental build.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## See also

[C++ Dynamic Debugging](/visualstudio/debugger/cpp-dynamic-debugging.md)\
[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
