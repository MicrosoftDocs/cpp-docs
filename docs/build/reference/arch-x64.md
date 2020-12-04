---
description: "Learn more about: /arch (x64)"
title: "/arch (x64)"
ms.date: "10/01/2019"
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
---
# /arch (x64)

Specifies the architecture for code generation on x64. Also see [/arch (x86)](arch-x86.md) and [/arch (ARM)](arch-arm.md).

## Syntax

```
/arch:[AVX|AVX2|AVX512]
```

## Arguments

**/arch:AVX**<br/>
Enables the use of Intel Advanced Vector Extensions instructions.

**/arch:AVX2**<br/>
Enables the use of Intel Advanced Vector Extensions 2 instructions.

**/arch:AVX512**<br/>
Enables the use of Intel Advanced Vector Extensions 512 instructions.

## Remarks

The **/arch** option enables the use of certain instruction set extensions, particularly for vector calculation, available in processors from Intel and AMD. In general, more recently introduced processors may support additional extensions over those supported by older processors, although you should consult the documentation for a particular processor or test for instruction set extension support using [__cpuid](../../intrinsics/cpuid-cpuidex.md) before executing code using an instruction set extension.

**/arch** only affects code generation for native functions. When you use [/clr](clr-common-language-runtime-compilation.md) to compile, **/arch** has no effect on code generation for managed functions.

The processor extensions have the following characteristics:

- The default mode uses SSE2 instructions for scalar floating-point and vector calculations. These instructions allow calculation with 128-bit vectors of single-precision, double-precision and 1, 2, 4 or 8 byte integer values, as well as single-precision and double-precision scalar floating-point values.

- **AVX** introduced an alternative instruction encoding for vector and floating-point scalar instructions that allows vectors of either 128 bits or 256 bits, and zero-extends all vector results to the full vector size. (For legacy compatibility, SSE-style vector instructions preserve all bits beyond bit 127.) Most floating-point operations are extended to 256 bits.

- **AVX2** extends most integer operations to 256-bit vectors and enables use of Fused Multiply-Add (FMA) instructions.

- **AVX-512** introduced another instruction encoding form that allows 512-bit vectors, plus certain other optional features. Instructions for additional operations were also added.

Each **/arch** option may also enable the use of other non-vector instructions that are associated with that option. An example is the use of certain BMI instructions when **/arch:AVX2** is specified.

The `__AVX__` preprocessor symbol is defined when the **/arch:AVX**, **/arch:AVX2** or **/arch:AVX512** compiler option is specified. The `__AVX2__` preprocessor symbol is defined when the **/arch:AVX2** or **/arch:AVX512** compiler option is specified. The `__AVX512F__`, `__AVX512CD__`, `__AVX512BW__`, `__AVX512DQ__` and `__AVX512VL__` preprocessor symbols are defined when the **/arch:AVX512** compiler option is specified. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md). The **/arch:AVX2** option was introduced in Visual Studio 2013 Update 2, version 12.0.34567.1. Limited support for **/arch:AVX512** was added in Visual Studio 2017, and expanded in Visual Studio 2019.

### To set the /arch:AVX, /arch:AVX2 or /arch:AVX512 compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties**, **C/C++** folder.

1. Select the **Code Generation** property page.

1. In the **Enable Enhanced Instruction Set** drop-down box, choose **Advanced Vector Extensions (/arch:AVX)**, **Advanced Vector Extensions 2 (/arch:AVX2)** or **Advanced Vector Extensions 512 (/arch:AVX512)**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## See also

[/arch (Minimum CPU Architecture)](arch-minimum-cpu-architecture.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
