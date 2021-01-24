---
description: "Learn more about: variant_size Struct"
title: "variant_size Struct"
ms.date: "04/04/2019"
f1_keywords: ["variant/std::variant_size"]
helpviewer_keywords: ["variant_size struct"]
---
# variant_size Struct

Assists the variant objects.

## Syntax

```cpp
template <class T>
    struct variant_size; // not defined
template <class T>
    struct variant_size<const T>;
template <class T>
    struct variant_size<volatile T>;
template <class T>
    struct variant_size<const volatile T>;
template <class T>
    inline constexpr size_t variant_size_v = variant_size<T>::value;
template <class... Types>
    struct variant_size<variant<Types...>>;
```
