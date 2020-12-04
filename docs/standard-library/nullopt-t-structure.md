---
description: "Learn more about: nullopt_t Struct"
title: "nullopt_t Struct"
ms.date: "08/04/2019"
f1_keywords: ["optional/std::nullopt_t", "optional/std::nullopt"]
---
# nullopt_t Struct

The `nullopt_t` type is a unique, empty type used to indicate an [optional](optional-class.md) object doesn't contain a value.

The constant `nullopt` of type `nullopt_t` indicates an `optional` type has an uninitialized state. It can be used to initialize an `optional` object or compared with one.

## Syntax

```cpp
struct nullopt_t;
inline constexpr nullopt_t nullopt{ /*implementation-defined*/ };
```

## See also

[\<optional>](optional.md)\
[optional class](optional-class.md)
