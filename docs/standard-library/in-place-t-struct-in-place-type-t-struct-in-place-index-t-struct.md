---
description: "Learn more about: in_place_t Struct, in_place_type_t Struct, in_place_index_t Struct"
title: "in_place_t Struct, in_place_type_t Struct, in_place_index_t Struct"
ms.date: "11/04/2016"
f1_keywords: ["utility<in_place_t>", "utility/std::in_place_t", "utility<in_place_type_t>", "utility/std::in_place_type_t", "utility<in_place_index_t>", "utility/std::in_place_index_t"]
helpviewer_keywords: ["utility<in_place_t> struct"]
---
# in_place_t Struct, in_place_type_t Struct, in_place_index_t Struct

The empty structure type `in_place_t` can be passed into constructors of `expected` class, [`optional` class](optional-class.md) or [`single_view` class](single-view-class.md) for in-place construction of the contained type. The empty structure type `in_place_type_t` can be passed into constructors of [`any` class](any-class.md) or [`variant` class](variant-class.md) to specify the type of the object. The empty structure type `in_place_index_t` can be passed into constructors of [`variant` class](variant-class.md) to specify the index of the object.

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

template <class T>
inline constexpr in_place_type_t<T> in_place_type{};

template <size_t I>
struct in_place_index_t {
    explicit in_place_index_t() = default;
};

template <size_t I>
inline constexpr in_place_index_t<I> in_place_index{};
```
