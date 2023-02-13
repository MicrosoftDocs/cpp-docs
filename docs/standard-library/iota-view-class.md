---
title: iota_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> iota_view class: a factory that generates a view from a bounded or unbounded series of repeatedly incrementing values."
ms.date: 11/04/2022
f1_keywords: ["ranges/std::iota_view", "ranges/std::iota_view::base", "ranges/std::iota_view::begin", "ranges/std::iota_view::end", "ranges/std::iota_view::size", "ranges/std::iota_view::empty", "ranges/std::iota_view::operator bool", "ranges/std::iota_view::back", "ranges/std::iota_view::front", "ranges/std::iota_view::operator[]"]
helpviewer_keywords: ["std::ranges::iota_view [C++]", "std::ranges::iota_view [C++], base", "std::ranges::iota_view [C++], begin", "std::ranges::iota_view [C++], end", "std::ranges::iota_view [C++], size", "std::ranges::iota_view [C++], empty", "std::ranges::iota_view [C++], operator bool", "std::ranges::iota_view [C++], front", "std::ranges::iota_view [C++], back", "std::ranges::iota_view [C++], operator[]"]
dev_langs: ["C++"]
---
# `iota_view` class (C++ Standard Library)

Generates a view of a sequence of elements by repeatedly incrementing an initial value. The sequence can be bounded or unbounded.

## Syntax

```cpp
template<std::weakly_incrementable W, std::semiregular Bound = std::unreachable_sentinel_t>
    requires __WeaklyEqualityComparableWith<W, Bound> && std::copyable<W>
class iota_view : public ranges::view_interface<iota_view<W, Bound>>;
```

### Template parameters

*`W`*\
 The type of the values in the sequence. The specified type must support `operator++`.

*`Bound`*\
The type of the end value. If *`Bound`* is `std::unreachable_sentinel_t` (the default value), then the view is unbounded.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::iota`](range-adaptors.md#iota) |
| **Underlying range** | Not applicable because this view generates its members |
| **Element type** | Same as the template parameter `W` |
| **View iterator category** | Supports [`input_range`](range-concepts.md#input_range) up to [`random_access_range`](range-concepts.md#random_access_range), depending on the type of `W` |
| **Sized** | Only if the range has an end value, that is, it isn't an infinite series |
| **Is `const`-iterable** | Yes |
| **Common range** | Only if `Bound` is the same type as `W` |
| **Borrowed range** | Yes |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) <sup>C++20</sup>| Construct the view. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements.  |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Remarks

A good way to create a `iota_view` is by using the [`iota`](range-adaptors.md#iota) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

The sequence of values can be integral values such as 1,2,3 or 'a', 'b', 'c' or consecutive elements from a range.

This view is typically used to iterate over a series of values. For example:

```cpp
for (int i : iota_view{1, 10}) // iterate over a view of the integers 1 through 9
{
    std::cout << i << ’ ’; // 1 2 3 4 5 6 7 8 9
}
```

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of an `iota_view`.

```cpp
1) iota_view() requires std::default_initializable<W> = default;
2) constexpr explicit iota_view(W value);
3) constexpr iota_view(std::type_identity_t<W> value, std::type_identity_t<Bound> bound);
4) constexpr iota_view( /*iterator*/ first, /*sentinel*/ last );
```

### Parameters

*`value`*\
The starting value for the series.  

*`bound`*\
The bound of the series. It's one greater than the last value in the series.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Remarks

1\) Create an `iota_view` with a starting and ending value determined by the default-initialized template type `W`.\
2\) Create an `iota_view` with the specified starting value and ending value determined by the value-initialized type `W`.\
3\) Create a bounded `iota_view` with the specified starting value and ending value. The ending value is one less than the last value specified.\
4\) Used to create subviews. For example, `std::ranges::iota_view(start, end);` where `start` and `end` are iterators to the start and end of the subview.

Rather than create this class directly, an easy way to create a `iota_view` is by using the [`iota`](range-adaptors.md#iota) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

If the bound's type is `unreachable_sentinel_t`, the resulting view is bounded.

When you use one of the constructors that value-initializes the bound, the bound will be the default-initialized value for that type. For example, `iota_view<int, int>{}` is an empty range of `int` since the default-constructed int value and bound are both `0`. Also, `iota_view<int, int>{-4}` is `-4, -3, -2, -1` because the default-constructed `int` bound is `0`.

## `iota_view` constructor example

```cpp
// requires /std:c++20, or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::ranges::iota_view<int> iv; // create an iota_view with an unbounded range, starting at 0 
    std::ranges::iota_view<int> iv2(5); // create an iota_view with an unbounded range, starting at 5.
    std::ranges::iota_view<int, int> iv3{5, 10}; // create an iota_view with a bounded range, starting at 5 and ending at 9
    
    std::vector<int> v{10, 20, 35, 45, 50, 66, 77, 82, 90, 100};
    auto start = std::ranges::find(v, 35);
    auto end = std::ranges::find(v, 82);
    for (auto &&val : std::ranges::iota_view(start, end))
    {
        std::cout << *val << ' '; // outputs 35 45 50 66 77
    }
}
```

## `begin`

Get an iterator to the first element in the view.

```cpp
constexpr auto begin();
constexpr auto begin() const requires range<const V>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view.

## `end`

Get the end sentinel at the end of the view.

```cpp
constexpr auto end();
constexpr auto end() const requires ranges::range<const V>;
```

### Parameters

None.

### Return value

If the `iota_view` is unbounded, returns `std::unreachable_sentinel`.

If the `iota_view` is bounded, returns an iterator pointing at the sentinel past the last value in the sequence.

## `size`

Get the number of elements in the view. The `iota_view` must be bounded.

```cpp
constexpr auto size() requires
    (same_as<W, Bound> && advanceable <W>) ||
    (integral<W> && integral<Bound>) ||
    sized_sentinel_for<Bound, W>;
```

### Parameters

None.

### Return value

The number of elements in the `iota_view`.

### Remarks

You can't call `size()` on an unbounded `iota_view`.

## See also

[`<ranges>`](ranges.md)\
[`iota()`  range adaptor](range-adaptors.md#iota)\
[`std::numerics::iota`](numeric-functions.md#iota)\
[view classes](view-classes.md)
