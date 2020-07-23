---
title: "chars_format enum"
ms.date: "07/22/2020"
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

|||
|-|-|
| `scientific` | Causes `from_chars()` to expect and parse an exponent. It is like the `'e'` `printf()` format specifier, which formats for scientific notation, such as `"1.729e+01"` |
| `fixed` | Causes `from_chars()` not to expect or parse an exponent. It is like the `'f'` `printf()` format specifier, which formats for floating-point, such as `"17.29"`.|
| `hex` | Causes `from_chars()` to expect the number in hexadecimal format, though without a leading "0x". |
| `general` | Causes `from_chars()` to accept (but not require) an exponent. For `to_chars()`, it is like the `g` printf() format specifier, which switches between scientific notation or fixed. It takes into consideration what the exponent will be so that it can generate reasonably compact output. For example: `1e-5` results in `"1e-05"`, but `1e-4` results in `"0.001"`. `1e5` results in `100000`, while `1e6` results in `1e+06`. `1e0` produces `1`.|

## Remarks

For the [from_chars](charconv-functions.md#from_chars) functions, this enum describes what kind of input to expect.
For the [to_chars](charconv-functions.md#to_chars) functions, it describes what kind of output to emit.

## See also

[\<charconv>](../standard-library/charconv.md)  
[printf() format specifiers](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)
