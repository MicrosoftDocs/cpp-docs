---
title: "&lt;charconv&gt;"
ms.date: "07/14/2020"
f1_keywords: ["<charconv>"]
helpviewer_keywords: ["charconv header"]
---

# &lt;charconv&gt;

Quickly convert a character sequence to an integer or floating point value, and vice-versa.
Can be used to quickly and accurately roundtrip floating point values to JSON, text files, and so on.

<statement of advantages over strtod()/strtol(), and std::to_string(), e.g. std::to_string limits precision to 6 digits, MORE JTW>

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler Option:** /std:c++17

## Members

### Types

|||
|-|:-|
| [chars_format](chars-format-enum.md) | Specifies formatting type such as scientific, hex, and so on. |
| [from_chars_result](from-chars-result-structure.md) | Holds the result of a `from_chars` conversion. |
| [to_chars_result](to-chars-result-structure.md) | Holds the result of a `to_chars` conversion. |

### Functions

|||
|-|:-|
| [to_chars](charconv-functions.md#to_chars)| Convert a integer, float, or double. |
| [from_chars](charconv-functions.md#from_chars) | Convert chars to a integer, float, or double. |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
