---
title: lazy_split_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> lazy_split_view class. Splits a view into subranges based on a delimiter."
ms.date: 10/18/2022
f1_keywords: ["ranges/std::lazy_split_view", "ranges/std::lazy_split_view::base", "ranges/std::lazy_split_view::begin", "ranges/std::lazy_split_view::data", "ranges/std::lazy_split_view::empty", "ranges/std::lazy_split_view::end", "ranges/std::lazy_split_view::size", "ranges/std::lazy_split_view::operator bool", "ranges/std::lazy_split_view::back", "ranges/std::lazy_split_view::front", "ranges/std::lazy_split_view::operator[]"]
helpviewer_keywords: ["std::ranges::lazy_split_view [C++]", "std::ranges::lazy_split_view::base [C++]", "std::ranges::lazy_split_view::begin [C++]", "std::ranges::lazy_split_view::data [C++]", "std::ranges::lazy_split_view::empty [C++]", "std::ranges::lazy_split_view::size [C++]", "std::ranges::lazy_split_view::end [C++]", 
"std::ranges::lazy_split_view::back [C++]", "std::ranges::lazy_split_view::front [C++]", "std::ranges::lazy_split_view::operator[] [C++]", "std::ranges::lazy_split_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `lazy_split_view` class (C++ Standard Library)

Splits a range into subranges based on a delimiter. The delimiter can be a single element or a view of elements. The delimiter isn't part of the resulting subranges.

The primary differences between a [`split_view`](split-view-class.md) and a `lazy_split_view` are:

| **View** | **Can split a `const` range** | **range type** |
|--|--|
| `split_view` | no | Supports [`forward_range`](range-concepts.md#forward_range) or higher. |
| `lazy_split_view` | yes | Supports [`input_range`](range-concepts.md#input_range) or higher. |

What makes a `lazy_split_view` "lazy" is that it doesn't lookahead for the next delimiter. That means it can support [`input_range`](range-concepts.md#input_range) whereas `split_view` requires at least `forward_range`. This is because `input_range` is single-pass whereas `forward_range` allows  multi-pass iteration.

Prefer `split_view` because it's more efficient--unless you must split a range that is `const`. Regarding performance, `split_view` is more efficient.

A `lazy_split_view` has less efficient iterator increment and comparison than `split_view`, but is still O(1). A `split_view` has better performance when the distance between delimiters is small enough for subranges to fit in the CPU cache, in which case the delimiter lookahead effectively pre-caches the next subrange.

## Syntax

```cpp
template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
    indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to> &&
    (forward_range<V> || tiny_range<Pattern>)
class lazy_split_view : public view_interface<lazy_split_view<V, Pattern>>
```

### Template parameters

*`Pattern`*\
The type of the view that specifies a delimiter sequence.\
The `(forward_range<V> || tiny-range <Pattern>)` requirement means that when the underlying range isn't [`forward_range`](range-concepts.md#forward_range), the delimiter must be a `tiny_range`. A `tiny_range` is a range with static extent whose size is 0 or 1. `tiny_range<T>` requires `sized_range<T>`, and `T::size()` must be a constant-expression that's less than or equal to 1.

*`V`*\
 The type of the underlying view.

## Characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

**Range adaptor:** [`lazy_split`](range-adaptors.md#lazy_split)
**Underlying range:** must satisfy [`input_range`](range-concepts.md#input_range) or higher
**View iterator category:** same as the underlying range
**Element type:** collection of `range_reference_t<V>`
**Sized:** no
**Common range:** Yes when the underlying range is both [`forward_range`](range-concepts.md#forward_range) and `common`.
**Borrowed range:** no
**Is `const`-iterable:** only if the underlying range satisfies `forward_range` and is `const`-iterable

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element in the view. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `lazy_split_view`

```cpp
1) lazy_split_view() = default;
2) constexpr lazy_split_view(V base, Pattern pattern);
3) template<input_range R> requires constructible_from<V, views::all_t<R>> && 
        constructible_from<Pattern, single_view<range_value_t<R>>>
        constexpr lazy_split_view(R&& rg, range_value_t<R> e);
```

### Template parameters

*`Pattern`*\
The type of the delimiter.

*`R`*\
The type of the range.

*`V`*\
The type of the underlying view.

### Parameters

*`e`*
A single element that identifies where to split the view. The element isn't part of the resulting subranges.

*`base`*\
The underlying view.

*`pattern`*\
The view of elements that identifies where to split the view. The view of elements isn't part of the resulting subranges.

*`rg`*\
The range to split.

### Return value

A `lazy_split_view` instance that contains one or more `subrange`s.

### Remarks

The best way to create a `lazy_split_view` is by using the [`views::lazy_split`](range-adaptors.md#lazy_split) range adaptor. Range adaptors are the intended way to create view classes. The view types are only exposed in case you want to create your own custom view type.

1\) Create a `lazy_split_view` that has no elements. The underlying view is default constructed. `base()` returns a copy of `V()`.\
2\) Create a `lazy_split_view` by splitting the view using a delimiter sequence.\
3\) Create a `lazy_split_view` by splitting the view using a delimiter element.

### Example: `lazy_split_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> rg{ 1, 2, 3, 1, 2, 3, 4, 5, 6 };

    // pipe syntax using range adaptor
    for (const auto& subrange : rg | std::views::split(3))
    {
        // Outputs:
        // 1 2
        // 1 2
        // 4 5 6
        for (const auto& elem : subrange)
        {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    int delimiters[] = {2, 3};
    for (auto splitRange : std::views::split(rg, delimiters)) // ctor syntax
    {
        // outputs 1 1 4 5 6
        for (auto& i : splitRange)
        {
            std::cout << i << " ";
        }
    }
}
```

```output
1 2
1 2
4 5 6
1 1 4 5 6
```

## `base`

Gets a copy of the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
1) constexpr V base() const & requires std::copy_constructible<V>;

// Uses a move constructor to return the underlying view
2) constexpr V base() &&;
```

### Parameters

None.

### Returns

The underlying view.

## `begin`

Get an iterator to the first element in the view.

```cpp
constexpr auto begin();
constexpr auto begin() const requires forward_range<V> && forward_range<const V>
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the view.

```cpp
1) constexpr auto end() const;
2) constexpr auto end() requires forward_range<V> && common_range<V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

2\) The `forward_range<V>` requirement means that the view *`V`* has at least a forward iterator. For more information about range iterators, see [View class characteristics](view-classes.md#view-classes-characteristics). The `common_range<V>` requirement means that the view *`V`* has identical iterator and sentinel types.

## See also

[`<ranges>`](ranges.md)\
[`lazy_split` range adaptor](range-adaptors.md#lazy_split)
[`split_view` class](split-view-class.md)\
[view classes](view-classes.md)
