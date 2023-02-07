---
title: single_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> single_view class, which is a view that has only one element."
ms.date: 10/05/2022
f1_keywords: ["ranges/std::single_view", "ranges/std::single_view::base", "ranges/std::single_view::begin", "ranges/std::single_view::end", "ranges/std::single_view::size", "ranges/std::single_view::empty", "ranges/std::single_view::operator bool", "ranges/std::single_view::data", "ranges/std::single_view::back", "ranges/std::single_view::front", "ranges/std::single_view::operator[]"]
helpviewer_keywords: ["std::ranges::single_view [C++]", "std::ranges::single_view [C++], base", "std::ranges::single_view [C++], begin", "std::ranges::single_view [C++], end", "std::ranges::single_view [C++], size", "std::ranges::single_view [C++], data", "std::ranges::single_view [C++], empty", "std::ranges::single_view [C++], operator bool", "std::ranges::single_view [C++], front", "std::ranges::single_view [C++], back", "std::ranges::single_view [C++], operator[]"]
dev_langs: ["C++"]
---
# `single_view` class (C++ Standard Library)

A view that has only one element. This view is useful for test purposes for calling code that needs to be provided with a view with at least one element in it.

## Syntax

```cpp
template<std::copy_constructible T>
  requires std::is_object_v<T>
class single_view : public ranges::view_interface<single_view<T>>
```

### Template parameters

*`T`*\
The type of the element.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::single`](range-adaptors.md#single) |
| **Underlying range** | None |
| **Element type** | Specified when the `single_view` is created |
| **View iterator category** | `contiguous_range` |
| **Sized** | Always returns 1 |
| **Is `const`-iterable** | Yes |
| **Common range** | Yes |
| **Borrowed range** | No |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `single_view`. |
| [`begin`](#begin) <sup>C++20</sup>| Get an iterator to the element. |
| [`data`](#data)<sup>C++20</sup> | Get a pointer to the element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. Always returns `1`. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty (always returns `false`). |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position (only position 0 is valid). |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty (always returns `false`). |

## Remarks

The best way to create a `single_view` is by using the [`views::single`](range-adaptors.md#single) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

The value in the `single_view` can be modified unless the template value is `const`. For example: `single_view<const float> sv{3.14} // this value can't be modified because it's const`.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of a `single_view`.

```cpp
1) single_view() = default;
2) constexpr explicit single_view(const T& t);
3) constexpr explicit single_view(T&& t);
4) template<class... Args>
        requires constructible_from<T, Args...>
    constexpr single_view(in_place_t, Args&&... args);
```

### Parameters

*`t`*\
The element value.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Remarks

The best way to create a `single_view` is by using the [`views::single`](range-adaptors.md#single) range adaptor.

1\) Create a `single_view` with a single element of the specified type that is default constructed. For example, `single_view<float> sv{}` creates a `single_view` with a single element of type `float` that is default constructed to `0.0`.\
2\) Create a `single_view` with a single element of the specified type that is copy-initialized from the specified argument. For example, `single_view<myObjectType> sv{myObject}` creates a `single_view` with a single element of type `myObjectType` that is copy-initialized from the argument.\
3\) Create a `single_view` with a single element of the specified type that is move-initialized from the argument.\
4\) Create a `single_view` with a single element of the specified type initialized with `(std::forward<Args>(args)...)`.

### Example `single_view`

```cpp
/// requires /std:c++20 or higher
#include <ranges>
#include <iostream>
#include <string>
#include <tuple>

int main()
{
    std::ranges::single_view<int> sv{7};
    std::cout << sv.front() << " " << *sv.data() << "\n"; // 7 7

    std::ranges::single_view<std::tuple<int, std::string>> sv2{{6502, "8-bit"}};
    std::cout << std::get<0>(sv2[0]) << " " << std::get<1>(sv2[0]) << "\n"; // 6502 8-bit
}
```

```output
7 7
6502 8-bit
```

## `begin`

Get a pointer to the single element in the view.

```cpp
constexpr T* begin() noexcept;
constexpr const T* begin() const noexcept;
```

### Parameters

None.

### Return value

A pointer to the single element inside the `single_view`.

## `data`

Get a pointer to the single element in the `single_view`.

```cpp
constexpr T* data() noexcept;
constexpr const T* data() const noexcept;
```

### Parameters

None.

### Return value

A pointer to the element in the `single_view`.

## `end`

Gets a pointer to the sentinel after the element.

```cpp
constexpr T* end() noexcept;
constexpr const T* end() const noexcept;
```

### Parameters

None.

### Return value

A pointer to the sentinel that follows the element.

## `size`

Get the number of elements in the view. Always returns `1`.

```cpp
static constexpr size_t size() noexcept;
```

### Parameters

None.

### Return value

`1`

## See also

[`<ranges>`](ranges.md)\
[`single` range adaptor](range-adaptors.md#single)\
[`empty_view`](empty-view-class.md)\
[View classes](view-classes.md)
