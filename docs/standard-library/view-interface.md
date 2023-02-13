---
title: view_interface class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> view_interface class, which is the base class for the ranges view classes."
ms.date: 10/07/2022
f1_keywords: ["ranges/std::view_interface::back", "ranges/std::view_interface::data","ranges/std::view_interface::empty", "ranges/std::view_interface::front", "ranges/std::view_interface::size", "ranges/std::view_interface::operator[]", "ranges/std::view_interface::operator bool"]
helpviewer_keywords: ["std::ranges::view_interface [C++]", "std::ranges::view_interface [C++], back",  "std::ranges::view_interface [C++], data", "std::ranges::view_interface [C++], empty", "std::ranges::view_interface [C++], front", "std::ranges::view_interface [C++], size", "std::ranges::view_interface [C++], operator[]", "std::ranges::view_interface [C++], operator bool"]
dev_langs: ["C++"]
---
# `view_interface` class (C++ Standard Library)

The base class for the [view classes](view-classes.md) in the `std::ranges` namespace. This class implements some of the interface for derived view types. Use this as the base class for your own view types to reduce the boilerplate you need to write.

## Syntax

```cpp
template<class Derived>
  requires std::is_class_v<Derived> && 
  std::same_as<Derived, std::remove_cv_t<Derived>>
class view_interface;
```

### Template parameters

*`Derived`*\
 The type of the class that is deriving from this base class.

## Members

| **Member functions** | **Description** |
|--|--|
| [`back`](#back)<sup>C++20</sup> | Get the last element in the derived view. |
| [`data`](#data)<sup>C++20</sup> | Get a pointer to the first element in the derived view. |
| [`empty`](#empty)<sup>C++20</sup> | Test whether the derived view is empty. |
| [`front`](#front)<sup>C++20</sup> | Get the first element in the derived view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements in the derived view. |
| **Operators** | **Description** |
| [`operator[]`](#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](#op_bool)<sup>C++20</sup> | Test whether the derived view isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## `back`

Get the last element in the derived view.

```cpp
constexpr auto back()
    requires ranges::bidirectional_range<Derived> &&
    ranges::common_range<Derived>;

constexpr auto back() const
    requires ranges::bidirectional_range<const Derived> && 
    ranges::common_range<const Derived>;
```

### Parameters

None.

### Return value

The last element in the derived view.

### Remarks

The derived view must satisfy [`bidirectional_range`](range-concepts.md#bidirectional_range) and [`common_range`](range-concepts.md#common_range).\
The behavior of `back()` and `front()` are undefined for any empty view.

## `data`

Get a pointer to the first element in the derived view.

```cpp
constexpr auto data()
    requires std::contiguous_iterator<ranges::iterator_t<Derived>>;
constexpr auto data() const
    requires ranges::range<const Derived> &&
    std::contiguous_iterator<ranges::iterator_t<const Derived>>;
```

### Parameters

None.

### Return value

A pointer to the first element in the derived view.

### Remarks

The iterator for the derived view must satisfy [`contiguous_iterator`](iterator-concepts.md#contiguous_iterator).

## `empty`

Test whether the derived view is empty.

```cpp
1) constexpr bool empty() requires ranges::forward_range<Derived>;
2) constexpr bool empty() const requires ranges::forward_range<const Derived>;
```

### Parameters

None.

### Return value

Returns `true` if the derived view has no elements. Otherwise, returns `false`.

### Remarks

The derived view must satisfy `std::ranges::forward_range`.

## `front`

Get the first element in the derived view.

```cpp
constexpr auto front()
    requires ranges::forward_range<Derived>;
constexpr auto front() const
    requires ranges::forward_range<const Derived>;
```

### Parameters

None.

### Return value

The last element in the derived view.

### Remarks

The derived view must satisfy [`forward_range`](range-concepts.md#forward_range).\
The behavior of `front()` is undefined for `std::ranges::empty_view`.

## `size`

Get the number of elements in the derived view.

```cpp
constexpr auto size() requires ranges::forward_range<Derived> &&
    std::sized_sentinel_for<ranges::sentinel_t<Derived>,
    ranges::iterator_t<Derived>>;
constexpr auto size() const requires ranges::forward_range<const Derived> &&
    std::sized_sentinel_for<ranges::sentinel_t<const Derived>,
    ranges::iterator_t<const Derived>>;
```

### Parameters

None.

### Return value

The number of elements in the derived view.

### Remarks

The iterator for the derived view must satisfy [`sized_sentinel_for`](iterator-concepts.md#sized_sentinel_for).

## <a name="op_at"></a> `operator[]`

Get the element at the specified position.

```cpp
template<ranges::random_access_range R = Derived>
constexpr decltype(auto) operator[](ranges::range_difference_t<R> pos);

template<ranges::random_access_range R = const Derived>
constexpr decltype(auto) operator[](ranges::range_difference_t<R> pos) const;
```

### Parameters

*`pos`*\
The position, relative to the beginning iterator, of the element to return.

### Return value

The element at the specified position relative to the beginning iterator.

### Remarks

The derived view must satisfy [`random_access_range`](range-concepts.md#random_access_range).\
The behavior of this operator is undefined for `std::ranges::empty_view`.

### Example: `operator[]`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    std::ranges::drop_view dv = std::views::drop(v, 2);

    for (auto e : dv)
    {
        std::cout << e << ' '; // 3 4 5
    }

    std::cout << "\ndv[1] = " << dv[1];
}
```

```output
3 4 5
dv[1] = 4
```

## <a name="op_bool"></a> `view_interface::operator bool`

Test whether the derived view isn't empty.

```cpp
explicit constexpr operator bool();
explicit constexpr operator bool() const;
```

### Parameters

None.

### Return value

Returns `false` if the derived view has no elements (the view is empty). Otherwise, returns `true` (the view isn't empty).

### Remarks

The iterator for the derived view must satisfy `std::ranges::forward_iterator`.\
This operator is equivalent to `!empty()`. This makes it convenient to write `if (someRange) {...}` to test whether there's something in the range to operate on.\
The behavior of this operator is undefined for `std::ranges::empty_view`.

### Example: `operator bool`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    std::ranges::filter_view fv = std::views::filter(v, [](int e) { return e > 3; });

    bool isNotEmpty = static_cast<bool>(fv);
    std::cout << "Has elements greater than 3: " << std::boolalpha << isNotEmpty << '\n' >>;
}
```

```output
Has elements greater than 3: true
```

## See also

[`<ranges>`](ranges.md)\
[`ranges::begin()`](range-functions.md#begin)\
[`ranges::data()`](range-functions.md#data)\
[`ranges::end()`](range-functions.md#end)\
[`ranges::empty()`](range-functions.md#empty)\
[`ranges::size()`](range-functions.md#size)\
[View classes](view-classes.md)
