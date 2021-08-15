---
description: "Learn more about: Integer Limits"
title: "Integer Limits"
ms.date: "01/29/2018"
helpviewer_keywords: ["integral limits", "limits, integer", "limits.h header file", "integer limits"]
ms.assetid: 6922bdbf-0f49-443b-bc03-ee182e4cbd57
---
# Integer Limits

**Microsoft-specific**

The limits for integer types are listed in the following table. Preprocessor macros for these limits are also defined when you include the standard header file \<climits>.

## Limits on Integer Constants

| Constant | Meaning | Value |
|--|--|--|
| `CHAR_BIT` | Number of bits in the smallest variable that is not a bit field. | 8 |
| `SCHAR_MIN` | Minimum value for a variable of type **`signed char`**. | -128 |
| `SCHAR_MAX` | Maximum value for a variable of type **`signed char`**. | 127 |
| `UCHAR_MAX` | Maximum value for a variable of type **`unsigned char`**. | 255 (0xff) |
| `CHAR_MIN` | Minimum value for a variable of type **`char`**. | -128; 0 if **`/J`** option used |
| `CHAR_MAX` | Maximum value for a variable of type **`char`**. | 127; 255 if **`/J`** option used |
| `MB_LEN_MAX` | Maximum number of bytes in a multicharacter constant. | 5 |
| `SHRT_MIN` | Minimum value for a variable of type **`short`**. | -32768 |
| `SHRT_MAX` | Maximum value for a variable of type **`short`**. | 32767 |
| `USHRT_MAX` | Maximum value for a variable of type **`unsigned short`**. | 65535 (0xffff) |
| `INT_MIN` | Minimum value for a variable of type **`int`**. | -2147483648 |
| `INT_MAX` | Maximum value for a variable of type **`int`**. | 2147483647 |
| `UINT_MAX` | Maximum value for a variable of type **`unsigned int`**. | 4294967295 (0xffffffff) |
| `LONG_MIN` | Minimum value for a variable of type **`long`**. | -2147483648 |
| `LONG_MAX` | Maximum value for a variable of type **`long`**. | 2147483647 |
| `ULONG_MAX` | Maximum value for a variable of type **`unsigned long`**. | 4294967295 (0xffffffff) |
| `LLONG_MIN` | Minimum value for a variable of type **`long long`** | -9223372036854775808 |
| `LLONG_MAX` | Maximum value for a variable of type **`long long`** | 9223372036854775807 |
| `ULLONG_MAX` | Maximum value for a variable of type **`unsigned long long`** | 18446744073709551615 (0xffffffffffffffff) |

If a value exceeds the largest integer representation, the Microsoft compiler generates an error.

## See also

[Floating Limits](../cpp/floating-limits.md)
