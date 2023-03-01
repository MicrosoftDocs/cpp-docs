---
title: filter_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> filter_view class, which is a view that filters out elements of a range that don't match a predicate."
ms.date: 09/27/2022
f1_keywords: ["ranges/std::filter_view", "ranges/std::filter_view::base", "ranges/std::filter_view::begin", "ranges/std::filter_view::empty", "ranges/std::filter_view::end", "ranges/std::filter_view::operator bool",  "ranges/std::filter_view::pred", "ranges/std::filter_view::back", "ranges/std::filter_view::front"]
helpviewer_keywords: ["std::ranges::filter_view [C++]", "std::ranges::filter_view::base [C++]", "std::ranges::filter_view::begin [C++]", "std::ranges::filter_view::empty [C++]", "std::ranges::filter_view::end [C++]", "std::ranges::filter_view::pred [C++]", "std::ranges::filter_view::back [C++]", "std::ranges::filter_view::front [C++]", "std::ranges::filter_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `filter_view` class (C++ Standard Library)

A view that filters out the elements of a range that don't match the predicate.

## Syntax

```cpp
template<ranges::input_range V, indirect_unary_predicate<iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
class filter_view : public view_interface<filter_view<V, Pred>>;
```

### Template parameters

*`V`*\
 The type of the underlying range.

*`Pred`*\
The type of the predicate that determines which elements to keep.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::filter`](range-adaptors.md#filter) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | `input_range`, [`forward_range`](range-concepts.md#forward_range), or [`bidirectional_range`](range-concepts.md#bidirectional_range) depending on the underlying range |
| **Sized** | No |
| **Is `const`-iterable** | No |
| **Common range** | Only if the underlying range satisfies [`common_range`](range-concepts.md#common_range) |
| **Borrowed range** | Only if the underlying range satisfies [`borrowed_range`](range-concepts.md#borrowed_range) |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`pred`](#pred)<sup>C++20</sup>| Get a reference to the predicate that determines which elements to drop. |
| **Inherited from [view_interface](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`empty`](view-interface.md#empty)<sup>C++20</sup> | Test whether the view is empty. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the view isn't empty. |

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Construct an instance of a `filter_view`

```cpp
1) constexpr filter_view(V base, P pred);
2) filter_view() requires default_initializable<V> && default_initializable<Pred> = default;
```

### Parameters

*`base`*\
The underlying view.

*`pred`*\
The predicate that determines which elements to keep from the underlying view.

For information about the template parameter types, see [Template parameters](#template-parameters).

### Return value

A `filter_view` instance.

### Remarks

The best way to create a `filter_view` is by using the [`views::filter`](range-adaptors.md#filter) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) Create a value-initialized `filter_view`. The predicate and the underlying view must be default-initializable.\
2\) Move constructs the `filter_view` from a *`base`* view and a *`pred`* predicate. Both *`base`* and *`pred`* are moved via `std::move()`.

### Example: `filter_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

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
    std::vector<int> v{0, 1, -2, 3, -4, -5, 6};
    auto myView = std::views::filter(v, [](int i) {return i > 0; });
    print(myView); // outputs 1 3 6

    auto myView2 = v | std::views::filter([](int i) {return i < 3; });
    print(myView2); // outputs 0 1 -2 -4 -5
}
```

```output
1 3 6
0 1 -2 -4 -5
```

## `base`

Gets the underlying range.

```cpp
// Uses a copy constructor to return the underlying range
constexpr V base() const& requires std::copy_constructible<V>;

// Uses std::move() to return the underlying range
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

If the class doesn't store a predicate, the behavior is undefined.

### Example `pred`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};
    auto mv = v | std::views::filter(
        [](int i) {return i < 5; }); // keep the elements < 5
    
    std::cout << std::boolalpha << mv.pred()(v[6]); // outputs "false" because v[6] = 6 and 6 is not less than 5 (the predicate)
}
```

## See also

[`<ranges>`](ranges.md)\
[`filter` range adaptor](range-adaptors.md#filter)\
[`drop_while()`](range-adaptors.md#drop_while)\
[`take_while()`](range-adaptors.md#take_while)\
[view classes](view-classes.md)
