---
description: "Learn more about: algorithm (STL/CLR)"
title: "algorithm (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["<cliext/algorithm>", "cliext::adjacent_find", "cliext::binary_search", "cliext::copy", "cliext::copy_backward", "cliext::count", "cliext::count_if", "cliext::equal", "cliext::equal_range", "cliext::fill", "cliext::fill_n", "cliext::find", "cliext::find_end", "cliext::find_first_of", "cliext::find_if", "cliext::for_each", "cliext::generate", "cliext::generate_n", "cliext::includes", "cliext::inplace_merge", "cliext::iter_swap", "cliext::lexicographical_compare", "cliext::lower_bound", "cliext::make_heap", "cliext::max", "cliext::max_element", "cliext::merge", "cliext::min", "cliext::min_element", "cliext::mismatch", "cliext::next_permutation", "cliext::nth_element", "cliext::partial_sort", "cliext::partial_sort_copy", "cliext::partition", "cliext::pop_heap", "cliext::prev_permutation", "cliext::push_heap", "cliext::random_shuffle", "cliext::remove", "cliext::remove_copy", "cliext::remove_copy_if", "cliext::remove_if", "cliext::replace", "cliext::replace_copy", "cliext::replace_copy_if", "cliext::replace_if", "cliext::reverse", "cliext::reverse_copy", "cliext::rotate", "cliext::rotate_copy", "cliext::search", "cliext::search_n", "cliext::set_difference", "cliext::set_intersection", "cliext::set_symmetric_difference", "cliext::set_union", "cliext::sort", "cliext::sort_heap", "cliext::stable_partition", "cliext::stable_sort", "cliext::swap", "cliext::swap_ranges", "cliext::transform", "cliext::unique", "cliext::unique_copy", "cliext::upper_bound"]
helpviewer_keywords: ["algorithm functions [STL/CLR]", "<algorithm> header [STL/CLR]", "<cliext/algorithm> header [STL/CLR]", "adjacent_find function", "binary_search function [STL/CLR]", "copy function [STL/CLR]", "copy_backward function [STL/CLR]", "count function [STL/CLR]", "count_if function [STL/CLR]", "equal function [STL/CLR]", "equal_range function [STL/CLR]", "fill function", "fill_n function", "find function [STL/CLR]", "find_end function [STL/CLR]", "find_first_of function [STL/CLR]", "find_if function [STL/CLR]", "for_each function [STL/CLR]", "generate function [STL/CLR]", "generate_n function [STL/CLR]", "includes function [STL/CLR]", "inplace_merge function [STL/CLR]", "iter_swap function [STL/CLR]", "lexicographical_compare function [STL/CLR]", "lower_bound function [STL/CLR]", "make_heap function [STL/CLR]", "max function [STL/CLR]", "max_element function [STL/CLR]", "merge function [STL/CLR]", "min function [STL/CLR]", "min_element function [STL/CLR]", "mismatch function [STL/CLR]", "next_permutation function [STL/CLR]", "nth_element function [STL/CLR]", "partial_sort function [STL/CLR]", "partial_sort_copy function [STL/CLR]", "partition function [STL/CLR]", "pop_heap function [STL/CLR]", "prev_permutation function [STL/CLR]", "push_heap function [STL/CLR]", "random_shuffle function [STL/CLR]", "remove function [STL/CLR]", "remove_copy function [STL/CLR]", "remove_copy_if function [STL/CLR]", "remove_if function [STL/CLR]", "replace function [STL/CLR]", "replace_copy function [STL/CLR]", "replace_copy_if function [STL/CLR]", "replace_if function [STL/CLR]", "reverse function [STL/CLR]", "reverse_copy function [STL/CLR]", "rotate function [STL/CLR]", "rotate_copy function [STL/CLR]", "search function [STL/CLR]", "search_n function [STL/CLR]", "set_difference function [STL/CLR]", "set_intersection function [STL/CLR]", "set_symmetric_difference function [STL/CLR]", "set_union function [STL/CLR]", "sort function [STL/CLR]", "sort_heap function [STL/CLR]", "stable_partition function [STL/CLR]", "stable_sort function [STL/CLR]", "swap function [STL/CLR]", "swap_ranges function [STL/CLR]", "transform function [STL/CLR]", "unique function [STL/CLR]", "unique_copy function [STL/CLR]", "upper_bound function [STL/CLR]"]
ms.assetid: ee2718dc-a98d-40b8-8341-593fe7d2ac15
---
# algorithm (STL/CLR)

Defines STL/CLR container template functions that perform algorithms.

## Syntax

```cpp
#include <cliext/algorithm>
```

## Requirements

**Header:** \<cliext/algorithm>

**Namespace:** cliext

## Declarations

|Function|Description|
|--------------|-----------------|
|[adjacent_find (STL/CLR)](#adjacent_find)|Searches for two adjacent elements that are equal.|
|[binary_search (STL/CLR)](#binary_search)|Tests whether a sorted sequence contains a given value.|
|[copy (STL/CLR)](#copy)|Copies values from a source range to a destination range, iterating in the forward direction.|
|[copy_backward (STL/CLR)](#copy_backward)|Copies values from a source range to a destination range, iterating in the backward direction.|
|[count (STL/CLR)](#count)|Returns the number of elements in a range whose values match a specified value.|
|[count_if (STL/CLR)](#count_if)|Returns the number of elements in a range whose values match a specified condition.|
|[equal (STL/CLR)](#equal)|Compares two ranges, element by element.|
|[equal_range (STL/CLR)](#equal_range)|Searches an ordered sequence of values and returns two positions that delimit a subsequence of values that are all equal to a given element.|
|[fill (STL/CLR)](#fill)|Assigns the same new value to every element in a specified range.|
|[fill_n (STL/CLR)](#fill_n)|Assigns a new value to a specified number of elements in a range beginning with a particular element.|
|[find (STL/CLR)](#find)|Returns the position of the first occurrence of a specified value.|
|[find_end (STL/CLR)](#find_end)|Returns the last subsequence in a range that is identical to a specified sequence.|
|[find_first_of (STL/CLR)](#find_first_of)|Searches a range for the first occurrence of any one of a given range of elements.|
|[find_if (STL/CLR)](#find_if)|Returns the position of the first element in a sequence of values where the element satisfies a specified condition.|
|[for_each (STL/CLR)](#for_each)|Applies a specified function object to each element in a sequence of values and returns the function object.|
|[generate (STL/CLR)](#generate)|Assigns the values generated by a function object to each element in a sequence of values.|
|[generate_n (STL/CLR)](#generate_n)|Assigns the values generated by a function object to a specified number of elements.|
|[includes (STL/CLR)](#includes)|Tests whether one sorted range contains all the elements in a second sorted range.|
|[inplace_merge (STL/CLR)](#inplace_merge)|Combines the elements from two consecutive sorted ranges into a single sorted range.|
|[iter_swap (STL/CLR)](#iter_swap)|Exchanges two values referred to by a pair of specified iterators.|
|[lexicographical_compare (STL/CLR)](#lexicographical_compare)|Compares two sequences, element by element, identifying which sequence is the lesser of the two.|
|[lower_bound (STL/CLR)](#lower_bound)|Finds the position of the first element in an ordered sequence of values that has a value greater than or equal to a specified value.|
|[make_heap (STL/CLR)](#make_heap)|Converts elements from a specified range into a heap where the first element on the heap is the largest.|
|[max (STL/CLR)](#max))|Compares two objects and returns the greater of the two.|
|[max_element (STL/CLR)](#max_element)|Finds the largest element in a specified sequence of values.|
|[merge (STL/CLR)](#merge))|Combines all the elements from two sorted source ranges into a single, sorted destination range.|
|[min (STL/CLR)](#min)|Compares two objects and returns the lesser of the two.|
|[min_element (STL/CLR)](#min_element)|Finds the smallest element in a specified sequence of values.|
|[mismatch (STL/CLR)](#mismatch)|Compares two ranges element by element and returns the first position where a difference occurs.|
|[next_permutation (STL/CLR)](#next_permutation)|Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists.|
|[nth_element (STL/CLR)](#nth_element)|Partitions a sequence of elements, correctly locating the `n`th element of the sequence so that all the elements in front of it are less than or equal to it and all the elements that follow it are greater than or equal to it.|
|[partial_sort (STL/CLR)](#partial_sort)|Arranges a specified number of the smaller elements in a range into nondescending order.|
|[partial_sort_copy (STL/CLR)](#partial_sort_copy)|Copies elements from a source range into a destination range such that the elements from the source range are ordered.|
|[partition (STL/CLR)](#partition)|Arranges elements in a range such that those elements that satisfy a unary predicate precede those that fail to satisfy it.|
|[pop_heap (STL/CLR)](#pop_heap)|Moves the largest element from the front of a heap to the end and then forms a new heap from the remaining elements.|
|[prev_permutation (STL/CLR)](#prev_permutation)|Reorders a sequence of elements so that the original ordering is replaced by the lexicographically previous greater permutation if it exists.|
|[push_heap (STL/CLR)](#push_heap)|Adds an element that is at the end of a range to an existing heap consisting of the prior elements in the range.|
|[random_shuffle (STL/CLR)](#random_shuffle)|Rearranges a sequence of `N` elements in a range into one of `N`! possible arrangements selected at random.|
|[remove (STL/CLR)](#remove)|Deletes a specified value from a given range without disturbing the order of the remaining elements and returns the end of a new range free of the specified value.|
|[remove_copy (STL/CLR)](#remove_copy)|Copies elements from a source range to a destination range, except that elements of a specified value are not copied, without disturbing the order of the remaining elements.|
|[remove_copy_if (STL/CLR)](#remove_copy_if)|Copies elements from a source range to a destination range, except those that satisfy a predicate, without disturbing the order of the remaining elements.|
|[remove_if (STL/CLR)](#remove_if)|Deletes elements that satisfy a predicate from a given range without disturbing the order of the remaining elements. .|
|[replace (STL/CLR)](#replace)|Replaces elements in a range that match a specified value with a new value.|
|[replace_copy (STL/CLR)](#replace_copy)|Copies elements from a source range to a destination range, replacing elements that match a specified value with a new value.|
|[replace_copy_if (STL/CLR)](#replace_copy_if)|Examines each element in a source range and replaces it if it satisfies a specified predicate while copying the result into a new destination range.|
|[replace_if (STL/CLR)](#replace_if)|Examines each element in a range and replaces it if it satisfies a specified predicate.|
|[reverse (STL/CLR)](#reverse)|Reverses the order of the elements within a range.|
|[reverse_copy (STL/CLR)](#reverse_copy)|Reverses the order of the elements within a source range while copying them into a destination range.|
|[rotate (STL/CLR)](#rotate)|Exchanges the elements in two adjacent ranges.|
|[rotate_copy (STL/CLR)](#rotate_copy)|Exchanges the elements in two adjacent ranges within a source range and copies the result to a destination range.|
|[search (STL/CLR)](#search_)|Searches for the first occurrence of a sequence within a target range whose elements are equal to those in a given sequence of elements or whose elements are equivalent in a sense specified by a binary predicate to the elements in the given sequence.|
|[search_n (STL/CLR)](#search_n)|Searches for the first subsequence in a range that of a specified number of elements having a particular value or a relation to that value as specified by a binary predicate.|
|[set_difference (STL/CLR)](#set_difference)|Unites all of the elements that belong to one sorted source range, but not to a second sorted source range, into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_intersection (STL/CLR)](#set_intersection)|Unites all of the elements that belong to both sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_symmetric_difference (STL/CLR)](#set_symmetric_difference)|Unites all of the elements that belong to one, but not both, of the sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_union (STL/CLR)](#set_union))|Unites all of the elements that belong to at least one of two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[sort (STL/CLR)](#sort)|Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate.|
|[sort_heap (STL/CLR)](#sort_heap)|Converts a heap into a sorted range.|
|[stable_partition (STL/CLR)](#stable_partition)|Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it, preserving the relative order of equivalent elements.|
|[stable_sort (STL/CLR)](#stable_sort)|Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate and preserves the relative ordering of equivalent elements.|
|[swap (STL/CLR)](#swap)|Exchanges the values of the elements between two types of objects, assigning the contents of the first object to the second object and the contents of the second to the first.|
|[swap_ranges (STL/CLR)](#swap_ranges)|Exchanges the elements of one range with the elements of another, equal sized range.|
|[transform (STL/CLR)](#transform)|Applies a specified function object to each element in a source range or to a pair of elements from two source ranges and copies the return values of the function object into a destination range.|
|[unique (STL/CLR)](#unique)|Removes duplicate elements that are adjacent to each other in a specified range.|
|[unique_copy (STL/CLR)](#unique_copy)|Copies elements from a source range into a destination range except for the duplicate elements that are adjacent to each other.|
|[upper_bound (STL/CLR)](#upper_bound)|Finds the position of the first element in an ordered range that has a value that is greater than a specified value, where the ordering criterion may be specified by a binary predicate.|

## Members

## <a name="adjacent_find"></a> adjacent_find (STL/CLR)

Searches for two adjacent elements that are either equal or satisfy a specified condition.

### Syntax

```cpp
template<class _FwdIt> inline
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `adjacent_find`. For more information, see [adjacent_find](../standard-library/algorithm-functions.md#adjacent_find).

## <a name="binary_search"></a> binary_search (STL/CLR)

Tests whether there is an element in a sorted range that is equal to a specified value or that is equivalent to it in a sense specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    bool binary_search(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    bool binary_search(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `binary_search`. For more information, see [binary_search](../standard-library/algorithm-functions.md#binary_search).

## <a name="copy"></a> copy (STL/CLR)

Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a forward direction.

### Syntax

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt copy(_InIt _First, _InIt _Last, _OutIt _Dest);
```

### Remarks

This function behaves the same as the C++ Standard Library function `copy`. For more information, see [copy](../standard-library/algorithm-functions.md#copy).

## <a name="copy_backward"></a> copy_backward (STL/CLR)

Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a backward direction.

### Syntax

```cpp
template<class _BidIt1, class _BidIt2> inline
    _BidIt2 copy_backward(_BidIt1 _First, _BidIt1 _Last,
        _BidIt2 _Dest);
```

### Remarks

This function behaves the same as the C++ Standard Library function `copy_backward`. For more information, see [copy_backward](../standard-library/algorithm-functions.md#copy_backward).

## <a name="count"></a> count (STL/CLR)

Returns the number of elements in a range whose values match a specified value.

### Syntax

```cpp
template<class _InIt, class _Ty> inline
    typename iterator_traits<_InIt>::difference_type
        count(_InIt _First, _InIt _Last, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `count`. For more information, see [count](../standard-library/algorithm-functions.md#count).

## <a name="count_if"></a> count_if (STL/CLR)

Returns the number of elements in a range whose values match a specified condition.

### Syntax

```cpp
template<class _InIt, class _Pr> inline
    typename iterator_traits<_InIt>::difference_type
        count_if(_InIt _First, _InIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `count_if`. For more information, see [count_if](../standard-library/algorithm-functions.md#count_if).

## <a name="equal"></a> equal (STL/CLR)

Compares two ranges element by element either for equality or equivalence in a sense specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2> inline
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `equal`. For more information, see [equal](../standard-library/algorithm-functions.md#equal).

## <a name="equal_range"></a> equal_range (STL/CLR)

Finds a pair of positions in an ordered range, the first less than or equivalent to the position of a specified element and the second greater than the element's position, where the sense of equivalence or ordering used to establish the positions in the sequence may be specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    _PAIR_TYPE(_FwdIt) equal_range(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _PAIR_TYPE(_FwdIt) equal_range(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `equal_range`. For more information, see [equal_range](../standard-library/algorithm-functions.md#equal_range).

## <a name="fill"></a> fill (STL/CLR)

Assigns the same new value to every element in a specified range.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    void fill(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `fill`. For more information, see [fill](../standard-library/algorithm-functions.md#fill).

## <a name="fill_n"></a> fill_n (STL/CLR)

Assigns a new value to a specified number of elements in a range beginning with a particular element.

### Syntax

```cpp
template<class _OutIt, class _Diff, class _Ty> inline
    void fill_n(_OutIt _First, _Diff _Count, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `fill_n`. For more information, see [fill_n](../standard-library/algorithm-functions.md#fill_n).

## <a name="find"></a> find (STL/CLR)

Locates the position of the first occurrence of an element in a range that has a specified value.

### Syntax

```cpp
template<class _InIt, class _Ty> inline
    _InIt find(_InIt _First, _InIt _Last, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `find`. For more information, see [find](../standard-library/algorithm-functions.md#find).

## <a name="find_end"></a> find_end (STL/CLR)

Looks in a range for the last subsequence that is identical to a specified sequence or that is equivalent in a sense specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 find_end(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 find_end(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `find_end`. For more information, see [find_end](../standard-library/algorithm-functions.md#find_end).

## <a name="find_first_of"></a> find_first_of (STL/CLR)

Searches for the first occurrence of any of several values within a target range or for the first occurrence of any of several elements that are equivalent in a sense specified by a binary predicate to a specified set of the elements.

### Syntax

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `find_first_of`. For more information, see [find_first_of](../standard-library/algorithm-functions.md#find_first_of).

## <a name="find_if"></a> find_if (STL/CLR)

Locates the position of the first occurrence of an element in a range that satisfies a specified condition.

### Syntax

```cpp
template<class _InIt, class _Pr> inline
    _InIt find_if(_InIt _First, _InIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `find_if`. For more information, see [find_if](../standard-library/algorithm-functions.md#find_if).

## <a name="for_each"></a> for_each (STL/CLR)

Applies a specified function object to each element in a forward order within a range and returns the function object.

### Syntax

```cpp
template<class _InIt, class _Fn1> inline
    _Fn1 for_each(_InIt _First, _InIt _Last, _Fn1 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library function `for_each`. For more information, see [for_each](../standard-library/algorithm-functions.md#for_each).

## <a name="generate"></a> generate (STL/CLR)

Assigns the values generated by a function object to each element in a range.

### Syntax

```cpp
template<class _FwdIt, class _Fn0> inline
    void generate(_FwdIt _First, _FwdIt _Last, _Fn0 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library function `generate`. For more information, see [generate](../standard-library/algorithm-functions.md#generate).

## <a name="generate_n"></a> generate_n (STL/CLR)

Assigns the values generated by a function object to a specified number of element is a range and returns to the position one past the last assigned value.

### Syntax

```cpp
template<class _OutIt, class _Diff, class _Fn0> inline
    void generate_n(_OutIt _Dest, _Diff _Count, _Fn0 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library function `generate_n`. For more information, see [generate_n](../standard-library/algorithm-functions.md#generate_n).

## <a name="includes"></a> includes (STL/CLR)

Tests whether one sorted range contains all the elements contained in a second sorted range, where the ordering or equivalence criterion between elements may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2> inline
    bool includes(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool includes(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `includes`. For more information, see [includes](../standard-library/algorithm-functions.md#includes).

## <a name="inplace_merge"></a> inplace_merge (STL/CLR)

Combines the elements from two consecutive sorted ranges into a single sorted range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _BidIt> inline
    void inplace_merge(_BidIt _First, _BidIt _Mid, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    void inplace_merge(_BidIt _First, _BidIt _Mid, _BidIt _Last,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `inplace_merge` For more information, see [inplace_merge](../standard-library/algorithm-functions.md#inplace_merge).

## <a name="iter_swap"></a> iter_swap (STL/CLR)

Exchanges two values referred to by a pair of specified iterators.

### Syntax

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right);
```

### Remarks

This function behaves the same as the C++ Standard Library function `iter_swap`. For more information, see [iter_swap](../standard-library/algorithm-functions.md#iter_swap).

## <a name="lexicographical_compare"></a> lexicographical_compare (STL/CLR)

Compares element by element between two sequences to determine which is lesser of the two.

### Syntax

```cpp
template<class _InIt1, class _InIt2> inline
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `lexicographical_compare`. For more information, see [lexicographical_compare](../standard-library/algorithm-functions.md#lexicographical_compare).

## <a name="lower_bound"></a> lower_bound (STL/CLR)

Finds the position of the first element in an ordered range that has a value less than or equivalent to a specified value, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `lower_bound`. For more information, see [lower_bound](../standard-library/algorithm-functions.md#lower_bound).

## <a name="make_heap"></a> make_heap (STL/CLR)

Converts elements from a specified range into a heap in which the first element is the largest and for which a sorting criterion may be specified with a binary predicate.

### Syntax

```cpp
template<class _RanIt> inline
    void make_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void make_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `make_heap`. For more information, see [make_heap](../standard-library/algorithm-functions.md#make_heap).

## <a name="max"></a> max (STL/CLR)

Compares two objects and returns the larger of the two, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _Ty> inline
    const _Ty max(const _Ty% _Left, const _Ty% _Right);
template<class _Ty, class _Pr> inline
    const _Ty max(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `max`. For more information, see [max](../standard-library/algorithm-functions.md#max).

## <a name="max_element"></a> max_element (STL/CLR)

Finds the first occurrence of largest element in a specified range where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt> inline
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `max_element`. For more information, see [max_element](../standard-library/algorithm-functions.md#max_element).

## <a name="merge"></a> merge (STL/CLR)

Combines all the elements from two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt merge(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt merge(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `merge`. For more information, see [merge](../standard-library/algorithm-functions.md#merge).

## <a name="min"></a> min (STL/CLR)

Compares two objects and returns the lesser of the two, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _Ty> inline
    const _Ty min(const _Ty% _Left, const _Ty% _Right);
template<class _Ty, class _Pr> inline
    const _Ty min(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `min`. For more information, see [min](../standard-library/algorithm-functions.md#min).

## <a name="min_element"></a> min_element (STL/CLR)

Finds the first occurrence of smallest element in a specified range where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt> inline
    _FwdIt min_element(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt min_element(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `min_element`. For more information, see [min_element](../standard-library/algorithm-functions.md#min_element).

## <a name="mismatch"></a> mismatch (STL/CLR)

Compares two ranges element by element either for equality or equivalent in a sense specified by a binary predicate and locates the first position where a difference occurs.

### Syntax

```cpp
template<class _InIt1, class _InIt2> inline
    _PAIR_TYPE(_InIt1)
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);
template<class _InIt1, class _InIt2, class _Pr> inline
    _PAIR_TYPE(_InIt1)
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
            _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `mismatch`. For more information, see [mismatch](../standard-library/algorithm-functions.md#mismatch).

## <a name="next_permutation"></a> next_permutation (STL/CLR)

Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists, where the sense of next may be specified with a binary predicate.

### Syntax

```cpp
template<class _BidIt> inline
    bool next_permutation(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    bool next_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `next_permutation`. For more information, see [next_permutation](../standard-library/algorithm-functions.md#next_permutation).

## <a name="nth_element"></a> nth_element (STL/CLR)

Partitions a range of elements, correctly locating the `n`th element of the sequence in the range so that all the elements in front of it are less than or equal to it and all the elements that follow it in the sequence are greater than or equal to it.

### Syntax

```cpp
template<class _RanIt> inline
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `nth_element`. For more information, see [nth_element](../standard-library/algorithm-functions.md#nth_element).

## <a name="partial_sort"></a> partial_sort (STL/CLR)

Arranges a specified number of the smaller elements in a range into a nondescending order or according to an ordering criterion specified by a binary predicate.

### Syntax

```cpp
template<class _RanIt> inline
    void partial_sort(_RanIt _First, _RanIt _Mid, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void partial_sort(_RanIt _First, _RanIt _Mid, _RanIt _Last,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `partial_sort`. For more information, see [partial_sort](../standard-library/algorithm-functions.md#partial_sort).

## <a name="partial_sort_copy"></a> partial_sort_copy (STL/CLR)

Copies elements from a source range into a destination range where the source elements are ordered by either less than or another specified binary predicate.

### Syntax

```cpp
template<class _InIt, class _RanIt> inline
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,
        _RanIt _First2, _RanIt _Last2);
template<class _InIt, class _RanIt, class _Pr> inline
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,
        _RanIt _First2, _RanIt _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `partial_sort_copy`. For more information, see [partial_sort_copy](../standard-library/algorithm-functions.md#partial_sort_copy).

## <a name="partition"></a> partition (STL/CLR)

Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it.

### Syntax

```cpp
template<class _BidIt, class _Pr> inline
    _BidIt partition(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `partition`. For more information, see [partition](../standard-library/algorithm-functions.md#partition).

## <a name="pop_heap"></a> pop_heap (STL/CLR)

Removes the largest element from the front of a heap to the next-to-last position in the range and then forms a new heap from the remaining elements.

### Syntax

```cpp
template<class _RanIt> inline
    void pop_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void pop_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `pop_heap`. For more information, see [pop_heap](../standard-library/algorithm-functions.md#pop_heap).

## <a name="prev_permutation"></a> prev_permutation (STL/CLR)

Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists, where the sense of next may be specified with a binary predicate.

### Syntax

```cpp
template<class _BidIt> inline
    bool prev_permutation(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    bool prev_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `prev_permutation`. For more information, see [prev_permutation](../standard-library/algorithm-functions.md#prev_permutation).

## <a name="push_heap"></a> push_heap (STL/CLR)

Adds an element that is at the end of a range to an existing heap consisting of the prior elements in the range.

### Syntax

```cpp
template<class _RanIt> inline
    void push_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void push_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `push_heap`. For more information, see [push_heap](../standard-library/algorithm-functions.md#push_heap).

## <a name="random_shuffle"></a> random_shuffle (STL/CLR)

Rearranges a sequence of `N` elements in a range into one of `N`! possible arrangements selected at random.

### Syntax

```cpp
template<class _RanIt> inline
    void random_shuffle(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Fn1> inline
    void random_shuffle(_RanIt _First, _RanIt _Last, _Fn1% _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library function `random_shuffle`. For more information, see [random_shuffle](../standard-library/algorithm-functions.md#random_shuffle).

## <a name="remove"></a> remove (STL/CLR)

Eliminates a specified value from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt remove(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `remove`. For more information, see [remove](../standard-library/algorithm-functions.md#remove).

## <a name="remove_copy"></a> remove_copy (STL/CLR)

Copies elements from a source range to a destination range, except that elements of a specified value are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.

### Syntax

```cpp
template<class _InIt, class _OutIt, class _Ty> inline
    _OutIt remove_copy(_InIt _First, _InIt _Last,
        _OutIt _Dest, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `remove_copy`. For more information, see [remove_copy](../standard-library/algorithm-functions.md#remove_copy).

## <a name="remove_copy_if"></a> remove_copy_if (STL/CLR)

Copies elements from a source range to a destination range, except that satisfying a predicate are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.

### Syntax

```cpp
template<class _InIt, class _OutIt, class _Pr> inline
    _OutIt remove_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `remove_copy_if`. For more information, see [remove_copy_if](../standard-library/algorithm-functions.md#remove_copy_if).

## <a name="remove_if"></a> remove_if (STL/CLR)

Eliminates elements that satisfy a predicate from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.

### Syntax

```cpp
template<class _FwdIt, class _Pr> inline
    _FwdIt remove_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `remove_if`. For more information, see [remove_if](../standard-library/algorithm-functions.md#remove_if).

## <a name="replace"></a> replace (STL/CLR)

Examines each element in a range and replaces it if it matches a specified value.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    void replace(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Oldval, const _Ty% _Newval);
```

### Remarks

This function behaves the same as the C++ Standard Library function `replace`. For more information, see [replace](../standard-library/algorithm-functions.md#replace).

## <a name="replace_copy"></a> replace_copy (STL/CLR)

Examines each element in a source range and replaces it if it matches a specified value while copying the result into a new destination range.

### Syntax

```cpp
template<class _InIt, class _OutIt, class _Ty> inline
    _OutIt replace_copy(_InIt _First, _InIt _Last, _OutIt _Dest,
        const _Ty% _Oldval, const _Ty% _Newval);
```

### Remarks

This function behaves the same as the C++ Standard Library function `replace_copy`. For more information, see [replace_copy](../standard-library/algorithm-functions.md#replace_copy).

## <a name="replace_copy_if"></a> replace_copy_if (STL/CLR)

Examines each element in a source range and replaces it if it satisfies a specified predicate while copying the result into a new destination range.

### Syntax

```cpp
template<class _InIt, class _OutIt, class _Pr, class _Ty> inline
    _OutIt replace_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred, const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `replace_copy_if`. For more information, see [replace_copy_if](../standard-library/algorithm-functions.md#replace_copy_if).

## <a name="replace_if"></a> replace_if (STL/CLR)

Examines each element in a range and replaces it if it satisfies a specified predicate.

### Syntax

```cpp
template<class _FwdIt, class _Pr, class _Ty> inline
    void replace_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred,
        const _Ty% _Val);
```

### Remarks

This function behaves the same as the C++ Standard Library function `replace_if`. For more information, see [replace_if](../standard-library/algorithm-functions.md#replace_if).

## <a name="reverse"></a> reverse (STL/CLR)

Reverses the order of the elements within a range.

### Syntax

```cpp
template<class _BidIt> inline
    void reverse(_BidIt _First, _BidIt _Last);
```

### Remarks

This function behaves the same as the C++ Standard Library function `reverse`. For more information, see [reverse](../standard-library/algorithm-functions.md#reverse).

## <a name="reverse_copy"></a> reverse_copy (STL/CLR)

Reverses the order of the elements within a source range while copying them into a destination range.

### Syntax

```cpp
template<class _BidIt, class _OutIt> inline
    _OutIt reverse_copy(_BidIt _First, _BidIt _Last, _OutIt _Dest);
```

### Remarks

This function behaves the same as the C++ Standard Library function `reverse_copy`. For more information, see [reverse_copy](../standard-library/algorithm-functions.md#reverse_copy).

## <a name="rotate"></a> rotate (STL/CLR)

Exchanges the elements in two adjacent ranges.

### Syntax

```cpp
template<class _FwdIt> inline
    void rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last);
```

### Remarks

This function behaves the same as the C++ Standard Library function `rotate`. For more information, see [rotate](../standard-library/algorithm-functions.md#rotate).

## <a name="rotate_copy"></a> rotate_copy (STL/CLR)

Exchanges the elements in two adjacent ranges within a source range and copies the result to a destination range.

### Syntax

```cpp
template<class _FwdIt, class _OutIt> inline
    _OutIt rotate_copy(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,
        _OutIt _Dest);
```

### Remarks

This function behaves the same as the C++ Standard Library function `rotate_copy`. For more information, see [rotate_copy](../standard-library/algorithm-functions.md#rotate_copy).

## <a name="search_"></a> search (STL/CLR)

Searches for the first occurrence of a sequence within a target range whose elements are equal to those in a given sequence of elements or whose elements are equivalent in a sense specified by a binary predicate to the elements in the given sequence.

### Syntax

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 search(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 search(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `search`. For more information, see [search](../standard-library/algorithm-functions.md#search).

## <a name="search_n"></a> search_n (STL/CLR)

Searches for the first subsequence in a range that of a specified number of elements having a particular value or a relation to that value as specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt1, class _Diff2, class _Ty> inline
    _FwdIt1 search_n(_FwdIt1 _First1, _FwdIt1 _Last1,
        _Diff2 _Count, const _Ty& _Val);
template<class _FwdIt1, class _Diff2, class _Ty, class _Pr> inline
    _FwdIt1 search_n(_FwdIt1 _First1, _FwdIt1 _Last1,
        _Diff2 _Count, const _Ty& _Val, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `search_n`. For more information, see [search_n](../standard-library/algorithm-functions.md#search_n).

## <a name="set_difference"></a> set_difference (STL/CLR)

Unites all of the elements that belong to one sorted source range, but not to a second sorted source range, into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2,_OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `set_difference`. For more information, see [set_difference](../standard-library/algorithm-functions.md#set_difference).

## <a name="set_intersection"></a> set_intersection (STL/CLR)

Unites all of the elements that belong to both sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `set_intersection`. For more information, see [set_intersection](../standard-library/algorithm-functions.md#set_intersection).

## <a name="set_symmetric_difference"></a> set_symmetric_difference (STL/CLR)

Unites all of the elements that belong to one, but not both, of the sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `set_symmetric_difference`. For more information, see [set_symmetric_difference](../standard-library/algorithm-functions.md#set_symmetric_difference).

## <a name="set_union"></a> set_union (STL/CLR)

Unites all of the elements that belong to at least one of two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_union(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_union(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `set_union`. For more information, see [set_union](../standard-library/algorithm-functions.md#set_union).

## <a name="sort"></a> sort (STL/CLR)

Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate.

### Syntax

```cpp
template<class _RanIt> inline
    void sort(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void sort(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `sort`. For more information, see [sort](../mfc/reference/cmfclistctrl-class.md#sort).

## <a name="sort_heap"></a> sort_heap (STL/CLR)

Converts a heap into a sorted range.

### Syntax

```cpp
template<class _RanIt> inline
    void sort_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `sort_heap`. For more information, see [sort_heap](../standard-library/algorithm-functions.md#sort_heap).

## <a name="stable_partition"></a> stable_partition (STL/CLR)

Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it, preserving the relative order of equivalent elements.

### Syntax

```cpp
template<class _BidIt, class _Pr> inline
    _BidIt stable_partition(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `stable_partition`. For more information, see [stable_partition](../standard-library/algorithm-functions.md#stable_partition).

## <a name="stable_sort"></a> stable_sort (STL/CLR)

Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate and preserves the relative ordering of equivalent elements.

### Syntax

```cpp
template<class _BidIt> inline
    void stable_sort(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    void stable_sort(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `stable_sort`. For more information, see [stable_sort](../standard-library/algorithm-functions.md#stable_sort).

## <a name="swap"></a> swap (STL/CLR)

Exchanges the values of the elements between two types of objects, assigning the contents of the first object to the second object and the contents of the second to the first.

### Syntax

```cpp
<class _Ty> inline
    void swap(_Ty% _Left, _Ty% _Right);
```

### Remarks

This function behaves the same as the C++ Standard Library function `swap`. For more information, see [swap](../standard-library/algorithm-functions.md#swap).

## <a name="swap_ranges"></a> swap_ranges (STL/CLR)

Exchanges the elements of one range with the elements of another, equal sized range.

### Syntax

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt2 swap_ranges(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2);
```

### Remarks

This function behaves the same as the C++ Standard Library function `swap_ranges`. For more information, see [swap_ranges](../standard-library/algorithm-functions.md#swap_ranges).

## <a name="transform"></a> transform (STL/CLR)

Applies a specified function object to each element in a source range or to a pair of elements from two source ranges and copies the return values of the function object into a destination range.

### Syntax

```cpp
template<class _InIt, class _OutIt, class _Fn1> inline
    _OutIt transform(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Fn1 _Func);
template<class _InIt1, class _InIt2, class _OutIt, class _Fn2> inline
    _OutIt transform(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _OutIt _Dest, _Fn2 _Func);
```

### Remarks

This function behaves the same as the C++ Standard Library function `transform`. For more information, see [transform](../standard-library/algorithm-functions.md#transform).

## <a name="unique"></a> unique (STL/CLR)

Removes duplicate elements that are adjacent to each other in a specified range.

### Syntax

```cpp
template<class _FwdIt> inline
    _FwdIt unique(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt unique(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `unique`. For more information, see [unique](../standard-library/algorithm-functions.md#unique).

## <a name="unique_copy"></a> unique_copy (STL/CLR)

Copies elements from a source range into a destination range except for the duplicate elements that are adjacent to each other.

### Syntax

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest);
template<class _InIt, class _OutIt, class _Pr> inline
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `unique_copy`. For more information, see [unique_copy](../standard-library/algorithm-functions.md#unique_copy).

## <a name="upper_bound"></a> upper_bound (STL/CLR)

Finds the position of the first element in an ordered range that has a value that is greater than a specified value, where the ordering criterion may be specified by a binary predicate.

### Syntax

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### Remarks

This function behaves the same as the C++ Standard Library function `upper_bound`. For more information, see [upper_bound](../standard-library/algorithm-functions.md#upper_bound).
