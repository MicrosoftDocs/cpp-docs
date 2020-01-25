---
title: "/Qspectre-load-cf"
description: "Describes the Microsoft C/C++ compiler (MSVC) /Qspectre-load-cf option."
ms.date: "01/08/2020"
helpviewer_keywords: ["/Qspectre-load-cf"]
---
# /Qspectre-load-cf

Specifies compiler generation of serializing instructions for every control-flow instrction containing a load. This performs a subset of the mitigations done by the **/Qspectre-load** flag.

## Syntax

> **/Qspectre-load-cf**

## Remarks

The **/Qspectre-load-cf** option is available in Visual Studio 2019 version 16.5 and later. This option is only available in compilers that target x86 and x64; it is not available in compilers that target ARM. 

**/Qspectre-load-cf** causes the compiler to detect loads from memory used in control flow instructions, and insert serializing instructions after them. When possible, the compiler will split those instructions into a load and control flow transfer to insert a `LFENCE` after the load. 

**/Qspectre-load-cf** causes the compiler to detect control-flow instructions which load from memory, and insert serializing instructions after the load. Where possible, these are split into a load and control flow transfer to ensure the load is protected. There are cases where the compiler cannot split instructions, including the `JMP` instruction, so it uses an alternate mitigation technique.  

The **/Qspectre-load-cf** option is off by default, and supports all optimization levels.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

2. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

3. Select a new value for the **Spectre Mitigation** property. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)\
[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
