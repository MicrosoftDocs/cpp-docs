---
title: "<ranges>"
description: "API reference for the Standard Template Library (STL) ranges namespace, which provides ... JTW"
ms.date: "04/13/2021"
f1_keywords: ["<ranges>"]
helpviewer_keywords: ["ranges header"]
---

# `<ranges>`

A `range`, at its most basic, is a collection of things that you can iterate over.

The STL library contains many algorithms that take an iterator. You often pass a Begin(), End() iterator to define the items you want to process. That is flexible, but makes for a certain code wordiness. Rather than reverse a list, say, you have to pass a pair of iterators that define the boundaries of which parts of the list you want to reverse, and then pass the list along with that to a function to reverse them. Wouldn't it be nice if you could just pass the list and be done with it.  Ranges allow this.   

Saying that somehting is a range is essentially saying that it can be iterated over, which means that it has a begin, it has an end and they both return something that behaves essentially like an iterator. It’s a vague definition but they’re are a lot of things to fit into that definition and one of the is the STL containers, like std::vector for example.

You can think of a range as two iterators that refer to the beginning and end of a group of elements that you can iterate over. Because all containers support iterators, every container can be thought of as a range. Since all algorithms from Boost.Range expect a range as a first parameter, a container like std::vector can be passed directly. You don’t have to call begin() and end() and then pass two iterators separately. This protects you from mistakes such as passing the begin and end iterator in the wrong order or passing iterators that belong to two different containers.  https://theboostcpplibraries.com/boost.range-algorithms

hanks to the ranges library in C++20, working with the Standard Template Library (STL) will become much more comfortable and powerful. The algorithms of the ranges library are lazy, can work directly on the container and can easily be composed. To make it short: The comfort and the power of the ranges library are due to its functional ideas. Let me show you what that means.

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
