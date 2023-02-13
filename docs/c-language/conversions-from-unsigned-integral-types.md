---
description: "Learn more about: Conversions from unsigned integral types"
title: "Conversions from unsigned integral types"
ms.date: 12/06/2022
helpviewer_keywords: ["integers, converting", "type casts, involving integers", "data type conversion [C++], signed and unsigned integers", "type conversion [C++], signed and unsigned integers", "integral conversions, from unsigned"]
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
---
# Conversions from unsigned integral types

When an unsigned integer is converted to an integer or floating-point type, if the original value is representable in the result type the value is unchanged.

When the compiler converts an unsigned integer to an integer of greater size, the value is zero-extended. When converted to an integer of smaller size, the high-order bits are truncated. The result is interpreted using the result type, as shown in this example:

```C
unsigned k = 65533;
short j;

j = k;
printf_s( "%hd\n", j );   // Prints -3
```

When the compiler converts an unsigned integer to a floating-point type, if the original value isn't representable exactly in the result type, the result is the next higher or lower representable value.

See [Storage of basic types](../c-language/storage-of-basic-types.md) for information about the sizes of integral and floating-point types.

**Microsoft Specific**

In the Microsoft compiler, **`unsigned`** (or **`unsigned int`**) and **`unsigned long`** are distinct but equivalent types. Conversion of an **`unsigned int`** value proceeds in the same way as conversion of an **`unsigned long`**.

**END Microsoft Specific**

The following table summarizes conversions from unsigned integral types.

## Table of conversions from unsigned integral types

| From | To | Method |
|---|---|---|
| **`unsigned char`** | **`char`** | Preserve bit pattern; high-order bit becomes sign bit |
| **`unsigned char`** | **`short`** | Zero-extend |
| **`unsigned char`** | **`long`** | Zero-extend |
| **`unsigned char`** | **`long long`** | Zero-extend |
| **`unsigned char`** | **`unsigned short`** | Zero-extend |
| **`unsigned char`** | **`unsigned long`** | Zero-extend |
| **`unsigned char`** | **`unsigned long long`** | Zero-extend |
| **`unsigned char`** | **`float`** | Convert exactly to **`float`** |
| **`unsigned char`** | **`double`** | Convert exactly to **`double`** |
| **`unsigned char`** | **`long double`** | Convert exactly to **`long double`** |
| **`unsigned short`** | **`char`** | Preserve low-order byte |
| **`unsigned short`** | **`short`** | Preserve bit pattern; high-order bit becomes sign bit |
| **`unsigned short`** | **`long`** | Zero-extend |
| **`unsigned short`** | **`long long`** | Zero-extend |
| **`unsigned short`** | **`unsigned char`** | Preserve low-order byte |
| **`unsigned short`** | **`unsigned long`** | Zero-extend |
| **`unsigned short`** | **`unsigned long long`** | Zero-extend |
| **`unsigned short`** | **`float`** | Convert exactly to **`float`** |
| **`unsigned short`** | **`double`** | Convert exactly to **`double`** |
| **`unsigned short`** | **`long double`** | Convert exactly to **`long double`** |
| **`unsigned long`** | **`char`** | Preserve low-order byte |
| **`unsigned long`** | **`short`** | Preserve low-order word |
| **`unsigned long`** | **`long`** | Preserve bit pattern; high-order bit becomes sign bit |
| **`unsigned long`** | **`long long`** | Zero-extend |
| **`unsigned long`** | **`unsigned char`** | Preserve low-order byte |
| **`unsigned long`** | **`unsigned short`** | Preserve low-order word |
| **`unsigned long`** | **`unsigned long long`** | Zero-extend |
| **`unsigned long`** | **`float`** | Convert to nearest representable **`float`** |
| **`unsigned long`** | **`double`** | Convert exactly to **`double`** |
| **`unsigned long`** | **`long double`** | Convert exactly to **`long double`** |
| **`unsigned long long`** | **`char`** | Preserve low-order byte |
| **`unsigned long long`** | **`short`** | Preserve low-order word |
| **`unsigned long long`** | **`long`** | Preserve low-order dword |
| **`unsigned long long`** | **`long long`** | Preserve bit pattern; high-order bit becomes sign bit |
| **`unsigned long long`** | **`unsigned char`** | Preserve low-order byte |
| **`unsigned long long`** | **`unsigned short`** | Preserve low-order word |
| **`unsigned long long`** | **`unsigned long`** | Preserve low-order dword |
| **`unsigned long long`** | **`float`** | Convert to nearest representable **`float`** |
| **`unsigned long long`** | **`double`** | Convert to nearest representable **`double`** |
| **`unsigned long long`** | **`long double`** | Convert to nearest representable **`long double`** |

## See also

[Assignment conversions](../c-language/assignment-conversions.md)
