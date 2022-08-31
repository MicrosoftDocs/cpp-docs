---
description: "Learn more about: /arch (ARM64)"
title: "/arch (ARM64)"
ms.date: 08/30/2022
---
# `/arch` (ARM64)

Specifies the architecture for code generation on ARM64. For more information on **`/arch`** for other target architectures, see [`/arch` (x86)](arch-x86.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

> **`/arch:`**\[**`armv8.0`**-**`armv8.8`**]

## Arguments

**`/arch:armv8.0`** through **`/arch:armv8.8`**\
Optional. Specifies minimum CPU extension requirements for ARMv8.x-A. The default is **`/arch:armv8.0`**.

## Remarks

You may specify a CPU extension requirement from Armv8.0-A through Armv8.8-A. However, depending on your version of Visual Studio, the compiler may not yet generate instructions from all feature sets required by the extension level you specify. For example, **`/arch:armv8.1`** allows the `_Interlocked*` intrinsic functions to use the appropriate atomic instruction that was introduced with the ARMv8.1 extension, FEAT_LSE, but compiler support requires Visual Studio 2022 version 17.2 or later.

The `_M_ARM64` macro is defined by default when compiling for an ARM64 target. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).

When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions. **`/arch`** only affects code generation for native functions.

### To set the `/arch` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/arch:armv8.0`* or higher. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
