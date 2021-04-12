---
title: "<ranges>"
description: "Overview of the Standard Template Library (STL) ranges library"
ms.date: "04/13/2021"
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges header"]
---

# `<ranges>`

At a high level, a range is something you can iterate over. A range is a rich abstraction on top of iterators that simplifies and amplifies your ability to use the Standard Template Library (STL).

STL algorithms usually take iterators that point to the collection they operate on. Consider how you sort a `vector` today. To call `std::sort()`, you pass two iterators the mark the beginning and end of the `vector`. That provides flexibility, but passing the iterators to the algorithm is extra noise since most of the time you just want to sort the entire thing.

With ranges, you can call `std::ranges::sort(myVector);` It's treated as if you had called `std::sort(myVector.begin(), myVector.end());` In range libraries, in addition to taking iterators, algorithms take ranges as parameters. Examples of range algorithms available in `<algorithm>` include `copy`, `copy_n`, `copy_if`, `all_of`, `any_of`, and `none_of`, `find`, `find_if`, and `find_if_not`, `count` and `count_if`, `for_each` and `for_each_n`, `equal` and `mismatch`.

More readable and easier to write code is great, but the benefits of ranges go further than that. They also make it much easier to filter and transform collections of data by making it easier to compose STL algorithms more easily.

Because ranges don't own elements like a container does, they're very lightweight. The time it takes to copy, move, or assign a range is constant--no matter how many elements it points to.

## An example

Before ranges, if you wanted to transform only the elements of a collection that met a certain criteria, you'd need to introduce an intermediate step to hold the results between operations. For example, let's say you want to build a vector of squares from only the elements in another vector that are divisible by 3. You'd write something like:

```cpp
std::vector<int> input = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
std::vector<int> intermediate, output;

std::copy_if(input.begin(), input.end(), std::back_inserter(intermediate), [](const int i) { return i%3 == 0; });
std::transform(intermediate.begin(), intermediate.end(), std::back_inserter(output), [](const int i) {return i*i; });
```

With ranges, you can write this as:

```cpp
// requires /std:c++latest
std::vector<int> input = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

auto output = input | std::views::filter([](const int n) {return n % 3 == 0; }) | std::views::transform([](const int n) {return n * n; });
```  

In addition to being easier to read, it avoids the memory allocation required for the `intermediate` vector and its contents.

In the code above, each element that is divisible by three is combined with an operation to to square that element. The '`|`' symbol chains the operations together, and is read left to right.

The result, `output`, is itself a type of range called a view, which is discussed next.

> [!NOTE]
> The ranges examples require the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option.

## Views

A view is essentially a range that takes another range and transforms how its elements are accessed using an algorithm or operation that you specify. The underlying range is unchanged. In the earlier example, one view took a range and returned a view of only the elements that were divisible by three.

A view is lightweight. Like a range, it doesn't own the elements. The time it takes to copy, move, or assign a view is constant, regardless of how many elements it points to.

Views are composable. In the example above, the view of vector elements that are divisible by three is combined with the view that squares those elements.

The elements of a view are evaluated lazily. That is, the transformations you apply to yield the elements in a view are not evaluated until you ask for an element in the view. For example, if you run the following code in a debugger, and put a breakpoint on the lines `auto divisible_by_three = ...` and `auto square =  ...`, you'll see that you hit the `divisible_by_three` lambda breakpoint as each element in `input` is tested for divisibility by three. Then you'll see the `square` lambda hit as those elements that are divisible by three are squared.

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

A view adaptor produces a view over a range. The range being viewed isn't changed. A view doesn't own any elements. It allows you to iterate over the underlying range, but using customized behavior that you specify.

In the example above, the first view acts like an iterator that only provides the elements of `input` that are divisible by three. The other view acts like an iterator that takes the elements divisible by three, and provides their square.

The `<ranges>` library provides many kinds of view adaptors. In addition to the filter and transform views, there are views that take or skip the first N elements of a range, reverse the order of a range, join ranges, skip elements of a range until a condition is met, transform the elements of a range, and more.

## Range adaptors

A range adaptor produces a new range from an existing range, but with different behavior. A range adaptor might take a range and produce a new one that presents the elements in reverse order. Views, discussed earlier, are a common kind of range adaptor.

Range adaptors produce lazily evaluated ranges. That is, you don't incur the cost of transforming every element in the range--only the ones that you access, when you access them.

Range adaptors come in many forms. For example, there are range adaptors that allow you to filter another range based on a predicate (`view::filter()`), transform the elements in a range (`view::transform`), split a range (`view::split()`), and more.

Range adaptors can be chained or composed--which is where the power of ranges express itself.

## Range algorithms

Range algorithms have been introduced that can take ranges for an argument. For example, `std::ranges::sort(myVector);`

The range algorithms are lazy, meaning that they operate on the range only when an element is accessed. They can work directly on a container, and can be easily chained together.

## Types of ranges

What you can do with a range depends on the underlying iterator type of the range. There are different kinds of ranges, called refinements. The different kinds of ranges are codified as C++ 20 concepts. This table lists various range concepts, along with the type of container they can be applied to:

| Range refinement | Description | Supported containers |
|--|--|--|
| `std::ranges::input_range` | Can iterate from beginning to end at least once | 
|`std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset`<br>`basic_istream_view` | 
| `std::ranges::output_range ` | A range whose iterator type satisfies output_iterator | ? |
| `std::ranges::forward_range` | Can iterate from beginning to end more than once) | `std::forward_list`<br>`std::unordered_map`<br>`std::unordered_multimap`<br>`std::unordered_set`<br>`std::unordered_multiset` |
| `std::ranges::bidirectional_range` | Can iterate forward and backward more than once | `std::list`<br>`std::map`<br>`std::multimap`<br>`std::multiset`<br>`std::set`|
| `std::ranges::random_access_range` | Can access an arbitrary element (in constant time) using the `[]` operator) | `std::deque` |
| `std::ranges::contiguous_range` | The elements are stored in memory consecutively | `std::array`<br>`std::string`<br>`std::vector` |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)