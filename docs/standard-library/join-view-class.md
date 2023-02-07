---
title: join_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> join_view class, which combines the elements of multiple ranges into a single view."
ms.date: 09/28/2022
f1_keywords: ["ranges/std::join_view", "ranges/std::join_view::base", "ranges/std::join_view::begin", "ranges/std::join_view::end", "ranges/std::join_view::empty", "ranges/std::join_view::operator bool", "ranges/std::join_view::back", "ranges/std::join_view::front"]
helpviewer_keywords: ["std::ranges::join_view [C++]", "std::ranges::join_view [C++], base", "std::ranges::join_view [C++], begin", "std::ranges::join_view [C++], end", "std::ranges::join_view [C++], empty", "std::ranges::join_view [C++], operator bool", "std::ranges::join_view [C++], front", "std::ranges::join_view [C++], back"]
dev_langs: ["C++"]
---
# `join_view` class (C++ Standard Library)

Combines the elements of a range of ranges into a single view.

## Syntax

```cpp
template<input_range R> requires view<R> && input_range<range_reference_t<R>> &&
    (is_reference_v<range_reference_t<R>> || view<range_value_t<R>>)
class join_view : public view_interface<join_view<R>>;
```

### Template parameters

*`R`*\
The type of the underlying range. Must satisfy [`input_range`](range-concepts.md#input_range) or higher.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::join`](range-adaptors.md#join) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | `input_range` up to [`bidirectional_range`](range-concepts.md#bidirectional_range) depending on the underlying range being iterated |
| **Sized** | No |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | No |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct an `join_view`. |
| [`base`](#base)<sup>C++20</sup> | Get a reference to the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Remarks

The best way to create a `join_view` is by using the [`views::join`](range-adaptors.md#join) range adaptor. Range adaptors are the intended way to access view classes. The view types are exposed in case you want to create your own custom view type.

This view is useful when you want to combine multiple ranges into a single view.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of a `join_view`.

```cpp
1) join_view() = default;
2) constexpr explicit join_view(R base)
```

### Parameters

*`base`*\
The underlying range.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Remarks

1\) Default-constructs a `join_view`.\
2\) Constructs the `join_view` from *`base`*.

### Example: `join_view`

```cpp
// requires /std:c++20, or later
#include <iostream>
#include <vector>
#include <ranges>

int main()
{
    std::vector<int> rg1{1, 2, 3, 4};
    std::vector<int> rg2{5, 6, 7};
    std::vector<int> rg3{8, 9, 10, 11, 12, 13};
    std::vector<int> rangeOfRanges[] {rg1, rg2, rg3};

    auto jv = std::ranges::join_view(rangeOfRanges);

    for (auto& e : jv)
    {
        std::cout << e << " ";
    }
}
```

```output
1 2 3 4 5 6 7 8 9 10 11 12 13
```

## `base`

Get the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
1) constexpr V base() const& requires std::copy_constructible<V>;

// Uses a move constructor to return the underlying view
2) constexpr V base() &&;
```

### Parameters

None.

### Return value

1) The returned view is copy constructed.
2) The returned view is move constructed.

## `begin`

Get an iterator to the first element in the view.

```cpp
constexpr auto begin();
constexpr auto begin() const
    requires ranges::input_range<const V> && std::is_reference_v<ranges::range_reference_t<const V>>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr sentinel_t<R> end();
constexpr auto end() const requires range<const R>
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## See also

[`join` range adaptor](range-adaptors.md#join)\
[`<ranges>`](ranges.md)\
[view classes](view-classes.md)
