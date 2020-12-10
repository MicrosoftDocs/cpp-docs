---
description: "Learn more about: &lt;algorithm&gt;"
title: "&lt;algorithm&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<algorithm>"]
helpviewer_keywords: ["algorithm header [C++]", "C++ Standard Library, algorithms", "<algorithm> header"]
ms.assetid: 19f97711-7a67-4a65-8fd1-9a2bd3ca327d
---
# &lt;algorithm&gt;

Defines C++ Standard Library container template functions that perform algorithms.

## Syntax

```cpp
(see relevant links below for specific algorithm syntax)
```

> [!NOTE]
> The \<algorithm> library also uses the `#include <initializer_list>` statement.

## Remarks

The C++ Standard Library algorithms are generic because they can operate on a variety of data structures. The data structures that they can operate on include not only the C++ Standard Library container classes such as `vector` and `list`, but also program-defined data structures and arrays of elements that satisfy the requirements of a particular algorithm. C++ Standard Library algorithms achieve this level of generality by accessing and traversing the elements of a container indirectly through iterators.

C++ Standard Library algorithms process iterator ranges that are typically specified by their beginning or ending positions. The ranges referred to must be valid in the sense that all pointers in the ranges must be dereferenceable and, within the sequences of each range, the last position must be reachable from the first by incrementation.

The C++ Standard Library algorithms extend the actions supported by the operations and member functions of each C++ Standard Library container and allow working, for example, with different types of container objects at the same time. Two suffixes have been used to convey information about the purpose of the algorithms.

- The `_if` suffix indicates that the algorithm is used with function objects operating on the values of the elements rather than on the elements themselves. The `find_if` algorithm looks for elements whose values satisfy the criterion specified by a function object, and the `find` algorithm searches for a particular value.

- The _copy suffix indicates that the algorithm not only manipulates the values of the elements but also copies the modified values into a destination range. The `reverse` algorithm reverses the order of the elements within a range, and the `reverse_copy` algorithm also copies the result into a destination range.

C++ Standard Library algorithms are often classified into groups that indicate something about their purpose or requirements. These include modifying algorithms that change the value of elements as compared with non-modifying algorithms that do not. Mutating algorithms change the order of elements, but not the values of their elements. Removing algorithms can eliminate elements from a range or a copy of a range. Sorting algorithms reorder the elements in a range in various ways and sorted range algorithms only act on ranges whose elements have been sorted in a particular way.

The C++ Standard Library numeric algorithms that are provided for numerical processing have their own header file [\<numeric>](numeric.md), and function objects and adaptors are defined in the header [\<functional>](functional.md) Function objects that return Boolean values are known as predicates. The default binary predicate is the comparison `operator<`. In general, the elements being ordered need to be less than comparable so that, given any two elements, it can be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering among the nonequivalent elements.

### Function templates

|Name|Description|
|-|-|
|[adjacent_find](algorithm-functions.md#adjacent_find)|Searches for two adjacent elements that are either equal or satisfy a specified condition.|
|[all_of](algorithm-functions.md#all_of)|Returns **`true`** when a condition is present at each element in the given range.|
|[any_of](algorithm-functions.md#any_of)|Returns **`true`** when a condition is present at least once in the specified range of elements.|
|[binary_search](algorithm-functions.md#binary_search)|Tests whether there is an element in a sorted range that is equal to a specified value or that is equivalent to it in a sense specified by a binary predicate.|
|[clamp](algorithm-functions.md#clamp)||
|[copy](algorithm-functions.md#copy)|Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a forward direction.|
|[copy_backward](algorithm-functions.md#copy_backward)|Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a backward direction.|
|[copy_if](algorithm-functions.md#copy_if)|Copy all elements in a given range that test **`true`** for a specified condition|
|[copy_n](algorithm-functions.md#copy_n)|Copies a specified number of elements.|
|[count](algorithm-functions.md#count)|Returns the number of elements in a range whose values match a specified value.|
|[count_if](algorithm-functions.md#count_if)|Returns the number of elements in a range whose values match a specified condition.|
|[equal](algorithm-functions.md#equal)|Compares two ranges element by element either for equality or equivalence in a sense specified by a binary predicate.|
|[equal_range](algorithm-functions.md#equal_range)|Finds a pair of positions in an ordered range, the first less than or equivalent to the position of a specified element and the second greater than the element's position, where the sense of equivalence or ordering used to establish the positions in the sequence may be specified by a binary predicate.|
|[fill](algorithm-functions.md#fill)|Assigns the same new value to every element in a specified range.|
|[fill_n](algorithm-functions.md#fill_n)|Assigns a new value to a specified number of elements in a range starting with a particular element.|
|[find](algorithm-functions.md#find)|Locates the position of the first occurrence of an element in a range that has a specified value.|
|[find_end](algorithm-functions.md#find_end)|Looks in a range for the last subsequence that is identical to a specified sequence or that is equivalent in a sense specified by a binary predicate.|
|[find_first_of](algorithm-functions.md#find_first_of)|Searches for the first occurrence of any of several values within a target range or for the first occurrence of any of several elements that are equivalent in a sense specified by a binary predicate to a specified set of the elements.|
|[find_if](algorithm-functions.md#find_if)|Locates the position of the first occurrence of an element in a range that satisfies a specified condition.|
|[find_if_not](algorithm-functions.md#find_if_not)|Returns the first element in the indicated range that does not satisfy a condition.|
|[for_each](algorithm-functions.md#for_each)|Applies a specified function object to each element in a forward order within a range and returns the function object.|
|[for_each_n](algorithm-functions.md#for_each_n)||
|[generate](algorithm-functions.md#generate)|Assigns the values generated by a function object to each element in a range.|
|[generate_n](algorithm-functions.md#generate_n)|Assigns the values generated by a function object to a specified number of element is a range and returns to the position one past the last assigned value.|
|[includes](algorithm-functions.md#includes)|Tests whether one sorted range contains all the elements contained in a second sorted range, where the ordering or equivalence criterion between elements may be specified by a binary predicate.|
|[inplace_merge](algorithm-functions.md#inplace_merge)|Combines the elements from two consecutive sorted ranges into a single sorted range, where the ordering criterion may be specified by a binary predicate.|
|[is_heap](algorithm-functions.md#is_heap)|Returns **`true`** if the elements in the specified range form a heap.|
|[is_heap_until](algorithm-functions.md#is_heap_until)|Returns **`true`** if the specified range forms a heap until the last element.|
|[is_partitioned](algorithm-functions.md#is_partitioned)|Returns **`true`** if all the elements in the given range that test **`true`** for a condition come before any elements that test **`false`**.|
|[is_permutation](algorithm-functions.md#is_permutation)|Determines whether the elements in a given range form a valid permutation.|
|[is_sorted](algorithm-functions.md#is_sorted)|Returns **`true`** if the elements in the specified range are in sorted order.|
|[is_sorted_until](algorithm-functions.md#is_sorted_until)|Returns **`true`** if the elements in the specified range are in sorted order.|
|[iter_swap](algorithm-functions.md#iter_swap)|Exchanges two values referred to by a pair of specified iterators.|
|[lexicographical_compare](algorithm-functions.md#lexicographical_compare)|Compares element by element between two sequences to determine which is lesser of the two.|
|[lower_bound](algorithm-functions.md#lower_bound)|Finds the position of the first element in an ordered range that has a value greater than or equivalent to a specified value, where the ordering criterion may be specified by a binary predicate.|
|[make_heap](algorithm-functions.md#make_heap)|Converts elements from a specified range into a heap in which the first element is the largest and for which a sorting criterion may be specified with a binary predicate.|
|[max](algorithm-functions.md#max)|Compares two objects and returns the larger of the two, where the ordering criterion may be specified by a binary predicate.|
|[max_element](algorithm-functions.md#max_element)|Finds the first occurrence of largest element in a specified range where the ordering criterion may be specified by a binary predicate.|
|[merge](algorithm-functions.md#merge)|Combines all the elements from two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[min](algorithm-functions.md#min)|Compares two objects and returns the lesser of the two, where the ordering criterion may be specified by a binary predicate.|
|[min_element](algorithm-functions.md#min_element)|Finds the first occurrence of smallest element in a specified range where the ordering criterion may be specified by a binary predicate.|
|[minmax](algorithm-functions.md#minmax)|Compares two input parameters and returns them as a pair, in order of least to greatest.|
|[minmax_element](algorithm-functions.md#minmax_element)|Performs the work performed by [min_element](algorithm-functions.md#min_element) and [max_element](algorithm-functions.md#max_element) in one call.|
|[mismatch](algorithm-functions.md#mismatch)|Compares two ranges element by element either for equality or equivalent in a sense specified by a binary predicate and locates the first position where a difference occurs.|
|[&lt;alg&gt; move](algorithm-functions.md#alg_move)|Move elements associated with a specified range.|
|[move_backward](algorithm-functions.md#move_backward)|Moves the elements of one iterator to another. The move starts with the last element in a specified range, and ends with the first element in that range.|
|[next_permutation](algorithm-functions.md#next_permutation)|Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists, where the sense of next may be specified with a binary predicate.|
|[none_of](algorithm-functions.md#none_of)|Returns **`true`** when a condition is never present among elements in the given range.|
|[nth_element](algorithm-functions.md#nth_element)|Partitions a range of elements, correctly locating the *n*th element of the sequence in the range so that all the elements in front of it are less than or equal to it and all the elements that follow it in the sequence are greater than or equal to it.|
|[partial_sort](algorithm-functions.md#partial_sort)|Arranges a specified number of the smaller elements in a range into a nondescending order or according to an ordering criterion specified by a binary predicate.|
|[partial_sort_copy](algorithm-functions.md#partial_sort_copy)|Copies elements from a source range into a destination range where the source elements are ordered by either less than or another specified binary predicate.|
|[partition](algorithm-functions.md#partition)|Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it.|
|[partition_copy](algorithm-functions.md#partition_copy)|Copies elements for which a condition is **`true`** to one destination, and for which the condition is **`false`** to another. The elements must come from a specified range.|
|[partition_point](algorithm-functions.md#partition_point)|Returns the first element in the given range that does not satisfy the condition. The elements are sorted so that those that satisfy the condition come before those that do not.|
|[pop_heap](algorithm-functions.md#pop_heap)|Removes the largest element from the front of a heap to the next-to-last position in the range and then forms a new heap from the remaining elements.|
|[prev_permutation](algorithm-functions.md#prev_permutation)|Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists, where the sense of next may be specified with a binary predicate.|
|[push_heap](algorithm-functions.md#push_heap)|Adds an element that is at the end of a range to an existing heap consisting of the prior elements in the range.|
|[random_shuffle](algorithm-functions.md#random_shuffle)|Rearranges a sequence of *N* elements in a range into one of *N*! possible arrangements selected at random.|
|[remove](algorithm-functions.md#remove)|Eliminates a specified value from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.|
|[remove_copy](algorithm-functions.md#remove_copy)|Copies elements from a source range to a destination range, except that elements of a specified value are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.|
|[remove_copy_if](algorithm-functions.md#remove_copy_if)|Copies elements from a source range to a destination range, except that satisfying a predicate are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.|
|[remove_if](algorithm-functions.md#remove_if)|Eliminates elements that satisfy a predicate from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.|
|[replace](algorithm-functions.md#replace)|Examines each element in a range and replaces it if it matches a specified value.|
|[replace_copy](algorithm-functions.md#replace_copy)|Examines each element in a source range and replaces it if it matches a specified value while copying the result into a new destination range.|
|[replace_copy_if](algorithm-functions.md#replace_copy_if)|Examines each element in a source range and replaces it if it satisfies a specified predicate while copying the result into a new destination range.|
|[replace_if](algorithm-functions.md#replace_if)|Examines each element in a range and replaces it if it satisfies a specified predicate.|
|[reverse](algorithm-functions.md#reverse)|Reverses the order of the elements within a range.|
|[reverse_copy](algorithm-functions.md#reverse_copy)|Reverses the order of the elements within a source range while copying them into a destination range|
|[rotate](algorithm-functions.md#rotate)|Exchanges the elements in two adjacent ranges.|
|[rotate_copy](algorithm-functions.md#rotate_copy)|Exchanges the elements in two adjacent ranges within a source range and copies the result to a destination range.|
|[sample](algorithm-functions.md#sample)||
|[search](algorithm-functions.md#search)|Searches for the first occurrence of a sequence within a target range whose elements are equal to those in a given sequence of elements or whose elements are equivalent in a sense specified by a binary predicate to the elements in the given sequence.|
|[search_n](algorithm-functions.md#search_n)|Searches for the first subsequence in a range that of a specified number of elements having a particular value or a relation to that value as specified by a binary predicate.|
|[set_difference](algorithm-functions.md#set_difference)|Unites all of the elements that belong to one sorted source range, but not to a second sorted source range, into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_intersection](algorithm-functions.md#set_intersection)|Unites all of the elements that belong to both sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_symmetric_difference](algorithm-functions.md#set_symmetric_difference)|Unites all of the elements that belong to one, but not both, of the sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[set_union](algorithm-functions.md#set_union)|Unites all of the elements that belong to at least one of two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.|
|[sort](algorithm-functions.md#sort)|Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate.|
|[shuffle](algorithm-functions.md#shuffle)|Shuffles (rearranges) elements for a given range using a random number generator.|
|[sort_heap](algorithm-functions.md#sort_heap)|Converts a heap into a sorted range.|
|[stable_partition](algorithm-functions.md#stable_partition)|Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it, preserving the relative order of equivalent elements.|
|[stable_sort](algorithm-functions.md#stable_sort)|Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate and preserves the relative ordering of equivalent elements.|
|[swap](algorithm-functions.md#swap)|Exchanges the values of the elements between two types of objects, assigning the contents of the first object to the second object and the contents of the second to the first.|
|[swap_ranges](algorithm-functions.md#swap_ranges)|Exchanges the elements of one range with the elements of another, equal sized range.|
|[transform](algorithm-functions.md#transform)|Applies a specified function object to each element in a source range or to a pair of elements from two source ranges and copies the return values of the function object into a destination range.|
|[unique](algorithm-functions.md#unique)|Removes duplicate elements that are adjacent to each other in a specified range.|
|[unique_copy](algorithm-functions.md#unique_copy)|Copies elements from a source range into a destination range except for the duplicate elements that are adjacent to each other.|
|[upper_bound](algorithm-functions.md#upper_bound)|Finds the position of the first element in an ordered range that has a value that is greater than a specified value, where the ordering criterion may be specified by a binary predicate.|

## See also

[Header Files Reference](cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](cpp-standard-library-reference.md)
