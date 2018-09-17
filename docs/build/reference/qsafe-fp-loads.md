---
title: "/Qsafe_fp_loads | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Qsafe_fp_loads

Requires integer move instructions for floating-point values and disables certain floating-point load optimizations.

## Syntax

> **/Qsafe_fp_loads**

## Remarks

**/Qsafe_fp_loads** is only available in the compilers that target x86; it is not available in the compilers that target x64 or ARM.

**/Qsafe_fp_loads** forces the compiler to use integer move instructions instead of floating-point move instructions to move data between memory and MMX registers. This option also disables register load optimization for floating-point values that can be loaded in multiple control paths when the value may cause an exception on load—for example, a NaN value.

This option is overridden by [/fp:except](../../build/reference/fp-specify-floating-point-behavior.md). **/Qsafe_fp_loads** specifies a subset of the compiler behavior that's specified by **/fp:except**.

**/Qsafe_fp_loads** is incompatible with [/clr](../../build/reference/clr-common-language-runtime-compilation.md) and [/fp:fast](../../build/reference/fp-specify-floating-point-behavior.md). For more information about floating point compiler options, see [/fp (Specify Floating-Point Behavior)](../../build/reference/fp-specify-floating-point-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box. Choose **OK** to apply the change.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)
[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)
