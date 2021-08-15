---
description: "Learn more about: Iterators"
title: "Iterators"
ms.date: "11/04/2016"
helpviewer_keywords: ["iterator conventions", "C++ Standard Library, iterator conventions"]
ms.assetid: 2f746be7-b37d-4bfc-bf05-be4336ca982f
---
# Iterators

An iterator is an object that can iterate over elements in a C++ Standard Library container and provide access to individual elements. The C++ Standard Library containers all provide iterators so that algorithms can access their elements in a standard way without having to be concerned with the type of container the elements are stored in.

You can use iterators explicitly using member and global functions such as `begin()` and `end()` and operators such as `++` and `--` to move forward or backward. You can also use iterators implicitly with a range-for loop or (for some iterator types) the subscript operator `[]`.

In the C++ Standard Library, the beginning of a sequence or range is the first element. The end of a sequence or range is always defined as one past the last element. The global functions `begin` and `end` return iterators to a specified container. The typical explicit iterator loop over all elements in a container looks like this:

```cpp
vector<int> vec{ 0,1,2,3,4 };
for (auto it = begin(vec); it != end(vec); it++)
{
    // Access element using dereference operator
    cout << *it << " ";
}
```

The same thing can be accomplished more simply with a range-for loop:

```cpp
for (auto num : vec)
{
    // no dereference operator
    cout << num << " ";
}
```

There are five categories of iterators. In order of increasing power, the categories are:

- **Output**. An *output iterator* `X` can iterate forward over a sequence by using the `++` operator, and can write an element only once, by using the __`*`__ operator.

- **Input**. An *input iterator* `X` can iterate forward over a sequence by using the `++` operator, and can read an element any number of times by using the `*` operator. You can compare input iterators by using the `==` and `!=` operators. After you increment any copy of an input iterator, none of the other copies can safely be compared, dereferenced, or incremented afterwards.

- **Forward**. A *forward iterator* `X` can iterate forward over a sequence using the ++ operator and can read any element or write non-const elements any number of times by using the `*` operator. You can access element members by using the `->` operator and compare forward iterators by using the `==` and `!=` operators. You can make multiple copies of a forward iterator, each of which can be dereferenced and incremented independently. A forward iterator that is initialized without reference to any container is called a *null forward iterator*. Null forward iterators always compare equal.

- **Bidirectional**. A *bidirectional iterator* `X` can take the place of a forward iterator. You can, however, also decrement a bidirectional iterator, as in `--X`, `X--`, or `(V = *X--)`. You can access element members and compare bidirectional iterators in the same way as forward iterators.

- **Random access**. A *random-access iterator* `X` can take the place of a bidirectional iterator. With a random access iterator, you can use the subscript operator `[]` to access elements. You can use the `+`, `-`, `+=` and `-=` operators to move forward or backward a specified number of elements and to calculate the distance between iterators. You can compare bidirectional iterators by using `==`, `!=`, `<`, `>`, `<=`, and `>=`.

All iterators can be assigned or copied. They're assumed to be lightweight objects and are often passed and returned by value, not by reference. Note also that none of the operations previously described can throw an exception when performed on a valid iterator.

The hierarchy of iterator categories can be summarized by showing three sequences. For write-only access to a sequence, you can use any of:

> output iterator\
> -> forward iterator\
> -> bidirectional iterator\
> -> random-access iterator

The right arrow means "can be replaced by." Any algorithm that calls for an output iterator should work nicely with a forward iterator, for example, but *not* the other way around.

For read-only access to a sequence, you can use any of:

> input iterator\
> -> forward iterator\
> -> bidirectional iterator\
> -> random-access iterator

An input iterator is the weakest of all categories, in this case.

Finally, for read/write access to a sequence, you can use any of:

> forward iterator\
> -> bidirectional iterator\
> -> random-access iterator

An object pointer can always serve as a random-access iterator, so it can serve as any category of iterator if it supports the proper read/write access to the sequence it designates.

An iterator `Iterator` other than an object pointer must also define the member types required by the specialization `iterator_traits<Iterator>`. These requirements can be met by deriving `Iterator` from the public base class [iterator](../standard-library/iterator-struct.md).

It's important to understand the promises and limitations of each iterator category to see how iterators are used by containers and algorithms in the C++ Standard Library.

> [!NOTE]
> You can avoid using iterators explicitly by using range-for loops. For more information, see [Range-based for statement](../cpp/range-based-for-statement-cpp.md).

Microsoft C++ now offers checked iterators and debug iterators to ensure that you do not overwrite the bounds of your container. For more information, see [Checked Iterators](../standard-library/checked-iterators.md) and [Debug Iterator Support](../standard-library/debug-iterator-support.md).

## See also

[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
