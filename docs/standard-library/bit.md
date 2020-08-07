---
title: "&lt;bit&gt;"
ms.date: "08/08/2020"
f1_keywords: ["<bit>"]
helpviewer_keywords: ["bit header"]
---

# &lt;bit&gt;

Quickly convert a character sequence to an integer or floating-point value, and the other way around.
One way to use this library is to write and roundtrip floating-point values in JSON and text files.

Some of the benefits of using the `<bit>` library are:

- The sequence of chars representing a numeric value doesn't need to be null-terminated. Likewise, when a number is converted to chars, the result isn't null-terminated.
- Conversion functions don't allocate memory. You own the buffer in all cases.
- Conversion functions don't throw. They return a structure that contains error information.
- Conversions aren't runtime rounding-mode sensitive.
- Conversions aren't locale aware. They always print and parse decimal points as '.' never as ',' for locales that use commas.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++20, or later, is required.

## Members

### Types

| Type | Description |
|-|:-|
| [endian](endian-enum.md) | Specifies the endianness of scalar types. |

### Functions

| Function | Description |
|-|:-|
| [from_chars](charconv-functions.md#from_chars) | Convert chars to an integer, float, or double. |
| [to_chars](charconv-functions.md#to_chars)| Convert an integer, float, or double to chars. |

## See also

[Header Files Reference](cpp-standard-library-header-files.md)

