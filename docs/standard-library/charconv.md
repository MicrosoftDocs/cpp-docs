---
description: "Learn more about: &lt;charconv&gt;"
title: "&lt;charconv&gt;"
ms.date: "07/22/2020"
f1_keywords: ["<charconv>"]
helpviewer_keywords: ["charconv header"]
---

# &lt;charconv&gt;

Quickly convert a character sequence to an integer or floating-point value, and the other way around.
One way to use this library is to write and roundtrip floating-point values in JSON and text files.

The conversion functions are tuned for performance, and also support shortest-round-trip behavior. Shortest-round-trip behavior means when a number is converted to chars, only enough precision is written out to enable recovering the original number when converting those chars back to a floating-point. No other CRT or STL function provides this capability.

Some of the benefits of using the `<charconv>` library are:

- The sequence of chars representing a numeric value doesn't need to be null-terminated. Likewise, when a number is converted to chars, the result isn't null-terminated.
- Conversion functions don't allocate memory. You own the buffer in all cases.
- Conversion functions don't throw. They return a structure that contains error information.
- Conversions aren't runtime rounding-mode sensitive.
- Conversions aren't locale aware. They always print and parse decimal points as '.' never as ',' for locales that use commas.

## Requirements

**Header:** \<charconv>

**Namespace:** std

/std:c++17, or later, is required.

## Members

### Types

| Type | Description |
|-|:-|
| [chars_format](chars-format-class.md) | Specifies formatting type such as scientific, hex, and so on. |
| [from_chars_result](from-chars-result-structure.md) | Holds the result of a `from_chars` conversion. |
| [to_chars_result](to-chars-result-structure.md) | Holds the result of a `to_chars` conversion. |

### Functions

| Function | Description |
|-|:-|
| [from_chars](charconv-functions.md#from_chars) | Convert chars to an integer, float, or double. |
| [to_chars](charconv-functions.md#to_chars)| Convert an integer, float, or double to chars. |

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
