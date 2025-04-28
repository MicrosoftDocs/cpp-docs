---
description: "Learn more about: /arch (x86)"
title: "/arch (x86)"
ms.date: 06/30/2022
f1_keywords: ["/arch:IA32", "/arch:SSE", "/arch:SSE2", "/arch:AVX", "/arch:AVX2", "/arch:AVX512", "/arch:AVX10.1"]
helpviewer_keywords: ["/arch:IA32 compiler option [C++]", "/arch:SSE compiler option [C++]", "/arch:SSE2 compiler option [C++]", "/arch:AVX compiler option [C++]", "/arch:AVX2 compiler option [C++]", "/arch:AVX512 compiler option [C++]", "/arch:AVX10.1 compiler option [C++]"]
---
# `/arch` (x86)

Specifies the architecture for code generation on x86. These switches apply to the x86 (32-bit) targeting version of the compiler. For more information on **`/arch`** for other target architectures, see [`/arch` (ARM64)](arch-arm64.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

> **`/arch:`**\[**`IA32`**|**`SSE`**|**`SSE2`**|**`AVX`**|**`AVX2`**|**`AVX512`**|**`AVX10.1`**]

## Arguments

**`/arch:IA32`**\
Specifies no enhanced instructions and also specifies x87 for floating-point calculations.

**`/arch:SSE`**\
Enables Intel Streaming SIMD Extensions.

**`/arch:SSE2`**\
Enables Intel Streaming SIMD Extensions 2. The default instruction set is SSE2 if no **`/arch`** option is specified.

**`/arch:AVX`**\
Enables Intel Advanced Vector Extensions.

**`/arch:AVX2`**\
Enables Intel Advanced Vector Extensions 2.

**`/arch:AVX512`**\
Enables Intel Advanced Vector Extensions 512.

**`/arch:AVX10.1`**\
Enables Intel Advanced Vector Extensions 10 version 1.

## Remarks

The **`/arch`** option enables or disables the use of certain instruction set extensions, particularly for vector calculation, available in processors from Intel and AMD. In general, more recently introduced processors may support extensions beyond the ones supported by older processors. You should consult the documentation for a particular processor or test for instruction set extension support using [`__cpuid`](../../intrinsics/cpuid-cpuidex.md) before executing code using an instruction set extension. You can also use the [`__check_isa_support`](../../intrinsics/check-isa-arch-support.md) intrinsic to check for more frequently used CPU features.

**`/arch`** only affects code generation for native functions. When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions.

The **`/arch`** options refer to instruction set extensions with the following characteristics:

- **`IA32`** is the legacy 32-bit x86 instruction set without any vector operations and using x87 for floating-point calculations.

- **`SSE`** allows calculation with vectors of up to four single-precision floating-point values. Corresponding scalar floating-point instructions were added as well.

- **`SSE2`** allows calculation with 128-bit vectors of single-precision, double-precision and 1, 2, 4, or 8-byte integer values. Double-precision scalar instructions were also added.

- **`AVX`** introduced an alternative instruction encoding for vector and floating-point scalar instructions. It allows vectors of either 128 bits or 256 bits, and zero-extends all vector results to the full vector size. (For legacy compatibility, SSE-style vector instructions preserve all bits beyond bit 127.) Most floating-point operations are extended to 256 bits.

- **`AVX2`** extends most integer operations to 256-bit vectors, and enables use of Fused Multiply-Add (FMA) instructions.

- **`AVX512`** introduced another instruction encoding form that allows 512-bit vectors, masking, embedded rounding/broadcast, and new instructions. The default vector length for **`AVX512`** is 512 bits and can be changed to 256 bits using the [`/vlen`](vlen.md) flag.

- **`AVX10.1`** adds more instructions on top of **`AVX-512`**. The default vector length for **`AVX10.1`** is 256 bits and can be changed to 512 bits using the [`/vlen`](vlen.md) flag.

The optimizer chooses when and how to use vector instructions depending on which **`/arch`** is specified. Scalar floating-point computations are usually performed with SSE or AVX instructions when available. Some calling conventions specify passing floating-point arguments on the x87 stack, and as a result, your code may use a mixture of both x87 and SSE/AVX instructions for floating-point computations. Integer vector instructions can also be used for some 64-bit integer operations when available.

In addition to the vector and floating-point scalar instructions, each **`/arch`** option may also enable the use of other non-vector instructions that are associated with that option. An example is the CMOVcc instruction family that first appeared on the Intel Pentium Pro processors. Because SSE instructions were introduced with the subsequent Intel Pentium III processor, CMOVcc instructions may be generated except when **`/arch:IA32`** is specified.

Floating-point operations are normally rounded to double-precision (64-bit) in x87 code, but you can use `_controlfp` to modify the FP control word, including setting the precision control to extended precision (80-bit) or single-precision (32-bit). For more information, see [`_control87`, `_controlfp`, `__control87_2`](../../c-runtime-library/reference/control87-controlfp-control87-2.md). SSE and AVX have separate single-precision and double-precision instructions for each operation, so there's no equivalent for SSE/AVX code. It can change how results are rounded when the result of a floating-point operation is used directly in further calculation instead of assigning it to a user variable. Consider the following operations:

```cpp
r = f1 * f2 + d;  // Different results are possible on SSE/SSE2.
```

With explicit assignment:

```cpp
t = f1 * f2;   // Do f1 * f2, round to the type of t.
r = t + d;     // This should produce the same overall result
               // whether x87 stack is used or SSE/SSE2 is used.
```

**`/arch`** and [`/QIfist`](qifist-suppress-ftol.md) can't be used together. The **`/QIfist`** option changes the rounding behavior of floating-point to integer conversion. The default behavior is to truncate (round toward zero), whereas the **`/QIfist`** option specifies use of the [floating-point environment](fp-specify-floating-point-behavior.md) rounding mode. Because the option changes the behavior of all floating-point to integer conversions, **`/QIfist`** is deprecated. When compiling for SSE or AVX, you can round a floating-point value to an integer using the floating-point environment rounding mode by using an intrinsic function sequence:

```cpp
int convert_float_to_int(float x) {
    return _mm_cvtss_si32(_mm_set_ss(x));
}

int convert_double_to_int(double x) {
    return _mm_cvtsd_si32(_mm_set_sd(x));
}
```

The `_M_IX86_FP`, `__AVX__`, `__AVX2__`, `__AVX512F__`, `__AVX512CD__`, `__AVX512BW__`, `__AVX512DQ__`, `__AVX512VL__`, and `__AVX10_VER__` macros indicate which, if any, **`/arch`** compiler option was used. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md). The **`/arch:AVX2`** option, and `__AVX2__` macro were introduced in Visual Studio 2013 Update 2, version 12.0.34567.1. Limited support for **`/arch:AVX512`** was added in Visual Studio 2017, and expanded in Visual Studio 2019. Support for **`/arch:AVX10.1`** was added in Visual Studio 2022.

### To set the `/arch` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify the **Enable Enhanced Instruction Set** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## See also

[`/arch` (Minimum CPU Architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
