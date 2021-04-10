---
title: "<ranges>"
description: "API reference for the Standard Template Library (STL) ranges namespace, which provides ... JTW"
ms.date: "04/13/2021"
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges header"]
---

# `<ranges>`

## Overview

At a high level, a range is something you can iterate over. A range is a rich abstraction over iterators that simplifies and amplifies your ability to use the Standard Template Library (STL).

STL algorithms usually take iterators that point to the collection they operate on. But generally speaking, you want to operate on the entire collection. Consider how you sort a `vector` today. To call `std::sort()`, you pass two iterators marking the beginning and end of the `vector`. That's flexible, but is noisy since much of the time you'd just like to sort the entire `vector`, but you still have to pass the beginning and end of what to sort.

With ranges, you can call `std::ranges::sort(myVector);`. It is treated as if you had called `std::sort(myVector.begin(), myVector.end());` In range libraries, STL algorithms take ranges as parameters, instead of iterators. Examples of range algorithms available in `<algorithm>` include `copy`, `copy_n`, `copy_if`, `all_of`, `any_of`, and `none_of`, `find`, `find_if`, and `find_if_not`, `count` and `count_if`, `for_each` and `for_each_n`, `equal` and `mismatch`.

Simplified code that is more readable is great, but the benefits of ranges extend further to making it much easier to filter and transform collections of data, and to compose STL algorithms more easily.

Unlike an iterator, ranges are copyable and assignable. Because they don't own the elements like a container does, they are lightweight.

## An example

Before ranges, if you wanted to transform only the elements of a collection that met a certain criteria, you'd need to introduce an intermediate step to hold the results as they came in. For example, let's say you want to build a vector of squares from only the elements in another vector that are divisible by 3. You'd write something like:

```cpp
std::copy_if(input.begin(), input.end(), std::back_inserter(intermediate), [](const int i) { return i%3 == 0; });
std::transform(intermediate.begin(), intermediate.end(), std::back_inserter(output), [](const int i) {return i*i; });
```

With ranges, you can instead write this as:

```cpp
std::vector<int> input = { 1, 2, 3, 5, 8, 13, 21, 34, 45, 79 };
vector<int> output;
auto output = input | std::views::filter([](const int n) {return n % 3 == 0; }) | std::views::transform([](const int n) {return n * n; });
```  

*** Note: I'd like to write something like this but it doesn't work:
```cpp
std::ranges::copy( input, std::views::filter([](const int n) {return n % 3 == 0; })
		| std::views::filter([](const int n) {return n * n; }),
		std::back_inserter(output));
```

In the code above, the input is first filtered to just the entries that are divisible by three. The result is combined with a transformation that squares those elements (the ones divisible by three).

The '`|`' symbol chains the range view operations together, and is read left to right.

The result, `output`, is itself a type of range called a view, which is discussed next.

## Views

A view is essentially a range that takes another range and transforms it in the way that you specify.

A view is lightweight. Like a range, a view doesn't own the elements it provides access to. The time it takes to copy, move, or assign a view is constant, regardless of how many elements it points to.

Views are composable. In the example above, the view of vector elements that are divisible by three is then combined with the view that squares those elements.

The elements of a view are evaluated lazily. That is, the transformation you apply to yield elements in a view is not evaluated until you ask for an element. For example, if you run the following code in a debugger, and put a breakpoint on the line `auto x = ...`, you'll hit that breakpoint each iteration through the range `for` loop. That's because it isn't until the element is accessed that the operation that define the view are evaluated for that element.

```cpp
#include <iostream>
#include <ranges>
#include <vector>

int main()
{
	std::vector<int> input = { 1, 2, 3, 5, 8, 13, 21, 34, 45, 79 };

    auto x = input | std::views::filter([](const int n) {return n % 3 == 0; })
                            | std::views::transform([](const int n) {return n * n; });

    for (int i : x)
	{
		std::cout << i << '\n';
	}
    return 0;
}
```

## View adaptors

A view adaptor provides a view over a range. The range being viewed remains unchanged. The produced view doesn't own any elements. Instead, a view allows you to iterate over the underlying range, but using customized behavior that you specify.

In the example above, the first view acts like an iterator that only provides the elements of `input` that are divisible by three. The other range acts like an iterator that takes the elements divisible by three, and provides their square.

The `<ranges>` library provides many kinds of view adaptors. In addition to the filter and transform views above, there are views that take or skip the first N elements of another view, reverse the order of a view, join views, skip elements of another view until a condition is met, transform the elements of another view, among others.

## Range adaptors

A range adaptor produces a new range from an existing range. Views, discussed above, are a kind of range adaptor.

Range adaptors produce lazily evaluated ranges. That is, you don't incur the cost of transforming every element in the range; only the ones that you access.

Range adaptors come in many forms. For example, there are range adaptors that allow you to filter another range based on a predicate (`view::filter()`), transform the elements in a range (`view::transform`), split a range (`view::split()`), and more.

Range adaptors can be chained, as shown in the example in this article. And that's where the true power of ranges lies, in the ability to chain various transformations together.

## Range algorithms

Range algorithms have been introduced that take a range for an argument. `std::ranges::sort(myVector);` is an example. 

The range algorithms are lazy, meaning that they operate on the range only when an element is accessed. They can work directly on a container, and are easily composed.

Range-based algorithms are basically iterator-based algorithms where instead of taking two iterators, they take a range, instead.

## Types of ranges

What you can do with a range depends on the underlying iterator type. Range concepts are named to reflect the traversal category its iterators support.

There are different kinds, or refinements, of ranges, that are codified as concepts. This table lists them, along with the type of container they can be applied to:

| Range refinement | Description | Supported containers |
|--|--|--|
| `std::ranges::input_range` | Can iterate from beginning to end at least once | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset` | 
| `std::ranges::output_range ` | A range whose iterator type satisfies output_iterator | ? |
| `std::ranges::forward_range` | Can iterate from beginning to end more than once) | ? |
| `std::ranges::bidirectional_range` | Can iterate forward and backward more than once | `std::list`<br>`std::map`<br>`std::multimap`<br>`std::multiset`<br>`std::set`|
| `std::ranges::random_access_range` | Can access an arbitrary element (in constant time) using the `[]` operator) | `std::deque` |
| `std::ranges::contiguous_range` | The elements are stored in memory consecutively | `std::array`<br>`std::string`<br>`std::vector` |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)