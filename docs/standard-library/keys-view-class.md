---
title: keys_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> keys_view class, which provides a view over the first index into each tuple-like value in a collection. It's useful for extracting keys from associative containers."
ms.date: 09/28/2022
f1_keywords: ["ranges/std::keys_view", "ranges/std::keys_view::base", "ranges/std::keys_view::begin", "ranges/std::keys_view::empty", "ranges/std::keys_view::end", "ranges/std::keys_view::size", "ranges/std::keys_view::operator bool", "ranges/std::keys_view::back", "ranges/std::keys_view::front", "ranges/std::keys_view::operator[]"]
helpviewer_keywords: ["std::ranges::keys_view [C++]", "std::ranges::keys_view::base [C++]", "std::ranges::keys_view::begin [C++]", "std::ranges::keys_view::empty [C++]", "std::ranges::keys_view::end [C++]", "std::ranges::keys_view::size [C++]", "std::ranges::keys_view::back [C++]", "std::ranges::keys_view::front [C++]", "std::ranges::keys_view::operator[] [C++]", "std::ranges::keys_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `keys_view` class (C++ Standard Library)

A view over the first index into each tuple-like value in a collection. For example, given a range of `std::tuple<string, int>`, create a view consisting of all the `string` elements from each tuple.

`keys_view` is an alias for [`elements_view<R, 0>`](elements-view-class.md) and is useful for making of view of the keys from associative containers like [`std::map`](map.md) or [`std::unordered_map`](unordered-map-class.md).

## Syntax

```cpp
template<input_range R>
using keys_view = ranges::elements_view<R, 0>;
```

### Template parameters

`R`\
 The type of the underlying range. This type must satisfy `ranges::input_range`.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::keys`](range-adaptors.md#keys) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the type of the first tuple element of the underlying range |
| **View iterator category** | [`random_access_range`](range-concepts.md#random_access_range) if the underlying range is contiguous, otherwise the same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range satisfies `const-iterable` |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

The following list of member functions refers to the `keys_view` class. Recall that this is an alias for an [`element_view`](elements-view-class.md) class template instantiation.

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `keys_view`. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range). |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the `keys_view` is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the `keys_view` isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Remarks

The tuple-like types that you can use with `keys_view` are [`std::tuple`](tuple.md), [`std::pair`](pair-structure.md), and [`std::array`](array.md).

## Constructors

Construct an instance of a `keys_view`.

```cpp
1) constexpr keys_view(V base);
2) keys_view() requires std::default_initializable<V> = default;
```

### Parameters

*`base`*\
The underlying range.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

A `keys_view` instance.

### Remarks

The best way to create an `keys_view` is by using the [`keys`](range-adaptors.md#keys) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) Create a `keys_view` from the specified view.\
2\) The default constructor creates an empty `keys_view`.

### Example:  `keys_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

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

    // Extract all of the keys from the map
    for (const std::string& standards : std::views::keys(cpp_standards))
    {
        std::cout << standards << ' '; // C++03 C++11 C++14 C++17 C++98 c++20
    }
    std::cout << '\n';

    // ========== work with a range of std::pair

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
    
    // Another way to call the range adaptor using '|': create an keys_view from each pair
    for (const std::string& version : windows | std::views::keys)
    {
        std::cout << version << ' '; // Windows 1.0 Windows 2.0 Windows 3.0 ...
    }
}
```

```output
C++03 C++11 C++14 C++17 C++98 c++20
Windows 1.0 Windows 2.0 Windows 3.0 Windows 3.1 Windows NT 3.1 Windows 95 Windows NT 4.0 Windows 95 Windows 98 Windows 1.0 Windows 2000
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

None.

### Return value

The underlying view.

## `begin`

Get an iterator to the first element in the `keys_view`.

```cpp
1) constexpr auto begin() requires (!Simple_view<V>);
2) constexpr auto begin() const requires (Simple_view<V>) // or put another way, requires ranges::range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `keys_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the `keys_view`

```cpp
1) constexpr auto end() requires (!Simple_view<V> && !ranges::common_range<V>);
2) constexpr auto end() requires (!Simple_view<V> && ranges::common_range<V>);
3) constexpr auto end() const requires ranges::range<const V>;
4) constexpr auto end() const requires ranges::common_range<const V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the `keys_view`:

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

The number of elements in the `keys_view`.

### Remarks

The size of the view is only available if the underlying range is a [`sized_range`](range-concepts.md#sized_range), or in other words, bounded.

## See also

[`elements_view`](elements-view-class.md)\
[`values_view`](values-view-class.md)\
[`<ranges>`](ranges.md)\
[View classes](view-classes.md)
