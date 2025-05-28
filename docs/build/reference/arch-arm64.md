---
title: "/arch (ARM64)"
description: "Learn more about: /arch (ARM64)"
ms.date: 05/24/2024
---
# `/arch` (ARM64)

Specifies the Arm A-Profile architecture extension for code generation on ARM64. These switches apply to the ARM64 targeting version of the compiler. For more information about **`/arch`** for other target architectures, see [`/arch` (x86)](arch-x86.md), [`/arch` (x64)](arch-x64.md), and [`/arch` (ARM)](arch-arm.md).

## Syntax

>**`/arch:<armv8.0|armv8.1|armv8.2|armv8.3|armv8.4|armv8.5|armv8.6|armv8.7|armv8.8|armv8.9>`**[[+feature]](feature-arm64.md)\
>**`/arch:<armv9.0|armv9.1|armv9.2|armv9.3|armv9.4>`**[[+feature]](feature-arm64.md)

## Arguments

**`/arch:armv8.x`**\
Specifies the Armv8-A architecture, where **`x`** is a required extension value from **`0`** to **`9`**<sup>1</sup>. By default, the compiler uses the **`/arch:armv8.0`** behavior if no architecture is specified.

**`/arch:armv9.x`**<sup>2</sup>\
Specifies the Armv9-A architecture, where **`x`** is a required extension value from **`0`** to **`4`**. By default, the compiler uses the **`/arch:armv8.0`** behavior if no architecture is specified.

## Remarks

You can specify an ARM64 extension from Armv8.0-A through Armv8.9-A, and Armv9.0-A through Armv9.4-A. Optionally, enable one or more architecture features by appending a feature argument to the option<sup>3</sup>. For example, to target Armv8.0-A and enable feature `FEAT_LSE`, append feature argument **`lse`** so that the option becomes **`/arch:armv8.0+lse`**. For more information about available features and their requirements, see [`/feature` (ARM64)](feature-arm64.md)<sup>3</sup>.

> [!NOTE]
> Depending on your version of Visual Studio, the compiler may not yet generate instructions from all feature sets required by the extension level you specify. For example, **`/arch:armv8.1`** allows the *`Interlocked`* intrinsic functions to use the appropriate atomic instruction introduced with the Armv8.1-A extension feature `FEAT_LSE`, but compiler support requires Visual Studio 2022 version 17.2 or later.

The `_M_ARM64` macro is defined by default when compiling for an ARM64 target. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).

The `__ARM_ARCH` macro is defined for `/arch:ARMv8.0` and higher. It indicates the ARM architecture extension level that the compiler is targeting. For more information, see [Predefined macros](../../preprocessor/predefined-macros.md).

```cpp
#if __ARM_ARCH >= 802
    // code that requires ARMv8.2...
#endif
```

**`/arch`** only affects code generation for native functions. When you use [`/clr`](clr-common-language-runtime-compilation.md) to compile, **`/arch`** has no effect on code generation for managed functions.

### To set the `/arch` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/arch:armv8.0`* or replace `armv8.0` with a different ARM64 extension. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

<sup>1</sup> Armv8-A architecture extension `armv8.9` is available starting in Visual Studio 2022 version 17.10.\
<sup>2</sup> Armv9-A architecture extensions are available starting in Visual Studio 2022 version 17.10.\
<sup>3</sup> Architecture feature enablement is available starting in Visual Studio 2022 version 17.10.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[Predefined macros](../../preprocessor/predefined-macros.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
