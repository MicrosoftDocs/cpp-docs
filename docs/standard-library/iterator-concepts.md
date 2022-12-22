---
description: "Learn more about iterator concepts."
title: "Iterator concepts"
ms.date: 12/16/2022
f1_keywords: ["ranges/std::ranges::range", "ranges/std::ranges::bidirectional_iterator", "ranges/std::ranges::borrowed_iterator", "ranges/std::ranges::common_iterator", "ranges/std::ranges::contiguous_iterator", "ranges/std::ranges::forward_iterator", "ranges/std::ranges::input_iterator", "ranges/std::ranges::output_iterator", "ranges/std::ranges::random_access_iterator", "ranges/std::ranges::simple_view", "ranges/std::ranges::sized_iterator", "ranges/std::ranges::view", "ranges/std::ranges::viewable_iterator"]
helpviewer_keywords: ["std::ranges [C++], ranges::range", "std::ranges [C++], ranges::bidirectional_iterator", "std::ranges [C++], ranges::borrowed_iterator", "std::ranges [C++], ranges::common_iterator", "std::ranges [C++], ranges::contiguous_iterator", "std::ranges [C++], ranges::forward_iterator", "std::ranges [C++], ranges::input_iterator", "std::ranges [C++], ranges::output_iterator", "std::ranges [C++], ranges::random_access_iterator", "std::ranges [C++], ranges::simple_view", "std::ranges [C++], ranges::sized_iterator", "std::ranges [C++], ranges::view", "std::ranges [C++], ranges::viewable_iterator"]
---
# Iterator concepts

Concepts are a C++20 language feature that constrain template parameters at compile time. They help prevent incorrect template instantiation, specify template argument requirements in a readable form, and provide more succinct template related compiler errors.

Consider the following example, which defines a concept to prevent instantiating the template with a type that doesn't support division:

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

When you pass the compiler switch `/diagnostics:caret` to Visual Studio 2022 version 17.4 preview 4 or later, the error that concept `dividable<char*>` evaluated to false will point directly to the expression requirement `(a / b)` that failed.

Iterator concepts are defined in the `std` namespace, and are declared in the `<iterator>` header file. They're used in the declarations of [range adaptors](range-adaptors.md), [views](view-classes.md), and so on.

There are six categories of iterators. They're directly related to the categories of ranges listed under [Range concepts](ranges.md#range-concepts).

The following iterator concepts are listed in order of increasing capability. `input_or_output_iterator` is at the low end of the capability hierarchy, and `contiguous_iterator` is at the high end. Iterators higher in the hierarchy can generally be used in place of those that are lower, but not vice-versa. For example, a `random_access_iterator` iterator can be used in place of a `forward_iterator`, but not the other way around. An exception is `input_iterator`, which can't be used in place of `output_iterator` because it can't write.

:::image type="content" source="media/iterator-hiearchy.svg" alt-text="Diagram of the iterator hierarchy. input_or_output_iterator is the base. input_iterator and output_iterator are shown as refining input_or_output_iterator. forward_iterator is next and refines both input_iterator and output_iterator. bidirectional_iterator refines forward_iterator. random_access_iterator refines bidirectional_iterator. Finally, contiguous_iterator refines random_access_iterator":::

In the following table, "Multi-pass" refers to whether the iterator can revisit the same element more than once. For example, `vector::iterator` is a multi-pass iterator because you can make a copy of the iterator, read the elements in the collection, and then restore the iterator to the value in the copy, and revisit the same elements again. If an iterator is single-pass, you can only visit the elements in the collection once.

In the following table, "Example types" refers to collections/iterators that satisfy the concept.

| Iterator concept | Description | Direction | Read/write | Multi-pass | Example types |
|--|--|--|--|--|--|
| [`input_or_output_iterator`](#input_or_output_iterator)<sup>C++20</sup> | The basis of the iterator concept taxonomy. | Forward | Read/write | no | `istream_iterator`, `ostream_iterator` |
| [`output_iterator`](#output_iterator)<sup>C++20</sup> | Specifies an iterator that you can write to. | Forward | Write | no | `ostream`, `inserter` |
| [`input_iterator`](#input_iterator)<sup>C++20</sup> | Specifies an iterator that you can read from once. | Forward | Read | no | `istream`, `istreambuf_iterator` |
| [`forward_iterator`](#forward_iterator)<sup>C++20</sup> | Specifies an iterator that can read (and possibly write) multiple times. | Forward | Read/write | yes | `vector`, `list` |
| [`bidirectional_iterator`](#bidirectional_iterator)<sup>C++20</sup> | Specifies an iterator that you can read and write both forwards and backwards. | Forward or backward | Read/write | yes | `list`, `set`, `multiset`, `map`, and `multimap`. |
| [`random_access_iterator`](#random_access_iterator)<sup>C++20</sup> | Specifies an iterator that you can read and write by index. | Forward or backward | Read/write | yes | `vector`, `array`, `deque` |
| [`contiguous_iterator`](#contiguous_iterator)<sup>C++20</sup> | Specifies an iterator whose elements are sequential in memory, are the same size, and can be accessed using pointer arithmetic. | Forward or backward | Read/write | yes | `array`, `vector` `string`.|

Other iterator concepts include:

| Iterator concept | Description |
|--|--|
| [`sentinel_for`](#sentinel_for)<sup>C++20</sup> | Specifies that a type is a sentinel for an iterator type. |
| [`sized_sentinel_for`](#sized_sentinel_for)<sup>C++20</sup> | Specifies that an iterator and its sentinel can be subtracted (using `-`) to find their difference in constant time. |

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

Some examples of containers that can be used with a `bidirectional_iterator` are `set`, `multiset`, `map`, `multimap`, `vector`, and `list`.

### Example: `bidirectional_iterator`

The following example uses the `bidirectional_iterator` concept to show that `vector<int>` has a `bidirectional_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::cout << std::boolalpha << std::bidirectional_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"

    // another way to test
    std::vector<int> v = {0,1,2};
    std::cout << std::boolalpha << std::contiguous_iterator<decltype(v)::iterator>; // outputs true
}
```

## `contiguous_iterator`

Specifies an iterator whose elements are sequential in memory, are the same size, and can be accessed using pointer arithmetic.

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

### Remarks

A `contiguous_iterator` can be accessed by pointer arithmetic because the elements are laid out sequentially in memory and are the same size. Some examples of a `contiguous_iterator` are `array`, `vector`, and `string`.

### Example: `contiguous_iterator`

The following example uses the `contiguous_iterator` concept to show that a `vector<int>` has a `contiguous_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector<int> has a contiguous_iterator
    std::cout << std::boolalpha << std::contiguous_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"
    
    // another way to test
    std::vector<int> v = {0,1,2};
    std::cout << std::boolalpha << std::contiguous_iterator<decltype(v)::iterator>; // outputs true
}
```

## `forward_iterator`

Has the capabilities of an `input_iterator` and an `output_iterator`. Supports iterating over a collection multiple times.

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

Some examples of containers that can be used with a `forward_iterator` are `vector`, `list`, `unordered_set`, `unordered_multiset`, `unordered_map`, and `unordered_multimap`.

### Example: `forward_iterator`

The following example uses the `forward_iterator` concept to show that a `vector<int>` has a `forward_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector has a forward_iterator
    std::cout << std::boolalpha << std::forward_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"

    // another way to test
    std::vector<int> v = {0,1,2};
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

Calling `begin()` on an `input_iterator` more than once results in undefined behavior. A type that only models `input_iterator` isn't multi-pass. Consider reading from standard input (`cin`) for example. In this case, you can only read the current element once and you can't re-read characters you've already read. An `input_iterator` only reads forward, not backwards.

### Example: `input_iterator`

The following example uses the `input_iterator` concept to show that an `istream_iterator` has an `input_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>

int main()
{
    // Show that a istream_iterator has an input_iterator
    std::cout << std::boolalpha << std::input_iterator<std::istream_iterator<int>>; // outputs true
}
```

## `input_or_output_iterator`

An `input_or_output_iterator` is the basis of the iterator concept taxonomy. It supports dereferencing and incrementing
an iterator. Every iterator models `input_or_output_iterator`.

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
The type to test to see if it's an `input_or_output_iterator`.

### Remarks

The concept `can-reference` means that the type `I` is a reference, a pointer, or a type that can be implicitly converted to a reference.

### Example: `input_or_output_iterator`

The following example uses the `input_or_output_iterator` concept to show that `vector<int>` has an `input_or_output_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>

int main()
{
    // Show that a vector has an input_or_output_iterator
    std::cout << std::boolalpha << std::input_or_output_iterator<std::vector<int>::iterator> << '\n'; // outputs true

    // another way to test
    std::vector<int> v = {0,1,2};
    std::cout << std::boolalpha << std::input_or_output_iterator<decltype(v)::iterator>; // outputs true
}
```

## `output_iterator`

An `output_iterator` is an iterator that you can write to.

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

### Example: `output_iterator`

The following example uses the `output_iterator` concept to show that `vector<int>` has an `output_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector<int> has an output_iterator
    std::cout << std::boolalpha << std::output_iterator<std::vector<int>::iterator, int> << "\n"; // outputs "true"

    // another way to test
    std::vector<int> v = {0,1,2,3,4,5};
    std::cout << std::boolalpha << std::output_iterator<decltype(v)::iterator, int>; // outputs true
}
```

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

A `random_access_iterator` has the capabilities of an `input_iterator`, `output_iterator`, `forward_iterator`, and `bidirectional_iterator`.

Some examples of a `random_access_iterator` are `vector`, `array`, and `deque`.

### Example: `random_access_iterator`

The following example shows that a `vector<int>` has a `random_access_iterator`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    // Show that vector<int> has a random_access_iterator
    std::cout << std::boolalpha << std::random_access_iterator<std::vector<int>::iterator> << '\n'; // outputs "true"

    // another way to test
    std::vector<int> v = {0,1,2};
    std::cout << std::boolalpha << std::random_access_iterator<decltype(v)::iterator>; // outputs true
}    
```

## `sentinel_for`

Specifies that a type is a sentinel for an iterator.

```cpp
template<class S, class I>
concept sentinel_for =
    semiregular<S> &&
    input_or_output_iterator<I> &&
    weakly-equality-comparable-with <S, I>;
```

### Parameters

*`I`*\
The iterator type.

*`S`*\
The type to test to see if it's a sentinel for `I`.

### Remarks

A sentinel is a type that can be compared to an iterator to determine if the iterator has reached the end. This concept determines if a type is a sentinel for one of the `input_or_output_iterator` types, which includes `input_iterator`, `output_iterator`, `forward_iterator`, `bidirectional_iterator`, `random_access_iterator`, and `contiguous_iterator`.

### Example: `sentinel_for`

The following example uses the `sentinel_for` concept to show that `vector<int>::iterator` is a sentinel for `vector<int>`:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0, 1, 2};
    std::vector<int>::iterator i = v.begin();
    // show that vector<int>::iterator is a sentinel for vector<int>
    std::cout << std::boolalpha << std::sentinel_for<std::vector<int>::iterator, decltype(i)>; // outputs true
}    
```

## `sized_sentinel_for`

Test that an iterator and its sentinel can be subtracted using `-` to find the difference, in constant time.

```cpp
template<class S, class I>
concept sized_sentinel_for =
    sentinel_for<S, I> &&
    !disable_sized_sentinel_for<remove_cv_t<S>, remove_cv_t<I>> &&
    requires(const I& i, const S& s) {
        {s - i} -> same_as<iter_difference_t<I>>;
        {i - s} -> same_as<iter_difference_t<I>>;
    };
```

### Parameters

*`I`*\
The iterator type.

*`S`*\
The sentinel type to test.

### Remarks

### Example: `sized_sentinel_for`

The following example uses the `sized_sentinel_for` concept to verify that the sentinel for a `vector<int>` can be subtracted from the vectors iterator in constant time:

```cpp
// requires /std:c++20 or later
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 1, 2, 3 };
    std::vector<int>::iterator i = v.begin();
    std::vector<int>::iterator end = v.end();
    // use the sized_sentinel_for concept to verify that i can be subtracted from end in constant time
    std::cout << std::boolalpha << std::sized_sentinel_for<decltype(end), decltype(i)> << "\n"; // outputs true
    std::cout << end - i; // outputs 3
}    
```

## See also

[Range concepts](range-concepts.md)\
[Range adaptors](range-adaptors.md)\
[View classes](view-classes.md)