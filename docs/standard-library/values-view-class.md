---
title: values_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> values_view class, which provides a view over the second index into each tuple-like value in a collection. It's useful for extracting values from associative containers."
ms.date: 10/07/2022
f1_keywords: ["ranges/std::values_view", "ranges/std::values_view::base", "ranges/std::values_view::begin", "ranges/std::values_view::empty", "ranges/std::values_view::end", "ranges/std::values_view::size", "ranges/std::values_view::operator bool", "ranges/std::values_view::back", "ranges/std::values_view::front", "ranges/std::values_view::operator[]"]
helpviewer_keywords: ["std::ranges::values_view [C++]", "std::ranges::values_view::base [C++]", "std::ranges::values_view::begin [C++]", "std::ranges::values_view::empty [C++]", "std::ranges::values_view::end [C++]", "std::ranges::values_view::size [C++]", "std::ranges::values_view::back [C++]", "std::ranges::values_view::front [C++]", "std::ranges::values_view::operator[] [C++]", "std::ranges::values_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `values_view` class (C++ Standard Library)

A view consisting of the second index into each tuple-like value in a collection. For example, given a range of `std::tuple<string, int>` values, create a view consisting of all the `int` elements from each tuple.

`values_view` is an alias for `elements_view<R, 1>` and is useful for creating a view of the values in associative containers such as [`std::unordered_map`](unordered-map-class.md).

## Syntax

```cpp
template<input_range R>
using values_view = ranges::elements_view<R, 1>;
```

### Template parameters

`R`\
 The type of the underlying range. This type must satisfy `ranges::input_range`.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::values`](range-adaptors.md#values) |
| **Underlying range** | Must satisfy [`forward_range`](range-concepts.md#forward_range) or higher |
| **Element type** | Same as the type of the second tuple element |
| **View iterator category** | `forward_range`, [`bidirectional_range`](range-concepts.md#bidirectional_range), or [`random_access_range`](range-concepts.md#random_access_range) |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range satisfies `const-iterable` |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `values_view`. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the `values_view`. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the `values_view` is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the `values_view` isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Remarks

Tuple-like types that you can use with `values_view` are [`std::tuple`](tuple.md), [`std::pair`](pair-structure.md), and [`std::array`](array.md).

## Constructors

Construct an instance of a `values_view`.

```cpp
1) constexpr values_view(R base);
2) values_view() requires default_initializable<V> = default;
```

### Parameters

*`base`*\
The underlying range of tuple-like types.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

An `values_view` instance.

### Remarks

The best way to create an `values_view` is by using the [`values`](range-adaptors.md#values) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1) Create an `values_view` from the specified view.
2) The default constructor creates a default-constructed `values_view`.

### Example: `values_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <map>
#include <string>
#include <utililty>
#include <vector>

int main()
{
    // ========== work with a std::map

    std::map<std::string, int> cpp_standards
    {
        {"C++98", 1988},
        {"C++03", 2003},
        {"C++11", 2011},
        {"C++14", 2014},
        {"C++17", 2017},
        {"c++20", 2020}
    };

    // Extract all of the values from the map
    for (int years : std::views::values(cpp_standards))
    {
        std::cout << years << ' '; // 2003 2011 2014 2017 1988 2020
    }
    std::cout << '\n';

    // ========== work with a std::pair

    std::vector<std::pair<std::string, int>> windows
    {
        {"Windows 1.0", 1985},
        {"Windows 2.0", 1987},
        {"Windows 3.0", 1990},
        {"Windows 3.1", 1992},
        {"Windows NT 3.1", 1993},
        {"Windows 95", 1995},
        {"Windows NT 4.0", 1996},
        {"Windows 95", 1995},
        {"Windows 98", 1998},
        {"Windows 1.0", 1985},
        {"Windows 2000", 2000}
    };

    // Another way to call the range adaptor using '|': create a keys_view from each pair
    for (int years : windows | std::views::values)
    {
        std::cout << years << ' '; // 1985 1987 1990 1992 ...
    }
}
```

```output
2003 2011 2014 2017 1988 2020
1985 1987 1990 1992 1993 1995 1996 1995 1998 1985 2000
```

## `base`

Gets a copy of the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
constexpr V base() const& requires std::copy_constructible<V>;

// Uses a move constructor to return the underlying view
constexpr V base() &&;
```

### Parameters

None

### Return value

The underlying view.

## `begin`

Get an iterator to the first element in the `values_view`.

```cpp
// returns a non-const iterator
1) constexpr auto begin() requires (!Simple_view<V>);

// returns a const iterator
2) constexpr auto begin() const requires ranges::range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `values_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the `values_view`

```cpp
1) constexpr auto end() requires (!Simple_view<V> && !ranges::common_range<V>);
2) constexpr auto end() requires (!Simple_view<V> && ranges::common_range<V>);
3) constexpr auto end() const requires ranges::range<const V>;
4) constexpr auto end() const requires ranges::common_range<const V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the `values_view`

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `size`

Get the number of elements.

```cpp
constexpr auto size() requires sized_range<V>
constexpr auto size() const requires sized_range<const V>
```

### Parameters

None.

### Return value

The number of elements in the `values_view`.

### Remarks

The size of the view is only available if the underlying range is a [`sized_range`](range-concepts.md#sized_range), or in other words, bounded.

## See also

[`elements_view`](elements-view-class.md)\
[`keys_view`](keys-view-class.md)\
[`<ranges>`](ranges.md)\
[View classes](view-classes.md)
