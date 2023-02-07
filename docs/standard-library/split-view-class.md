---
title: split_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> split_view class. Splits a view into subranges based on a delimiter. The delimiter can be a single element or a view of elements."
ms.date: 10/05/2022
f1_keywords: ["ranges/std::split_view", "ranges/std::split_view::base", "ranges/std::split_view::begin", "ranges/std::split_view::data", "ranges/std::split_view::empty", "ranges/std::split_view::end", "ranges/std::split_view::size", "ranges/std::split_view::operator bool", "ranges/std::split_view::back", "ranges/std::split_view::front", "ranges/std::split_view::operator[]"]
helpviewer_keywords: ["std::ranges::split_view [C++]", "std::ranges::split_view::base [C++]", "std::ranges::split_view::begin [C++]", "std::ranges::split_view::data [C++]", "std::ranges::split_view::empty [C++]", "std::ranges::split_view::size [C++]", "std::ranges::split_view::end [C++]", 
"std::ranges::split_view::back [C++]", "std::ranges::split_view::front [C++]", "std::ranges::split_view::operator[] [C++]", "std::ranges::split_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `split_view` class (C++ Standard Library)

Splits a view into subranges based on a delimiter. The delimiter can be a single element or a view of elements. The delimiter isn't part of the resulting `split_view`.

A related view is the [`lazy_split_view`](lazy-split-view-class.md) class. The primary differences between `split_view` and `lazy_split_view` are:

| **View** | **Can split a `const` range**| **range type** |
|--|--|
| `split_view` | no | Supports [`forward_range`](range-concepts.md#forward_range) or higher. |
| `lazy_split_view` | yes | Supports [`input_range`](range-concepts.md#input_range) or higher. |

Prefer `split_view` because it's more efficient unless you must split a range that is `const`.

## Syntax

```cpp
template<forward_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
    indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to>
class split_view : public view_interface<split_view<V, Pattern>>;
```

### Template parameters

*`Pattern`*\
 The type of the view that specifies the delimiter sequence.

*`V`*\
 The type of the underlying view.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::split`](range-adaptors.md#split) |
| **Underlying range** | Same as underlying range |
| **Element type** | `range_reference_t<V>` |
| **View iterator category** | Satisfies [`forward_range`](range-concepts.md#forward_range) |
| **Sized** | No |
| **Is `const`-iterable** | No |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | No |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
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

Construct an instance of a `split_view`

```cpp
1) split_view() requires default_initializable<V> && default_initializable<Pattern> = default;
2) constexpr split_view(V base, Pattern pattern);
3) template<input_range R> requires constructible_from<V, views::all_t<R>> &&
     constructible_from<Pattern, single_view<range_value_t<R>>>
     constexpr split_view(R&& rg, range_value_t<R> e);
```

### Parameters

*`e`*\
A single element that identifies where to split the view. The element isn't part of the resulting view.

*`base`*\
The underlying view.

*`pattern`*\
The view of elements that identifies where to split the view. The view of elements isn't part of the resulting view.

*`rg`*\
The range to split.

For information about template parameter types, see [Template parameters](#template-parameters).

### Return value

A `split_view` instance that contains one or more subranges.

### Remarks

The best way to create a `split_view` is by using the [`views::split`](range-adaptors.md#split) range adaptor. Range adaptors are the intended way to create view classes. The view types are only exposed in case you want to create your own custom view type.

1\) Create a `split_view` that is default constructed. The underlying view and `pattern` are default constructed. `base()` returns a copy of `V()`.\
2\) Create a `split_view` by splitting the view using a sequence of delimiters.\
3\) Create a `split_view` by splitting the view using a single delimiter.

### Example `split_view`

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
        // outputs
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
        for (auto& i : splitRange)
        {
            std::cout << i << " "; // 1 1 4 5 6
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
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr auto end();
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## See also

[`<ranges>`](ranges.md)\
[`split_view` range adaptor](range-adaptors.md#split)\
[`lazy_split_view` class](lazy-split-view-class.md)\
[view classes](view-classes.md)
