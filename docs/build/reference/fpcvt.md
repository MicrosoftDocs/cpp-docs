---
description: "Learn more about: /fpcvt (Floating-point to integer conversion compatibility)"
title: "/fpcvt (Floating-point to unsigned integer conversion compatibility)"
ms.date: 11/03/2021
f1_keywords: ["/fpcvt", "-fpcvt"]
helpviewer_keywords: ["-fpcvt compiler option [C++]", "/fpcvt compiler option [C++]"]
---
# `/fpcvt` (Floating-point to integer conversion compatibility)

Specifies how the compiler treats floating-point conversions to integer types.

## Syntax

> **`/fpcvt:IA`**\
> **`/fpcvt:BC`**

### Arguments

#### <a name="fpcvt-ia"></a> `/fpcvt:IA`

The **`/fpcvt:IA`** option tells the compiler to convert floating point values to integers so the results are compatible with the Intel AVX-512 conversion instructions. This behavior is the usual behavior in Visual Studio 2019 for x86 targets.

#### <a name="fpcvt-bc"></a> `/fpcvt:BC`

The **`/fpcvt:BC`** option tells the compiler to convert floating point values to unsigned integers so the results are compatible with the Visual Studio 2017 and earlier compilers. This behavior is the default in Visual Studio 2022.

## Remarks

In Visual Studio 2019 version 16.8 and later versions, the **`/fpcvt`** compiler option can be used to control the results of floating-point to integer conversions. The **`/fpcvt:BC`** option specifies the default behavior of Visual Studio 2022, which is the same as the behavior of Visual Studio 2017 and earlier versions. The **`/fpcvt:IA`** option specifies behavior compatible with Intel Architecture (IA) AVX-512 conversion instruction behavior. This option can be used with either 32-bit x86 or 64-bit x64 targets, and it applies whether [`/arch:AVX512`](arch-x86.md) is specified or not.

For Visual Studio 2019, the default behavior for x64 targets is consistent with **`/fpcvt:BC`** unless **`/arch:AVX512`** is specified. Usually, the behavior for x86 targets is consistent with **`/fpcvt:IA`**, except under **`/arch:IA32`**, **`/arch:SSE`**, or sometimes where the result of a function call is directly converted to an unsigned integer. Use of **`/fpcvt`** overrides the default, so all conversions are handled consistently on either target. The behavior of conversions for ARM and ARM64 targets isn't consistent with either **`/fpcvt:BC`** or **`/fpcvt:IA`**.

Standard C++ specifies that if a truncated floating-point value is exactly representable in an integer type, it must have that value when converted to that type. Otherwise, any behavior at all is allowed. Both **`/fpcvt`** options conform with Standard C++. The only difference is in what values are returned for invalid source values.

The **`/fpcvt:IA`** option causes any invalid conversion to return a single *sentinel* value, which is the destination value farthest from zero. For conversion to signed types, the sentinel is the minimum value for that type. Unsigned types use the maximum value. Floating-point operations may return a Not-a-Number (NaN) value to indicate an invalid operation. That indicator isn't an option for conversion to integer types, which don't have NaN values. The sentinel is used as a proxy for a NaN value, although it can also be the result of a valid conversion.

The **`/fpcvt:BC`** option also makes conversion to signed types return the minimum possible value when the source is invalid. However, conversion to unsigned integer types is based on conversion to **`long long`**. To convert a value to **`unsigned int`**, the compiler first converts it to type **`long long`**. The compiler then truncates the result to 32 bits. To convert a value to **`unsigned long long`**, valid source values that are too high for a **`long long`** are handled as a special case. All other values are first converted to **`long long`** and then recast to **`unsigned long long`**.

The **`/fpcvt`** options are new in Visual Studio 2019 version 16.8. If you specify more than one **`/fpcvt`** option on the command line, the later option takes precedence and the compiler generates a warning.

### Intrinsic functions for conversions

You can specify the behavior of a specific conversion independently of the **`/fpcvt `** option, which applies globally. The compiler provides intrinsic sentinel conversion functions for conversions compatible with **`/fpcvt:IA`**. For more information, see [Sentinel conversion functions](../../intrinsics/sentinel-conversion-functions.md). The compiler also provides saturation conversion functions compatible with conversions on ARM or ARM64 target architectures. For more information, see [Saturation conversion functions](../../intrinsics/saturation-conversion-functions.md).

The compiler also supports intrinsic conversion functions that execute as quickly as possible for valid conversions. These functions may generate any value or throw an exception for an invalid conversion. The results depend on the target platform, compiler options, and context. They're useful for handling values that have already been range-checked, or values generated in a way that can't cause an invalid conversion. For more information, see [Fast conversion functions](../../intrinsics/fast-conversion-functions.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add **`/fpcvt:IA`** or **`/fpcvt:BC`**. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[Fast conversion functions](../../intrinsics/fast-conversion-functions.md)\
[Saturation conversion functions](../../intrinsics/saturation-conversion-functions.md)\
[Sentinel conversion functions](../../intrinsics/sentinel-conversion-functions.md)
