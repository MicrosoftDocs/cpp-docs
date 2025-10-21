---
description: "Learn more about: /vlen"
title: "/vlen"
ms.date: 09/24/2024
f1_keywords: ["/vlen", "-vlen"]
helpviewer_keywords: ["specify vector length", "-vlen compiler option [C++]", "vlen compiler option [C++]", "/vlen compiler option [C++]"]
---
# `/vlen`

Specifies the vector length for code generation on x86 and x64. For more information about **`/arch`** for x86 and x64, see [`/arch` (x86)](arch-x86.md) and [`/arch` (x64)](arch-x64.md).


## Syntax

> **`/vlen=`**\[**`256`**|**`512`**]

> **`/vlen`**

## Arguments

**`/vlen=256`**\
Specify a vector length of 256 bits for auto-vectorization and other optimizations.

**`/vlen=512`**\
Specify a vector length of 512 bits for auto-vectorization and other optimizations.

**`/vlen`**\
Specify the default vector length for the selected **`/arch`** setting.

## Remarks

This compiler option was introduced in Visual Studio 2022 17.13.

If a specific **`/vlen`** value isn't specified, the default vector length depends on the **`/arch`** compiler option setting. The **`/vlen`** compiler option can override the default vector length specified by **`/arch:AVX512`**, **`/arch:AVX10.1`**, or **`/arch:AVX10.2`** compiler option. For example:

- **`/arch:AVX512 /vlen=256`** overrides the default vector length of 512 bits specified by **`/arch:AVX512`** to be 256 bits.
- **`/arch:AVX10.1 /vlen=512`** overrides the default vector length of 256 bits specified by **`/arch:AVX10.1`** to be 512 bits.

When the specified **`/vlen`** value is incompatible with specified **`/arch`** compiler option, a warning is generated and default vector length for the **`/arch`** setting is used. For example:

- **`/arch:AVX2 /vlen=512`** generates a warning because AVX2 doesn't support 512-bit vectors. A 256-bit vector length is used in this case.

### To set the `/vlen=256` or `/vlen=512` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/vlen=256`* or *`/vlen=512`*. Choose **OK** to save your changes.

## See also

[`/arch` (Minimum CPU Architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
