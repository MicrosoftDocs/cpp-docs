---
description: "Learn more about: /Zo (Enhance Optimized Debugging)"
title: "/Zo (Enhance Optimized Debugging)"
ms.date: 06/01/2022
f1_keywords: ["-Zo", "/Zo"]
helpviewer_keywords: ["Zo compiler option [C++]", "/Zo compiler option [C++]", "-Zo compiler option [C++]"]
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
---
# /Zo (Enhance Optimized Debugging)

Generate enhanced debugging information for optimized code in non-debug builds.

## Syntax

> **`/Zo`**\[**`-`**]

## Remarks

The **`/Zo`** compiler option generates enhanced debugging information for optimized code. Optimization may use registers for local variables, reorder code, vectorize loops, and inline function calls. These optimizations can obscure the relationship between the source code and the compiled object code. The **`/Zo`** option tells the compiler to generate extra debugging information for local variables and inlined functions. It allows you to see variables in the **Autos**, **Locals**, and **Watch** windows when you step through optimized code in the Visual Studio debugger. It also enables stack traces to show inlined functions in the WinDBG debugger. Debug builds that have disabled optimizations ([`/Od`](od-disable-debug.md)) don't need the extra debugging information generated when **`/Zo`** is specified. Use the **`/Zo`** option to debug Release configurations with optimization turned on. For more information on optimization options, see [`/O` options (Optimize Code)](o-options-optimize-code.md).

The **`/Zo`** option is enabled by default when you specify debugging information with **`/Zi`** or **`/Z7`**. It's disabled by the **`/ZI`** compiler option. Specify **`/Zo-`** to explicitly disable this compiler option.

The **`/Zo`** option is available starting in Visual Studio 2013 Update 3, and it replaces the previously undocumented **`/d2Zi+`** option.

### To set the `/Zo` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include `/Zo` and then choose **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/O` Options (Optimize code)](o-options-optimize-code.md)\
[`/Z7`, `/Zi`, `/ZI` (Debug information format)](z7-zi-zi-debug-information-format.md)\
[Edit and Continue](/visualstudio/debugger/edit-and-continue)
