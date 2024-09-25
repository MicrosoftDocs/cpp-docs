---
description: "Learn more about: /vlen"
title: "/vlen"
ms.date: 09/24/2024
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
---
# `/vlen`

Specifies the vector length for automatic code generation on x86 and x64. For more information on **`/arch`** for x86 and x64, see [`/arch` (x86)](arch-x86.md) and [`/arch` (x64)](arch-x64.md) .

## Syntax

> **`/vlen=`**\[**`256`**|**`512`**]

> **`/vlen`**

## Arguments

**`/vlen=256`**\
Specifies the vector length of 256-bit for automatic code generation.

**`/vlen=512`**\
Specifies the vector length of 512-bit for automatic code generation.

**`/vlen`**\
Specifies the default vector length for the selected **`/arch`** setting.

## Remarks

The **`/vlen`** flag provides the capability to change the default vector length specified by **`/arch`** flags. Since the valid values of **`/vlen`** are only 256 and 512, this can change the default vector length for **`/arch:AVX512`** and **`/arch:AVX10.x`** flags. A compiler warning is generated if an **`/arch`** flag does not support the vector length specified by the **`/vlen`** flag.

### To set the `/vlen=256` or `/vlen=512` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. In the **Vector Length** drop-down box, choose **256** or **512**.

## See also

[`/arch` (Minimum CPU Architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)