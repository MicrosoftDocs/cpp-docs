---
title: "endian enum"
ms.date: "08/10/2020"
f1_keywords: ["bit/std::endian"]
helpviewer_keywords: ["std::endian"]
---
# endian enum

Used with the [\<bit>](charconv.md) library to specify endianess of scalar types.

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

## Remarks

For the [from_chars](charconv-functions.md#from_chars) functions, this enum describes what kind of input to expect.
For the [to_chars](charconv-functions.md#to_chars) functions, it describes what kind of output to emit.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++20, or later, is required.

## See also

[\<bit>](../standard-library/bit.md)  
