---
title: take_while_view class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> take_while_view class, which is a view that contains the leading elements of a range that match a predicate."
ms.date: 08/04/2022
f1_keywords: ["ranges/std::take_while_view", "ranges/std::take_while_view::base", "ranges/std::take_while_view::begin", "ranges/std::take_while_view::data", "ranges/std::take_while_view::empty", "ranges/std::take_while_view::end", "ranges/std::take_while_view::size", "ranges/std::take_while_view::operator bool",  "ranges/std::take_while_view::pred", "ranges/std::take_while_view::back", "ranges/std::take_while_view::front", "ranges/std::take_while_view::operator[]"]
helpviewer_keywords: ["std::ranges::take_while_view [C++]", "std::ranges::take_while_view::base [C++]", "std::ranges::take_while_view::begin [C++]", "std::ranges::take_while_view::data [C++]", "std::ranges::take_while_view::empty [C++]", "std::ranges::take_while_view::size [C++]", "std::ranges::take_while_view::end [C++]", 
"std::ranges::take_while_view::pred [C++]", "std::ranges::take_while_view::back [C++]", "std::ranges::take_while_view::front [C++]", "std::ranges::take_while_view::operator[] [C++]", "std::ranges::take_while_view::operator bool [C++]"]
dev_langs: ["C++"]
---
# `take_while_view` class (C++ Standard Library)

A view that contains the leading elements of a range that match a predicate.

## Syntax

```cpp
template<view V, class Pred> requires
  input_range<V> && is_object_v<Pred> &&
  indirect_unary_predicate<const Pred, iterator_t<V>>
class take_while_view : public view_interface<take_while_view<V, Pred>>;
```

### Template parameters

*`Pred`*\
The type of the predicate that determines the leading elements to put in the view.

*`V`*\
 The type of the underlying view.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::take_while`](range-adaptors.md#take_while) |
| **Underlying range** | Must satisfy [`input_range`](range-concepts.md#input_range) or higher |
| **Element type** | Same as the underlying range |
| **View iterator category** | Same as the underlying range |
| **Sized** | No |
| **Is `const`-iterable** | Only if the underlying range is `const` iterable and the predicate can work with `const` references. |
| **Common range** | No |
| **Borrowed range** | No |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct the view. |
| [`base`](#base)<sup>C++20</sup> | Get the underlying range. |
| [`begin`](#begin)<sup>C++20</sup> | Get an iterator to the first element. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the view. |
| [`pred`](#pred)<sup>C++20</sup> | Get a reference to the predicate that determines which elements to take. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
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

Construct an instance of a `take_while_view`

```cpp
1) take_while_view() requires 
    default_initializable<V> &&
    default_initializable<Pred> = default;

2) constexpr take_while_view(V base, Pred pred);
```

### Parameters

*`base`*\
The underlying view.

*`pred`*\
The predicate that determines the leading elements to put in the view.

For information about template parameter types, see [Template parameters](#template-parameters).

### Return value

A `take_while_view` object.

### Remarks

The best way to create a `take_while_view` is by using the [`views::take_while`](range-adaptors.md#take_while) range adaptor. Range adaptors are the intended way to create view classes. The view types are exposed in case you want to create your own custom view type.

1\) Move constructs the `take_while_view` from a *`base`* view and a *`pred`* predicate. Both *`base`* and *`pred`* are moved via `std::move()`.\
2\) Constructs an empty `take_while_view`. The underlying view and predicate are default constructed.

### Example: `take_while_view`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};
    auto twv = std::views::take_while(v, [](int i) {return i >= 0; });
    
    for (auto& e : twv)
    {
        std::cout << e << ' '; // 0 1 2 3
    }
    std::cout << '\n';

    // Using the '|' operator to create a take_view
    for (auto i : v | std::views::take_while([](int i) {return i < 5; }))
    {
        std::cout << i << ' '; // 0 1 2 3 -4
    }
}
```

```output
0 1 2 3
0 1 2 3 -4
```

## `base`

Gets a copy of the underlying view.

```cpp
// Uses a copy constructor to return the underlying view
1) constexpr V base() const& requires std::copy_constructible<V>;

// Uses a move constructor to return the underlying view
2) constexpr V base() &&;
```

### Parameters

None.

### Returns

A copy of the underlying view.

## `begin`

Get an iterator to the first element in the view.

```cpp
1) constexpr auto begin() requires (!Simple_view<V>);
2) constexpr auto begin() const requires
        range<const V> && 
        indirect_unary_predicate<const Pred, iterator_t<const V>>
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the view.
The behavior is undefined if the view doesn't have a predicate.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

For 1, the [`Simple_view`](range-concepts.md#simple_view) requirement means that a view *`V`* and `const V` have the same iterator and sentinel types.

## `end`

Get the sentinel at the end of the view.

```cpp
1) constexpr auto end() requires (!Simple_view<V>);
2) constexpr auto end() const requires
        range<const V> &&
        indirect_unary_predicate<const Pred, iterator_t<const V>
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the view.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

### Remarks

For 1, the [`Simple_view`](range-concepts.md#simple_view) requirement means that a view *`V`* and `const V` have the same iterator and sentinel types.

## `pred`

Get a reference to the predicate used to select which leading elements will go in the view.

```cpp
constexpr const Pred& pred() const;
```

### Return value

A reference to the predicate used to select the leading elements to put in the view.

### Example `pred`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto mv = v | std::views::take_while(
        [](int i) {return i < 5; });
    std::cout << std::boolalpha << mv.pred()(v[6]); // outputs false because v[6] = 6 and 6 is not less than 5 (the predicate)
}
```

## See also

[`<ranges>`](ranges.md)\
[`take_view`](take-view-class.md)\
[`take_while` range adaptor](range-adaptors.md#take_while)\
[view classes](view-classes.md)
