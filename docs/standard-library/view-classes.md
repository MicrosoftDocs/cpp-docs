---
description: "Learn more about the ranges view classes, which allow you to inexpensively transform ranges."
title: "View classes"
ms.date: 12/20/2022
f1_keywords: ["RANGES/std::ranges::views", "RANGES/std::views"]
helpviewer_keywords: ["RANGES/VIEWS/std", "VIEWS/std"]
---
# `<ranges>` view classes

A *view* is a lightweight range that refers to elements that it doesn't own (except [`owning_view`](owning-view-class.md)). A view is typically based on another range and provides a different way of looking at it, whether by transforming or filtering it. For example, [`std::views::filter`](filter-view-class.md) is a view that uses the criteria that you specify to select elements from another range.

When you access the elements in a view, it's done "lazily" so that work is done only when you get an element. This makes it possible to combine, or *compose*, views without a performance penalty.

For example, you could create a view that provides only the even elements from a range and then transform them by squaring them. The work to do the filtering and transformation is done only for the elements that you access, and only when you access them.

A view can be copied, assigned, and destroyed in constant time no matter how many elements it contains. This is because a view doesn't own the elements that it refers to, so it doesn't need to make a copy. This is why you can compose views without a performance penalty.

You typically create a view by using a [range adaptor](range-adaptors.md). Range adaptors are the intended way to create a view, are easier to use than instantiating the view classes directly, and are sometimes more efficient than instantiating the view classes directly. The view classes are exposed directly in case you need to create your own custom view type based on an existing view type.

Here's a brief example of creating a view of the squares of the elements that are divisible by three in a vector:

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

    auto x = input
             | std::views::filter(divisible_by_three)
             | std::views::transform(square);

    for (int i : x)
    {
        std::cout << i << ' '; // 0 9 36 81
    }
}
```

```output
0 9 36 81
```

Using a view after the range that it's based on is modified can lead to undefined behavior. For example, a [`reverse_view`](reverse-view-class.md) based on a vector shouldn't be reused if you add or remove elements from the underlying vector. Modifying the underlying vector invalidates the container's `end` iterator--including the copy of the iterator that the view might have made.

Because views are cheap to create, you should generally re-create a view if you modify the underlying range. The following example demonstrates how to store a view pipeline in a variable so that you can reuse it.

```cpp
// requires /std:c++20, or later
#include <iostream>
#include <ranges>
#include <vector>
#include <list>
#include <string_view>
#include <algorithm>

template<typename rangeType>
void show(std::string_view msg, rangeType r)
{
    std::cout << msg;
    std::ranges::for_each(r,
        [](auto e)
        {
            std::cout << e << ' ';
        });
    std::cout << '\n';
}

int main()
{
    std::vector v{ 1, 2, 3, 4 };
    show("v: ", v);

    // You can save a view pipeline
    auto rev3 = std::views::take(3) | std::views::reverse;

    show("v | rev3: ", v | rev3); // 3 2 1

    v.insert(v.begin(), 0); // v = 0 1 2 3 4
    show("v: ", v);

    // Because modifying the vector invalidates its iterators, rebuild the view.
    // We are reusing the view pipeline we saved earlier
    show("v | rev3(v): ", rev3(v));
}
```

```output
v: 1 2 3 4
v | rev3: 3 2 1
v: 0 1 2 3 4
v | rev3(v): 2 1 0
```

The following view classes are defined in the `std::ranges` namespace.

| View | Description |
|--|--|
| [`basic_istream_view`](basic-istream-view-class.md)<sup>C++20</sup> | A view of successive elements from an input stream. Specializations include `istream_view` and `wistream_view`. |
| [`common_view`](common-view-class.md)<sup>C++20</sup> | Adapts a view that has different iterator/sentinel types into a view with the same iterator/sentinel types. |
| [`drop_view`](drop-view-class.md)<sup>C++20</sup> | Created from another view, skipping the first `count` elements. |
| [`drop_while_view`](drop-while-view-class.md)<sup>C++20</sup> | Created from another view, skipping leading elements as long as a predicate holds. |
| [`elements_view`](elements-view-class.md)<sup>C++20</sup> | A view over the selected index into each tuple-like value in a collection. For example, given a range of `std::tuple<string, int>` values, create a view that consists of all the `string` elements from each tuple. |
| [`empty_view`](empty-view-class.md)<sup>C++20</sup> | A view with no elements. |
| [`filter_view`](filter-view-class.md)<sup>C++20</sup> | Filters out elements of a range that don't match a predicate. |
| [`iota_view`](iota-view-class.md)<sup>C++20</sup> | A generated view that contains a sequence of incrementing values. |
| [`join_view`](join-view-class.md)<sup>C++20</sup> | Combines all the elements of multiple ranges into a single view. |
| [`keys_view`](keys-view-class.md)<sup>C++20</sup> | A view over the first index into each tuple-like value in a collection. For example, given a range of `std::tuple<string, int>` values, create a view that consists of the `string` elements from each tuple. |
| [`lazy_split_view`](lazy-split-view-class.md)<sup>C++20</sup> | Splits a view into subranges based on a delimiter. |
| [`owning_view`](owning-view-class.md)<sup>C++20</sup> | Takes ownership of the elements from another range. |
| [`ref_view`](ref-view-class.md)<sup>C++20</sup> | A view that references the elements that belong to another range. |
| [`reverse_view`](reverse-view-class.md)<sup>C++20</sup> | Presents the elements of a range in reverse order. |
| [`single_view`](single-view-class.md)<sup>C++20</sup> | A view that contains only one element. |
| [`split_view`](split-view-class.md)<sup>C++20</sup> | Splits a view into subranges based on a delimiter. |
| [`subrange`](subrange-class.md)<sup>C++20</sup> | A view of part of the elements of a range, as defined by a begin iterator and a sentinel. |
| [`take_view`](take-view-class.md)<sup>C++20</sup> | Contains the specified number of elements taken from the front of a range. |
| [`take_while_view`](take-while-view-class.md)<sup>C++20</sup> | Contains the leading elements of a range that match the given predicate. |
| [`transform_view`](transform-view-class.md)<sup>C++20</sup> | A view of an underlying sequence after a transformation function is applied to each element. |
| [`values_view`](values-view-class.md)<sup>C++20</sup> | A view over the second index into each tuple-like value in a collection. For example, given a range of `std::tuple<string, int>` values, create a view that consists of the `int` elements from each tuple. |

Many of these classes have corresponding [range adaptors](range-adaptors.md) in the `std:views` namespace that creates instances of them. Prefer using an adaptor to create a view instead of creating view classes directly. The range adaptors are the intended way to create views, are easier to use, and in some cases are more efficient.

## View classes characteristics

Each view class topic has a **Characteristics** section after the syntax section. The **Characteristics** section has the following entries:

* **Range adaptor**: A link to the range adaptor that creates the view. You typically use a range adaptor to create a view rather than create a view class directly, so it's listed here for convenience.
* **Underlying range**: Views have different iterator requirements for the kind of underlying range that they can use. See [ranges iterator hierarchy](#ranges-iterator-hierarchy) for more information about the kinds of iterators.
* **View iterator category**: The iterator category of the view. When a view adapts a range, the iterator type for the view is typically the same as the iterator type of the underlying range. However, it might be different for some views. For example, `reverse_view` has a [`bidirectional_iterator`](iterator-concepts.md#bidirectional_iterator), even if the underlying range has a [`random_access_iterator`](iterator-concepts.md#random_access_iterator).
* **Element type**: The type of the elements that the view's iterator returns.
* **Sized**: Whether the view can return the number of elements that it refers to. Not all views can.
* **Common range**: Specifies whether the view is a [`common_range`](range-concepts.md#common_range), which means that the begin iterator and sentinel types are the same. Common ranges are useful for pre-range code that works with iterator pairs. An example is iterator pair constructors for a sequence container, like `vector(ranges::begin(x), ranges::end(x))`.
* **Borrowed range**: Specifies whether the view is a borrowed range. `borrowed_range<T>` means you can use iterators for `T` after `T` is destroyed.

  No standard container is a borrowed range, because destroying the container frees the elements and invalidates any iterators. In that case, we say that the iterators are left "dangling" after destruction.

  For example, `std::ranges::find()` typically returns an iterator to the found element in the range argument. If the range argument is a temporary (rvalue) container, it's a mistake to store the returned iterator and use it later because it's "dangling."

  Range algorithms that return iterators (or subranges) do so only when their arguments are lvalues (non-temporaries) or borrowed ranges. Otherwise, they return a `std::dangling` object, which provides a hint in error messages about what went wrong if you tried to use it like an iterator.
* **Is `const` iterable**: Indicates whether you can iterate over a `const` instance of the view. Not all `const` views can be iterated. If a view isn't `const` iterable, you can't iterate with `for (const auto& element : as_const(theView))` or pass it to a function that takes a `const` reference to the view and then tries to iterate over it.

### Ranges iterator hierarchy

In the **Characteristics** section of each view class topic, the iterator category in **Underlying range** and **View iterator category** refers to the kind of iterator that the range/view supports. There are six categories of Ranges iterators, which are identified by C++20 concepts. The hierarchy of range iterators, in increasing order of capability, is:

| Range iterator concept | Description |
|--|--|
| [`output_range`](range-concepts.md#output_range)  | Write-only, only moves forward; single-pass. |
| [`input_range`](range-concepts.md#input_range) | Read-only, only moves forward; single-pass. |
| [`forward_range`](range-concepts.md#forward_range) | Only moves forward; multi-pass. |
| [`bidirectional_range`](range-concepts.md#bidirectional_range) | Can move forward and backward; multi-pass. |
| [`random_access_range`](range-concepts.md#random_access_range) | Can access the collection with an index; multi-pass. |
| [`contiguous_range`](range-concepts.md#contiguous_range) | Can access the collection with an index, and elements are stored contiguously in memory. |

Generally speaking, an iterator has the capability of the iterators that precede it in the table. For example, [`bidirectional_range`](range-concepts.md#bidirectional_range) has the capabilities of [`forward_range`](range-concepts.md#forward_range), but not vice versa. Except `input_range`, which doesn't have the capability of `output_range` because you can't write to an `input_range`.

The statement "requires `input_range` or higher" means that the view can be used with an `input_range`, `forward_range`, `bidirectional_range`, `random_access_range`, or `contiguous_range` iterator, because they're all as capable as `input_range`.

The ranges iterator hierarchy is directly related to the iterator hierarchy. For more information, see [Iterator concepts](iterator-concepts.md).

## See also

[`<ranges>`](ranges.md)\
[Range adaptors](range-adaptors.md)
