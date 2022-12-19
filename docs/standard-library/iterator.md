---
title: "<iterator>"
description: "Learn more about: <iterator>"
ms.date: 12/14/2022
f1_keywords: ["<iterator>"]
helpviewer_keywords: ["iterator header"]
---
# `<iterator>`

Defines predefined iterators and stream iterators, iterator primitives, and supporting templates.

## Requirements

**Header:** `<iterator>`

**Namespace:** `std`

## Remarks

Iterators are a generalization of pointers that allow a C++ program to work with different data structures in a uniform way. Instead of operating on specific data types, algorithms operate on a range of values as specified by a kind of iterator. Algorithms can operate on any data structure that satisfies the requirements of the iterator.

In C++20, there are six categories of iterators. Iterators are arranged in a hierarchy of capability. Their capabilities are specified by C++20 concepts. For a description of the various iterators and their capabilities, see [Iterator concepts](iterator-concepts.md)

Visual Studio has added extensions to C++ Standard Library iterators to support debugging for checked and unchecked iterators. For more information, see [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md).

## Members

### Functions

|Name|Description|
|-|-|
|[`advance`](../standard-library/iterator-functions.md#advance)|Increments an iterator by a specified number of positions.|
|[`back_inserter`](../standard-library/iterator-functions.md#back_inserter)|Creates an iterator that can insert elements at the back of a specified container.|
|[`begin`](../standard-library/iterator-functions.md#begin)|Retrieves an iterator to the first element in a specified container.|
|[`cbegin`](../standard-library/iterator-functions.md#cbegin)|Retrieves a read-only iterator to the first element in a specified container.|
|[`cend`](../standard-library/iterator-functions.md#cend)|Retrieves a read-only iterator to the element that follows the last element in the specified container.|
|[`crbegin`](../standard-library/iterator-functions.md#crbegin)| Get a reverse read-only iterator to the beginning of the specified container.|
|[`crend`](../standard-library/iterator-functions.md#crend)| Get the sentinel at the end of what `crbegin()` returns.|
|[`data`](../standard-library/iterator-functions.md#data)| Get a pointer to the first element in the specified container.|
|[`distance`](../standard-library/iterator-functions.md#distance)|Determines the number of increments between the positions addressed by two iterators.|
|[`end`](../standard-library/iterator-functions.md#end)|Retrieves an iterator to the element that follows the last element in the specified container.|
|[`empty`](../standard-library/iterator-functions.md#empty)| Test if the specified container is empty.|
|[`front_inserter`](../standard-library/iterator-functions.md#front_inserter)|Creates an iterator that can insert elements at the front of a specified container.|
|[`inserter`](../standard-library/iterator-functions.md#inserter)|An iterator adaptor that adds a new element to a container at a specified point of insertion.|
|[`make_checked_array_iterator`](../standard-library/iterator-functions.md#make_checked_array_iterator)|Creates a [`checked_array_iterator`](../standard-library/checked-array-iterator-class.md) that can be used by other algorithms. **Note:**  This function is a Microsoft extension of the C++ Standard Library. Code implemented by using this function isn't portable to C++ Standard build environments that don't support this Microsoft extension.|
|[`make_move_iterator`](../standard-library/iterator-functions.md#make_move_iterator)|Returns a move iterator containing the provided iterator as its stored base iterator.|
|[`make_unchecked_array_iterator`](../standard-library/iterator-functions.md#make_unchecked_array_iterator)|Creates an [`unchecked_array_iterator`](../standard-library/unchecked-array-iterator-class.md) that can be used by other algorithms. **Note:**  This function is a Microsoft extension of the C++ Standard Library. Code implemented by using this function isn't portable to C++ Standard build environments that don't support this Microsoft extension.|
|[`next`](../standard-library/iterator-functions.md#next)|Iterates a specified number of times and returns the new iterator position.|
|[`prev`](../standard-library/iterator-functions.md#prev)|Iterates in reverse a specified number of times and returns the new iterator position.|
|[`rbegin`](../standard-library/iterator-functions.md#rbegin)|Get a reverse iterator to the beginning of the specified container. |
|[`rend`](../standard-library/iterator-functions.md#rend)| Get a reverse iterator to the sentinel at the end of the specified container.|
|[`size`](../standard-library/iterator-functions.md#size)| Get the number of elements.|

### Operators

|Name|Description|
|-|-|
|[`operator!=`](../standard-library/iterator-operators.md#op_neq)|Tests if the iterator object on the left side of the operator isn't equal to the iterator object on the right side.|
|[`operator==`](../standard-library/iterator-operators.md#op_eq_eq)|Tests if the iterator object on the left side of the operator is equal to the iterator object on the right side.|
|[`operator<`](../standard-library/iterator-operators.md#op_lt)|Tests if the iterator object on the left side of the operator is less than the iterator object on the right side.|
|[`operator<=`](../standard-library/iterator-operators.md#op_gt_eq)|Tests if the iterator object on the left side of the operator is less than or equal to the iterator object on the right side.|
|[`operator>`](../standard-library/iterator-operators.md#op_gt)|Tests if the iterator object on the left side of the operator is greater than the iterator object on the right side.|
|[`operator>=`](../standard-library/iterator-operators.md#op_gt_eq)|Tests if the iterator object on the left side of the operator is greater than or equal to the iterator object on the right side.|
|[`operator+`](../standard-library/iterator-operators.md#op_add)|Adds an offset to an iterator and returns the new `reverse_iterator` addressing the inserted element at the new offset position.|
|[`operator-`](../standard-library/iterator-operators.md#operator-)|Subtracts one iterator from another and returns the difference.|

### Classes

|Name|Description|
|-|-|
|[`back_insert_iterator`](../standard-library/back-insert-iterator-class.md)|The class template describes an output iterator object. It inserts elements into a container of type `Container`, which it accesses through the protected `pointer` object it stores called container.|
|[`bidirectional_iterator_tag`](../standard-library/bidirectional-iterator-tag-struct.md)|A class that provides a return type for an `iterator_category` function that represents a bidirectional iterator.|
|[`checked_array_iterator`](../standard-library/checked-array-iterator-class.md)|A class that accesses an array using a random access, checked iterator. **Note:**  This class is a Microsoft extension of the C++ Standard Library. Code implemented by using this function isn't portable to C++ Standard build environments that don't support this Microsoft extension.|
|[`forward_iterator_tag`](../standard-library/forward-iterator-tag-struct.md)|A class that provides a return type for an `iterator_category` function that represents a forward iterator.|
|[`front_insert_iterator`](../standard-library/front-insert-iterator-class.md)|The class template describes an output iterator object. It inserts elements into a container of type `Container`, which it accesses through the protected `pointer` object it stores called container.|
|[`input_iterator_tag`](../standard-library/input-iterator-tag-struct.md)|A class that provides a return type for an `iterator_category` function that represents an input iterator.|
|[`insert_iterator`](../standard-library/insert-iterator-class.md)|The class template describes an output iterator object. It inserts elements into a container of type `Container`, which it accesses through the protected `pointer` object it stores called container. It also stores the protected `iterator` object, of class `Container::iterator`, called `iter`.|
|[`istream_iterator`](../standard-library/istream-iterator-class.md)|The class template describes an input iterator object. It extracts objects of class `Ty` from an input stream, which it accesses through an object it stores, of type pointer to `basic_istream<Elem, Tr>`.|
|[`istreambuf_iterator`](../standard-library/istreambuf-iterator-class.md)|The class template describes an input iterator object. It inserts elements of class `Elem` into an output stream buffer, which it accesses through an object it stores, of type `pointer` to `basic_streambuf<Elem, Tr>`.|
|[`iterator`](../standard-library/iterator-struct.md)|The class template is used as a base type for all iterators.|
|[`iterator_traits`](../standard-library/iterator-traits-struct.md)|A template helper class providing critical types that are associated with different iterator types so that they can be referred to in the same way.|
|[`move_iterator`](../standard-library/move-iterator-class.md)|A `move_iterator` object stores a random-access iterator of type `RandomIterator`. It behaves like a random-access iterator, except when dereferenced. The result of `operator*` is implicitly cast to `value_type&&:` to make an `rvalue reference`.|
|[`ostream_iterator`](../standard-library/ostream-iterator-class.md)|The class template describes an output iterator object. It inserts objects of class `Type` into an output stream, which it accesses through an object it stores, of type `pointer` to `basic_ostream<Elem, Tr>`.|
|[`ostreambuf_iterator`](../standard-library/ostreambuf-iterator-class.md)|The class template describes an output iterator object. It inserts elements of class `Elem` into an output stream buffer, which it accesses through an object it stores, of type pointer to `basic_streambuf<Elem, Tr>`.|
|[`output_iterator_tag`](../standard-library/output-iterator-tag-struct.md)|A class that provides a return type for `iterator_category` function that represents an output iterator.|
|[`random_access_iterator_tag`](../standard-library/random-access-iterator-tag-struct.md)|A class that provides a return type for `iterator_category` function that represents a random-access iterator.|
|[`reverse_iterator`](../standard-library/reverse-iterator-class.md)|The class template describes an object that behaves like a random-access iterator, only in reverse.|
|[`unchecked_array_iterator`](../standard-library/unchecked-array-iterator-class.md)|A class that accesses an array using a random access, unchecked iterator. **Note:**  This class is a Microsoft extension of the C++ Standard Library. Code implemented by using this function isn't portable to C++ Standard build environments that don't support this Microsoft extension.|

## Concepts

The following concepts are defined in the `std` namespace. They apply to iterators, and are also related to the iterator categories for ranges described in [`<ranges>` concepts](range-concepts.md).

| Iterator concept | Description |
|--|--|
| [`bidirectional_iterator`](iterator-concepts.md#bidirectional_iterator)<sup>C++20</sup> | Specifies an iterator that can read and write both forwards and backwards. |
| [`contiguous_iterator`](iterator-concepts.md#contiguous_iterator)<sup>C++20</sup> | Specifies an iterator whose elements are sequential in memory, the same size, and can be accessed using pointer arithmetic. |
| [`forward_iterator`](iterator-concepts.md#forward_iterator)<sup>C++20</sup> | Specifies an iterator that can read (and possibly write) multiple times. |
| [`input_iterator`](iterator-concepts.md#input_iterator)<sup>C++20</sup> | Specifies an iterator that you can read from at least once. |
| [`input_or_output_iterator`](iterator-concepts.md#input_or_output_iterator)<sup>C++20</sup> | The basis of the iterator concept taxonomy. |
| [`output_iterator`](iterator-concepts.md#output_iterator) | Specifies an iterator that you can write to. |
| [`random_access_iterator`](iterator-concepts.md#random_access_iterator)<sup>C++20</sup> | Specifies an iterator that you can read and write by index. |
| [`sentinel_for`](iterator-concepts.md#sentinel_for)<sup>C++20</sup> | Specifies a sentinel for an iterator type. |
| [`sized_sentinel_for`](iterator-concepts.md#sized_sentinel_for)<sup>C++20</sup> | Specifies that an iterator and its sentinel can be subtracted (using `-`) to find their difference in constant time. |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
