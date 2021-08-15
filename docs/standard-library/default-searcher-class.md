---
description: "Learn more about: default_searcher Class"
title: "default_searcher class"
ms.date: "08/03/2019"
f1_keywords: ["functional/std::default_searcher"]
helpviewer_keywords: ["std::default_searcher [C++]"]
---
# default_searcher Class

A `default_searcher` is a function object type for operations that search for a sequence specified in the object's constructor. The search is done within another sequence provided to the object’s function call operator. The `default_searcher` invokes [std::search](algorithm-functions.md#search) to perform the search.

## Syntax

```cpp
template <class ForwardIterator, class BinaryPredicate = equal_to<>>
class default_searcher
{
    default_searcher(
        ForwardIterator pat_first,
        ForwardIterator pat_last,
        BinaryPredicate pred = BinaryPredicate());

    template <class ForwardIterator2>
    pair<ForwardIterator2, ForwardIterator2> operator()(
        ForwardIterator2 first,
        ForwardIterator2 last) const;
};
```

## Members

| Member | Description |
| - | - |
| **Constructor** | |
| [default_searcher](#default-searcher-constructor) | Constructs a searcher instance. |
| **Operators** | |
| [operator()](#operator-call) | Invokes the operation on the sequence. |

## <a name="default-searcher-constructor"></a> default_searcher constructor

Constructs a `default_searcher` function object by using the sequence to search for and an equality predicate.

```cpp
default_searcher(                   // C++17
    ForwardIterator pat_first,
    ForwardIterator pat_last,
    BinaryPredicate pred = BinaryPredicate());

constexpr default_searcher(         // C++20
    ForwardIterator pat_first,
    ForwardIterator pat_last,
    BinaryPredicate pred = BinaryPredicate());
```

### Parameters

*pat_first*\
The initial element of the sequence to search for.

*pat_last*\
The end of the sequence to search for.

*pred*\
The optional equality comparison predicate for sequence elements. If an equality comparison type isn't specified, the default is `std::equal_to`.

### Remarks

Throws any exception thrown by the copy constructor of the *BinaryPredicate* or *ForwardIterator* types.

This class is new in C++17. C++20 made the constructor **`constexpr`**.

## <a name="operator-call"></a> operator()

The call operator of the function operator. Searches within the argument sequence `[first, last)` for the sequence specified to the constructor.

```cpp
template <class ForwardIterator2>   // C++17
pair<ForwardIterator2, ForwardIterator2> operator()(
    ForwardIterator2 first,
    ForwardIterator2 last) const;

template <class ForwardIterator2>   // C++20
constexpr pair<ForwardIterator2, ForwardIterator2> operator()(
    ForwardIterator2 first,
    ForwardIterator2 last) const;
```

### Parameters

*first*\
The initial element of the sequence to search within.

*last*\
The end of the sequence to search within.

### Remarks

Returns a pair of iterators. The initial iterator *i* is the effective result of:

`std::search( first, last, pat_first, pat_last, pred )`.

The second iterator of the pair is *last* if *i** is *last*. Otherwise, it's the effective result of:

`std::next( i, std::distance( pat_first, pat_last ))`.

This class is new in C++17. C++20 made the call operator **`constexpr`**.

## See also

[\<functional>](functional.md)\
[algorithm functions](algorithm-functions.md)\
[std::search](algorithm-functions.md#search)
