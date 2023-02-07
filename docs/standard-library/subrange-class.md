---
title: subrange class (C++ Standard Library)
description: "API reference for the Standard Template Library (STL) <ranges> subrange class, which is a view of the elements of a range as defined by a begin iterator and a sentinel."
ms.date: 10/05/2022
f1_keywords: ["ranges/std::subrange", "ranges/std::subrange::begin", "ranges/std::subrange::data", "ranges/std::subrange::empty", "ranges/std::subrange::end", "ranges/std::subrange::get", "ranges/std::subrange::size", "ranges/std::subrange::operator bool", "ranges/std::subrange::operator PairLike", "ranges/std::subrange::back", "ranges/std::subrange::front", "ranges/std::subrange::operator[]", "ranges/std::subrange::advance", "ranges/std::subrange::prev", "ranges/std::subrange::next"]
helpviewer_keywords: ["std::ranges::subrange [C++]", "std::ranges::subrange::begin [C++]", "std::ranges::subrange::data [C++]", "std::ranges::subrange::empty [C++]", "std::ranges::subrange::end [C++]", "std::ranges::subrange::size [C++]", "std::ranges::subrange::back [C++]", "std::ranges::subrange::front [C++]",  "std::ranges::subrange::advance [C++]", "std::ranges::subrange::prev [C++]",  "std::ranges::subrange::next [C++]",  "std::ranges::subrange::get [C++]", "std::ranges::subrange::operator[] [C++]", "std::ranges::subrange::operator bool [C++]", "std::ranges::subrange::operator PairLike [C++]"]
dev_langs: ["C++"]
---
# `subrange` class (C++ Standard Library)

Provides a view of part of the elements of a range as defined by a begin iterator and sentinel.

## Syntax

```cpp
template<input_or_output_iterator I, sentinel_for<I> S, subrange_kind K>
  requires (K == subrange_kind::sized || !sized_sentinel_for<S, I>)
class subrange : public view_interface<subrange<I, S, K>>
```

### Template parameters

*`I`*\
 The begin iterator type. The [`input_or_output_iterator`](iterator-concepts.md#input_or_output_iterator) concept ensures that *`I`* is an iterator that can read all of the elements.

*`K`*\
The kind of subrange: Use `subrange_kind::sized` to specify a sized subrange. Use `sized_sentinel_for<S, I>` if the iterator and sentinel can be subtracted to yield the size. The requirement `subrange_kind::sized || !sized_sentinel_for<S, I>` stores the size locally in the subrange object, and requires that you construct the subrange either using the constructor that takes a [`sized_range`](range-concepts.md#sized_range) (for which you would specify `subrange_kind::sized` here) or via the constructor that takes an `iterator`, `sentinel`, and `size` (so you would specify `sized_sentinel_for<S, I>` here).

*`S`*\
 The end iterator type. The [`sized_sentinel_for`](iterator-concepts.md#sized_sentinel_for) concept ensures that *`S`* can be used as a sentinel for *`I`* and that it's possible to compute the distance between the sentinel and the current iterator position in *`I`* in constant time.

## View characteristics

For a description of the following entries, see [View class characteristics](view-classes.md#view-classes-characteristics)

| Characteristic | Description |
|--|--|
| **Range adaptor** | [`views::counted`](range-adaptors.md#counted) |
| **Underlying range** | Any range |
| **Element type** | `iter_reference_t<I>` |
| **View iterator category** | Same as *`I`s* category |
| **Sized** | If *`K`* is `subrange::sized` |
| **Is `const`-iterable** | If *`I`* is copyable |
| **Common range** | If *`I`* and *`S`* are the same type. |
| **Borrowed range** | Yes |

## Members

| **Member functions** | **Description** |
|--|--|
| [Constructors](#constructors)<sup>C++20</sup> | Construct a `subrange`. |
| [`operator PairLike`](#op_pairlike)<sup>C++20</sup> | Convert a `subrange` to a pair-like type. |
| [`advance`](#advance)<sup>C++20</sup> | Move the iterator a specified distance. |
| [`begin`](#begin) | Get an iterator to the first element. |
| [`empty`](#empty)<sup>C++20</sup> | Test whether the `subrange` is empty. |
| [`end`](#end)<sup>C++20</sup> | Get the sentinel at the end of the `subrange`. |
| [`next`](#next)<sup>C++20</sup> | Creates a copy of this `subrange` but with the stored iterator moved forward the specified distance. |
| [`prev`](#prev)<sup>C++20</sup> | Creates a copy of this `subrange` but with the stored iterator moved back the specified distance. |
| [`size`](#size)<sup>C++20</sup> | Get the number of elements. |
| **Inherited from [`view_interface`](view-interface.md)** | **Description** |
| [`back`](view-interface.md#back)<sup>C++20</sup> | Get the last element. |
| [`data`](view-interface.md#data)<sup>C++20</sup> | Get a pointer to the first element. |
| [`front`](view-interface.md#front)<sup>C++20</sup> | Get the first element. |
| [`operator[]`](view-interface.md#op_at)<sup>C++20</sup> | Get the element at the specified position. |
| [`operator bool`](view-interface.md#op_bool)<sup>C++20</sup> | Test whether the `subrange` is empty. |

## Remarks

A `subrange` is useful when you have a begin and end iterator, but you want to pass a single object instead. For example, if you wanted to call a range adaptor but had begin and end iterators, you could use a `subrange` to wrap them and pass the `subrange` to the range adaptor.

## Requirements

**Header:** `<ranges>` (since C++ 20)

**Namespace:** `std::ranges`

**Compiler Option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Constructors

Create a `subrange`.

```cpp
1) subrange() requires default_initializable<I> = default;
2) template <Convertible_to_non_slicing<I> It>
    constexpr subrange(It begin, S end) requires (!Store_size);
3) template <Convertible_to_non_slicing<I> It>
    constexpr subrange(It begin, S end, const Size_type size) requires (K == subrange_kind::sized);
4) template <Not_same_as<subrange> rg>
    requires borrowed_range<rg>
        && Convertible_to_non_slicing<iterator_t<rg>, I>
        && convertible_to<sentinel_t<rg>, S>
    constexpr subrange(rg&& r) requires (!_Store_size || sized_range<rg>);
5) template <borrowed_range rg>
        requires Convertible_to_non_slicing<iterator_t<rg>, I> && convertible_to<sentinel_t<rg>, S>
    constexpr subrange(rg&& r, const _Size_type sizeHint) requires (K == subrange_kind::sized)
```

### Parameters

*`begin`*\
Iterator that points to the first element in the subrange.

*`end`*\
Sentinel that points to the end of the subrange. The element it points to isn't included in the subrange.

*`sizeHint`*\
The size of the range in elements. This is used to optimize the `size` member function and is necessary if you want to make a sized `subrange` from an iterator and sentinel whose types don't model [`sized_sentinel_for`](iterator-concepts.md#sized_sentinel_for).

For information about template parameter types, see [Template parameters](#template-parameters).

### Return value

A `subrange`instance.

### Remarks

1\) Default constructs the stored iterator and sentinel. The size hint is set to 0.\
2\) Uses `std::move()` to move the `begin` iterator and `end` sentinel to the stored iterator and sentinel.\
3\) Initializes the stored iterator with `std::move(begin)`, the stored sentinel with `std::move(end)`, and the stored size hint with `size`, which should equal the distance between the first and second arguments.\
4\) Construct a `subrange` from a range.\
5\) The behavior isn't defined if `szHint != ranges::distance(rg)`.

The [`counted`](range-adaptors.md#counted) range adaptor can create a `subrange`. That adaptor takes a begin iterator and a count.

### Example: `counted`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto pos5 = std::ranges::find(v, 5);
    auto countedView = std::views::counted(pos5, 5);
    for (auto e : countedView) // outputs 5 6 7 8 9
    {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    // You can pass the range directly if it supports input_or_output_iterator, in which case, the
    // count starts from the first element
    const char chars[] = { 'H','i',' ','t','h','e','r','e' };
    for (char c : std::views::counted(chars, 2))
    {
        std::cout << c; // outputs Hi
    }
}
```

```output
5 6 7 8 9
Hi
```

## <a name="op_pairlike"></a> `operator PairLike`

Convert a `subrange` to a type that models `pair-like`.

```cpp
template<not-same-as<subrange> PairLike>
requires pair-like-convertible-from<PairLike, const I&, const S&>
constexpr operator PairLike() const;
```

### Parameters

None.

For information about template parameter types, see [Template parameters](#template-parameters).

### Return value

A `PairLike` value that is direct-initialized with the stored iterator and sentinel.
The last value in the pair will be the sentinel.

Remember that the sentinel is *past* the last element in the subrange, as shown in the example below.

### Remarks

This conversion is useful with older `Boost::Ranges` code that accepts (first, last) pairs to denote a range.\
This conversion is useful for converting a subrange to a `pair` or `tuple` or other type that models `pair_like`. Some examples of `pair_like` types are:

```cpp
std::array<T, 2>
std::pair<T, U>
std::ranges::subrange<I, S, K>
std::tuple<T, U>
```

### Example: `operator PairLike()`

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <ranges>
#include <vector>
#include <utility>

int main()
{
    constexpr int a[] = {0, 1, 2, 3, 4, 5};
    std::ranges::subrange rg(a);
    rg.advance(2);
    const std::pair<const int*, const int*> p = rg;
    for (auto e : rg)
    {
        std::cout << e << ' ';
    }

    // because the sentinel points after the last element, subtract one to get the last element
    std::cout << '\n' << *p.first << ':' << *(p.second - 1) << '\n'; // outputs 2:5
 }
```

```output
2 3 4 5
2:5
```

## `advance`

Adjust the iterator for this `subrange` by *`n`* elements.

```cpp
constexpr subrange& advance(const iter_difference_t<I> n);
```

### Parameters

*`n`*\
How many elements to adjust the iterator. *`n`* can be positive (move forward) or, if *`I`* is bidirectional, negative (move backward).

### Remarks

This function modifies the current state of the iterator in the `subrange`.

If you advance past the end of the `subrange`, the iterator is set to the sentinel at the end of the `subrange`.\
If you advance past the beginning of the `subrange` (using a negative `n`), you'll get an invalid parameter exception if the range you made the `subrange` from doesn't have an element in the place.

### Example `advance`

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

void print(const std::string &msg, auto &&v)
{
    std::cout << msg << '\n';
    for (auto& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print("Original vector: ", v); // outputs 0 1 2 3 4 5 6 7 8 9 10

    // create a subrange 3 4 5 6
    std::ranges::subrange theSubrange{ std::ranges::find(v,3), std::ranges::find(v, 7) };
    print("The subrange: ", theSubrange); // outputs 3 4 5 6

    auto sr = theSubrange.advance(2); // get a subrange 2 positions to the right of the current iterator location
    print("theSubrange.advance(2): ", sr); // outputs 5 6
    print("Note that subrange's iterator moved during advance(): ", sr); // outputs 5 6
    sr = theSubrange.advance(-3); // Moving before the subrange, but onto a valid element in the original range 
    print("theSubrange.advance(-3): ", sr); // outputs 2 3 4 5 6
}
```

```output
Original vector:
0 1 2 3 4 5 6 7 8 9 10
The subrange:
3 4 5 6
theSubrange.advance(2):
5 6
Note that subrange's iterator moved during advance():
5 6
theSubrange.advance(-3):
2 3 4 5 6
```

## `begin`

Get an iterator to the first element in the `subrange`.

```cpp
1) constexpr I begin() const requires copyable<I>;
2) [[nodiscard]] constexpr I begin() requires (!std::copyable<I>);
```

### Parameters

None.

### Return value

An iterator pointing at the first element in the `subrange`.
If the iterator isn't copyable, it's returned with `std::move()`. If the iterator is moved, the state of the stored iterator depends on the implementation of the move constructor for *`I`*.

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

## `empty`

Test whether the `subrange` is empty.

```cpp
constexpr bool empty() const;
```

### Parameters

None.

### Return value

Returns `true` if the `subrange` has no elements. Otherwise, returns `false`.

## `end`

Get the sentinel at the end of the `subrange`

```cpp
[[NODISCARD]] constexpr S end() const;
```

### Parameters

None.

### Return value

The sentinel that follows the last element in the `subrange`:

:::image type="content" source="media/begin-end-sentinel.png" alt-text="Picture of a vector with the elements 10, 20, and 30. The first element contains 10 and is labeled begin(). The last element contains 30 and is labeled 'last element'. An imaginary box after the last element indicates the sentinel and is labeled end().":::

The sentinel is copy-constructed from the stored sentinel.

## `next`

Creates a copy of this `subrange` but with the stored iterator moved forward the specified distance.

```cpp
1) [[nodiscard]] constexpr subrange next(iter_difference_t<I> n = 1) const & requires forward_iterator<I>;
2) [[nodiscard]] constexpr subrange next(iter_difference_t<I> n = 1) &&;
```

### Parameters

*`n`*\
How many elements to move the iterator forward. Defaults to 1. Must be positive.

### Return value

Returns a copy of the `subrange` starting at the *`n`*th element.

### Remarks

Unlike `advance()`, `next()` doesn't change the location of the iterator stored in the original `subrange`.
The returned `subrange` has all the elements that the original subrange has, but the iterator is in a different location.

1\) The return value is the same as:

```cpp
auto tmp = *this;
tmp.advance(n);
return tmp;
```

2\) The return value is the same as:

```cpp
advance(n);
return std::move(*this);
```

### Example: `next`

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

void print(const std::string &msg, auto &&v)
{
    std::cout << msg << '\n';
    for (auto& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print("Original vector:", v); // 0 1 2 3 4 5 6 7 8 9 10

    // create a subrange from the front of v up to (but not including) the element 7
    std::ranges::subrange theSubrange{ std::ranges::find(v,1), std::ranges::find(v, 7) };
    print("The subrange:", theSubrange); // 1 2 3 4 5 6

    auto forward = theSubrange.advance(3); // get a subrange 3 positions to the right of the current iterator location
    print("theSubrange.advance(3):", forward); // 4 5 6

    // prev()
    auto previous = theSubrange.prev(2); // move back 2
    print("theSubrange.prev(2):", previous); // 2 3 4 5 6    
    print("Note that the subrange's iterator did *not* move during prev():", theSubrange); // 4 5 6
}
```

```output
Original vector:
0 1 2 3 4 5 6 7 8 9 10
The subrange:
1 2 3 4 5 6
theSubrange.next(3):
4 5 6
Note that the original subrange's iterator did *not* move during next():
1 2 3 4 5 6
```

## `prev`

Creates a copy of this `subrange`, but with the stored iterator moved back the specified distance.

```cpp
[[nodiscard]] constexpr subrange prev(std::iter_difference_t<I> n = 1 ) const
    requires std::bidirectional_iterator<I>;
```

### Parameters

*`n`*\
How many elements to move the iterator back. Defaults to 1. Must be positive.

### Return value

Returns a copy of the `subrange` but with the iterator moved back *`n`* elements.

### Remarks

Unlike `advance()`, `prev()` doesn't change the location of the iterator stored in the original `subrange`.\
The returned `subrange` has all the elements that the original subrange has, but the iterator is just in a different location. You can think of the return value as:

```cpp
auto tmp = *this;
tmp.advance(-n);
return tmp;
```

### Example `prev`

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

void print(const std::string &msg, auto &&v)
{
    std::cout << msg << '\n';
    for (auto& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print("Original vector:", v); // 0 1 2 3 4 5 6 7 8 9 10

    // create a subrange from the front of v up to (but not including) the element 7
    std::ranges::subrange theSubrange{std::ranges::find(v,1), std::ranges::find(v, 7)};
    print("The subrange: ", theSubrange); // 1 2 3 4 5 6

    auto forward = theSubrange.advance(3); // get a subrange 3 positions to the right of the current iterator location
    print("theSubrange.advance(3):", forward); // 4 5 6

    // prev()
    auto previous = theSubrange.prev(2); // move back 2
    print("theSubrange.prev(2):", previous); // 2 3 4 5 6    
    print("Note that the subrange's iterator did *not* move during prev():", theSubrange); // 4 5 6
}
```

```output
Original vector:
0 1 2 3 4 5 6 7 8 9 10
The subrange:
1 2 3 4 5 6
theSubrange.advance(3):
4 5 6
theSubrange.prev(2):
2 3 4 5 6
Note that the subrange's iterator did *not* move during prev():
4 5 6
```

## `size`

Get the number of elements in the `subrange`.

```cpp
constexpr size() const
    requires (K == ranges::subrange_kind::sized);
```

### Parameters

None.

### Return value

The number of elements in the `subrange`.

If the size isn't stored, which is the case when the `subrange` is created with `K == ranges::subrange_kind::sized` specified and `std::sized_sentinel_for<S, I>` isn't satisfied, then the size is returned as the distance between the begin and end iterators.

Changing the position of the `begin` iterator, with `advance`, for example, changes the reported size.

## See also

[`<ranges>`](ranges.md)\
[`counted`](range-adaptors.md#counted)\
[View classes](view-classes.md)
