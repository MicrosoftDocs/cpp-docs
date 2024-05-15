---
description: "Learn more about: /arch (ARM64)"
title: "/arch (ARM64)"
ms.date: 05/15/2024
---
# `/arch` (ARM64)

Specifies the Arm A-Profile architecture extension for code generation on ARM64. For more information on **`/arch`** for other target architectures, see [`/arch` (x86)](arch-x86.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

>**`/arch:<armv8.0|armv8.1|armv8.2|armv8.3|armv8.4|armv8.5|armv8.6|armv8.7|armv8.8|armv8.9>`**[[+feature]](feature-arm64.md)\
>**`/arch:<armv9.0|armv9.1|armv9.2|armv9.3|armv9.4>`**[[+feature]](feature-arm64.md)

## Arguments

**`/arch:armv8.x`**\
Specifies the Armv8-A architecture, where **`x`** is a required extension value from **`0`** to **`9`**. By default, the compiler uses the **`/arch:armv8.0`** behavior if no architecture is specified.

**`/arch:armv9.x`**\
Specifies the Armv9-A architecture, where **`x`** is a required extension value from **`0`** to **`4`**. By default, the compiler uses the **`/arch:armv8.0`** behavior if no architecture is specified.

## Remarks

You may specify an ARM64 extension from Armv8.0-A through Armv8.9-A and Armv9.0-A through Armv9.4-A. Optionally, one or more architecture features can be enabled by appending a feature argument to the option. For example, in order to target Armv8.0-A and enable feature FEAT_LSE, append feature argument **`lse`** so that the option becomes **`/arch:armv8.0+lse`**. For more information about available features and their requirements, see [`/feature` (ARM64)](feature-arm64.md).

> [!NOTE]
> Depending on your version of Visual Studio, the compiler may not yet generate instructions from all feature sets required by the extension level you specify. For example, **`/arch:armv8.1`** allows the `_Interlocked*` intrinsic functions to use the appropriate atomic instruction that was introduced with the Armv8.1-A extension feature FEAT_LSE, but compiler support requires Visual Studio 2022 version 17.2 or later.

The `_M_ARM64` macro is defined by default when compiling for an ARM64 target. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).

When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions. **`/arch`** only affects code generation for native functions.

### To set the `/arch` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/arch:armv8.0`* or a different ARM64 extension. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
