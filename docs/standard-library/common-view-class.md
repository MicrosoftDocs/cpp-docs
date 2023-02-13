---
title: common_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> common_view class, which takes a view that has different iterator and sentinel types and creates a view that has the same iterator and sentinel type."
ms.date: 09/27/2022
f1_keywords: ["ranges/std::common_view", "ranges/std::common_view::base", "ranges/std::common_view::begin", "ranges/std::common_view::end", "ranges/std::common_view::size", "ranges/std::common_view::empty", "ranges/std::common_view::operator bool", "ranges/std::common_view::data", "ranges/std::common_view::back", "ranges/std::common_view::front", "ranges/std::common_view::operator[]"]
helpviewer_keywords: ["std::ranges::common_view [C++]", "std::ranges::common_view [C++], base", "std::ranges::common_view [C++], begin", "std::ranges::common_view [C++], end", "std::ranges::common_view [C++], size", "std::ranges::common_view [C++], data", "std::ranges::common_view [C++], empty", "std::ranges::common_view [C++], operator bool", "std::ranges::common_view [C++], front", "std::ranges::common_view [C++], back", "std::ranges::common_view [C++], operator[]"]
dev_langs: ["C++"]
---
# `common_view` class (C++ Standard Library)

Take a range that may have different iterator and sentinel types and create a view that has the same iterator and sentinel type. This is useful for calling STL algorithms that accept ranges specified by iterator pairs.

## Syntax

```cpp
template<ranges::view V>
    requires (!ranges::common_range<V> && std::copyable<ranges::iterator_t<V>>)
class common_view : public ranges::view_interface<common_view<V>>;
```

### Template parameters

*`V`*\
 The type of the underlying view.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::common`](range-adaptors.md#common) |
| **Underlying range** | Must satisfy [`forward_range`](range-concepts.md#forward_range) or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | `forward_range` or [`random_access_range`](range-concepts.md#random_access_range) when the underlying range satisfies `random_access_range` and [`sized_range`](range-concepts.md#sized_range) |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable |
| **Common range** | Yes |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `common_view`. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying view. |
| [`begin`](#begin) <sup>C++20</sup>| Get an iterator to the first element in the view. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements in the view.  |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Remarks

The best way to create a `common_view` is by using the [`views::common`](range-adaptors.md#common) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

This view is useful for passing a range that has different iterator/sentinel types to a legacy algorithm that expects them to be the same.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of a `common_view`.

```cpp
1) common_view() = default;
2) constexpr explicit common_view(V v);
```

### Parameters

*`v`*\
 The underlying view.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Remarks

1\) Default constructs the `common_view`.\
2\) Constructs a `common_view` from the underlying view using `std::move(v)`. An error will result if `V` is a common range to avoid misuse that would negatively impact performance.

## `base`

Gets a copy of the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
constexpr V base() const& requires std::copy_constructible<V>;

// Uses a move constructor to return the underlying view
constexpr V base() &&;
```

## `begin`

Get an iterator to the first element.

```cpp
constexpr auto begin();
constexpr auto begin() const requires range<const V>;
```

### Return value

An iterator pointing at the first element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr auto end();
constexpr auto end() const requires ranges::range<const V>;
```

### Return value

The sentinel that follows the last element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `size`

Get the number of elements in the view.

```cpp
constexpr auto size() requires ranges::sized_range<V>;
constexpr auto size() const requires ranges::sized_range<const V>;
```

### Parameters

None.

### Return value

The number of elements in the view.

## See also

[`<ranges>`](ranges.md)\
[`common` range adaptor](range-adaptors.md#common)\
[view classes](view-classes.md)
