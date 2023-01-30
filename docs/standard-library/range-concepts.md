---
description: "Learn more about range concepts."
title: "<ranges> concepts"
ms.date: 12/16/2022
f1_keywords: ["ranges/std::ranges::range", "ranges/std::ranges::bidirectional_range", "ranges/std::ranges::borrowed_range", "ranges/std::ranges::common_range", "ranges/std::ranges::contiguous_range", "ranges/std::ranges::forward_range", "ranges/std::ranges::input_range", "ranges/std::ranges::output_range", "ranges/std::ranges::random_access_range", "ranges/std::ranges::simple_view", "ranges/std::ranges::sized_range", "ranges/std::ranges::view", "ranges/std::ranges::viewable_range"]
helpviewer_keywords: ["std::ranges [C++], ranges::range", "std::ranges [C++], ranges::bidirectional_range", "std::ranges [C++], ranges::borrowed_range", "std::ranges [C++], ranges::common_range", "std::ranges [C++], ranges::contiguous_range", "std::ranges [C++], ranges::forward_range", "std::ranges [C++], ranges::input_range", "std::ranges [C++], ranges::output_range", "std::ranges [C++], ranges::random_access_range", "std::ranges [C++], ranges::simple_view", "std::ranges [C++], ranges::sized_range", "std::ranges [C++], ranges::view", "std::ranges [C++], ranges::viewable_range"]
---
# `<ranges>` concepts

Concepts are a C++20 language feature that constrain template parameters at compile time. They help prevent incorrect template instantiation, specify template argument requirements in a readable form, and provide more succinct template related compiler errors.

Consider the following example, which defines a concept to prevent instantiating a template with a type that doesn't support division:

```cpp
// requires /std:c++20 or later
#include <iostream>

// Definition of dividable concept which requires 
// that arguments a & b of type T support division
template <typename T>
concept dividable = requires (T a, T b)
{
    a / b;
};

// Apply the concept to a template.
// The template will only be instantiated if argument T supports division.
// This prevents the template from being instantiated with types that don't support division.
// This could have been applied to the parameter of a template function, but because
// most of the concepts in the <ranges> library are applied to classes, this form is demonstrated.
template <class T> requires dividable<T>
class DivideEmUp
{
public:
    T Divide(T x, T y)
    {
        return x / y;
    }
};

int main()
{
    DivideEmUp<int> dividerOfInts;
    std::cout << dividerOfInts.Divide(6, 3); // outputs 2
    // The following line will not compile because the template can't be instantiated 
    // with char* because char* can be divided
    DivideEmUp<char*> dividerOfCharPtrs; // compiler error: cannot deduce template arguments 
}
```

When you pass the compiler switch `/diagnostics:caret` to Visual Studio 2022 version 17.4 preview 4, or later, the error that concept `dividable<char*>` evaluated to false will point directly to the expression requirement `(a / b)` that failed.

Range concepts are defined in the `std::ranges` namespace, and declared in the `<ranges>` header file. They're used in the declarations of [range adaptors](range-adaptors.md), [views](view-classes.md), and so on.

There are six categories of ranges. They're related to the categories of iterators listed in [`<iterator>` concepts](iterator-concepts.md). In order of increasing capability, the categories are:

| Range concept | Description |
|--|--|
| [`output_range`](#output_range)<br>[`input_range`](#input_range) | Specifies a range that you can write to.<br>Specifies a range that you can read from once. |
| [`forward_range`](#forward_range) | Specifies a range that you can read (and possibly write) multiple times. |
| [`bidirectional_range`](#bidirectional_range) | Specifies a range that you can read and write both forwards and backwards. |
| [`random_access_range`](#random_access_range) | Specifies a range that you can read and write by index. |
| [`contiguous_range`](#contiguous_range) | Specifies a range whose elements are sequential in memory, are the same size, and can be accessed using pointer arithmetic. |

In the preceding table, concepts are listed in order of increasing capability. A range that meets the requirements of a concept generally meets the requirements of the concepts in the rows that precede it. For example, a `random_access_range` has the capability of a `bidirectional_range`, `forward_range`, `input_range`, and `output_range`. The exception is `input_range`, which can't be written to, so it doesn't have the capabilities of `output_range`.

:::image type="content" source="media/ranges-iterator-hiearchy.svg" alt-text="Diagram of the ranges iterator hierarchy. input_range and output_range are the most basic iterators. forward_range is next and refines both input_range and output_range. bidirectional_range refines forward_range. random_access_range refines bidirectional_range. Finally, contiguous_range refines random_access_range":::

Other range concepts include:

| Range concept | Description |
|--|--|
| [`range`](#range)<sup>C++20</sup> | Specifies a type that provides an iterator and a sentinel. |
| [`borrowed_range`](#borrowed_range)<sup>C++20</sup> | Specifies that the lifetime of the range's iterators aren't tied to the range's lifetime. |
| [`common_range`](#common_range)<sup>C++20</sup> | Specifies that the type of the range's iterator and the type of the range's sentinel are the same. |
| [`Simple_View`](#simple_view)<sup>C++20</sup> | Not an official concept defined as part of the standard library, but used as a helper concept on some interfaces. |
| [`sized_range`](#sized_range)<sup>C++20</sup> | Specifies a range that can provide its number of elements efficiently. |
| [`view`](#view)<sup>C++20</sup> | Specifies a type that has efficient (constant time) move construction, assignment, and destruction. |
| [`viewable_range`](#viewable_range)<sup>C++20</sup> | Specifies a type that either is a view or can be converted to one. |

## `bidirectional_range`

A `bidirectional_range` supports reading and writing the range forwards and backwards.

```cpp
template<class T>
concept bidirectional_range =
    forward_range<T> && bidirectional_iterator<iterator_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's a `bidirectional_range`.

### Remarks

This kind of range supports [`bidirectional_iterator`](iterator-concepts.md#bidirectional_iterator) or greater.
A `bidirectional_iterator` has the capabilities of a [`forward_iterator`](iterator-concepts.md#forward_iterator), but can also iterate backwards.

Some examples of a `bidirectional_range` are `std::set`, `std::vector`, and `std::list`.

## `borrowed_range`

A type models `borrowed_range` if the validity of iterators you get from the object can outlive the lifetime of the object. That is, the iterators for a range can be used even when the range no longer exists.

```cpp
template<class T>
concept borrowed_range =
    range<T> &&
    (is_lvalue_reference_v<T> || enable_borrowed_range<remove_cvref_t<T>>);
```

### Parameters

*`T`*\
The type to test to see if it's a `borrowed_range`.

### Remarks

The lifetime of an rvalue range can end following a function call whether the range models `borrowed_range` or not. If it's a `borrowed_range`, you may be able to continue to use the iterators with well-defined behavior regardless of when the range's lifetime ends.

Cases where this isn't true are, for example, for containers like `vector` or `list` because when the container's lifetime ends, the iterators would refer to elements that have been destroyed.

You can continue to use the iterators for a `borrowed_range`, for example, for a `view` like `iota_view<int>{0, 42}` whose iterators are over set of values that aren't subject to being destroyed because they're generated on demand.

## `common_range`

The type of the iterator for a `common_range` is the same as the type of the sentinel. That is, `begin()` and `end()` return the same type.

```cpp
template<class T>
concept common_range =
   ranges::range<T> && std::same_as<ranges::iterator_t<T>, ranges::sentinel_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's a `common_range`.

### Remarks

Getting the type from `std::ranges::begin()` and `std::ranges::end()` is important for algorithms that calculate the distance between two iterators, and for algorithms that accept ranges denoted by iterator pairs.

The standard containers (for example, `vector`) meet the requirements of `common_range`.

## `contiguous_range`

The elements of a `contiguous_range` are stored sequentially in memory and can be accessed using pointer arithmetic. For example, an array is a `contiguous_range`.

```cpp
template<class T>
concept contiguous_range =
    random_access_range<T> && contiguous_iterator<iterator_t<T>> &&
    requires(T& t) {{ ranges::data(t) } -> same_as<add_pointer_t<range_reference_t<T>>>;};
```

### Parameters

*`T`*\
The type to test to see if it's a `contiguous_range`.

### Remarks

A `contiguous_range` can be accessed by pointer arithmetic because the elements are laid out sequentially in memory and are the same size. This kind of range supports [`continguous_iterator`](iterator-concepts.md#contiguous_iterator), which is the most flexible of all the iterators.

Some examples of a `contiguous_range` are `std::array`, `std::vector`, and `std::string`.

### Example: `contiguous_range`

The following example shows using pointer arithmetic to access a `contiguous_range`:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    // Show that vector is a contiguous_range
    std::vector<int> v = {0,1,2,3,4,5};
    std::cout << std::boolalpha << std::ranges::contiguous_range<decltype(v)> << '\n'; // outputs true

    // Show that pointer arithmetic can be used to access the elements of a contiguous_range
    auto ptr = v.data();
    ptr += 2;
    std::cout << *ptr << '\n'; // outputs 2
}
```

```output
true
2
```

## `forward_range`

A `forward_range` supports reading (and possibly writing) the range multiple times.

```cpp
template<class T>
concept forward_range = input_range<T> && forward_iterator<iterator_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's a `forward_range`.

### Remarks

This kind of range supports [`forward_iterator`](iterator-concepts.md#forward_iterator) or greater. A `forward_iterator` can iterate over a range multiple times.

## `input_range`

An `input_range` is a range that can be read from once.

```cpp
template<class T>
concept input_range = range<T> && input_iterator<iterator_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's an `input_range`.

### Remarks

When a type meets the requirements of `input_range`:

- The `ranges::begin()` function returns an [`input_iterator`](iterator-concepts.md#input_iterator). Calling `begin()` more than once on an `input_range` results in undefined behavior.
- You can dereference an `input_iterator` repeatedly, which yields the same value each time. An `input_range` isn't multi-pass. Incrementing an iterator invalidates any copies.
- It can be used with `ranges::for_each`.
- It supports `input_iterator` or greater.

## `output_range`

An `output_range` is a range that you can write to.

```cpp
template<class R, class T>
concept output_range = range<R> && output_iterator<iterator_t<R>, T>;
```

### Parameters

*`R`*\
The type of the range.

*`T`*\
The type of the data to write to the range.

### Remarks

The meaning of `output_iterator<iterator_t<R>, T>` is that the type provides an iterator that can write values of type `T` to a range of type `R`. In other words, it supports [`output_iterator`](iterator-concepts.md#output_iterator) or greater.

## `random_access_range`

A `random_access_range` can read or write a range by index.

```cpp
template<class T>
concept random_access_range =
bidirectional_range<T> && random_access_iterator<iterator_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's a `sized_range`.

### Remarks

This kind of range supports [`random_access_iterator`](iterator-concepts.md#random_access_iterator) or greater. A `random_access_range` has the capabilities of an `input_range`, `output_range`, `forward_range`, and `bidirectional_range`. A `random_access_range` is sortable.

Some examples of a `random_access_range` are `std::vector`, `std::array`, and `std::deque`.

## `range`

Defines the requirements a type must meet to be a `range`. A `range` provides an iterator and a sentinel, so that you can iterate over its elements.

```cpp
template<class T>
concept range = requires(T& rg)
{
  ranges::begin(rg);
  ranges::end(rg);
};
```

### Parameters

*`T`*\
The type to test to see if it's a `range`.

### Remarks

The requirements of a `range` are:
- It can be iterated using `std::ranges::begin()` and `std::ranges::end()`
- `ranges::begin()` and `ranges::end()` run in amortized constant time and don't modify the `range`. Amortized constant time doesn't mean O(1), but that the average cost over a series of calls, even in the worst case, is O(n) rather than O(n^2) or worse.
- `[ranges::begin(), ranges::end())` denotes a valid range.

## `Simple_View`

A `Simple_View` is an exposition-only concept used on some `ranges` interfaces. It isn't defined in the library. It's only used in the specification to help describe the behavior of some range adaptors.

```cpp
template<class V>
  concept Simple_View = // exposition only
    ranges::view<V> && ranges::range<const V> &&
    std::same_as<std::ranges::iterator_t<V>, std::ranges::iterator_t<const V>> &&
    std::same_as<std::ranges::sentinel_t<V>, std::ranges::sentinel_t<const V>>;
```

### Parameters

*`V`*\
The type to test to see if it's a `Simple_View`.

### Remarks

A view `V` is a [`Simple_View`](#simple_view) if all of the following are true:
- `V` is a view
- `const V` is a range
- Both `v` and `const V` have the same iterator and sentinel types.

## `sized_range`

A `sized_range` provides the number of elements in the range in amortized constant time.

```cpp
template<class T>
  concept sized_range = range<T> &&
    requires(T& t) { ranges::size(t); };
```

### Parameters

*`T`*\
The type to test to see if it's a `sized_range`.

### Remarks

The requirements of a `sized_range` are that calling `ranges::size` on it:

- Doesn't modify the range.
- Returns the number of elements in amortized constant time. Amortized constant time doesn't mean O(1), but that the average cost over a series of calls, even in the worst case, is O(n) rather than O(n^2) or worse.

Some examples of a `sized_range` are `std::list` and `std::vector`.

### Example: `sized_range`

The following example shows that a `vector` of `int` is a `sized_range`:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::ranges::sized_range<std::vector<int>> << '\n'; // outputs "true"
}    
```

## `view`

A `view` has constant time move construction, assignment, and destruction operations--regardless of the number of elements it has. Views don't need to be copy constructible or copy assignable, but if they are, those operations must also run in constant time.

Because of the constant time requirement, you can efficiently compose views. For example, given a vector of `int` called `input`, a function that determines if a number is divisible by three, and a function that squares a number, the statement `auto x = input | std::views::filter(divisible_by_three) | std::views::transform(square);` efficiently produces a view that contains the squares of the numbers in input that are divisible by three. Connecting views together with `|` is referred to as composing the views. If a type satisfies the [`view`](range-concepts.md#view) concept, then it can be composed efficiently.

```cpp
template<class T>
concept view = ranges::range<T> && std::movable<T> && ranges::enable_view<T>;
```

### Parameters

*`T`*\
The type to test to see if it's a view.

### Remarks

The essential requirement that makes a view composable is that it's cheap to move/copy. This is because the view is moved/copied when it's composed with another view. It must be a movable range.

`ranges::enable_view<T>` is a trait used to claim conformance to the semantic requirements of the `view` concept. A type can opt in by:
- publicly and unambiguously deriving from a specialization of `ranges::view_interface`
- publicly and unambiguously deriving from the empty class `ranges::view_base`, or
- specializing `ranges::enable_view<T>` to `true`

Option 1 is preferred because `view_interface` also provides default implementation that saves some boilerplate code you have to write.

Failing that, option 2 is a little simpler than option 3.

The advantage of option 3 is that it's possible without changing the definition of the type.

## `viewable_range`

A `viewable_range` is a type that either is a view or can be converted to one.

```cpp
template<class T>
  concept viewable_range =
    range<T> && (borrowed_range<T> || view<remove_cvref_t<T>>);
```

### Parameters

*`T`*\
The type to test to see if it either is a view or can be converted to one.

### Remarks

Use `std::ranges::views::all()` to convert a range to a view.

## See also

[`<ranges>`](ranges.md)\
[Range adaptors](range-adaptors.md)\
[View classes](view-classes.md)