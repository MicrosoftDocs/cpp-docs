---
title: "&lt;charconv&gt;"
ms.date: "07/22/2020"
f1_keywords: ["<charconv>"]
helpviewer_keywords: ["charconv header"]
---

# &lt;charconv&gt;

Quickly convert a character sequence to an integer or floating-point value, and the other way around.
Use to write and roundtrip floating point values in JSON and text files.

The conversion functions are tuned for performance, and also support shortest-round-trip behavior. Shortest-round-trip behavior means that when a number is converted to chars, only enough precision is written out to enable recovering the original number when converting those chars back to a floating-point. No other CRT or STL function provides this capability.

Some of the benefits of using the `<charconv>` library are:

- When converting chars to a number, the numeric value does not need to be null-terminated. Likewise, when converting a number to chars, the result is not null-terminated.
- The conversions functions do not allocate memory. You own the buffer in all cases.
- The conversions functions do not throw. A result is returned from which you can determine if the conversion succeeded.
- The conversions are not runtime rounding-mode sensitive.
- The conversions are not locale aware. They always print and parse decimal points as `'.'`, and never as ',' for locales that use commas.

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler Option:** /std:c++17

## Members

### Types

| Type | Description |
|-|:-|
| [chars_format](chars-format-enum.md) | Specifies formatting type such as scientific, hex, and so on. |
| [from_chars_result](from-chars-result-structure.md) | Holds the result of a `from_chars` conversion. |
| [to_chars_result](to-chars-result-structure.md) | Holds the result of a `to_chars` conversion. |

### Functions

| Function | Description |
|-|:-|
| [from_chars](charconv-functions.md#from_chars) | Convert chars to an integer, float, or double. |
| [to_chars](charconv-functions.md#to_chars)| Convert an integer, float, or double to chars. |

## See also

[Header Files Reference](cpp-standard-library-header-files.md)
