---
description: "Learn more about: /arch (ARM64)"
title: "/arch (ARM64)"
ms.date: 06/30/2022
---
# `/arch` (ARM64)

Specifies the architecture for code generation on ARM64. For more information on **`/arch`** for other target architectures, see [`/arch` (x86)](arch-x86.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

> **`/arch:`**\[**`armv8.0`**|**`armv8.8`**]

## Arguments

**`/arch:armv8.0`** or **`/arch:armv8.8`**\
Optional. Specifies minimum CPU extension requirements for ARMv8.x-A. The default is **`/arch:armv8.0`**.

## Remarks

The `_M_ARM64` macro is defined by default when compiling for an ARM64 target. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).

When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions. **`/arch`** only affects code generation for native functions.

### To set the `/arch` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/arch:armv8.0`* or *`/arch:armv8.8`*. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
