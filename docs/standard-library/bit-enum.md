---
title: "endian enum"
description: "enum used to specify the endianness of scalar types"
ms.date: "08/10/2020"
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
| `little` | Indicates that scaler types are little-endian. That is, the least significant byte is stored in the smallest address. For example, `1234` is stored `34` `12`.  |
| `big` | Indicates that scalar types are big-endian, that is, the most significant byte is stored in the smallest address. For example, `1234` is stored `12` `34`.  |

## Remarks

All native scalar types are little-endian.

## Requirements

**Header:** \<bit>

**Namespace:** std

/std:c++latest is required

## See also

[\<bit>](../standard-library/bit.md)  
