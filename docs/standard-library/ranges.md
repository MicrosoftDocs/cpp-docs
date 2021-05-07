---
title: "<ranges>"
description: "Overview of the Standard Template Library (STL) ranges library"
ms.date: "04/14/2021"
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges"]
---

# `<ranges>`

At a high level, a range is something you can iterate over. A range abstracts iterators in a way that simplifies and amplifies your ability to use the Standard Template Library (STL).

STL algorithms usually take iterators that point to the portion of the collection they should operate on. Consider how you sort a `vector` today. To call `std::sort()`, you pass two iterators the mark the beginning and end of the `vector`. That provides flexibility, but passing the iterators to the algorithm is extra noise since most of the time you just want to sort the whole thing.

With ranges, you can simply call `std::ranges::sort(myVector);` which is treated as if you had called `std::sort(myVector.begin(), myVector.end());` In range libraries, algorithms take ranges as parameters (although they can also take iterators, if you want). Examples of range algorithms available in `<algorithm>` include `copy`, `copy_n`, `copy_if`, `all_of`, `any_of`, and `none_of`, `find`, `find_if`, and `find_if_not`, `count` and `count_if`, `for_each` and `for_each_n`, `equal` and `mismatch`.

Code that is easier to write and more readable is great, but the benefits of ranges go further than that. They also make it easier to filter and transform collections of data in part by allowing you to compose STL algorithms more easily.

## A ranges example

Before ranges, if you wanted to transform only the elements of a collection that meet a certain criteria, you'd need to introduce an intermediate step to hold the results between operations. For example, let's say you want to build a vector of squares from only the elements in another vector that are divisible by 3. You'd write something like:

```cpp
std::vector<int> input = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
std::vector<int> intermediate, output;

std::copy_if(input.begin(), input.end(), std::back_inserter(intermediate), [](const int i) { return i%3 == 0; });
std::transform(intermediate.begin(), intermediate.end(), std::back_inserter(output), [](const int i) {return i*i; });
```

With ranges, you can accomplish the same thing without needing the `intermediate` vector:

```cpp
// requires /std:c++latest
std::vector<int> input = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

auto output = input | std::views::filter([](const int n) {return n % 3 == 0; }) | std::views::transform([](const int n) {return n * n; });
```  

Besides being easier to read, it avoids the memory allocation required for the `intermediate` vector and its contents, while also allowing you to compose two operations.

In the code above, each element that is divisible by three is combined with an operation to square that element. The '`|`' symbol chains the operations together, and is read left to right.

The result, `output`, is itself a type of range called a view, which is discussed next.

> [!NOTE]
> The ranges examples require the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## Views

A view is a range with the added requirement that all view operations (default construction, move construction/assignment, copy construction/assignment (if present), destruction, begin and end) happen in constant time regardless of the number of elements in the view.

How the elements in the view appear depends on the algorithm or operation that you specify for the view. In the example above, a view takes a range and returns a view of only those elements that are divisible by three. The underlying range is unchanged.

Views are composable. In the example above, the view of vector elements that are divisible by three is combined with the view that squares those elements.

The elements of a view are evaluated lazily. That is, the transformations you apply to yield the elements in a view aren't evaluated until you ask for an element. For example, if you run the following code in a debugger, and put a breakpoint on the lines `auto divisible_by_three = ...` and `auto square =  ...`, you'll see that you hit the `divisible_by_three` lambda breakpoint as each element in `input` is tested for divisibility by three. The `square` lambda breakpoint will be hit as the elements that are divisible by three are squared.

```cpp
// requires /std:c++latest
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

## View adaptors

A view adaptor produces a view over a range. The range being viewed remains unchanged. A view doesn't own any elements. It allows you to iterate over the underlying range using customized behavior that you specify.

In the example above, the first view provides the elements of `input` that are divisible by three. The other view takes the elements divisible by three, and provides the element's square.

The `<ranges>` library provides many kinds of view adaptors. Besides the filter and transform views, there are views that take or skip the first N elements of a range, reverse the order of a range, join ranges, skip elements of a range until a condition is met, transform the elements of a range, and more.

## Range adaptors

A range adaptor produces a new range from an existing range and transforms how its elements are accessed. For example, a range adaptor might take a range and produce a new one that presents the elements from the original range in reverse order. Views, discussed earlier, are a common kind of range adaptor.

Range adaptors produce lazily evaluated ranges. That is, you don't incur the cost of transforming every element in the range--only the ones that you access, and at the time that you access them.

Range adaptors come in many forms. For example, there are range adaptors that allow you to filter another range based on a predicate (`view::filter`), transform the elements in a range (`view::transform`), split a range (`view::split()`), and more.

Range adaptors can be chained or composed--which is where the power and flexibility of ranges is most apparent.

## Range algorithms

Range algorithms have been created that take a range argument. For example, `std::ranges::sort(myVector);`

The range algorithms are almost identical to the corresponding iterator-pair algorithms in the `std` namespace, except that they have concept-enforced constraints and accept range arguments or more general iterator-sentinel argument pairs. They can work directly on a container, and can be easily chained together.

## Types of ranges

What you can do with a range depends on the underlying iterator type of the range. Range concepts are refinements of the `range` concept. In C++ 20, to say that concept X refines concept Y means that everything that satisfies Y also satisfies X--though not necessarily the other way around. For example, car, bus, and truck all refine vehicle.

The range concepts mirror the hierarchy of iterator categories. This table lists various range concepts, along with the type of container they can be applied to:

| Range concept | Description | Supported containers |
|--|--|--|
| `std::ranges::input_range` | Can iterate from beginning to end at least once | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset`<br>`basic_istream_view` |
| `std::ranges::forward_range` | Can iterate from beginning to end more than once) | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset` |
| `std::ranges::bidirectional_range` | Can iterate forward and backward more than once | `std::list`<br>`std::map`<br>`std::multimap`<br>`std::multiset`<br>`std::set`|
| `std::ranges::random_access_range` | Can access an arbitrary element (in constant time) using the `[]` operator) | `std::deque` |
| `std::ranges::contiguous_range` | The elements are stored in memory consecutively | `std::array`<br>`std::string`<br>`std::vector` |



## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)