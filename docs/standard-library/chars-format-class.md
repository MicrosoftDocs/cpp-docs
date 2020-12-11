---
description: "Learn more about: chars_format enum"
title: "chars_format enum"
ms.date: "08/03/2020"
f1_keywords: ["charconv/std::chars_format"]
helpviewer_keywords: ["std::chars_format"]
---
# chars_format enum

Used with the [\<charconv>](charconv.md) library to specify the floating-point format for primitive numerical conversions.

## Syntax

```cpp
enum class chars_format {
    scientific = unspecified,
    fixed = unspecified,
    hex = unspecified,
    general = fixed | scientific
};
```

### Members

|Element|Description|
|-|-|
| `scientific` | Causes `from_chars()` to expect and parse an exponent. It is like the `printf()` format specifier `'e'`, which formats for scientific notation, like `"1.729e+01"`. |
| `fixed` | Causes `from_chars()` not to expect or parse an exponent. It is like the `printf()` format specifier `'f'`, which formats for floating-point, like `"17.29"`.|
| `hex` | Causes `from_chars()` to expect the number in hexadecimal format, but without a leading `0x`. |
| `general` | Causes `from_chars()` to accept (but not require) an exponent. For `to_chars()`, it is like the `printf()` format specifier `'g'`, which switches between scientific notation or fixed. It takes into consideration what the exponent will be so that it can generate reasonably compact output. For example: `1e-5` results in `"1e-05"`, but `1e-4` results in `"0.001"`. `1e5` results in `100000`, while `1e6` results in `1e+06`. `1e0` produces `1`.|

## Remarks

For the [from_chars](charconv-functions.md#from_chars) functions, this enum describes what kind of input to expect.
For the [to_chars](charconv-functions.md#to_chars) functions, it describes what kind of output to emit.

## Requirements

**Header:** \<charconv>

**Namespace:** std

/std:c++17, or later, is required.

## See also

[\<charconv>](../standard-library/charconv.md)  
[printf() format specifiers](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)
