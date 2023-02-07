---
title: ref_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> ref_view class, which is a view that references the elements of another range. It's essentially a view of the elements of another range."
ms.date: 10/05/2022
f1_keywords: ["ranges/std::ref_view", "ranges/std::ref_view::base", "ranges/std::ref_view::begin", "ranges/std::ref_view::data", "ranges/std::ref_view::empty", "ranges/std::ref_view::end", "ranges/std::ref_view::size", "ranges/std::ref_view::operator bool", "ranges/std::ref_view::back", "ranges/std::ref_view::front", "ranges/std::ref_view::operator[]"]
helpviewer_keywords: ["std::ranges::ref_view [C++]", "std::ranges::ref_view::base [C++]", "std::ranges::ref_view::begin [C++]", "std::ranges::ref_view::data [C++]", "std::ranges::ref_view::empty [C++]", "std::ranges::ref_view::end [C++]", "std::ranges::ref_view::size [C++]", "std::ranges::ref_view::operator bool [C++]", "std::ranges::ref_view::back [C++]", "std::ranges::ref_view::front [C++]", "std::ranges::ref_view::operator[] [C++]"]
dev_langs: ["C++"]
---
# `ref_view` class (C++ Standard Library)

 A view that references the elements that belong to another range.

## Syntax

```cpp
template<std::ranges::range R>
    requires std::is_object_v<R>
class ref_view : public ranges::view_interface<ref_view<R>>;
```

### Template parameters

*`R`*\
 The range to reference.

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `ref_view`. |
| [`base`](#base)<sup>C++20</sup> | Get a reference to the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element in the referenced range. |
| [`empty`](#empty)<sup>C++20</sup> | Test whether this `ref_view` is empty. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of this `ref_view`. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. The underlying range must satisfy [`sized_range`](range-concepts.md#sized_range). |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether this `ref_view` isn't empty. |

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::all`](range-adaptors.md#all) or [`views::common`](range-adaptors.md#common) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Yes |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Yes |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `ref_view`

```cpp
// construct a ref_view from a range
template<different-from<ref_view> R>
constexpr ref_view(R&& rg);
```

### Parameters

*`rg`*\
The range to reference.

For information about the template parameter type, see [Template parameters](#template-parameters).

### Return value

A `ref_view` instance.

### Remarks

The best way to create a `ref_view` is by using the [`views::all`](range-adaptors.md#all) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

A `ref_view` is useful for converting a container to a view. For example, you can use `ref_view` to convert a `vector` to a view, which makes it inexpensive to pass the elements of the vector around.

### Example: `ref_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3};
    auto refView = std::views::all(v);
    std::cout << &refView[1] << " : " << &v[1]; // outputs two identical memory addresses, e.g. 00000239AFAFDF90 : 00000239AFAFDF90
    refView[0] = 10; // modifies v[0]
    std::cout << "\n" << v[0]; // 10
}
```

```output
00000239AFAFDF90 : 00000239AFAFDF90
10
```

## `base`

Gets a copy of the underlying range.

```cpp
constexpr R& base() const;
```

### Parameters

None.

### Return value

The underlying range.

## `begin`

Get an iterator to the first element in the `ref_view`.

```cpp
constexpr iterator_t<R> begin() const;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in this `ref_view`.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `data`

Get a pointer to the first element in this `ref_view`. The elements in the range must be contiguous.

```cpp
constexpr auto data() const requires contiguous_range<R>;
```

### Parameters

None.

### Return value

A pointer to the first element.

## `empty`

Test whether this `ref_view` is empty.

```cpp
constexpr bool empty() const
```

### Parameters

None.

### Return value

Returns `true` if the `ref_view` contains no elements. Otherwise, `false`.

## `end`

Get the sentinel at the end of this `ref_view`.

```cpp
constexpr sentinel_t<R> end() const
```

### Return value

The sentinel that follows the last element in this `ref_view`:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `size`

Get the number of elements.

```cpp
constexpr auto size() const requires sized_range<R>
```

### Parameters

None.

### Return value

The number of elements in the `ref_view`.

## See also

[`<ranges>`](ranges.md)\
[`all` range adaptor](range-adaptors.md#all)\
[view classes](view-classes.md)
