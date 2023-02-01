---
title: "SBCS and MBCS Data Types"
description: "How to represent single and multibyte characters in the Microsoft C runtime."
ms.topic: "conceptual"
ms.date: "04/11/2018"
f1_keywords: ["_MBCS", "MBCS", "SBCS"]
helpviewer_keywords: ["SBCS and MBCS data types", "data types [C], MBCS and SBCS"]
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
---
# SBCS and MBCS data types

Any Microsoft MBCS run-time library routine that handles only a single multibyte character, or a single byte of a multibyte character, expects an **`unsigned int`** argument (where 0x0000 <= character value <= 0xFFFF and 0x00 <= byte value <= 0xFF). An MBCS routine that handles multibyte bytes or characters in a string context expects a multibyte-character string to be represented as an **`unsigned char`** pointer.

> [!CAUTION]
> Each byte of a multibyte character can be represented in an 8-bit **`char`**. However, an SBCS or MBCS single-byte character of type **`char`** with a value greater than 0x7F is negative. When such a character is converted directly to an **`int`** or a **`long`**, the result is sign-extended by the compiler and can therefore yield unexpected results.

It's best to represent a byte of a multibyte character as an 8-bit **`unsigned char`**. Or, to avoid a negative result, convert a single-byte character of type **`char`** to an **`unsigned char`** before converting it to an **`int`** or a **`long`**.

Because some SBCS string-handling functions take (signed) **`char`**<strong>\*</strong> parameters, a type mismatch compiler warning will result when `_MBCS` is defined. There are three ways to avoid this warning, listed in order of efficiency:

1. Use the type-safe inline functions in TCHAR.H. This behavior is the default.

1. Use the direct macros in TCHAR.H by defining `_MB_MAP_DIRECT` on the command line. If you do, you must manually match types. This method is the fastest but isn't type-safe.

1. Use the type-safe statically linked library functions in TCHAR.H. To do so, define the constant `_NO_INLINING` on the command line. This method is the slowest, but the most type-safe.

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
