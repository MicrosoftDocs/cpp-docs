---
title: take_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> take_view class. It's a view that contains the specified number of elements taken from the front of another view."
ms.date: 10/19/2022
f1_keywords: ["ranges/std::take_view", "ranges/std::take_view::base", "ranges/std::take_view::begin", "ranges/std::take_view::data", "ranges/std::take_view::empty", "ranges/std::take_view::end", "ranges/std::take_view::size", "ranges/std::take_view::operator bool", "ranges/std::take_view::back", "ranges/std::take_view::front", "ranges/std::take_view::operator[]"]
helpviewer_keywords: ["std::ranges::take_view [C++]", "std::ranges::take_view::base [C++]", "std::ranges::take_view::begin [C++]", "std::ranges::take_view::data [C++]", "std::ranges::take_view::empty [C++]", "std::ranges::take_view::size [C++]", "std::ranges::take_view::end [C++]", 
"std::ranges::take_view::back [C++]", "std::ranges::take_view::front [C++]", "std::ranges::take_view::operator[] [C++]", "std::ranges::take_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `take_view` class (C++ Standard Library)

A view of the first *N* elements from another view.

## Syntax

```cpp
template<view V>
class take_view : public view_interface<take_view<V>>;
```

### Template parameters

*`V`*\
 The type of the underlying range.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::take`](range-adaptors.md#take) |
| **Underlying range** | Any range |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | No |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable |
| **Common range** | Only if the underlying range satisfies [`random_access_range`](range-concepts.md#random_access_range) and [`sized_range`](range-concepts.md#sized_range) |
| **Borrowed range** | Only if the underlying range is [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range). |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `take_view`

```cpp
1) take_view() requires default_initializable<V> = default;
2) constexpr take_view(V base, range_difference_t<V> count);
```

### Parameters

*`base`*\
The underlying view.

*`count`*\
The number of elements to take from the front of the underlying view. If *`count`* is more than the number of elements in the underlying view, the view will contain all the elements in the underlying range.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

A `take_view`, which is a view of the first *N* elements from another view. If you specify more elements to drop than exist in the underlying range, an `empty_view` is returned.

### Remarks

The best way to create a `take_view` is by using the [`views::take`](range-adaptors.md#take) range adaptor. Range adaptors are the intended way to create view classes. The view types are only exposed in case you want to create your own custom view type.

1\) Create a `take_view` that has no elements. The underlying view is default constructed. `base()` returns a copy of `V()`.\
2\) Create a `take_view` from a *`base`* and a count. *`base`* is moved via `std::move()`.

If *`count`* is less than the number of elements in the underlying range, then `count` determines the size of the `take_view`.\
If *`count`* is greater than the number of elements in the underlying range, then the `take_view` includes all of the elements in the underlying range.

### Example: `take_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6};
   
    auto newView = std::views::take(v, 3);
    
    for (auto& e : newView)
    {
        std::cout << e << ' '; // 0 1 2
    }
    std::cout << '\n';

    // Use the '|' operator to create a take_view
    for (auto i : v | std::views::take(3))
    {
        std::cout << i << ' '; // 0 1 2
    }
}
```

```output
0 1 2
0 1 2
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

### Return value

The underlying view.

## `begin`

Get an iterator to the first element in the view.

```cpp
constexpr auto begin() requires (!Simple_view<V>);
constexpr auto begin() const requires range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

For 1, the `Simple_view<V>` requirement means that the view `V` and `const V` must have the same iterator and sentinel types.

## `end`

Get the sentinel at the end of the view.

```cpp
1) constexpr auto end() requires !(Simple_view<V>);
2) constexpr auto end() const requires range<const V>;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the view.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

For 1, the `Simple_view<V>` requirement means that the view `V` and `const V` must have the same iterator and sentinel types.

## `size`

Get the number of elements.

```cpp
constexpr auto size() requires sized_range<V>;
constexpr auto size() const requires sized_range<const V>;
```

### Parameters

None.

### Return value

The number of elements in the `take_view`.\
If the `take_view` was constructed with an explicit *`count`*:

- if *`count`* is less than the number of elements in the underlying range, it's returned as the size of the view.
- if *`count`* is greater than the number of elements in the underlying range, then the size of the view is `ranges::size(base)`.

## See also

[`<ranges>`](ranges.md)\
[`take` range adaptor](range-adaptors.md#take)\
[view classes](view-classes.md)
