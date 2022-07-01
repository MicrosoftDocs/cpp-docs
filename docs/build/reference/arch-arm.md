---
description: "Learn more about: /arch (ARM)"
title: "/arch (ARM)"
ms.date: 07/01/2022
---
# `/arch` (ARM)

Specifies the architecture for code generation on ARM. For more information on **`/arch`** for other target architectures, see [`/arch` (ARM64)](arch-arm64.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (x86)](arch-x86.md)

## Syntax

> **`/arch:`**\[**`ARMv7VE`**|**`VFPv4`**]

## Arguments

**`/arch:ARMv7VE`**\
Enables the use of ARMv7VE Virtualization Extensions instructions.

**`/arch:VFPv4`**\
Enables the use of ARM VFPv4 instructions. If this option isn't specified, VFPv3 is the default.

## Remarks

The `_M_ARM_FP` macro (for ARM only) indicates which, if any, **`/arch`** compiler option was used. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).

When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions. **`/arch`** only affects code generation for native functions.

### To set the `/arch:ARMv7VE` or `/arch:VFPv4` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add `/arch:ARMv7VE` or `/arch:VFPv4`.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
