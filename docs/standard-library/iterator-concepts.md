---
description: "Learn more about iterator concepts."
title: "<iterator> concepts"
ms.date: 12/05/2022
f1_keywords: ["ranges/std::ranges::range", "ranges/std::ranges::bidirectional_iterator", "ranges/std::ranges::borrowed_iterator", "ranges/std::ranges::common_iterator", "ranges/std::ranges::contiguous_iterator", "ranges/std::ranges::forward_iterator", "ranges/std::ranges::input_iterator", "ranges/std::ranges::output_iterator", "ranges/std::ranges::random_access_iterator", "ranges/std::ranges::simple_view", "ranges/std::ranges::sized_iterator", "ranges/std::ranges::view", "ranges/std::ranges::viewable_iterator"]
helpviewer_keywords: ["std::ranges [C++], ranges::range", "std::ranges [C++], ranges::bidirectional_iterator", "std::ranges [C++], ranges::borrowed_iterator", "std::ranges [C++], ranges::common_iterator", "std::ranges [C++], ranges::contiguous_iterator", "std::ranges [C++], ranges::forward_iterator", "std::ranges [C++], ranges::input_iterator", "std::ranges [C++], ranges::output_iterator", "std::ranges [C++], ranges::random_access_iterator", "std::ranges [C++], ranges::simple_view", "std::ranges [C++], ranges::sized_iterator", "std::ranges [C++], ranges::view", "std::ranges [C++], ranges::viewable_iterator"]
---
# `<iterator>` concepts

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

When you pass the compiler switch `/diagnostics:caret` to Visual Studio 2022 version 17.4p4 or later, the error that concept `dividable<char*>` evaluated to false will point directly to the expression requirement `(a / b)` that failed.

Iterator concepts are defined in the `std` namespace as declared in the `<iterator>` header file. They're used in the declarations of [range adaptors](range-adaptors.md), [views](view-classes.md), and so on.

There are six categories of iterators. They are directly related to the categories of ranges listed in [`<ranges>](ranges.md#remarks).

In order of increasing power, the categories are:

| Iterator concept | Description |
|--|--|
| [`input_or_output_iterator`](#input_or_output_iterator) | The basis of the iterator concept taxonomy. |
| [`output_iterator`](#output_iterator) | Specifies an iterator that you can write to. JTW It supports [output_iterator](iterators.md# JTW) Repeat this pattern for the entries below. |
| [`input_iterator`](#input_iterator) | Specifies an iterator that you can read from at least once. |
DONE | [`forward_iterator`](#forward_iterator) | Specifies an iterator that can read (and possibly write) multiple times. |
DONE | [`bidirectional_iterator`](#bidirectional_iterator) | Specifies an iterator that can read and write both forwards and backwards. |
| [`random_access_iterator`](#random_access_iterator) | Specifies an iterator that can read and write by index. |
DONE| [`contiguous_iterator`](#contiguous_iterator) | Specifies an iterator whose elements are sequential in memory and can be accessed using pointer arithmetic. |

In the preceding table, concepts are listed in order of increasing capability. An iterator that meets the requirements of a concept for a category generally meets the requirements of the concepts in the rows that precede it. For example, a `random_access_iterator` has the capability of a `bidirectional_iterator`, `forward_iterator`, `input_iterator`, and `output_iterator`. However, an exception is `input_iterator` which doesn't have the capability of an `output_iterator` because it can't be written to.

Other iterator concepts include:

| Range concept | Description |
|--|--|
| [`sentinel_for`](#sentinel_for)<sup>C++20</sup> | JTW |
| [``sized_sentinel_for``](#sized_sentinel_for)<sup>C++20</sup> | JTW |

## `bidirectional_iterator`

A `bidirectional_iterator` supports reading and writing forwards and backwards.

```cpp
template<class I>
concept bidirectional_iterator =
    forward_iterator<I> &&
    derived_from<ITER_CONCEPT(I), bidirectional_iterator_tag> &&
    requires(I i) {
        {--i} -> same_as<I&>;
        {i--} -> same_as<I>;
};
```

### Parameters

*`I`*\
The iterator to test to see if it's a `bidirectional_iterator`.

### Remarks

A `bidirectional_iterator` has the capabilities of a `forward_iterator`, but can also iterate backwards.

Some examples of containers that can be used with a `bidirectional_iterator` are `std::set`, `std::vector`, and `std::list`.

## `contiguous_iterator`

Specifies an iterator whose elements are sequential in memory and can be accessed using pointer arithmetic.

```cpp
template<class I>
    concept contiguous_iterator =
        random_access_iterator<I> &&
        derived_from<ITER_CONCEPT(I), contiguous_iterator_tag> &&
        is_lvalue_reference_v<iter_reference_t<I>> &&
        same_as<iter_value_t<I>, remove_cvref_t<iter_reference_t<I>>> &&
        requires(const I& i) {
            { to_address(i) } -> same_as<add_pointer_t<iter_reference_t<I>>>;
        };
```

### Parameters

*`I`*\
The type to test to see if it's a `contiguous_iterator`.

The elements of a `contiguous_iterator` are stored sequentially in memory and can be accessed using pointer arithmetic. For example, an array can be traversed using a `contiguous_iterator`.

### Remarks

A `contiguous_iterator` can be accessed by pointer arithmetic because the elements are laid out sequentially in memory and are the same size.

Some examples of a `contiguous_iterator` are `std::array`, `std::vector`, and `std::string`.

### Example: `contiguous_iterator`

The following example shows using pointer arithmetic to access a `contiguous_iterator`:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    // Show that vector is a contiguous_iterator
    std::vector<int> v = {0,1,2,3,4,5};
    std::cout << std::boolalpha << std::ranges::contiguous_iterator<decltype(v)> << '\n'; // outputs true

    // Show that pointer arithmetic can be used to access the elements of a contiguous_iterator
    auto ptr = v.data();
    ptr += 2;
    std::cout << *ptr << '\n'; // outputs 2
}
```

```output
true
2
```

## `forward_iterator`

Has the capabilities of an `input_iterator` and an `output_iterator`, but can read and write the same element multiple times.

```cpp
template<class I>
    concept forward_iterator =
        input_iterator<I> &&
        derived_from<ITER_CONCEPT(I), forward_iterator_tag> &&
        incrementable<I> &&
        sentinel_for<I, I>;
```

### Parameters

*`I`*\
The iterator to test to see if it's a `forward_iterator`.

## `input_iterator`

An `input_iterator` is an iterator that can be read from at least once.

```cpp
template<class I>
concept input_iterator =
    input_or_output_iterator<I> &&
    indirectly_readable<I> &&
    requires { typename ITER_CONCEPT(I); } &&
    derived_from<ITER_CONCEPT(I), input_iterator_tag>;
```

### Parameters

*`I`*\
The type to test to see if it's an `input_iterator`.

### Remarks

When a type meets the requirements of `input_iterator`:

- Calling `begin()` more than once on an `input_iterator` results in undefined behavior.
- You can dereference an `input_iterator` repeatedly, which yields the same value each time. An `input_iterator` isn't multi-pass. Incrementing an iterator invalidates any copies.
- It can be used with `ranges::for_each`.
- It *at least* has an `input_iterator`. It may be a more capable iterator type.

## `output_iterator`

An `output_iterator` is a range that you can write to.

```cpp
template<class R, class T>
concept output_iterator = range<R> && output_iterator<iterator_t<R>, T>;
```

### Parameters

*`R`*\
The type of the range.

*`T`*\
The type of the data to write to the range.

### Remarks

The meaning of `output_iterator<iterator_t<R>, T>` is that the type provides an iterator that can write values of type `T` to a range of type `R`.

## `random_access_iterator`

A `random_access_iterator` can read or write a range by index.

```cpp
template<class T>
concept random_access_iterator =
bidirectional_iterator<T> && random_access_iterator<iterator_t<T>>;
```

### Parameters

*`T`*\
The type to test to see if it's a `sized_iterator`.

### Remarks

A `random_access_iterator` is the most flexible iterator. It has the capabilities of an `input_iterator`, `output_iterator`, `forward_iterator`, and `bidirectional_iterator`. A `random_access_iterator` is also sortable.

Some examples of a `random_access_iterator` are `std::vector`, `std::array`, and `std::deque`.

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

## `sized_iterator`

A `sized_iterator` provides the number of elements in the range in amortized constant time.

```cpp
template<class T>
  concept sized_iterator = range<T> &&
    requires(T& t) { ranges::size(t); };
```

### Parameters

*`T`*\
The type to test to see if it's a `sized_iterator`.

### Remarks

The requirements of a `sized_iterator` are that calling `ranges::size` on it:

- Doesn't modify the range.
- Returns the number of elements in amortized constant time. Amortized constant time doesn't mean O(1), but that the average cost over a series of calls, even in the worst case, is O(n) rather than O(n^2) or worse.

Some examples of a `sized_iterator` are `std::list` and `std::vector`.

### Example: `sized_iterator`

The following example shows that a `vector` of `int` is a `sized_iterator`:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::ranges::sized_iterator<std::vector<int>> << '\n'; // outputs "true"
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

Option 1 is generally preferred because `view_interface` also provides default implementation that saves some boilerplate code you have to write.

Failing that, option 2 is a little simpler than option 3.

The advantage of option 3 is that it's possible without changing the definition of the type.

## `viewable_iterator`

A `viewable_iterator` is a type that either is a view or can be converted to one.

```cpp
template<class T>
  concept viewable_iterator =
    range<T> && (borrowed_iterator<T> || view<remove_cvref_t<T>>);
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