---
description: "Learn more about: in_place_t Struct"
title: "in_place_t Struct"
ms.date: "11/04/2016"
f1_keywords: ["utility<in_place_t>", "utility/std::in_place_t"]
helpviewer_keywords: ["utility<in_place_t> struct"]
---
# in_place_t Struct

## Syntax

```cpp
struct in_place_t {
    explicit in_place_t() = default;
};

inline constexpr in_place_t in_place{};

template <class T>
    struct in_place_type_t {
        explicit in_place_type_t() = default;
    };

template <class T> inline constexpr in_place_type_t<T> in_place_type{};

template <size_t I>
    struct in_place_index_t {
        explicit in_place_index_t() = default;
    };

template <size_t I> inline constexpr in_place_index_t<I> in_place_index{};
```
