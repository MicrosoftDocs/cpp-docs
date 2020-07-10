---
title: "chars_format Class"
ms.date: "07/14/2020"
f1_keywords: ["utility/std::chars_format", "charconv/std::chars_format"]
helpviewer_keywords: ["std::chars_format"]
---
# chars_format Class

Floating-point format for primitive numerical conversion.

## Syntax

```cpp
enum class chars_format {
    scientific = unspecified ,
    fixed = unspecified ,
    hex = unspecified ,
    general = fixed | scientific
};
```
## Remarks

When used with the [\<charconv>](charconv.md) library, this enumeration defines the format of the conversion for the [from_chars](charconv-functions.md#floating_point_to_char) functions in the following way:

- `scientific`, is the same as the `f` printf() format specifier which formats for floating point.
- `fixed`, is the same as the `e` printf() format specifier, which formats for exponential notation.
- `hex`, hexadecimal format without the leading "0x" in the result
- `general` is the same as the `g` printf() format specifier which displays in whichever of  the `f` or `e` formats is more compact.

See the [printf() format specifiers](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md#type_field_characters) for details.
