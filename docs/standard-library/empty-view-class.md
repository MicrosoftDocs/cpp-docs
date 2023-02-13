---
title: empty_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> empty_view class, which is a view that has no elements. This view is useful for test purposes such as calling code that needs to be provided with a view but doesn't need to access its underlying data."
ms.date: 10/18/2022
f1_keywords: ["ranges/std::empty_view", "ranges/std::empty_view::base", "ranges/std::empty_view::begin", "ranges/std::empty_view::end", "ranges/std::empty_view::size", "ranges/std::empty_view::empty", "ranges/std::empty_view::operator bool", "ranges/std::empty_view::data", "ranges/std::empty_view::back", "ranges/std::empty_view::front", "ranges/std::empty_view::operator[]"]
helpviewer_keywords: ["std::ranges::empty_view [C++]", "std::ranges::empty_view [C++], base", "std::ranges::empty_view [C++], begin", "std::ranges::empty_view [C++], end", "std::ranges::empty_view [C++], size", "std::ranges::empty_view [C++], data", "std::ranges::empty_view [C++], empty", "std::ranges::empty_view [C++], operator bool", "std::ranges::empty_view [C++], front", "std::ranges::empty_view [C++], back", "std::ranges::empty_view [C++], operator[]"]
dev_langs: ["C++"]
---
# `empty_view` class (C++ Standard Library)

A view with no elements. This view is useful for test purposes such as calling code that needs to be provided with a view but doesn't need to access its underlying data.

## Syntax

```cpp
template<class T>
    requires std::is_object_v<T>
class empty_view : public ranges::view_interface<empty_view<T>>;
```

### Template parameters

*`T`*\
The type of the element. Even though there are no elements in an `empty_view`, all ranges are homogeneous. That is, they have elements of a particular type. So even though an `empty_view` has no elements, it still has a type, such as an `empty_view` of `int`, or `strings`, etc.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::empty`](range-adaptors.md#empty) |
| **Underlying range** | None |
| **Element type** | As specified when the `empty_view` is created |
| **View iterator category** | `contiguous_range` |
| **Sized** | Yes. Always returns 0 |
| **Is `const`-iterable** | Yes |
| **Common range** | Yes |
| **Borrowed range** | Yes |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct an `empty_view`. |
| [`begin`](#begin) <sup>C++20</sup>| Returns `nullptr`. |
| [`end`](#end)<sup>C++20</sup> | Returns `nullptr`. |
| [`size`](#size)<sup>C++20</sup> | Returns 0 |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](#back)<sup>C++20</sup> | Results in undefined behavior. |
| [`data`](#data)<sup>C++20</sup> | Returns `nullptr`. |
| [`empty`](#empty)<sup>C++20</sup> | Returns `true`. |
| [`front`](#front)<sup>C++20</sup> | Results in undefined behavior. |
| [`operator[]`](#op_at)<sup>C++20</sup> | Results in undefined behavior. |
| [`operator bool`](#op_bool)<sup>C++20</sup> | Returns `false`. |

## Remarks

The best way to create a `empty_view` is by using the [`empty`](range-adaptors.md#empty) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

Because there can never be any elements in an `empty_view`, certain compiler optimizations are possible. For example, the compiler will eliminate `for (auto e : std::views::empty<int>) {...}` because it knows that there's nothing to iterate over.

Another use for `empty_view` is splitting a [`split_view`](split-view-class.md) with an `empty_view` delimiter, which results in a range of single element ranges.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of a `empty_view`.

```cpp
template<class T>
inline constexpr empty_view<T> empty{};
```

### Parameters

*`T`*\
 The type of the underlying element, of which there is none.

### Remarks

The best way to create a `empty_view` is by using the [`empty`](range-adaptors.md#empty) range adaptor.

### Example `empty_view`

```cpp
// requires /std:c++20 or higher
#include <ranges>
#include <iostream>

int main()
{
    auto anEmptyView = std::views::empty<int>;
    bool isNotEmpty = (bool)anEmptyView;
    std::cout << std::boolalpha << isNotEmpty << "\n"; // false
    std::cout << std::boolalpha << anEmptyView.empty(); // true
}
```

```output
false
true
```

## `back`

Results in undefined behavior.

```cpp
constexpr auto back()
    requires ranges::bidirectional_range<T> && ranges::common_range<T>;

constexpr auto back() const
    requires ranges::bidirectional_range<const T> && ranges::common_range<const T>;
```

### Parameters

None.

### Return value

None.

### Remarks

Calling this function in a debug build raises an assertion that the function has been called on an empty `view_interface`.

## `begin`

Returns `nullptr` because there isn't a first element in the view.

```cpp
static constexpr T* begin() noexcept
```

### Return value

`nullptr`

## `data`

Returns `nullptr` because there isn't a first element in the view to get a pointer to.

```cpp
static constexpr T* data() noexcept
```

### Return value

`nullptr`.

## `empty`

Test whether the derived view is empty.

```cpp
static constexpr bool empty() noexcept
```

### Parameters

None.

### Return value

Returns `true`.

## `end`

Returns `nullptr` because there aren't any elements in the view.

```cpp
static constexpr T* end() noexcept
```

### Return value

`nullptr`.

## `front`

Results in undefined behavior.

```cpp
constexpr auto front()
    requires ranges::forward_range<T>;
constexpr auto front() const
    requires ranges::forward_range<const T>;
```

### Parameters

None.

### Return value

None.

### Remarks

Calling this function in a debug build raises an assertion that the function has been called on an empty `view_interface`.

## <a name="op_at"></a> `operator[]`

Results in undefined behavior.

```cpp
template<ranges::random_access_range R = T>
constexpr decltype(auto) operator[](ranges::range_difference_t<R> pos);

template<ranges::random_access_range R = const T>
constexpr decltype(auto) operator[](ranges::range_difference_t<R> pos) const;
```

### Parameters

*`pos`*\
The position, relative to the beginning iterator, of the element to return.

### Return value

None.

### Remarks

Calling this function in a debug build raises an assertion that index is out of range for `view_interface`.

## <a name="op_bool"></a> `operator bool`

Test whether the derived view isn't empty.

```cpp
constexpr explicit operator bool()
requires requires { ranges::empty(T ()); };

constexpr explicit operator bool() const
requires requires { ranges::empty(T ()); };
```

### Parameters

None.

### Return value

Returns `false`.

### Example `(bool)`

```cpp
// requires /std:c++20 or higher
#include <ranges>
#include <iostream>

int main()
{
    auto anEmptyView = std::views::empty<int>;

    if (anEmptyView) // check if anEmptyView isn't empty
    {
        std::cout << "Error: why does an empty_view have elements?\n";
    }
    else
    {
        std::cout << "Correct: an empty_view is not not empty\n";
    }
}
```

```output
Correct: an empty_view is not not empty
```

## `size`

Get the number of elements in the view, which will always be 0.

```cpp
static constexpr size_t size()
```

### Parameters

None.

### Return value

`0`.

## See also

[`<ranges>`](ranges.md)\
[`empty` range adaptor](range-adaptors.md#common)\
[`single_view`](single-view-class.md)\
[view classes](view-classes.md)
