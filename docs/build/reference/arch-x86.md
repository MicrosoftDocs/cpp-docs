---
description: "Learn more about: /arch (x86)"
title: "/arch (x86)"
ms.date: "10/01/2019"
ms.assetid: 9dd5a75d-06e4-4674-aade-33228486078d
---
# /arch (x86)

Specifies the architecture for code generation on x86. Also see [/arch (x64)](arch-x64.md) and [/arch (ARM)](arch-arm.md).

## Syntax

```
/arch:[IA32|SSE|SSE2|AVX|AVX2|AVX512]
```

## Arguments

**/arch:IA32**<br/>
Specifies no enhanced instructions and also specifies x87 for floating-point calculations.

**/arch:SSE**<br/>
Enables the use of SSE instructions.

**/arch:SSE2**<br/>
Enables the use of SSE2 instructions. This is the default instruction on x86 platforms if no **/arch** option is specified.

**/arch:AVX**<br/>
Enables the use of Intel Advanced Vector Extensions instructions.

**/arch:AVX2**<br/>
Enables the use of Intel Advanced Vector Extensions 2 instructions.

**/arch:AVX512**<br/>
Enables the use of Intel Advanced Vector Extensions 512 instructions.

## Remarks

The **/arch** option enables or disables the use of certain instruction set extensions, particularly for vector calculation, available in processors from Intel and AMD. In general, more recently introduced processors may support additional extensions over those supported by older processors, although you should consult the documentation for a particular processor or test for instruction set extension support using [__cpuid](../../intrinsics/cpuid-cpuidex.md) before executing code using an instruction set extension.

**/arch** only affects code generation for native functions. When you use [/clr](clr-common-language-runtime-compilation.md) to compile, **/arch** has no effect on code generation for managed functions.

The **/arch** options refer to instruction set extensions with the following characteristics:

- **IA32** is the legacy 32-bit x86 instruction set without any vector operations and using x87 for floating-point calculations.

- **SSE** allows calculation with vectors of up to four single-precision floating-point values. Corresponding scalar floating-point instructions were added as well.

- **SSE2** allows calculation with 128-bit vectors of single-precision, double-precision and 1, 2, 4 or 8 byte integer values. Double-precision scalar instructions were also added.

- **AVX** introduced an alternative instruction encoding for vector and floating-point scalar instructions that allows vectors of either 128 bits or 256 bits, and zero-extends all vector results to the full vector size. (For legacy compatibility, SSE-style vector instructions preserve all bits beyond bit 127.) Most floating-point operations are extended to 256 bits.

- **AVX2** extends most integer operations to 256-bit vectors, and enables use of Fused Multiply-Add (FMA) instructions.

- **AVX512** introduced another instruction encoding form that allows 512-bit vectors, plus certain other optional features. Instructions for additional operations were also added.

The optimizer chooses when and how to use vector instructions depending on which **/arch** is specified. Scalar floating-point computations are performed with SSE or AVX instructions when available. Some calling conventions specify passing floating-point arguments on the x87 stack, and as a result, your code may use a mixture of both x87 and SSE/AVX instructions for floating-point computations. Integer vector instructions can also be used for some 64-bit integer operations when available.

In addition to the vector and floating-point scalar instructions, each **/arch** option may also enable the use of other non-vector instructions that are associated with that option. An example is the CMOVcc instruction family that first appeared on the Intel Pentium Pro processors. Because SSE instructions were introduced with the subsequent Intel Pentium III processor, CMOVcc instructions may be generated except when **/arch:IA32** is specified.

Floating-point operations are normally rounded to double-precision (64-bit) in x87 code, but you can use `_controlfp` to modify the FP control word, including setting the precision control to extended precision (80-bit) or single-precision (32-bit). For more information, see [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md). SSE and AVX have separate single-precision and double-precision instructions for each operation, so there is no equivalent for SSE/AVX code. This can change how results are rounded when the result of a floating-point operation is used directly in further calculation instead of assigning it to a user variable. Consider the following:

```cpp
r = f1 * f2 + d;  // Different results are possible on SSE/SSE2.
```

With explicit assignment:

```cpp
t = f1 * f2;   // Do f1 * f2, round to the type of t.
r = t + d;     // This should produce the same overall result
               // whether x87 stack is used or SSE/SSE2 is used.
```

**/arch** and [/QIfist](qifist-suppress-ftol.md) cannot be used on the same compiland. The **/QIfist** option changes the rounding behavior of floating-point to integer conversion. The default behavior is to truncate (round toward zero), whereas the **/QIfist** option specifies use of the floating-point environment rounding mode. Because this changes the behavior of all floating-point to integer conversions, this flag has been deprecated. When compiling for SSE or AVX you can round a floating-point value to an integer using the floating-point environment rounding mode by using an intrinsic function sequence:

```cpp
int convert_float_to_int(float x) {
    return _mm_cvtss_si32(_mm_set_ss(x));
}

int convert_double_to_int(double x) {
    return _mm_cvtsd_si32(_mm_set_sd(x));
}
```

The `_M_IX86_FP`, `__AVX__`, `__AVX2__`, `__AVX512F__`, `__AVX512CD__`, `__AVX512BW__`, `__AVX512DQ__` and `__AVX512VL__` macros indicate which, if any, **/arch** compiler option was used. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md). The **/arch:AVX2** option and `__AVX2__` macro were introduced in Visual Studio 2013 Update 2, version 12.0.34567.1. Limited support for **/arch:AVX512** was added in Visual Studio 2017, and expanded in Visual Studio 2019.

### To set this compiler option for AVX, AVX2, AVX512, IA32, SSE, or SSE2 in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties**, **C/C++** folder.

1. Select the **Code Generation** property page.

1. Modify the **Enable Enhanced Instruction Set** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## See also

[/arch (Minimum CPU Architecture)](arch-minimum-cpu-architecture.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
