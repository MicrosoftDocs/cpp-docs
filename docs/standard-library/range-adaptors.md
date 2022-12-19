---
description: "Learn more about range adaptors, which create views on ranges."
title: "Range adaptors"
ms.date: 11/3/2022
f1_keywords: ["ranges/std::all", "ranges/std::all_t", "ranges/std::common", "ranges/std::counted", "ranges/std::drop", "ranges/std::drop_while", "ranges/std::elements", "ranges/std::empty", "ranges/std::filter", "ranges/std::iota", "ranges/std::istream", "ranges/std::join", "ranges/std::keys", "ranges/std::lazy_split", "ranges/std::reverse", "ranges/std::single", "ranges/std::split", "ranges/std::subrange", "ranges/std::take", "ranges/std::take_while", "ranges/std::transform", "ranges/std::values"]
helpviewer_keywords: ["std::ranges [C++], all", "std::ranges [C++], all_t", "std::ranges [C++], common", "std::ranges [C++], counted", "std::ranges [C++], drop", "std::ranges [C++], drop_while", "std::ranges [C++], elements", "std::ranges [C++], empty", "std::ranges [C++], filter", "std::ranges [C++], iota", "std::ranges [C++], istream", "std::ranges [C++], join", "std::ranges [C++], keys", "std::ranges [C++], lazy_split", "std::ranges [C++], reverse", "std::ranges [C++], single", "std::ranges [C++], split", "std::ranges [C++], subrange", "std::ranges [C++], take", "std::ranges [C++], take_while", "std::ranges [C++], transform", "std::ranges [C++], values"]
---
# Range adaptors

Range adaptors create a *view* (one of the [View classes](view-classes.md) in the `std::views` namespace) from a range. We recommend that you use an adaptor to create views instead of creating the view types directly. The adaptors are the intended way to access views. They're easier to use, and in some cases more efficient, than creating instances of the view types directly.

A view is a lightweight object that refers to elements from a range. A view can:

- Consist of only certain elements from a range.
- Represent a transformation of elements from a range.
- Be the reverse of, or only the first `n` elements of, a range.
- Be a combination of the preceding things.

A view is cheap, `O(1)`, to copy, assign, and destroy--no matter how many elements are involved. Consider the following example:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> input =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto divisible_by_three = [](const int n) {return n % 3 == 0;};
    auto square = [](const int n) {return n * n;};

    auto x = input | std::views::filter(divisible_by_three)
                   | std::views::transform(square);

    for (int i : x)
    {
        std::cout << i << ' ';
    }
}
```

```output
0 9 36 81
```

The first range adaptor, [`filter`](filter-view-class.md), provides a view that contains the elements from `input` that are divisible by three. The other range adaptor, [`transform`](transform-view-class.md), takes the view that contains the elements divisible by three and provides a view of the square of those elements.

When a range adaptor produces a view, it doesn't incur the cost of transforming every element in the range to produce that view. The cost to process an element in the view is paid only when you access that element.

Creating a view is preparation to do work in the future. In the previous example, creating the view doesn't result in finding all the elements divisible by three or squaring those elements. Work happens only when you access an element in the view.

Elements of a view are usually the actual elements of the range used to create the view. The view usually doesn't own the elements; it just refers to them, with the exception of [`owning_view`](owning-view-class.md). Changing an element changes that element in the range that the view was created from. The following example shows this behavior:

```cpp
#include <algorithm>
#include <iostream>
#include <ranges>

int main()
{
    int input[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto even = [](const int n) { return n % 2 == 0; };
    auto x = input | std::views::filter(even); // create a view of the even elements from input

    for (int &i : x)
    {
        std::cout << i << ' '; // 0 2 4 6 8 10
    }
    std::cout << '\n'; 

    std::ranges::fill(x, 42); // changes the evens from input[] to 42
    for (int &i : input) // demonstrates that the even elements in the range are modified
    {
        std::cout << i << ' '; // // 42 1 42 3 42 5 42 7 42 9 42
    }
}
```

Range adaptors come in many forms. For example, there are range adaptors that allow you to produce a view by:

- Filtering another range based on a predicate ([`filter`](filter-view-class.md)).
- Transforming the elements in a range ([`transform`](transform-view-class.md)).
- Splitting a range ([`split`](split-view-class.md)).

Range adaptors can be chained together (composed). That's where the power and flexibility of ranges are most apparent. Composing range adaptors allows you to overcome a core problem with the previous Standard Template Library (STL) algorithms, which is that they aren't easy to chain together.

The following range adaptors are available in the `std::views` namespace. The `std::views` namespace is a convenience alias for `std::ranges::views`.

| Range adaptor | Description |
|--|--|
| [`all`](#all)<sup>C++20</sup> | Create a view that refers to a range and its elements. |
| [`common`](#common)<sup>C++20</sup> | Create a view that has the same iterator and sentinel types from a range that doesn't. |
| [`counted`](#counted)<sup>C++20</sup> | Create a view of the first *n* elements of a range, starting from the specified location. |
| [`drop`](#drop)<sup>C++20</sup> | Create a view from another view, skipping the specified number of elements from the front. |
| [`drop_while`](#drop_while)<sup>C++20</sup> | Create a view that contains the elements of a range that remain after the leading elements that match the specified condition are dropped. |
| [`elements`](#elements)<sup>C++20</sup> | Create a view of the selected index into each tuple-like value in a range. |
| [`empty`](#empty)<sup>C++20</sup> | Create a view that has no elements. |
| [`filter`](#filter)<sup>C++20</sup> | Create a view that contains the elements of a range that match the specified condition. |
| [`iota`](#iota)<sup>C++20</sup> | Create a view that contains a sequence of increasing values. |
| [`istream`](#istream)<sup>C++20</sup> | Create a view over the elements of a stream. |
| [`join`](#join)<sup>C++20</sup> | Create a view that combines all the elements of multiple ranges into a single view. |
| [`keys`](#keys)<sup>C++20</sup> | Create a view of the first index into each tuple-like value in a collection. |
| [`lazy_split`](#lazy_split)<sup>C++20</sup> | Split a view into subranges based on a delimiter. |
| [`reverse`](#reverse)<sup>C++20</sup> | Create a view of the elements of a range in reverse order. |
| [`single`](#single)<sup>C++20</sup> | Create a view that contains one element. |
| [`split`](#split)<sup>C++20</sup> | Split a view into subranges based on a delimiter. |
| [`take`](#take)<sup>C++20</sup> | Create a view of the first *n* elements from another view. |
| [`take_while`](#take_while)<sup>C++20</sup> | Create a view that contains the leading elements of a range that match the specified condition. |
| [`transform`](#transform)<sup>C++20</sup> | Create a view of transformed elements from another view. |
| [`values`](#values)<sup>C++20</sup> | Create a view of the second index into each tuple-like value in a collection. |

In the previous table, a range adaptor is typically described as taking a range and producing a view. To be precise, range adaptors have a range argument that accepts one of the following:

- The `cv-unqualified` type models [`view`](range-concepts.md#view), and the argument is an rvalue or is copyable.
- When you pass the argument as an lvalue, it must model [`range`](range-concepts.md#range) and live as long as the view.
- When you pass the argument as an rvalue, such as when calling [`owning_view`](owning-view-class.md), it must model `range` and `movable`.

Range adaptor functions are typically [function objects](https://eel.is/c++draft/function.objects), which look like function calls and enforce constraints on the types that can be passed.

You can pass range adaptors and the result of pipe operations (`|`) to code that expects function objects. In the following example, the view that the `split` range adaptor creates is passed to the `transform` range adaptor as if by a function call, because the `transform` range adaptor is a function object.

```cpp
std::map<int, string> x = {{0, "Hello, world"}, {42, "Goodbye, world"}};
auto y = x | views::values | views::transform(views::split(' '));
// y is a range whose elements are ranges of whitespace-delimited strings from each value in x:
// {{"Hello", "world"}, {"Goodbye", "world"}}
```

## `all`

Create a view of all the elements in a range.

```cpp
template <ranges::viewable_range R>
constexpr ranges::view auto all(R&& rg) const noexcept;
```

### Parameters

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

### Return value

- If `rg` is already a view, a copy of `rg`.
- If `rg` is a non-view lvalue, a [`ref_view`](ref-view-class.md) that refers to `rg`. (The lifetime of the view is tied to the lifetime of `rg`.)
- If `rg` is a non-view rvalue such as a temporary object, or is the result of passing the range to `std::move`, an [`owning_view`](owning-view-class.md).

Use `std::views::all_t<decltype((rg))>` to get the type of the returned view.

### Remarks

This range adaptor is the best way to convert a range into a view. One reason to create a view from a range is to pass it by value at low cost, if passing the range by value could be expensive.

Getting a view for a range is a useful alternative to passing a heavyweight range by value because views are inexpensive to create, copy, and destroy. A possible exception is `owning_view`, which is a view that owns the underlying range. 

In general, the worst-case scenario for destroying a view has `O(N)` complexity for the number of elements in the range. Even if you destroy `K` copies of view with `N` elements, the total complexity is still `O(N)` because the underlying range is destroyed only once.

### Example: `all`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    auto myRefView = std::views::all(v); // create a ref_view of the vector
    std::cout << myRefView.size() << '\n'; // 10

    auto myOwningView = std::views::all(std::move(v)); // create an owning_view from a moved vector
    std::cout << myRefView.size() << '\n'; // outputs 0 because myOwningView now owns the elements
    std::cout << v.size() << '\n'; // outputs 0 because myOwningView now owns the elements
    std::cout << myOwningView.size(); // 10 
}
```

```output
10
0
0
10
```

## `common`

Create a view that has the same begin iterator and sentinel type from a range that might not.

```cpp
template <ranges::viewable_range R>
constexpr ranges::view auto common(R&& rg) const noexcept;
```

### Parameters

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

### Return value

- `views::all(rg)` if `rg` is a range with the same iterator and sentinel type.
- [`common_view(views::all(rg))`](common-view-class.md) if `rg` has different iterator and sentinel types.

### Remarks

When an API requires the begin iterator and end sentinel to have the same type, and the view that you're using doesn't meet that requirement (or you don't know if it does), use this range adaptor to create a `common_view`. It guarantees that the type of the begin iterator and the type of the end sentinel are the same.

### Example: `common`

```cpp
// requires /std:c++20 or higher
#include <ranges>
#include <iostream>
#include <numeric>
#include <list>

int main()
{
    std::list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto firstFive = std::views::take(lst, 5); 
    // firstFive.begin(), firstFive.end() have different types: counted_iterator versus default_sentinel
    // auto r = std::accumulate(firstFive.begin(), firstFive.end(), 0); // Error: accumulate() requires firstFive.begin() and firstFive.end() types to be the same.
    
    auto common = std::views::common(firstFive); // create a common_view that has the same begin/end iterator types
    std::cout << std::accumulate(common.begin(), common.end(), 0); // Now you can call the API because the iterator types are the same. Outputs 15 (1+2+3+4+5) 
}
```

```output
15
```

## `counted`

Create a view of the first `count` elements of a range, starting from the specified location.

```cpp
template<class Iterator>
constexpr auto counted(Iterator&& it, iter_difference_t<Iterator> count);
```

### Parameters

`DifferenceType`\
The type of the count.

`Iterator`\
The type of the iterator.

`count`\
The number of elements to include in the view. Must be non-negative.

- If `count == 0`, an empty [`span`](span-class.md) is returned.
- If `count` is greater than the number of elements in the range, the behavior is undefined.

`it`\
An iterator to the element in the range to start with. The element that the iterator points to is included in the created view.

### Return value

A [`span`](span-class.md) is returned if `it` is a [`contiguous_iterator`](iterator-concepts.md#contiguous_iterator) for arrays, vectors, and other containers that store their elements contiguously. Otherwise, a [`subrange`](subrange-class.md) is returned.

### Remarks

The included elements are `[it, count)`.

After the view is created, the number of elements in the view stays the same, even if the range that it was created from changes. However, if the underlying range changes, accessing elements from the view might result in undefined behavior.

### Example: `counted`

```cpp
// requires /std:c++20 or later
#include <algorithm>
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto pos5 = std::ranges::find(v, 5);
    auto countedView = std::views::counted(pos5, 5);
    for (auto e : countedView) // outputs 5 6 7 8 9
    {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    // You can pass the range directly if it supports input_or_output_iterator, in which case
    // the count starts from the first element
    const char chars[] = { 'H','i',' ','t','h','e','r','e' };
    for (char c : std::views::counted(chars, 2))
    {
        std::cout << c; // outputs Hi
    }
}
```

```output
5 6 7 8 9
Hi
```

## `drop`

Create a view that excludes the first *n* elements of a range.

```cpp
1) template<ranges::viewable_range R>
constexpr ranges::view auto drop(R&& rg, ranges::range_difference_t<R> count);

2) template<class DifferenceType>
constexpr /* range closure object */ drop(DifferenceType&& count);
```

### Parameters

`DifferenceType`\
The type that describes the number of elements to skip.

`count`\
The number of elements to drop from the front of `rg`. Must be non-negative.
- If `count == 0`, all the elements in `rg` are returned.
- If `count` is greater than the number of elements in `rg`, an empty view is returned.

`R`\
The type of the range.

`rg`\
The range that's used to create the view.

### Return value

A view of the underlying range, with the specified number of elements dropped from the front.

If you specify more elements to drop than exist in the underlying range, an [`empty_view`](empty-view-class.md) is returned.

The returned view is typically, but not always, a specialization of [`drop_view`](drop-view-class.md). That is:

- If `V` is a specialization of [`empty_view`](empty-view-class.md), or is a specialization of [`span`](span-class.md), [`basic_string_view`](basic-string-view-class.md), [`iota_view`](iota-view-class.md), or [`subrange`](subrange-class.md) that is both [`random_access_range`](range-concepts.md#random_access_range) and [`sized_range`](range-concepts.md#sized_range), the result is a specialization of `V`.
- Otherwise, the result is a [`drop_view`](drop-view-class.md).

### Remarks

After it's created, the number of elements in the view stays the same even if the view that it was created from changes. However, if the underlying view changes, accessing elements in the returned view might result in undefined behavior.

`drop` is the opposite of [`take`](#take).

The code shown earlier as "2\)" can be used with pipe syntax: `collection | drop(5)`. Or it can be used with function call syntax: `drop(collection, 5)` or `drop(5)(collection)`.

### Example: `drop`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    auto newView = std::views::drop(v, 3);
    for (auto e : newView) // 4 5
    {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    auto numbers = std::views::iota(0) | std::views::take(10); // build a view of 10 integers
    auto latterHalf = numbers | std::views::drop(5);
    for (auto i : latterHalf)
    {
        std::cout << i << ' '; // 5 6 7 8 9
    }
}
```

```output
4 5
5 6 7 8 9
```

## `drop_while`

Create a view that contains the elements of a range that remain after the leading elements that match the specified condition are dropped.

```cpp
1) template<ranges::viewable_range R, class P>
constexpr ranges::view auto drop_while(R&& rg, P&& predicate);

2) template<class P>
constexpr /*range adaptor closure*/ drop_while(P&& predicate);
```

### Parameters

`R`\
The type of the range.

`predicate`\
The conditions that determine which leading elements to drop from the range.

`rg`\
The underlying range to create the view from.

### Return value

A [`drop_while_view`](drop-while-view-class.md) that consists of the elements that remain when the leading elements that match the predicate are dropped.

### Remarks

Stops dropping elements from `rg` as soon as the predicate returns `false`.

`drop_while` is the opposite of [`take_while`](#take_while).

The code shown earlier as "2\)" can be used with pipe syntax: `collection | drop_while(predicate)`. Or it can be used with function call syntax: `drop_while(collection, predicate)` or `drop_while(predicate)(collection)`.

### Example: `drop_while`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

void print(auto&& v)
{
    for (auto&& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto myView = std::views::drop_while(
        v,
        [](int i) {return i >= 0; });
    print(myView); // -4 5 6

    auto myView2 = v | std::views::drop_while(
        [](int i) {return i < 5; });
    print(myView2); // 5 6
}
```

```output
-4 5 6
5 6
```

## `elements`

Create an [`elements_view`](elements-view-class.md), which is a view of the selected index into each tuple-like value in a range. For example, given a range of `std::tuple<string, int>` values, create an `elements_view` of all the `string` elements from each tuple.

```cpp
template<ranges::viewable_range R, size_t N>
constexpr ranges::view auto elements<N>(R&& rg);
```

### Parameters

`N`\
The index of the element to select from each tuple-like value to include in the view.

`R`\
The type of the underlying range.

`rg`\
The range of tuple-like values to create the view from.

### Return value

An [`elements_view`](elements-view-class.md) that consists of the selected index into each tuple-like value in a collection.

### Example: `elements`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> cpp_standards
    {
        {"C++98", 1998},
        {"C++03", 2003},
        {"C++11", 2011},
        {"C++14", 2014},
        {"C++17", 2017},
        {"C++20", 2020}
    };

    // Create an elements_view of all the string elements from each tuple
    for (int const year : std::views::elements<1>(cpp_standards))
    {
        std::cout << year << ' '; // 2003 2011 2014 2017 1998 2020
    }
    std::cout << '\n';

    // Another way, using |: create an elements_view of all the int elements from each tuple
    for (auto&& name : cpp_standards | std::views::elements<0>)
    {
        std::cout << name << ' '; // C++03 C++11 C++14 C++17 C++98 c++20
    }
}
```

```output
2003 2011 2014 2017 1998 2020
C++03 C++11 C++14 C++17 C++98 c++20
```

## `empty`

Create an `empty_view`, which is a view that has no elements.

```cpp
template<class T>
inline constexpr empty_view<T> empty{};
```

### Parameters

`T`\
The type of the elements in the view. The view needs an element type, even though there are no elements.

### Return value

An [`empty_view`](empty-view-class.md).

### Remarks

An `empty_view` can be useful when you're calling code that requires a view but doesn't need to process any of its elements.

### Example: `empty`

```cpp
// requires /std:c++20 or higher
#include <ranges>
#include <iostream>

int main()
{
    auto anEmptyView = std::views::empty<int>;
    bool isNotEmpty = (bool)anEmptyView;
    std::cout << boolalpha << isNotEmpty << "\n"; // false
}
```

```output
false
```

## `filter`

Create a view that contains the elements of a range that match the specified condition.

```cpp
1) template<ranges::viewable_range R, class P>
    requires requires {filter_view(forward<R>(rg), forward<P>(predicate));}
constexpr ranges::view auto filter(R&& rg, P&& predicate);

2) template<class P>
constexpr /*range adaptor closure*/ filter(P&& predicate);
```

### Parameters

`P`\
The type of the predicate.

`predicate`\
The conditions that determine which elements to keep in the range.

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

### Return value

A [`filter_view`](filter-view-class.md) that contains the elements of a range that match the predicate.

### Remarks

For efficiency's sake, when you use `filter` and `transform` together with a pipe `|`, do the `filter` first so that you `transform` only the elements that you intend to keep.

The code shown earlier as "2\)" can be used with pipe syntax: `collection | filter(predicate)`. Or it can be used with function call syntax: `filter(collection, predicate)` or `filter(predicate)(collection)`.

### Example: `filter`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

void print(auto&& v)
{
    for (auto&& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};
    auto myView = std::views::filter(v, [](int i) {return i < 5; });
    print(myView); // 0 1 2 3 -4

    auto myView2 = v | std::views::filter([](int i) {return i < 5; }); // pipe syntax
    print(myView2); // 0 1 2 3 -4
}
```

```output
0 1 2 3 -4
0 1 2 3 -4
```

## `iota`

Create a view that contains a sequence of increasing values. The sequence can be bounded or not.

```cpp
template<class V>
constexpr ranges::view auto iota(V&& startValue); // create an unbounded sequence of incrementing values

template<class V, class E>
constexpr ranges::view auto iota(V&& startValue, E&& endValue); // create a bounded sequence of incrementing values
```

### Parameters

`E`\
The type of the end value.

`S`\
The type of the start value.

`startValue`\
The first value in the sequence.

`endValue`\
This value is one past the last value that will be in the sequence. For example, `std::views::iota(0, 5)` generates a view that has the values `0,1,2,3,4`.

### Return value

An [`iota_view`](iota-view-class.md) of a sequence of increasing values.

### Remarks

For an unbounded sequence, the behavior is undefined after the maximum value of its datatype is reached.

### Example: `iota`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>

void print(auto&& v)
{
    for (auto&& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    // create an iota view with its range adaptor (preferred)
    print(std::views::iota(0, 5)); // outputs 0 1 2 3 4
    
    // create an iota_view class directly
    std::ranges::iota_view letters{'a', 'f'};
    print(letters); // a b c d e
}
```

```output
0 1 2 3 4
a b c d e
```

## `istream`

Create a view over the elements of a stream.

```cpp
template <class Val>
views::istream<Val>(str);
```

### Parameters

`str`\
A stream object. Its type is derived from a specialization of `std::basic_istream`.

`Val`\
The type of the elements to extract from the stream.

### Return value

A [`basic_istream_view`](basic-istream-view-class.md).


This range adaptor is equivalent to `ranges::basic_istream_view<Val, typename U::char_type, typename U::traits_type>(str)`, where `U` is the type of `str`.

### Example: `istream`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::istringstream doubles{"1.1 2.2 3.3 4.4 5.5"};
    for (const auto& elem : std::views::istream<double>(doubles))
    {
        std::cout << elem << ' '; // 1.1 2.2 3.3 4.4 5.5
    }
}
```

```output
1.1 2.2 3.3 4.4 5.5
```

## `join`

Create a view that combines all the elements of multiple ranges into a single view.

```cpp
1) template <ranges::viewable_range R>
[[nodiscard]] constexpr ranges::view auto join(R&& rg) const noexcept;

2) inline constexpr /*range adaptor closure*/ join();
```

### Parameters

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

### Return value

A [`join_view`](join-view-class.md) that contains the elements of all the ranges in the underlying range.

### Example: `join`

```cpp
#include <iostream>
#include <vector>
#include <ranges>
#include <string>

int main()
{
    // a range of two ranges
    std::vector<std::string> rangeOfRanges[2]{{"C++", "20", "contains:"}, {"ranges", "modules", "concepts & more."}};

    for (const auto& elem : std::views::join(rangeOfRanges))
    {
        std::cout << elem << ' ';
    }
}
```

```output
C++ 20 contains: ranges modules concepts & more.
```

### Remarks

The code shown earlier as "2\)" can be used with pipe syntax: `collection | join`. Or it can be used with function call syntax: `join(collection)`.

## `keys`

Create a [`keys_view`](keys-view-class.md) of the first index into each tuple-like value in a collection. This is useful for extracting keys from associative containers. For example, given a range of `std::tuple<string, int>`, create a view that consists of all the `string` elements from each tuple.

```cpp
template <ranges::viewable_range R>
constexpr auto keys(R&& rg);
```

### Parameters

`R`\
The type of the underlying range.

### Return value

A [`keys_view`](keys-view-class.md) that consists of the first index into each tuple-like value in the range.

### Example: `keys`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    // ========== extract keys from a map

    std::map<std::string, int> cpp_standards
    {
        {"C++98", 1998},
        {"C++03", 2003},
        {"C++11", 2011},
        {"C++14", 2014},
        {"C++17", 2017},
        {"C++20", 2020}
    };

    // Extract all of the keys from the map
    for (std::string standards : std::views::keys(cpp_standards))
    {
        std::cout << standards << ' '; // C++03 C++11 C++14 C++17 C++98 C++20
    }
    std::cout << '\n';

    // ========== Extract keys from a pair

    std::vector<std::pair<std::string, int>> windows
    {
        {"Windows 1.0", 1985},
        {"Windows 2.0", 1987},
        {"Windows 3.0", 1990},
        {"Windows 3.1", 1992},
        {"Windows NT 3.1", 1993},
        {"Windows 95", 1995},
        {"Windows NT 4.0", 1996},
        {"Windows 95", 1995},
        {"Windows 98", 1998},
        {"Windows 1.0", 1985},
        {"Windows 2000", 2000}
    };
    
    // Another way to call the range adaptor is by using '|'
    for (std::string version : windows | std::views::keys)
    {
        std::cout << version << ' '; // Windows 1.0 Windows 2.0 Windows 3.0 ...
    }
}
```

```output
C++03 C++11 C++14 C++17 C++98 C++20
Windows 1.0 Windows 2.0 Windows 3.0 Windows 3.1 Windows NT 3.1 Windows 95 Windows NT 4.0 Windows 95 Windows 98 Windows 1.0 Windows 2000
```

## `lazy_split`

Split a range into subranges based on a delimiter. The delimiter can be a single element or a view of elements.

```cpp
1) template<viewable_range R, class Pattern>
constexpr view auto lazy_split(R&& rg, Pattern&& delimiter);

2) template<class Pattern>
constexpr /*range adaptor closure*/ lazy_split(Pattern&& delimiter);
```

### Parameters

`delimiter`\
A single value, or a sequence of values that specify where to split the range.

`Pattern`\
The type of the delimiter.

`R`\
The type of the range to split.

`rg`\
The range to split.

### Return value

A [`lazy_split_view`](lazy-split-view-class.md) that contains one or more subranges and is the result of splitting the original range on `delimiter`.

### Remarks

The delimiter isn't part of the result. For example, if you split the range `1,2,3` on the value `2`, you get two subranges: `1` and `3`.

A related adaptor is [`split`](#split). The primary differences between [`split_view](split-view-class.md) and `lazy_split_view` are:

| View | Can split a `const` range | Range iterator |
|--|--|--|
| `split_view` | no | Supports [`forward_range`](range-concepts.md#forward_range) or higher |
| `lazy_split_view` | yes | [`input_range`](range-concepts.md#input_range) or higher |

Prefer `split_view` because it's more efficient, unless you must split a range that is `const`.

The code shown earlier as "2\)" can be used with pipe syntax: `collection | lazy_split(delimiter)`. Or it can be used with function call syntax: `lazy_split(collection, delimiter)` or `lazy_split(delimiter)(collection)`.

### Example: `lazy_split`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> rg{1, 2, 3, 1, 2, 3, 4, 5, 6};

    // split on a single element
    for (const auto& sub : rg | std::views::split(3))
    {
        // outputs:
        // 1 2
        // 1 2
        // 4 5 6
        for (const auto& elem : sub)
        {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    // split on a sequence of elements
    int delimiters[] = {2, 3};
    for (const auto& subrange : std::views::split(rg, delimiters))
    {
        // outputs 1 1 4 5 6
        for (auto& i : subrange)
        {
            std::cout << i << " ";
        }
    }
}
```

```output
1 2
1 2
4 5 6
1 1 4 5 6
```

## `reverse`

Create a view of the elements of a range in reverse order.

```cpp
1) template<viewable_range R>
constexpr ranges::view auto reverse(R&& rg);

2) inline constexpr /*range adaptor closure*/ reverse();
```

### Parameters

`R`\
The type of the underlying range to reverse.

`rg`\
The range to reverse.

### Return value

A view that presents the elements of the underlying range in reverse order. The returned view is typically, but not always, a specialization of [`reverse_view`](reverse-view-class.md). That is:

- If `V` is a specialization of `reverse_view`, the result is the argument's underlying view. A double-reverse is a no-op (no operation).
- If `V` has the form `subrange<reverse_iterator<I>, reverse_iterator<I>>`, the result is a [`subrange`](subrange-class.md) of the unwrapped iterators. A double-reverse is a no-op.
- Otherwise, the result is a [`reverse_view`](reverse-view-class.md).

### Remarks

The code shown earlier as "2\)" can be used with pipe syntax: `collection | reverse`. Or it can be used with function call syntax: `reverse(collection)`.

### Example: `reverse`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto rv = v | std::views::reverse; // using the pipe syntax  

    for (auto &&e : rv) // outputs 6 5 -4 3 2 1 0
    {
        std::cout << e << ' ';
    }
    std::cout << '\n';

    // using the range adaptor without using the pipe syntax
    auto rv2 = std::views::reverse(v);
    for (auto &&e : rv2) // outputs 6 5 -4 3 2 1 0
    {
        std::cout << e << ' ';
    }
}
```

```output
6 5 -4 3 2 1 0
6 5 -4 3 2 1 0
```

## `single`

Create a `single_view`, which is a view that contains one element.

```cpp
template<class T>
constexpr ranges::view auto single(T&& t);
```

### Parameters

`T`\
The type of the element in the view.

`t`\
The value of the element to store in the view.

### Return value

An [`single_view`](single-view-class.md) that contains `t`.

### Remarks

This view is useful for test purposes, for calling code that needs to be provided with a view that has at least one element in it.

### Example: `single`

```cpp
// requires /std:c++20 or higher
#include <ranges>
#include <string>
#include <tuple>
#include <iostream>

int main()
{
    auto sv = std::views::single(7);
    std::cout << sv.front() << " " << *sv.data() << "\n"; // 7 7
    
    auto sv2 = std::views::single(<std::tuple<double, std::string>{6502, "8-bit"});
    std::cout << std::get<0>(sv2[0]) << " " << std::get<1>(sv2[0]) << "\n"; // 6502 8-bit
}
```

```output
7 7
6502 8-bit
```

## `split`

Split a view into subranges based on a delimiter. The delimiter can be a single element or a sequence of elements.

```cpp
1) template<viewable_range R, class Pattern>
constexpr view auto split(R&& rg, Pattern&& delimiter);

2) template<class Pattern>
constexpr /*range adaptor closure*/ split(Pattern&& delimiter);
```

### Parameters

`delimiter`\
A single value, or a sequence of values that specify where to split the range.

`Pattern`\
The type of the delimiter.

`R`\
The type of the underlying range to split.

`rg`\
The range to split.

### Return value

A [`split_view`](split-view-class.md) that contains one or more subranges.

### Remarks

The delimiter isn't part of the result. For example, if you split the range `1,2,3` on the value `2`, you get two subranges: `1` and `3`.

A related adaptor is [`lazy_split`](#lazy_split). The primary differences between `split_view` and `lazy_split_view` are:

| View | Can split a `const` range | Range type |
|---|---|---|
| `split_view` | no | Supports [`forward_range`](range-concepts.md#forward_range) or higher |
| `lazy_split_view` | yes | Supports [`input_range`](range-concepts.md#input_range) or higher |

Prefer `split_view` because it's more efficient, unless you must split a range that is `const`.

The code shown earlier as "2\)" can be used with pipe syntax: `collection | split(delimiter)`. Or it can be used with function call syntax: `split(collection, 5)` or `split(5)(collection)`.

### Example: `split`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> rg{ 1, 2, 3, 1, 2, 3, 4, 5, 6 };

    // split on a single element, 3
    for (const auto& sub : rg | std::views::split(3))
    {
        // This prints out:
        // 1,2
        // 4,5,6
        for (const auto& elem : sub)
        {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    // split on a sequence of elements, 2,3
    int delimiters[] = {2, 3};
    for (const auto& subrange : std::views::split(rg, delimiters))
    {
        // outputs 1 1 4 5 6
        for (auto& i : subrange)
        {
            std::cout << i << " ";
        }
    }
}
```

```output
1 2
1 2
4 5 6
1 1 4 5 6
```

## `take`

Create a view that contains the specified number of elements taken from the front of a range.

```cpp
1) template<ranges::viewable_range R>
constexpr ranges::view auto take(R&& rg, ranges::range_difference_type<R> count);

2) template<class DifferenceType>
constexpr /*range adaptor closure*/ take(DifferenceType&& count); 
```

### Parameters

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

`count`\
The number of elements to take from the front of `rg`.

### Return value

The returned view is typically, but not always, a specialization of [`take_view`](take-view-class.md). Specifically:

- If `V` is a specialization of [`empty_view`](empty-view-class.md), or is a specialization of [`span`](span-class.md), [`basic_string_view`](basic-string-view-class.md), [`iota_view`](iota-view-class.md), or [`subrange`](subrange-class.md) that is both [`random_access_range`](range-concepts.md#random_access_range) and [`sized_range`](range-concepts.md#sized_range), the result is a specialization of `V`.
- Otherwise, the result is a [`take_view`](take-view-class.md).

### Remarks

If you specify more elements to take than exist in `rg`, all of the elements are taken.

`take` is the opposite of [`drop`](#drop).

The code shown earlier as "2\)" can be used with pipe syntax: `collection | take(5)`. Or it can be used with function call syntax: `take(5, collection)` or `take(5)(collection)`.

### Example: `take`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s{ "abcdefg" };
    auto myView = std::views::take(s, 3);
    for (auto c : myView)
    {
        std::cout << c << ' '; // a b c
    }

    std::cout << std::endl;

    for (auto c : s | std::views::take(3)) // pipe syntax
    {
        std::cout << c << ' '; // a b c
    }
}
```

```output
a b c
a b c
```

## `take_while`

Create a view that contains the leading elements of a range that match the specified condition.

```cpp
1) template<ranges::viewable_range R, class P>
constexpr ranges::view auto take_while(R&& rg, P&& predicate);

2) template<class P>
constexpr /*range adaptor closure*/ take_while(P&& predicate);
```

### Parameters

`P`\
The type of the predicate.

`predicate`\
The conditions that determine which leading elements to copy from the range.

`R`\
The type of the underlying range.

`rg`\
The range to create the view from.

### Return value

A [`take_while_view`](take-while-view-class.md) that consists of the first `count` elements that meet the specified criteria in the range.

### Remarks

Stops taking elements from `rg` after the predicate returns `false` or the range runs out of elements.

`take_while` is the opposite of [`drop_while`](#drop_while).

The code shown earlier as "2\)" can be used with pipe syntax: `collection | take_while(pred)`. Or it can be used with function call syntax: `take_while(collection, pred)` or `take_while(pred)(collection)`.

### Example: `take_while`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

void print(auto&& v)
{
    for (auto&& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, -4, 5, 6 };
    auto myView = std::views::take_while(
        v, [](int i) {return i >= 0; });
    print(myView); // 0 1 2 3

    print(v | std::views::take_while( // 0 1 2 3 -4
        [](int i) {return i < 5; })); // pipe syntax
}
```

```output
0 1 2 3
0 1 2 3 -4
```

## `transform`

Create a view of elements, each of which is a transformation of an element in the specified range.

```cpp
1) template<viewable_range R, class F>
constexpr ranges::view auto transform(R&& rg, F&& fun);

2) template<class F>
constexpr /*range adaptor closure*/ transform(F&& fun);
```

### Parameters

`F`\
The type of the function object to transform the elements.

`R`\
The type of the underlying range.

`fun`\
The function that transforms the elements.

`rg`\
The range to create the view from.

### Return value

A [`transform_view`](transform-view-class.md) that contains the transformed elements of `rg`.

### Remarks

For efficiency's sake, when you compose `filter` and `transform`, do the `filter` first so that you `transform` only the elements that you intend to keep.

The code shown earlier as "2\)" can be used with pipe syntax: `collection | transform(fun)`. Or it can be used with function call syntax: `transform(collection, fun)` or `transform(fun)(collection)`.

### Example: `transform`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

void print(auto&& v)
{
    for (auto&& x : v)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> v{0, 1, 2, 3, -4, 5, 6};
    auto myView = std::views::transform(v, [](int i) {return i * 2; });
    print(myView); // 0 2 4 6 -8 10 12

    print(v | std::views::transform( // 0 2 4 6 -8 10 12
        [](int i) {return i * 2; })); // pipe syntax
}
```

```output
0 2 4 6 -8 10 12
0 2 4 6 -8 10 12
```

## `values`

Create a [`values_view`](values-view-class.md) that consists of the second index into each tuple-like value in a collection. This is useful for making a view of the values in an associative container. For example, given a range of `std::tuple<string, int>` values, create a view that consists of all the `int` elements from each tuple.

```cpp
template <range::viewable_range R>
constexpr ranges::view auto values(R&& rg);
```

### Parameters

`R`\
The type of the underlying range.

`rg`\
The underlying range of tuple-like values.

### Return value

A [`values_view`](values-view-class.md) built from the second index into each tuple-like value in the range.

### Example: `values`

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    // ========== working with a map

    std::map<std::string, int> cpp_standards
    {
        {"C++98", 1998},
        {"C++03", 2003},
        {"C++11", 2011},
        {"C++14", 2014},
        {"C++17", 2017},
        {"C++20", 2020}
    };

    // Extract all of the years from the map
    for (int years : std::views::values(cpp_standards))
    {
        std::cout << years << ' '; // 2003 2011 2014 2017 1998 2020
    }
    std::cout << '\n';

    // ========== working with pairs

    std::vector<std::pair<std::string, int>> windows
    {
        {"Windows 1.0", 1985},
        {"Windows 2.0", 1987},
        {"Windows 3.0", 1990},
        {"Windows 3.1", 1992},
        {"Windows NT 3.1", 1993},
        {"Windows 95", 1995},
        {"Windows NT 4.0", 1996},
        {"Windows 95", 1995},
        {"Windows 98", 1998},
        {"Windows 1.0", 1985},
        {"Windows 2000", 2000}
    };

    // Another way to call the range adaptor by using '|'
    // Create a values_view that contains the year from each pair
    for (int years : windows | std::views::values)
    {
        std::cout << years << ' '; // 1985 1987 1990 1992 ...
    }
}
```

```output
2003 2011 2014 2017 1998 2020
1985 1987 1990 1992 1993 1995 1996 1995 1998 1985 2000
```

## Range adaptor type aliases

### `all_t`

Provides the type of the view that [`all`](#all) returns.

```cpp
template <ranges::viewable_range R>
using all_t = decltype(views::all(std::declval<R>()));
```

### Parameters

`R`\
The type of the underlying range.

### Return value

The type of the view that `all` returns: `decltype(views::all(std::declval<R>()))`.

### Example: `all_t`

```cpp
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    auto myView = std::views::all(v);
    std::views::all_t<decltype((v))> &viewType = myView;
}
```

## See also

[`<ranges>`](ranges.md)\
[`<ranges>` concepts](range-concepts.md)\
[View classes](view-classes.md)