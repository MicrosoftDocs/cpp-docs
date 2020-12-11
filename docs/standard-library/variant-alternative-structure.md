---
description: "Learn more about: variant_alternative Struct"
title: "variant_alternative Struct"
ms.date: "04/04/2019"
f1_keywords: ["variant/std::variant_alternative"]
helpviewer_keywords: ["variant_alternative struct"]
---
# variant_alternative Struct

Assists the variant objects.

## Syntax

```cpp
template <size_t I, class T>
    struct variant_alternative; // not defined
template <size_t I, class T>
    struct variant_alternative<I, const T>;
template <size_t I, class T>
    struct variant_alternative<I, volatile T>;
template <size_t I, class T>
    struct variant_alternative<I, const volatile T>;
template <size_t I, class T>
    using variant_alternative_t = typename variant_alternative<I, T>::type;
template <size_t I, class... Types>
    struct variant_alternative<I, variant<Types...>>;
```
