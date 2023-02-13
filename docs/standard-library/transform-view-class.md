---
title: transform_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> transform_view class, which is a view of an underlying sequence after applying a transformation function to each element."
ms.date: 12/14/2022
f1_keywords: ["ranges/std::transform_view", "ranges/std::transform_view::base", "ranges/std::transform_view::begin", "ranges/std::transform_view::empty", "ranges/std::transform_view::end", "ranges/std::transform_view::operator bool", "ranges/std::transform_view::back", "ranges/std::transform_view::front", "ranges/std::transform_view::operator[]"]
helpviewer_keywords: ["std::ranges::transform_view [C++]", "std::ranges::transform_view::base [C++]", "std::ranges::transform_view::begin [C++]", "std::ranges::transform_view::empty [C++]", "std::ranges::transform_view::end [C++]", "std::ranges::transform_view::back [C++]", "std::ranges::transform_view::front [C++]", "std::ranges::transform_view::operator bool [C++]", "std::ranges::transform_view::operator[] [C++]"]
dev_langs: ["C++"]
---
# `transform_view` class (C++ Standard Library)

A view of elements, each of which is a transformation of an element in the specified range.

## Syntax

```cpp
template<input_range V, move_constructible F>
    requires view<V> && is_object_v<F> &&
    regular_invocable<F&, range_reference_t<V>> &&
    can-reference<invoke_result_t<F&, range_reference_t<V>>>
class transform_view : public view_interface<transform_view<V, F>>;
```

### Template parameters

*`F`*\
The type of the function object that transforms the elements.

*`V`*\
 The type of the underlying view.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::transform`](range-adaptors.md#transform) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the transformation function's return type. |
| **View iterator category** | Supports [`input_range`](range-concepts.md#input_range) up to [`random_access_range`](range-concepts.md#random_access_range), depending on the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable and the transformation works on `const` references. |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | No |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range). |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `transform_view`

```cpp
1) transform_view() requires default_initializable<V>
         && default_initializable<F> = default;
2) constexpr transform_view(V base, F func);
```

### Parameters

*`base`*\
The underlying view.

*`func`*\
The function that transforms each element.

For information about template parameter types, see [Template parameters](#template-parameters).

### Return value

A `transform_view` instance.

### Remarks

The best way to create a `transform_view` is by using the [`views::transform`](range-adaptors.md#transform) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) Create a value-initialized `transform_view`. The transformation function and the underlying view must be default-initializable.\
2\) Move construct the `transform_view` from a *`base`* view and a transformation function *`func`*. Both *`base`* and *`func`* are moved via `std::move()`.

### Example: `transform_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

void print(auto v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << '\n';
}

struct classes
{
    string className;
    weekday startDay;
};

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};

    // outputs 0 2 4 6 -8 10 12
    print(v | std::views::transform([](int i) {return i * 2; }));

    // ---- Modify the elements in the collection by returning a reference to the element to transform

    std::vector<classes> theClasses = {
        {"Math", Monday},
        {"English", Wednesday},
        {"History", Monday},
        {"Science", Wednesday},
        {"Art", Friday},
        {"Music", Thursday}
    };

    // lambda to get a reference to the the day of the week for a class
    auto getDay = [](classes& c) -> weekday&
    {
        return c.startDay;
    };

    // If a class starts on Monday, change it to Tuesday
    for (auto&& startDay : theClasses | std::views::transform(getDay))
    {
        // modify the startDay in the collection
        if (startDay == Monday)
        {
            startDay = Tuesday;
        }
    }

    // output classes and start times
    for (auto c : theClasses)
    {
        std::cout << c.className << " : " << c.startDay << '\n';
    }
}
```

```output
0 2 4 6 -8 10 12
Math : Tue
English : Wed
History : Tue
Science : Wed
Art : Fri
Music : Thu
```

## `base`

Get the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
constexpr V base() const& requires std::copy_constructible<V>;

// Uses std::move() to return the underlying view
constexpr V base() &&;
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

### Return value

An iterator pointing at the first element in the view.
The behavior is undefined if the view doesn't have a predicate.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr auto end()
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
[`filter` range adaptor](range-adaptors.md#filter)\
[view classes](view-classes.md)
