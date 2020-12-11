---
description: "Learn more about: /homeparams (Copy Register Parameters to Stack)"
title: "/homeparams (Copy Register Parameters to Stack)"
ms.date: "12/17/2018" 
f1_keywords: ["/homeparams"]
helpviewer_keywords: ["/homeparams compiler option [C++]", "-homeparams compiler option [C++]"]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
---
# /homeparams (Copy Register Parameters to Stack)

Forces parameters passed in registers to also be written to their locations on the stack upon function entry.

## Syntax

> **/homeparams**

## Remarks

This compiler option is only available in the native and cross-compilers that target x64.

The x64 calling convention requires stack space to be allocated for all parameters, even for parameters passed in registers. For more information, see [Parameter Passing](../../build/x64-calling-convention.md#parameter-passing). By default, the register parameters aren't copied into the stack space allocated for them in release builds. This makes it difficult to debug an optimized release build of your program.

For release builds, you can use the **/homeparams** option to force the compiler to copy register parameters to the stack, to ensure that you can debug your application. **/homeparams** does imply a performance disadvantage, because it requires an extra cycle to load the register parameters onto the stack.

In debug builds, the stack is always populated with parameters passed in registers.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Open the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
