---
description: "Learn more about: in_place_t, in_place_type_t, in_place_index_t"
title: "in_place_t, in_place_type_t, in_place_index_t"
ms.date: 11/13/2024
f1_keywords: ["utility/utility<in_place_t>", "utility/std::in_place_t", "utility/utility<in_place_type_t>", "utility/std::in_place_type_t", "utility<in_place_index_t>", "utility/std::in_place_index_t"]
helpviewer_keywords: ["utility<in_place_t> struct", "utility<in_place_type_t> struct", "utility::in_place_type_t struct", "utility<in_place_index_t> struct", "utility::in_place_index_t struct"]
---
# `in_place_t`, `in_place_type_t`, `in_place_index_t` struct

Introduced in C++17.

The `in_place_t`, `in_place_type_t`, and `in_place_index_t` types are used in some constructors to indicate how to create the object in place. This helps avoid temporary copy or move operations.

## Syntax

```cpp
struct in_place_t
{
    explicit in_place_t() = default;
};

inline constexpr in_place_t in_place{};

template <class T>
struct in_place_type_t
{
    explicit in_place_type_t() = default;
};

template <class T>
inline constexpr in_place_type_t<T> in_place_type{};

template <size_t I>
struct in_place_index_t
{
    explicit in_place_index_t() = default;
};

template <size_t I>
inline constexpr in_place_index_t<I> in_place_index{};
```

## Requirements

**Header:** `<utility>`

**Namespace:** `<utility>`

**Compiler Option:** [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.


## Parameters

*I*\
The index where the object will be created in place.

*T*\
The type of object to create in place.

## Remarks

- `in_place_t` indicates in-place construction of an object.
- `in_place_type_t` indicates in-place construction of an object of a specific type.
- `in_place_index_t` indicates in-place construction of an object at a specific index.

The following are some types that use these structs in their constructors: `expected` class, [`optional` class](optional-class.md), [`single_view` class](single-view-class.md), [`any` class](any-class.md) or [`variant` class](variant-class.md).

## Example

```cpp
#include <iostream>
#include <optional>
#include <any>
#include <variant>

// compile with /std:c++17

struct MyStruct
{
    int value;
    MyStruct(int v) : value(v)
    {
    }
};

int main()
{
    // Uses std::in_place to construct an integer directly inside opt
    std::optional<MyStruct> opt(std::in_place, MyStruct(42));

    // Construct a MyStruct object inside various objects
    std::any a(std::in_place_type<MyStruct>, MyStruct(314));
    
    // Construct a MyStruct object inside a vector object at index 0
    std::variant<MyStruct> v(std::in_place_index<0>, MyStruct(271));


    if (opt)
    {
        std::cout << opt->value << ", ";
    }

    std::cout << std::any_cast<MyStruct>(a).value << ", "
              << std::get<0>(v).value << std::endl;

    return 0;
}
```

```output
42, 314, 271
```
