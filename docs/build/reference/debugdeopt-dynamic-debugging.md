---
description: "Learn more about: /DEBUGDEOPT (Support C++ Dynamic Debugging)"
title: "| [`/DEBUGDEOPT`](debugdeopt-dynamic-debugging.md) | Creates debugging information for retail builds to support C++ Dynamic Debugging. |"
ms.date: 2/20/2025
f1_keywords: ["VC.Project.VCLinkerTool.GenerateDebugDeoptInformation", "/debugdeopt"]
helpviewer_keywords: ["DEBUGDEOPT linker option", "/DEBUGDEOPT linker option", "-DEBUGDEOPT linker option", "c++ dynanmic debugging", "generate dynamic debug info linker option"]
---
# | `/DEBUGDEOPT` (Support C++ Dynamic Debugging)

The **`/DEBUGDEOPT`** linker options enables C++ Dynamic Debugging which allows you to debug optimized code as if it were deoptimized. This option is only available in Visual Studio 2022 Version 17.14 Preview 2 and later.

## Syntax

> **`/DEBUGDEOPT`**

## Remarks

This flag is only available for x64 builds.

The **`/DEBUGDEOPT`** option creates puts the debugging information from linked object and library files into a program database (PDB) file. It updates the PDB during subsequent builds of the program.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Linker** > **Debugging** property page.
1. Modify the **Generate Debug Info** property to enable or disable PDB generation. This property enables **`/DEBUG:FASTLINK`** by default in Visual Studio 2017 and later.
1. Modify the **Generate Full Program Database File** property to enable **`/DEBUG:FULL`** for full PDB generation for every incremental build.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
