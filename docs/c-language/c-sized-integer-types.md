---
description: "Learn more about: C Sized Integer Types"
title: "C Sized Integer Types"
ms.date: 07/22/2020
helpviewer_keywords: ["sized integer types"]
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
---
# C Sized Integer Types

**Microsoft Specific**

Microsoft C features support for sized integer types. You can declare 8-, 16-, 32-, or 64-bit integer variables by using the `__intN` type specifier, where *`N`* is the size, in bits, of the integer variable. The value of *n* can be 8, 16, 32, or 64. The following example declares one variable of each of the four types of sized integers:

```C
__int8  nSmall;     // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

The first three types of sized integers are synonyms for the ANSI types that have the same size. They're useful for writing portable code that behaves identically across multiple platforms. The **`__int8`** data type is synonymous with type **`char`**, **`__int16`** is synonymous with type **`short`**, **`__int32`** is synonymous with type **`int`**, and **`__int64`** is synonymous with type **`long long`**.

**END Microsoft Specific**

## See also

[Storage of Basic Types](../c-language/storage-of-basic-types.md)
