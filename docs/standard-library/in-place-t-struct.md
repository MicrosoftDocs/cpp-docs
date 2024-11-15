---
description: "Learn more about: in_place_t, in_place_type_t, in_place_index_t"
title: "in_place_t, in_place_type_t, in_place_index_t"
ms.date: 11/14/2024
f1_keywords: ["utility/utility<in_place_t>", "utility/std::in_place_t", "utility/utility<in_place_type_t>", "utility/std::in_place_type_t", "utility<in_place_index_t>", "utility/std::in_place_index_t"]
helpviewer_keywords: ["utility<in_place_t> struct", "utility<in_place_type_t> struct", "utility::in_place_type_t struct", "utility<in_place_index_t> struct", "utility::in_place_index_t struct"]
---
# `in_place_t`, `in_place_type_t`, `in_place_index_t` struct

Introduced in C++17.

The `in_place_t`, `in_place_type_t`, and `in_place_index_t` tag types are used to select the overloaded constructor that creates the object in place in the desired way. For the types that use these tag types, they can also help avoid temporary copy or move operations.

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
constexpr in_place_type_t<T> in_place_type{};

template <size_t I>
struct in_place_index_t
{
    explicit in_place_index_t() = default;
};

template <size_t I>
constexpr in_place_index_t<I> in_place_index{};
```

## Parameters

*`I`*\
The index where the object is created in place.

*`T`*\
The type of object to create.

## Remarks

- `in_place_t` indicates in-place construction of an object. Used to create objects in place inside a `std::optional`.
- `in_place_type_t` indicates in-place construction of an object of a specific type. It's useful with `std::any` because `std::any` can hold any kind of type, so we need to specify the type it holds.
- `in_place_index_t` indicates in-place construction of an object at a specific index. Use with `std::variant` to specify the index where the object is created.

The following class types use these structs in their constructors: `expected`, [`optional`](optional-class.md), [`single_view`](single-view-class.md), [`any`](any-class.md) or [`variant`](variant-class.md).

## Example

```cpp
#include <iostream>
#include <optional>
#include <any>
#include <variant>

// compile with /std:c++17

struct MyStruct
{
    double value;
    MyStruct(double v0, double v1 = 0) : value(v0 + v1) {}
};

int main()
{
    // Construct a MyStruct directly inside opt
    std::optional<MyStruct> opt(std::in_place, 29.0, 13.0);

    // Construct a MyStruct object inside an any object
    std::any a(std::in_place_type<MyStruct>, 3.14);

    // Construct a MyStruct object inside a vector at index 0
    std::variant<MyStruct, int> v(std::in_place_index<0>, 2.718);

    if (opt)
    {
        std::cout << opt->value << ", ";
    }

    std::cout << std::any_cast<MyStruct>(a).value << ", "
              << std::get<0>(v).value;

    return 0;
}
```

```output
42, 3.14, 2.718
```

## Requirements

**Header:** `<utility>`

**Namespace:** `std`

**Compiler Option:** [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.