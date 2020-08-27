---
title: "endian enum"
description: "enum used to specify the endianness of scalar types"
ms.date: "08/27/2020"
f1_keywords: ["bit/std::endian"]
helpviewer_keywords: ["std::endian"]
---
# endian enum

Indicates the endianness of all scalar types.

## Syntax

```cpp
enum class endian {
    little = 0,
    big = 1,
    native = little
 };
```

### Members

|Element|Description|
|-|-|
| `little` | Indicates that scalar types are little-endian. That is, the least significant byte is stored in the smallest address. For example, `0x1234` is stored `0x34` `0x12`.  |
| `big` | Indicates that scalar types are big-endian, that is, the most significant byte is stored in the smallest address. For example, `0x1234` is stored `0x12` `0x34`.  |

## Remarks

All native scalar types are little-endian for the platforms that Microsoft Visual C++ (MSVC) targets (x86, x64, ARM, ARM64). This is not a C++ standard guarantee but is rather the case for the platforms MSVC targets.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++latest is required

## See also

[\<bit>](../standard-library/bit.md)  
