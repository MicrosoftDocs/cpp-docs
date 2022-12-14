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

There are six categories of iterators. They are directly related to the categories of ranges listed in [`<ranges>`](ranges.md#kinds-of-ranges). In order of increasing power, the categories are:

| Iterator concept | Description |
|--|--|
DONE | [`input_or_output_iterator`](#input_or_output_iterator) | The basis of the iterator concept taxonomy. |
DONE | [`output_iterator`](#output_iterator) | Test for an iterator that you can write to. |
DONE | [`input_iterator`](#input_iterator) | Test for an iterator that you can read from at least once. |
DONE | [`forward_iterator`](#forward_iterator) | Test for an iterator that can read (and possibly write) multiple times. |
DONE | [`bidirectional_iterator`](#bidirectional_iterator) | Test for an iterator that can read and write both forwards and backwards. |
DONE | [`random_access_iterator`](#random_access_iterator) | Test for an iterator that can read and write by index. |
DONE | [`contiguous_iterator`](#contiguous_iterator) | Test for an iterator whose elements are sequential in memory and can be accessed using pointer arithmetic. |

An iterator that meets the requirements of a concept generally meets the requirements of the concepts in the rows that precede it. For example, a `random_access_iterator` has the capability of a `bidirectional_iterator`, `forward_iterator`, `input_iterator`, and `output_iterator`. An exception is `input_iterator` which doesn't have the capability of an `output_iterator` because it can't be written to.

Here's a general summary of the capabilities of the iterators

Other iterator concepts include:

| Range concept | Description |
|--|--|
| [`sentinel_for`](#sentinel_for)<sup>C++20</sup> | JTW |
| [`sized_sentinel_for`](#sized_sentinel_for)<sup>C++20</sup> | JTW |

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

### Example: `bidirectional_iterator`

The following example shows that a `vector` of `int` has a `bidirectional_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::bidirectional_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"
}
```

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

The elements of a `contiguous_iterator` are stored sequentially in memory and can be accessed using pointer arithmetic. For example, an array iterator is a `contiguous_iterator`.

### Remarks

A `contiguous_iterator` can be accessed by pointer arithmetic because the elements are laid out sequentially in memory and are the same size.

Some examples of a `contiguous_iterator` are `std::array`, `std::vector`, and `std::string`.

### Example: `contiguous_iterator`

The following example shows that a vector is a `contiguous_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector has a contiguous_iterator
    std::vector<int> v = {0,1,2,3,4,5};
    std::cout << std::boolalpha << std::contiguous_iterator<decltype(v)::iterator>; // outputs true
}
```

## `forward_iterator`

Has the capabilities of an `input_iterator` and an `output_iterator`. Also supports iterating over a collection multiple times.

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

### Remarks

A `forward_iterator` can only move forward.

Some examples of containers that can be used with a `forward_iterator` are `std::unordered_set`, `std::unordered_multiset`, `std::unordered_map`, and `std::unordered_multimap`.

### Example: `forward_iterator`

The following example shows that an `unordered_set` has a `forward_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector has a forward_iterator
    std::vector<int> v = {0,1,2,3,4,5};
    std::cout << std::boolalpha << std::forward_iterator<decltype(v)::iterator>; // outputs true
}
```

## `input_iterator`

An `input_iterator` is an iterator that you can read from at least once.

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

- Calling `begin()` more than once on an `input_iterator` results in undefined behavior. This implies that if a type only models `input_iterator`, it isn't multi-pass and can read an element only once. Consider reading from standard input (`cin`) for example. In this case, you can only read the current element once and you can't re-read characters you've already read. You can only read an `input_iterator` forward, not backwards.

### Example: `input_iterator`

The following example shows that an `istream_iterator` is an `input_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::input_iterator<std::istream_iterator<int>>; // outputs true
}
```

## `input_or_output_iterator`

An `input_or_output_iterator` is the basis of the iterator concept taxonomy and supports dereferencing and incrementing
an iterator. Every iterator models `input_or_output_iterator`, at a minimum.

```cpp
template<class I>
concept input_or_output_iterator =
    requires(I i) {
        { *i } -> can-reference;
    } &&
    weakly_incrementable<I>;
```

### Parameters

*`I`*\
The type to test to see if it's an `input_iterator`.

### Remarks

The concept `can-reference` means that the type `I` is a reference, a pointer, or a type that can be implicitly converted to a reference.

## `output_iterator`

An `output_iterator` is a type that you can write to.

```cpp
template<class I, class T>
concept output_iterator =
    input_or_output_iterator<I> &&
    indirectly_writable<I, T> &&
    requires(I i, T&& t) {
        *i++ = std::forward<T>(t);
    };
```

### Parameters

*`I`*\
The type to test to see if it's an `output_iterator`.

*`T`*\
The type of the values to write.

### Remarks

An `output_iterator` is single pass. That is, it can only write to the same element once.

## `random_access_iterator`

A `random_access_iterator` can read or write by index.

```cpp
template<class I>
concept random_access_iterator =
    bidirectional_iterator<I> &&
    derived_from<ITER_CONCEPT(I), random_access_iterator_tag> &&
    totally_ordered<I> &&
    sized_sentinel_for<I, I> &&
    requires(I i, const I j, const iter_difference_t<I> n) {
        { i += n } -> same_as<I&>;
        { j + n } -> same_as<I>;
        { n + j } -> same_as<I>;
        { i -= n } -> same_as<I&>;
        { j - n } -> same_as<I>;
        { j[n] } -> same_as<iter_reference_t<I>>;
    };
```

### Parameters

*`I`*\
The type to test to see if it's a `random_access_iterator`.

### Remarks

A `random_access_iterator` is the most flexible iterator. It has the capabilities of an `input_iterator`, `output_iterator`, `forward_iterator`, and `bidirectional_iterator`.

Some examples of a `random_access_iterator` are `std::vector`, `std::array`, and `std::deque`.

### Example: `random_access_iterator`

The following example shows that a `vector` of `int` is a `random_access_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::random_access_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"
}    
```

## See also

[Range adaptors](range-adaptors.md)\
[View classes](view-classes.md)