---
title: drop_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> drop_view class, which creates a view from another view, skipping the first count elements."
ms.date: 10/19/2022
f1_keywords: ["ranges/std::drop_view", "ranges/std::drop_view::base", "ranges/std::drop_view::begin", "ranges/std::drop_view::data", "ranges/std::drop_view::empty", "ranges/std::drop_view::end", "ranges/std::drop_view::size", "ranges/std::drop_view::operator bool", "ranges/std::drop_view::back", "ranges/std::drop_view::front", "ranges/std::drop_view::operator[]"]
helpviewer_keywords: ["std::ranges::drop_view [C++]", "std::ranges::drop_view::base [C++]", "std::ranges::drop_view::begin [C++]", "std::ranges::drop_view::data [C++]", "std::ranges::drop_view::empty [C++]", "std::ranges::drop_view::end [C++]", "std::ranges::drop_view::size [C++]", "std::ranges::drop_view::back [C++]", "std::ranges::drop_view::front [C++]", "std::ranges::drop_view::operator[] [C++]", "std::ranges::drop_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `drop_view` class (C++ Standard Library)

Create a view that excludes the first *N* elements of a range.

## Syntax

```cpp
template<ranges::view V>
class drop_view : public ranges::view_interface<drop_view<V>>;
```

### Template parameters

*`V`*\
 The type of the underlying view.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::drop`](range-adaptors.md#drop) |
| **Underlying range** | Must satisfy [`output_range`](range-concepts.md#output_range)  or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable and satisfies [`random_access_range`](range-concepts.md#random_access_range) and [`sized_range`](range-concepts.md#sized_range) |
| **Common range** | Only if the underlying range is a [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `drop_view`. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying view. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements in this view. The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range). |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the `drop_view` is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the `drop_view` isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `drop_view`

```cpp
template<ranges::view V>
class drop_view : public ranges::view_interface<drop_view<V>>
```

### Template parameters

*`V`*\
The type of the underlying view.

### Return value

A view of the underlying range, excluding the specified number of elements from the front.\
If you specify more elements to drop than exist in the underlying range, then an `empty_view` is returned.

### Remarks

The best way to create a `drop_view` is by using the [`views::drop`](range-adaptors.md#drop) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

### Example:  `drop_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    auto newView = std::views::drop(v, 3);
    for (auto e : newView) // outputs 4 5
    {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    auto numbers = std::views::iota(0) | std::views::take(10); // generate a view of 10 integers
    for (auto i : numbers | std::views::drop(5)) // use the '|' syntax to create a drop_view
    {
        std::cout << i << ' '; // outputs 5 6 7 8 9
    }
}
```

```output
4 5
5 6 7 8 9
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

Get an iterator to the first element in the `drop_view`.

```cpp
constexpr auto begin()
  requires (!(Simple_view<V> && ranges::random_access_range<const V> && ranges::sized_range<const V>));

constexpr auto begin() const
  requires ranges::random_access_range<const V> && ranges::sized_range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `drop_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the `drop_view`

```cpp
constexpr auto end() requires (!Simple_view<V>);
constexpr auto end() const requires ranges::range<const V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the `drop_view`:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `size`

Get the number of elements in the `drop_view`.

```cpp
constexpr auto size() requires ranges::sized_range<V>;
constexpr auto size() const requires ranges::sized_range<const V>;
```

### Parameters

None.

### Return value

The number of elements in the `drop_view`.

### Remarks

The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range).

## See also

[`<ranges>`](ranges.md)\
[`drop` range adaptor](range-adaptors.md#drop)\
[`take_while()`](range-adaptors.md#take_while)\
[`take_while_view`](take-while-view-class.md)\
[View classes](view-classes.md)
