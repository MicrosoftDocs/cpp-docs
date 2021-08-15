---
description: "Learn more about: Storage of String Literals"
title: "Storage of String Literals"
ms.date: "11/04/2016"
helpviewer_keywords: ["string literals, storage"]
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
---
# Storage of String Literals

The characters of a literal string are stored in order at contiguous memory locations. An escape sequence (such as **\\\\** or **\\"**) within a string literal counts as a single character. A null character (represented by the **\0** escape sequence) is automatically appended to, and marks the end of, each string literal. (This occurs during [translation phase](../preprocessor/phases-of-translation.md) 7.) Note that the compiler may not store two identical strings at two different addresses. [/GF](../build/reference/gf-eliminate-duplicate-strings.md) forces the compiler to place a single copy of identical strings into the executable file.

## Remarks

**Microsoft Specific**

Strings have static storage duration. See [Storage Classes](../c-language/c-storage-classes.md) for information about storage duration.

**END Microsoft Specific**

## See also

[C String Literals](../c-language/c-string-literals.md)
