---
title: "<ranges>"
description: "Get an overview of the Standard Template Library (STL) ranges."
ms.date: 01/27/2023
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges"]
---

# `<ranges>`

At a high level, a *range* is something that you can iterate over. A range is represented by an iterator that marks the beginning of the range and a sentinel that marks the end of the range. The sentinel may be the same type as the begin iterator, or it may be different. The containers, such as `vector` and `list`, in the C++ Standard Library are ranges. A range abstracts iterators in a way that simplifies and amplifies your ability to use the Standard Template Library (STL).

STL algorithms usually take iterators that point to the portion of the collection that they should operate on. For example, consider how you sort a `vector` by using `std::sort()`. You pass two iterators that mark the beginning and end of the `vector`. That provides flexibility, but passing the iterators to the algorithm is extra work because you probably just want to sort the whole thing.

With ranges, you can call `std::ranges::sort(myVector);`, which is treated as if you called `std::sort(myVector.begin(), myVector.end());`. In range libraries, algorithms take ranges as parameters (although they can also take iterators, if you want). They can operate directly on collections. Examples of range algorithms available in `<algorithm>` include `copy`, `copy_n`, `copy_if`, `all_of`, `any_of`, `none_of`, `find`, `find_if`, `find_if_not`, `count`, `count_if`, `for_each`, `for_each_n`, `equal`, and `mismatch`.

But perhaps the most important benefit of ranges is that you can compose STL algorithms that operate on ranges in a style that's reminiscent of functional programming.

## A ranges example

Before ranges, if you wanted to transform the elements of a collection that met a certain criterion, you needed to introduce an intermediate step to hold the results between operations. For example, if you wanted to build a vector of squares from the elements in another vector that are divisible by three, you could write something like:

```cpp
std::vector<int> input = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
std::vector<int> intermediate, output;

std::copy_if(input.begin(), input.end(), std::back_inserter(intermediate), [](const int i) { return i%3 == 0; });
std::transform(intermediate.begin(), intermediate.end(), std::back_inserter(output), [](const int i) {return i*i; });
```

With ranges, you can accomplish the same thing without needing the `intermediate` vector:

```cpp
// requires /std:c++20
std::vector<int> input = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

auto output = input
    | std::views::filter([](const int n) {return n % 3 == 0; })
    | std::views::transform([](const int n) {return n * n; });
```

Besides being easier to read, this code avoids the memory allocation that's required for the `intermediate` vector and its contents. It also allows you to compose two operations.

In the preceding code, each element that's divisible by three is combined with an operation to square that element. The pipe (`|`) symbol chains the operations together and is read left to right.

The result, `output`, is itself a kind of range called a *view*.

## Views

A view is a lightweight range. View operations--such as default construction, move construction/assignment, copy construction/assignment (if present), destruction, begin, and end--all happen in constant time regardless of the number of elements in the view.

Views are created by range adaptors, which are discussed in the following section. For more information about the classes that implement various views, see [View classes](view-classes.md).

How the elements in the view appear depends on the range adaptor that you use to create the view. In the previous example, a range adaptor takes a range and returns a view of the elements divisible by three. The underlying range is unchanged.

Views are composable, which is powerful. In the previous example, the view of vector elements that are divisible by three is combined with the view that squares those elements.

The elements of a view are evaluated lazily. That is, the transformations that you apply to each element in a view aren't evaluated until you ask for the element. For example, if you run the following code in a debugger and put a breakpoint on the lines `auto divisible_by_three = ...` and `auto square =  ...`, you'll see that you hit the `divisible_by_three` lambda breakpoint as each element in `input` is tested for divisibility by three. The `square` lambda breakpoint will be hit as the elements that are divisible by three are squared.

```cpp
// requires /std:c++20
#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> input =  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto divisible_by_three = [](const int n) {return n % 3 == 0; };
    auto square = [](const int n) {return n * n; };

    auto x = input | std::views::filter(divisible_by_three)
                   | std::views::transform(square);

    for (int i : x)
    {
        std::cout << i << '\n';
    }
    return 0;
}
```

For more information about views, see [`<ranges>` view classes](view-classes.md).

## Range adaptors

Range adaptors take a range and produce a view. Range adaptors produce lazily evaluated views. That is, you don't incur the cost of transforming every element in the range to produce the view. You only pay the cost to process an element in the view when you access that element.

In the previous example, the `filter` range adaptor creates a view named `input` that contains the elements that are divisible by three. The `transform` range adaptor takes the view of elements divisible by three and creates a view of those elements squared.

Range adaptors can be chained together (composed), which is the heart of the power and flexibility of ranges. Composing range adaptors allows you to overcome the problem that the previous STL algorithms aren't easily composable.

For more information about creating views, see [Range adaptors](range-adaptors.md).

## Range algorithms

Some range algorithms take a range argument. An example is `std::ranges::sort(myVector);`.

The range algorithms are almost identical to the corresponding iterator-pair algorithms in the `std` namespace. The difference is that they have [concept-enforced constraints](range-concepts.md), and they accept either range arguments or more iterator-sentinel argument pairs. They can work directly on a container and can be easily chained together.

## `<ranges>` functions

The following functions are used to create iterators and sentinels for ranges, and to get the size of a range.

| Function | Description |
|--|--|
| [`begin`](range-functions.md#begin)<sup>C++20</sup> | Get an iterator to the first element in the range. |
| [`cbegin`](range-functions.md#cbegin)<sup>C++20</sup> | Get a `const` iterator to the first element in the range. |
| [`cend`](range-functions.md#cend)<sup>C++20</sup> | Get the sentinel at the end of the `const`-qualified range. |
| [`cdata`](range-functions.md#cdata)<sup>C++20</sup> | Get a `const` pointer to the first element in the contiguous range. |
| [`crbegin`](range-functions.md#crbegin)<sup>C++20</sup> | Get a reverse `const` iterator to the beginning of the range. |
| [`crend`](range-functions.md#crend)<sup>C++20</sup> | Get the sentinel at the end of what `crbegin()` returns. |
| [`data`](range-functions.md#data)<sup>C++20</sup> | Get a pointer to the first element in the contiguous range. |
| [`empty`](range-functions.md#empty)<sup>C++20</sup> | Determine if the range is empty. |
| [`end`](range-functions.md#end)<sup>C++20</sup> | Get the sentinel at the end of the range. |
| [`rbegin`](range-functions.md#rbegin)<sup>C++20</sup> | Get a reverse iterator to the beginning of the range. |
| [`rend`](range-functions.md#rend)<sup>C++20</sup> | Get a reverse iterator to the sentinel at the end of the range. |
| [`size`](range-functions.md#size)<sup>C++20</sup> | Get the size of the range as an unsigned value. |
| [`ssize`](range-functions.md#ssize)<sup>C++20</sup> | Get the size of the range as a signed value. |

For more information, see [`<ranges>` functions](range-functions.md).

## Range concepts

How you iterate over the elements of a range depends on its underlying iterator type. Ranges use C++ concepts that specify which iterator they support.

In C++20, to say that concept *X* refines concept *Y* means that everything that satisfies concept *Y* also satisfies concept *X*. For example: *car*, *bus*, and *truck* all refine *vehicle*.

Some range concepts mirror the hierarchy of iterator categories. The following table lists the range concepts, along with the types of containers that they can be applied to.

| Range concept | Description | Supported containers |
|--|--|--|
| [`std::ranges::output_range`](range-concepts.md#output_range) | Can iterate forward. ||
| [`std::ranges::input_range`](range-concepts.md#input_range) | Can iterate from beginning to end at least once. | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset`<br>`basic_istream_view`|
| [`std::ranges::forward_range`](range-concepts.md#forward_range) | Can iterate from beginning to end more than once. | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset` |
| [`std::ranges::bidirectional_range`](range-concepts.md#bidirectional_range) | Can iterate forward and backward more than once. | `std::list`<br>`std::map`<br>`std::multimap`<br>`std::multiset`<br>`std::set`|
| [`std::ranges::random_access_range`](range-concepts.md#random_access_range) | Can access an arbitrary element (in constant time) by using the `[]` operator. | `std::deque` |
| [`std::ranges::contiguous_range`](range-concepts.md#contiguous_range) | The elements are stored in memory consecutively. | `std::array`<br>`std::string`<br>`std::vector` |

See [`<ranges>` concepts](range-concepts.md) for more information about these concepts.

## `<ranges>` alias templates

The following alias templates determine the types of iterators and sentinels for a range:

| Alias template | Description |
|--|--|
| [`borrowed_iterator_t`](ranges-alias-templates.md#borrowed_iterator_t)<sup>C++20</sup> | Determine if an iterator returned for a `range` refers to a range whose lifetime has ended. |
| [`borrowed_subrange_t`](ranges-alias-templates.md#borrowed_subrange_t)<sup>C++20</sup> | Determine if an iterator returned for a `subrange` refers to a subrange whose lifetime has ended.|
| [`dangling`](ranges-alias-templates.md#dangling)<sup>C++20</sup> | Indicates that the returned iterator of a `range`/`subrange` outlives the lifetime of the `range`/`subrange` it refers to. |
| [`iterator_t`](ranges-alias-templates.md#iterator_t)<sup>C++20</sup> | Returns the iterator type of the specified range type. |
| [`range_difference_t`](ranges-alias-templates.md#range_difference_t)<sup>C++20</sup> | Returns the difference type of the specified range's iterator type. |
| [`range_reference_t`](ranges-alias-templates.md#range_reference_t)<sup>C++20</sup> | Returns the reference type of the specified range's iterator type. |
| [`range_rvalue_reference_t`](ranges-alias-templates.md#range_rvalue_reference_t)<sup>C++20</sup> | Returns the rvalue reference type for the specified range's iterator type. In other words, the rvalue reference type of the range's elements. |
| [`range_size_t`](ranges-alias-templates.md#range_size_t)<sup>C++20</sup> | Returns the type used to report the specified range's size. |
| [`range_value_t`](ranges-alias-templates.md#range_value_t)<sup>C++20</sup> | Returns the value type of the specified range's iterator type. Or in other words, the type of the elements in the range. |
| [`sentinel_t`](ranges-alias-templates.md#sentinel_t)<sup>C++20</sup> | Returns the sentinel type of the specified range. |

For more information about these alias templates, see [`<ranges>` alias templates](ranges-alias-templates.md).

## See also

[`<ranges>` functions](range-functions.md)\
[`<ranges>` concepts](range-concepts.md)\
[Range adaptors](range-adaptors.md)\
[Header files reference](../standard-library/cpp-standard-library-header-files.md)