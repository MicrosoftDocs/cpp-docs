---
description: "Learn more about the /Zc:zeroSizeArrayNew (Call member new/delete on arrays) compiler option."
title: "/Zc:zeroSizeArrayNew (Call member new/delete on arrays)"
ms.date: 11/08/2022
f1_keywords: ["/Zc:zeroSizeArrayNew"]
helpviewer_keywords: ["-Zc:zeroSizeArrayNew compiler option (C++)", "/Zc:zeroSizeArrayNew compiler option (C++)"]
---
# `/Zc:zeroSizeArrayNew` (Call member new/delete on arrays)

The **`/Zc:zeroSizeArrayNew`** compiler option calls member `new` and `delete` for zero-length arrays of objects.

## Syntax

> **`/Zc:zeroSizeArrayNew`**\[**`-`**]

## Remarks

The **`/Zc:zeroSizeArrayNew`** compiler option enables calls to member `new` and `delete` for zero-length arrays of objects of class types with virtual destructors. This behavior conforms to the standard. This compiler option is new in Visual Studio 2019 version 16.9 and is enabled by default in all compiler modes. Previously, in code compiled by versions before Visual Studio 2019 version 16.9, the compiler invoked global `new` and `delete` on zero-length arrays of objects of class types with virtual destructors.

The **`/Zc:zeroSizeArrayNew`** option may cause a breaking change in code that relied on the previous non-conforming behavior. To restore the previous behavior, use the **`/Zc:zeroSizeArrayNew-`** compiler option.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:zeroSizeArrayNew`* or *`/Zc:zeroSizeArrayNew-`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
