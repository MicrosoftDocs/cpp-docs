---
description: "Learn more about: /feature (x64)"
title: "/feature (x64)"
ms.date: 05/21/2026
---
# `/feature` (x64)

Enable one or more architecture features for x64 code generation.

> [!NOTE]
> **`/feature:APX`** support is experimental and subject to change.

## Syntax

> **`/feature:<arg>`**

## Arguments

To enable one or more features the x64 target supports, specify one or more of the following feature arguments:

| Feature argument | Description | Supported in version |
|--|--|--|
| **`APX`** | Enables preview support for Intel APX (Advanced Performance Extensions). Enables the compiler to target various APX features like Extended General-Purpose Registers (EGPRs), New Data Destination (NDD), No-Flags Update (NF), new conditional ISA and optimized registers save/restore operations. For more information, see [Intel Advanced Performance Extensions (APX)](https://www.intel.com/content/www/us/en/developer/articles/technical/advanced-performance-extensions-apx.html). | MSVC Build Tools 14.51 (Preview Support) |

## Remarks

Example usage: to enable APX, specify **`/feature:APX`**.

When **`/feature:APX`** is specified, the following preprocessor macros are defined: `__APX_F__`, `__CCMP__`, `__CF__`, `__EGPR__`, `__NDD__`, `__NF__`, `__PPX__`, `__PUSH2POP2__`, and `__ZU__`. For more information, see [Microsoft-specific predefined macros](../../preprocessor/predefined-macros.md).

APX extends the x64 architecture with new registers and instructions, which affects how the compiler generates calls, preserves state across function boundaries, and emits unwind metadata. The following articles describe the x64 conventions and unwind information that APX builds on:

- [Caller/callee saved registers](../x64-calling-convention.md#callercallee-saved-registers)\
  Describes which registers a callee must preserve and which the caller is responsible for saving across a call on x64.
- [setjmp/longjmp](../x64-calling-convention.md#setjmplongjmp)\
  Explains how nonlocal jumps capture and restore nonvolatile register state on x64, including the registers that participate in the jump buffer.
- [Register volatility and preservation](../x64-software-conventions.md#register-volatility-and-preservation)\
  Summarizes the x64 software conventions for volatile and nonvolatile general-purpose, `XMM`, `YMM`, and `ZMM` registers, and the rules callees must follow to preserve them.
- [Exception handling unwind information V3](../x64-unwind-information-v3.md)\
  Preview specification of the V3 unwind information format used to describe prologs, epilogs, and frame layout for x64 code, including the extended state introduced by APX.

### To set the `/feature` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.
1. In the **Additional options** box, add *`/feature:APX`*. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/arch` (x64)](arch-x64.md)\
[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
