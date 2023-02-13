---
title: owning_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> owning_view class, which takes ownership of the elements in a range."
ms.date: 10/05/2022
f1_keywords: ["ranges/std::owning_view", "ranges/std::owning_view::base", "ranges/std::owning_view::begin", "ranges/std::owning_view::end", "ranges/std::owning_view::size", "ranges/std::owning_view::empty", "ranges/std::owning_view::operator bool", "ranges/std::owning_view::data", "ranges/std::owning_view::back", "ranges/std::owning_view::front", "ranges/std::owning_view::operator[]", "ranges/std::owning_view::operator="]
helpviewer_keywords: ["std::ranges::owning_view [C++]", "std::ranges::owning_view [C++], base", "std::ranges::owning_view [C++], begin", "std::ranges::owning_view [C++], end", "std::ranges::owning_view [C++], size", "std::ranges::owning_view [C++], data", "std::ranges::owning_view [C++], empty", "std::ranges::owning_view [C++], operator bool", "std::ranges::owning_view [C++], front", "std::ranges::owning_view [C++], back", "std::ranges::owning_view [C++], operator[]"]
dev_langs: ["C++"]
---
# `owning_view` class (C++ Standard Library)

A view that takes ownership of the elements in another range.

## Syntax

```cpp
template<range R>
    requires std::movable<R> && (!is-initializer-list<R>)
class owning_view : public ranges::view_interface<owning_view<R>>;
```

### Template parameters

*`R`*\
The type of the underlying range.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::all`](range-adaptors.md#all) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`sized_range`](range-concepts.md#sized_range) |
| **Is `const`-iterable** | Only if the underlying range satisfies `const-iterable` |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) | Construct an `owning_view`. |
| [`base`](#base)<sup>C++20</sup> | Get a reference to the owned range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`data`](#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`empty`](#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. |
| [`operator=`](#assignment_operator) | Assign (move) the contents from another `owning_view` to this one. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Remarks

The best way to create an `owning_view` is by using the [`views::all`](range-adaptors.md#all) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

Even though this class owns its elements, it's not expensive to construct because the underlying range is moved using `std::move()`.

This view is useful when you want a range that doesn't depend on the lifetime of the container providing the elements.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create an instance of a `owning_view`.

```cpp
1) owning_view() requires default_initializable<R> = default;
2) constexpr owning_view(R&& rg); 
3) owning_view(const owning_view& v) = delete; // no copy constructor 
4) owning_view(const owning_view&& v) = default; // move constructor
```

### Parameters

*`rg`*\
The range to move to the `owning_view`.

*`v`*\
The `owning_view` to move to the new `owning_view`.

For information about template parameter types, see [Template parameters](#template-parameters).

### Remarks

1\) The default constructor creates a default-initialized `owning_view`.\
2\) Move constructs the `owning_view` from *`rg`*.\
3\) An `owning_view` can't be copied, only moved.\
4\) Construct the `owning_view` from another `owning_view`.

### Example: `owning_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>
#include <utility>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    auto myOwningView = std::views::all(std::move(v)); // create an owning_view from a moved vector
    std::cout << v.size() << '\n'; // outputs 0 because myOwningView now owns the elements
    std::cout << myOwningView.size() << '\n'; // outputs 10

    std::vector<int> v2 = {1,2,3,4,5};
    std::ranges::owning_view<std::vector<int>> ov2{std::move(v2)};
    std::cout << v2.size() << '\n'; // outputs 0 because ov2 now owns the elements
    std::cout << ov2.size() << '\n'; // outputs 5
}
```

```output
0
10
0
5
```

## `base`

Gets a reference to the underlying range.

```cpp
1) constexpr R& base() & noexcept { return r_; }
2) constexpr const R& base() const & noexcept { return r_; }
3) constexpr R&& base() && noexcept { return std::move(r_); }
4) constexpr const R&& base() const && noexcept { return std::move(r_); }
```

### Parameters

None.

### Return value

A reference to the underlying range, call it *`rg`*.\
For 1 & 2, the underlying range is returned via `return rg;`\
For 3 & 4, the underlying range is returned via `std::move(rg);`

## `begin`

Get an iterator to the first element in the view.

```cpp
constexpr iterator_t<R> begin();
constexpr auto begin() const requires range<const R>;
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `data`

Get a pointer to the first element in the view.

```cpp
constexpr auto data()
    requires std::contiguous_iterator<ranges::iterator_t<R>>;
constexpr auto data() const
    requires std::contiguous_iterator<ranges::iterator_t<const R>>;
```

### Parameters

None.

### Return value

A pointer to the first element in the view.

### Remarks

The underlying owned range must satisfy `contiguous_range`.

## `empty`

Test whether the view is empty.

```cpp
constexpr bool empty();
constexpr bool empty() const;
```

### Parameters

None.

### Return value

Returns `true` if the underlying range has no elements. Otherwise, returns `false`.

## `end`

Get the sentinel at the end of the view.

```cpp
constexpr sentinel_t<R> end();
constexpr auto end() const requires range<const R>
```

### Return value

The sentinel that follows the last element in the view:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `size`

Get the number of elements in the view.

```cpp
constexpr auto size() requires ranges::sized_range<R>;
constexpr auto size() const requires ranges::sized_range<const R>;
```

### Parameters

None.

### Return value

The number of elements in the view.

## <a name="assignment_operator"></a> `operator=`

Assign (move) the contents from another `owning_view` to this one.

```cpp
owning_view& operator=(owning_view&&) = default;
```

### Parameters

The `owning_view` to assign (move) to this one.

### Return value

`*this`

### Remarks

An `owning_view` can't be copied, only moved.

### Example: `operator=`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {1,2,3};
    std::ranges::owning_view<std::vector<int>> ov1{std::move(v1)};
    
    std::vector<int> v2 = {4,5,6};
    std::ranges::owning_view<std::vector<int>> ov2{std::move(v2)};
    
    // operator=
    ov2 = std::move(ov1);

    // ov1 took ownership of v1, so v1 is empty
    // ov2 took ownership of v2, so v2 is empty
    // ov2 then took ownership of ov1, so ov1 is empty
    // ov2 now owns the elements 1, 2, 3

    std::cout << std::boolalpha << "v1.empty():" << v1.empty() << " ov1.empty():" << ov1.empty() << '\n'; // v1.empty():true ov1.empty():true
    std::cout << "v2.empty():" << v2.empty() << " ov2.size():" << ov2.size() << '\n'; // v2.empty():true ov2.size():3

    for (auto e : ov2)
    {
         std::cout << e << ' '; // 1 2 3
    }
}
```

```output
v1.empty():true ov1.empty():true
v2.empty():true ov2.size():3
1 2 3
```

## See also

[`<ranges>`](ranges.md)\
[`all` range adaptor](range-adaptors.md#all)\
[view classes](view-classes.md)
