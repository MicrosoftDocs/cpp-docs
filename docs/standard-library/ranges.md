---
title: "<ranges>"
description: "API reference for the Standard Template Library (STL) ranges namespace, which provides ... JTW"
ms.date: "04/13/2021"
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges header"]
---


Range algorithms available (casey list):
https://devblogs.microsoft.com/cppblog/initial-support-for-c20-ranges/


# `<ranges>`

## INTRO

introduction - what is a range
    motivations/advantages
    example


Pillars: https://github.com/ericniebler/range-v3
Views - Views are composable adaptations of ranges where the adaptation happens lazily as the view is iterated. 
Actions - an action is an eager application of an algorithm to a container that mutates the container in-place and returns it for further processing.
Algorithms
From eric niebler
Ranges are an extension of the Standard Template Library that makes its iterators and algorithms more powerful by making them composable. Unlike other range-like solutions which seek to do away with iterators, in range-v3 ranges are an abstration layer on top of iterators.

Range-v3 is built on three pillars: Views, Actions, and Algorithms. The algorithms are the same as those with which you are already familiar in the STL, except that in range-v3 all the algorithms have overloads that take ranges in addition to the overloads that take iterators. Views are composable adaptations of ranges where the adaptation happens lazily as the view is iterated. And an action is an eager application of an algorithm to a container that mutates the container in-place and returns it for further processing.

Views and actions use the pipe syntax (e.g., rng | adapt1 | adapt2 | ...) so your code is terse and readable from left to right.

http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4128.html#design-goals
Ranges (not Iterables) are copyable and assignable. They don't own the elements like, say, a container 

It’s been 20 years since the STL was standardized, and all I want to do is pass a vector to sort. Is that too much to ask? Nope. With C++20, you will finally be able to do this: https://ericniebler.com/2018/12/05/standard-ranges/
std::vector< int > v =  // ...
std::ranges::sort( v ); // Hurray!

> what it is - anything you can iterate through (docs.microsoft.com when talking about range-based for) 
Essentially, a range is something that can be traversed. More precisely, a range is something that has a begin() and an end() method, that return objects (iterators) that let you iterate over the range (that is, move along the elements of the range, and be dereferenced to access these elements).  - https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/
With ranges though, you generally don’t see iterators. They are here, but abstracted away by the concept of range. Iterators are technical constructs that let you iterate over a collection, but they are generally too technical for your functional code. Most of the time, what you are really trying to represent is a range, which corresponds better to the level of abstraction of your code. Like a range of cash flows, a range of lines in a screen, or a range of entries coming up from the database.

So coding in terms of ranges is a huge improvement, because in that sense iterators violate the principle of respecting levels of abstraction, which I deem is the most important principle for designing good code.

In range libraries, STL algorithms are redefined to take directly ranges as parameters, instead of two iterators, like:

ranges::transform(input, std::back_inserter(output), f);
As opposed to:

std::transform(input.begin(), input.end(), std::back_inserter(output), f);
Such algorithms reuse the STL versions in their implementation, by forwarding the begin and the end of the range to the native STL versions.


> an example
> the different types of ranges (input_range, output_range, etc. see https://www.modernescpp.com/index.php/c-20-the-ranges-library and search :input_range)
> List of containers the range types can work with (same link as above)
> What a View is: https://www.modernescpp.com/index.php/c-20-the-ranges-library
    A View is something that you apply on a range and performs some operation. A view does not own data and it's time to copy, move, assignment its constant. 
    Lazy
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    auto results = numbers | std::views::filter([](int n){ return n % 2 == 0; })
                           | std::views::transform([](int n){ return n * 2; });

## range adaptor

What is a range adaptor:
A range adaptor is an object that can be combined with a range in order to produce a new range. 
    https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/
    With the following collection of numbers:
    
    std::vector numbers = { 1, 2, 3, 4, 5 };
    The range
    
    auto range = numbers | view::transform(multiplyBy2);
    is a view over the vector numbers that has the iteration behaviour of a transform_iterator with the function multiplyBy2. So when you iterate over this view, the results you get are all these numbers, multiplied by 2. For instance:
    
    ranges::accumulate(numbers | view::transform(multiplyBy2), 0);
    returns 1*2 + 2*2 + 3*2 + 4*2 + 5*2 = 30 (similarly to std::accumulate, ranges::accumulate does the sum of the elements of the range it is passed to).

range adaptors : https://ericniebler.com/2018/12/05/standard-ranges/
    example
    Also The true power of ranges lies in the ability to create pipelines that transform ranges on the fly https://ericniebler.com/2018/12/05/standard-ranges/
    but these may be out of date - verify in product



## Views

Views and actions use the pipe syntax (e.g., rng | adapt1 | adapt2 | ...) so your code is terse and readable from left to right.

view adaptors
    https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/ (good range/view examples, composability)
    example

List of views: https://www.modernescpp.com/index.php/c-20-the-ranges-library

> What's a range adaptor: A range adaptor is an object that can be combined with a range in order to produce a new range. A subpart of them are view adaptors: with them, the initial adapted range remains unchanged, while the produced range does not contain elements because it is rather a view over the initial one, but with a customized iteration behaviour.  See https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/
> View adaptors: https://www.fluentcpp.com/2018/02/09/introduction-ranges-library/
auto evenNumbers = numbers | ranges::view::filter([](int n){ return n % 2 == 0; });  Same as above?

We can plug as many view adaptors as we like. For example let me plug a transform adaptor with a function that multiplies a number by 2.

auto evenNumbers = numbers | ranges::view::filter([](int n){ return n % 2 == 0; })
                           | ranges::view::transform([](int n) { return n * 2; });

A `range`, at its most basic, is a collection of things that you can iterate over.

The STL library contains many algorithms that take an iterator. You often pass a Begin(), End() iterator to define the items you want to process. That is flexible, but makes for a certain code wordiness. Rather than reverse a list, say, you have to pass a pair of iterators that define the boundaries of which parts of the list you want to reverse, and then pass the list along with that to a function to reverse them. Wouldn't it be nice if you could just pass the list and be done with it.  Ranges allow this.   

https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/

All algorithms manipulate iterators pointing into the collection they operate on. While this is handy in specific cases like stopping at a precise point in a container, the largely general case is to traverse the whole container from its .begin() to its .end().Therefore, portions of code that use the STL end up being littered with iterators:
std::copy(v1.begin(), v1.end(), std::back_inserter(v2));
std::set_difference(v2.begin(), v2.end(), v3.begin(), v3.end(), std::back_inserter(v4));
std::transform(v3.begin(), v3.end(), std::back_inserter(v4));

Composability: https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/   Not sure I want to talk about this.

Saying that somehting is a range is essentially saying that it can be iterated over, which means that it has a begin, it has an end and they both return something that behaves essentially like an iterator. It’s a vague definition but they’re are a lot of things to fit into that definition and one of the is the STL containers, like std::vector for example.

You can think of a range as two iterators that refer to the beginning and end of a group of elements that you can iterate over. Because all containers support iterators, every container can be thought of as a range. Since all algorithms from Boost.Range expect a range as a first parameter, a container like std::vector can be passed directly. You don’t have to call begin() and end() and then pass two iterators separately. This protects you from mistakes such as passing the begin and end iterator in the wrong order or passing iterators that belong to two different containers.  https://theboostcpplibraries.com/boost.range-algorithms

thanks to the ranges library in C++20, working with the Standard Template Library (STL) will become much more comfortable and powerful. The algorithms of the ranges library are lazy, can work directly on the container and can easily be composed. To make it short: The comfort and the power of the ranges library are due to its functional ideas. Let me show you what that means.

I really like this intro to the types:

https://www.modernescpp.com/index.php/c-20-the-ranges-library
https://www.modernescpp.com/index.php/c-20-the-ranges-librar
// rangesFilterTransform.cpp

#include <iostream>
#include <ranges>
#include <vector>

int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
  
    auto results = numbers | std::views::filter([](int n){ return n % 2 == 0; })
                           | std::views::transform([](int n){ return n * 2; });
                           
    for (auto v: results) std::cout << v << " ";     // 4 8 12

}
You have to read the expression from left to right. The pipe symbol stands for function composition: First, all numbers can pass which are even (std::views::filter([](int n){ return n % 2 == 0; })). Afterwards, each remaining number is mapped to its double (std::views::transform([](int n){ return n * 2; })). The small example shows already two new features of the ranges library: Function composition which operators on the entire container.  

Now you should be prepared for the details. Let's go back to square one: ranges and views are concepts.
Ranges are an abstraction of “a collection of items”, or “something iterable”.

example: 

#include <boost/range/algorithm.hpp>
#include <array>
#include <iostream>

int main()
{
  std::array<int, 6> a{{0, 1, 0, 1, 0, 1}};
  std::cout << boost::count(a, 0) << '\n';
}

example: https://www.modernescpp.com/index.php/c-20-the-ranges-library

// rangesFilterTransform.cpp

#include <iostream>
#include <ranges>
#include <vector>

int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
  
    auto results = numbers | std::views::filter([](int n){ return n % 2 == 0; })
                           | std::views::transform([](int n){ return n * 2; });
                           
    for (auto v: results) std::cout << v << " ";     // 4 8 12

}


most generic algorithms take a couple interators

compose algorithms

example: filter a vector of numbers. I think I saw that in the other example as well.
https://www.fluentcpp.com/2018/02/09/introduction-ranges-library/

===> https://hannes.hauswedell.net/post/2019/11/30/range_intro/ ** this could be it. 

C++20 introduces the notion of ranges and provides algorithms that accept such in the namespace std::ranges::, e.g. std::ranges::sort(v) now works if v is range – and vectors are ranges!  <-- works for us?


a Range does not necessarily own the elements that can be accessed through it, have copy semantics, - https://www.boost.org/doc/libs/1_67_0/libs/range/doc/html/range/concepts/overview.html

The operations that can be performed on a Range is dependent on the traversal category of the underlying iterator type. Therefore the range concepts are named to reflect which traversal category its iterators support. See also terminology and style guidelines. for more information about naming of ranges.

sorting only all elements after the fifth one:
1std::ranges::sort(std::views::drop(v, 5));
sorting in reverse order:
1std::ranges::sort(std::views::reverse(v))

range adaptors https://www.boost.org/doc/libs/1_67_0/libs/range/doc/html/range/reference/adaptors/introduction.html

Range algorithms

In its most simple form a Range Algorithm (or range-based algorithm) is simply an iterator-based algorithm where the two iterator arguments have been replaced by one range argument. For example, we may write

#include <boost/range/algorithm.hpp>
#include <vector>

std::vector<int> vec = ...;
boost::sort(vec);
instead of

std::sort(vec.begin(), vec.end());
However, the return type of range algorithms is almost always different from that of existing iterator-based algorithms.

Here's an example of how a span can be used:

```cpp
#include <ranges>
#include <iostream>

int main()
{
    int numbers[]{ 0,1,2,3,4 };
}
```

## Requirements

**Header:** `<ranges>`

**Namespace:** std

**Compiler option:** [/std:c++latest](../build/reference/std-specify-language-standard-version.md)


View adaptors
See https://www.fluentcpp.com/2018/02/09/introduction-ranges-library/
lazy eval



## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)


LINKS I LIKE
--------------
https://www.modernescpp.com/index.php/c-20-the-ranges-library
https://www.fluentcpp.com/2018/02/09/introduction-ranges-library/
https://www.fluentcpp.com/2017/01/12/ranges-stl-to-the-next-level/
