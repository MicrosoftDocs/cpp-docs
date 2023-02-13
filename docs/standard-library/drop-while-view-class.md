---
title: drop_while_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> drop_while_view class, which is a view that contains those elements of a range that remain once the leading elements that match a predicate are dropped."
ms.date: 08/04/2022
f1_keywords: ["ranges/std::drop_while_view", "ranges/std::drop_while_view::base", "ranges/std::drop_while_view::begin", "ranges/std::drop_while_view::data", "ranges/std::drop_while_view::empty", "ranges/std::drop_while_view::end", "ranges/std::drop_while_view::size", "ranges/std::drop_while_view::operator bool",  "ranges/std::drop_while_view::pred", "ranges/std::drop_while_view::back", "ranges/std::drop_while_view::front", "ranges/std::drop_while_view::operator[]"]
helpviewer_keywords: ["std::ranges::drop_while_view [C++]", "std::ranges::drop_while_view::base [C++]", "std::ranges::drop_while_view::begin [C++]", "std::ranges::drop_while_view::data [C++]", "std::ranges::drop_while_view::empty [C++]", "std::ranges::drop_while_view::size [C++]", "std::ranges::drop_while_view::end [C++]", 
"std::ranges::drop_while_view::pred [C++]", "std::ranges::drop_while_view::back [C++]", "std::ranges::drop_while_view::front [C++]", "std::ranges::drop_while_view::operator[] [C++]", "std::ranges::drop_while_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `drop_while_view` class (C++ Standard Library)

A view that contains the elements of a range that remain once the leading elements that match a predicate are dropped.

## Syntax

```cpp
template<ranges::view V, class P>
    requires ranges::input_range<V> &&
             std::is_object_v<P> &&
             std::indirect_unary_predicate<const P, ranges::iterator_t<V>>
class drop_while_view : public ranges::view_interface<drop_while_view<V, P>>;
```

### Template parameters

*`V`*\
 The type of the underlying view.

*`P`*\
The type of the predicate that determines the leading elements to drop.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::drop_while`](range-adaptors.md#drop_while) |
| **Underlying range** | Must satisfy [`forward_range`](range-concepts.md#forward_range) or higher and the underlying range's iterators must model [`sized_sentinel_for`](iterator-concepts.md#sized_sentinel_for) |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | Only if the underlying range satisfies [`random_access_range`](range-concepts.md#random_access_range) |
| **Is `const`-iterable** | No |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors) | Construct the view. |
| [`base`](#base) | Get the underlying view. |
| [`begin`](#begin) | Get an iterator to the first element. |
| [`end`](#end) | Get the sentinel at the end of the view. |
| [`pred`](#pred) | Get a reference to the predicate that determines which elements to drop. |
| **Inherited from [view_interface](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |
| [`size`](view-interface.md#size) | Get the number of elements in the view.  |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `drop_while_view`.

```cpp
1) constexpr drop_while_view(V base, P pred);
2) drop_while_view() requires default_initializable<V> && default_initializable<P> = default;
```

### Parameters

*`base`*\
The underlying range.

*`pred`*\
The predicate that determines the leading elements to drop.

For information about the template parameter types, see [Template parameters](#template-parameters).

### Return value

A `drop_while_view` instance.

### Remarks

The best way to create a `drop_while_view` is by using the [`views::drop_while`](range-adaptors.md#drop_while) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) Move constructs the `drop_while_view` from a *`base`* view and a *`pred`* predicate. Both *`base`* and *`pred`* are moved via `std::move()`.\
2\) Default-constructs a `drop_while_view`.

### Example: `drop_while_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <vector>
#include <iostream>

void print(auto v)
{
    for (auto& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto myView = std::views::drop_while(
        v,
        [](int i) {return i >= 0; });
    print(myView); // -4 5 6

    auto myView2 = v | std::views::drop_while(
        [](int i) {return i < 5; });
    print(myView2); // 5 6
}
```

```output
-4 5 6
5 6
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

## `pred`

Get a reference to the predicate that determines which leading elements to drop.

```cpp
constexpr const Pred& pred() const;
```

### Return value

 A reference to the predicate.

### Remarks

If the view doesn't store a predicate, the behavior is undefined.

### Example `pred`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto mv = v | std::views::drop_while(
        [](int i) {return i < 5; }); // drop the leading elements < 5
    std::cout << std::boolalpha << mv.pred()(v[6]); // outputs "false" because v[6] = 6 and 6 is not less than 5 (the predicate)
}
```

```Output
false
```

## See also

[`<ranges>`](ranges.md)\
[`drop_while` range adaptor](range-adaptors.md#drop_while)\
[`take_while` range adaptor](range-adaptors.md#take_while)\
[`take_while_view`](take-while-view-class.md)\
[view classes](view-classes.md)
