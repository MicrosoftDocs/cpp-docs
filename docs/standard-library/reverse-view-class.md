---
title: reverse_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> reverse_view class, which returns the elements of a range in reverse order."
ms.date: 10/19/2022
f1_keywords: ["ranges/std::reverse_view", "ranges/std::reverse_view::base", "ranges/std::reverse_view::begin", "ranges/std::reverse_view::empty", "ranges/std::reverse_view::end", "ranges/std::reverse_view::size", "ranges/std::reverse_view::operator bool", "ranges/std::reverse_view::back", "ranges/std::reverse_view::front", "ranges/std::reverse_view::operator[]"]
helpviewer_keywords: ["std::ranges::reverse_view [C++]", "std::ranges::reverse_view::base [C++]", "std::ranges::reverse_view::begin [C++]", "std::ranges::reverse_view::empty [C++]", "std::ranges::reverse_view::end [C++]", "std::ranges::reverse_view::size [C++]", "std::ranges::reverse_view::back [C++]", "std::ranges::reverse_view::front [C++]", "std::ranges::reverse_view::operator[] [C++]", "std::ranges::reverse_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `reverse_view` class (C++ Standard Library)

A view of the elements of a range in reverse order.

## Syntax

```cpp
template<ranges::view V>
requires ranges::bidirectional_range<V>
class reverse_view : public ranges::view_interface<reverse_view<V>>;
```

### Template parameters

*`V`*\
The type of the underlying view.\
This type must satisfy `ranges::bidirectional_range`.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::reverse`](range-adaptors.md#reverse) |
| **Underlying range** | Must satisfy [`bidirectional_range`](range-concepts.md#bidirectional_range) up to [`random_access_range`](range-concepts.md#random_access_range) |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range is a [`common_view`](common-view-class.md) and satisfies `const-iterable` |
| **Common range** | Yes |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `reverse_view`. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the `reverse_view`. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements.  |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the `reverse_view` is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the `reverse_view` isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `reverse_view` from a bidirectional view.

```cpp
1) reverse_view() requires default_initializable<V> = default; // default-constructs the underlying view
2) constexpr explicit reverse_view(V rg); // initializes the underlying view via std::move(r)
```

### Parameters

*`rg`*\
The view to provide a reversed view of.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

A view of the underlying range, in reverse order.

### Remarks

The best way to create a `reverse_view` is by using the [`views::reverse`](range-adaptors.md#reverse) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) The default constructor default-initializes a `reverse_view`.\
2\) Create a `reverse_view` from the specified view.

### Example: `reverse_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};
    auto rv = v | std::views::reverse;
    
    for (auto e : rv) // 6 5 -4 3 2 1 0
    {
        std::cout << e << ' ';
    }
}
```

```output
6 5 -4 3 2 1 0
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

Get an iterator to the first element in the `reverse_view`.

```cpp
1) constexpr reverse_iterator<iterator_t<V>> begin();
2) constexpr reverse_iterator<iterator_t<V>> begin() requires common_range<V>;
3) constexpr auto begin() const requires common_range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `reverse_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

After the first call to `begin()`, subsequent calls run in constant time, O(1), no matter how many elements are in the `reverse_view`. This has implications because `reverse_view` caches the value of `last` so it can return it repeatedly from `begin`. This means you shouldn't reuse a view after the underlying container is modified. If the underlying range is modified, generate a new view, which is inexpensive.

2\) The underlying view must satisfy [`common_range`](range-concepts.md#common_range), which means that the underlying view must have the same begin and end iterator type.\
3\) The underlying view must satisfy `common_range` for a const view to iterate over a `const reverse_view`.

## `end`

Get the sentinel at the end of the `reverse_view`

```cpp
1) constexpr reverse_iterator<iterator_t<V>> end();
2) constexpr auto end() const requires common_range<const V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the `reverse_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

For 2, the underlying view must satisfy [`common_range`](range-concepts.md#common_range) for a const view, which means that the underlying view must have the same begin and end iterator type.

## `size`

Get the number of elements.

```cpp
constexpr auto size() requires ranges::sized_range<V>;
constexpr auto size() const requires ranges::sized_range<const V>;
```

### Parameters

None.

### Return value

The number of elements in the `reverse_view`.

### Remarks

The size of the view is only available if the underlying range is a [`sized_range`](range-concepts.md#sized_range), or in other words, bounded.

## See also

[`<ranges>`](ranges.md)\
[`reverse` range adaptor](range-adaptors.md#reverse)\
[View classes](view-classes.md)
