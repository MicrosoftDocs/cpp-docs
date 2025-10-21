---
description: "Learn more about: /arch (x64)"
title: "/arch (x64)"
ms.date: 10/21/2025
f1_keywords: ["/arch:SSE2", "/arch:SSE4.2", "/arch:AVX", "/arch:AVX2", "/arch:AVX512", "/arch:AVX10.1", /arch:AVX10.2"]
helpviewer_keywords: ["/arch:SSE2 compiler option [C++]", "/arch:SSE4.2 compiler option [C++]", "/arch:AVX compiler option [C++]", "/arch:AVX2 compiler option [C++]", "/arch:AVX512 compiler option [C++]", "/arch:AVX10.1 compiler option [C++]", "/arch:AVX10.2 compiler option [C++]"]
---
# `/arch` (x64)

Specifies the architecture for code generation on x64. These switches apply to the x64 targeting version of the compiler. For more information on **`/arch`** for other target architectures, see [`/arch` (x86)](arch-x86.md), [`/arch` (ARM64)](arch-arm64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

> **`/arch:`**\[**`SSE2`**|**`SSE4.2`**|**`AVX`**|**`AVX2`**|**`AVX512`**|**`AVX10.1`**|**`AVX10.2`**]

## Arguments

**`/arch:SSE2`**\
Enables Intel Streaming SIMD Extensions 2. The default instruction set is SSE2 if no **`/arch`** option is specified.

**`/arch:SSE4.2`**\
Enables Intel Streaming SIMD Extensions 4.2.

**`/arch:AVX`**\
Enables Intel Advanced Vector Extensions.

**`/arch:AVX2`**\
Enables Intel Advanced Vector Extensions 2.

**`/arch:AVX512`**\
Enables Intel Advanced Vector Extensions 512.

**`/arch:AVX10.1`**\
Enables Intel Advanced Vector Extensions 10 version 1.

**`/arch:AVX10.2`**\
Enables Intel Advanced Vector Extensions 10 version 2.

## Remarks

The **`/arch`** option enables the use of certain instruction set extensions, particularly for vector calculation, available in processors from Intel and AMD. In general, more recently introduced processors may support extensions beyond the ones supported by older processors, although you should consult the documentation for a particular processor or test for instruction set extension support using [`__cpuid`](../../intrinsics/cpuid-cpuidex.md) before executing code using an instruction set extension. You can also use the [`__check_isa_support`](../../intrinsics/check-isa-arch-support.md) intrinsic to check for more frequently used CPU features.

**`/arch`** only affects code generation for native functions. When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions.

The processor extensions have the following characteristics:

- The default mode uses SSE2 instructions for scalar floating-point and vector calculations. These instructions allow calculation with 128-bit vectors of single-precision, double-precision and 1, 2, 4 or 8-byte integer values, as well as single-precision and double-precision scalar floating-point values.

- **`SSE4.2`** uses the full set of SSE instructions for floating-point scalar, vector, and integer vector calculations.

- **`AVX`** introduced an alternative instruction encoding for vector and floating-point scalar instructions. It allows vectors of either 128 bits or 256 bits, and zero-extends all vector results to the full vector size. (For legacy compatibility, SSE-style vector instructions preserve all bits beyond bit 127.) Most floating-point operations are extended to 256 bits.

- **`AVX2`** extends most integer operations to 256-bit vectors and enables use of Fused Multiply-Add (FMA) instructions.

- **`AVX-512`** introduced another instruction encoding form that allows 512-bit vectors, masking, embedded rounding/broadcast, and new instructions. The default vector length for **`AVX-512`** is 512 bits and can be changed to 256 bits using the [`/vlen`](vlen.md) flag.

- **`AVX10.1`** adds more instructions on top of **`AVX-512`**. The default vector length for **`AVX10.1`** is 256 bits and can be changed to 512 bits using the [`/vlen`](vlen.md) flag. This option was introduced in Visual Studio 2022 17.13.

- **`AVX10.2`** expands the instruction set introduced in `AVX10.1`. The default vector length for **`AVX10.2`** is 256 bits and can be increased to 512 bits using the [`/vlen`](vlen.md) flag.
`AVX10.2` adds instructions that are enhancements of legacy instructions and media acceleration instructions. For more information about the new instructions, see section 3.1.4 in the [Intel Advanced Vector Extensions 10.2 Architecture Specification](https://www.intel.com/content/www/us/en/content-details/856721/intel-advanced-vector-extensions-10-2-intel-avx10-2-architecture-specification.html) The AI related instructions in that document are supported via MSVC intrinsics instead of being directly emitted because their data types aren’t supported by MSVC. This compiler option was introduced in Visual Studio 2026.

Each **`/arch`** option may also enable the use of other non-vector instructions that are associated with that option. An example is the use of certain BMI instructions when **`/arch:AVX2`** is specified.

The `__AVX__` preprocessor symbol is defined when the **`/arch:AVX`**, **`/arch:AVX2`**, **`/arch:AVX512`**, or  **`/arch:AVX10.1`** compiler option is specified.
The `__AVX2__` preprocessor symbol is defined when the **`/arch:AVX2`**, **`/arch:AVX512`**, or **`/arch:AVX10.1`** compiler option is specified.
The `__AVX512F__`, `__AVX512CD__`, `__AVX512BW__`, `__AVX512DQ__`, and `__AVX512VL__` preprocessor symbols are defined when the **`/arch:AVX512`**, or **`/arch:AVX10.1`** compiler option is specified.
The `__AVX10_VER__` preprocessor symbol is defined when the **`/arch:AVX10.1`** compiler option is specified. It indicates the AVX10 version the compiler is targeting. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).
The **`/arch:AVX2`** option was introduced in Visual Studio 2013 Update 2, version 12.0.34567.1.
Limited support for **`/arch:AVX512`** was added in Visual Studio 2017, and expanded in Visual Studio 2019.
Support for **`/arch:AVX10.1`** was added in Visual Studio 2022.

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
