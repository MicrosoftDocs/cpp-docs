---
description: "Learn more about: boyer_moore_horspool_searcher class"
title: "boyer_moore_horspool_searcher class"
ms.date: "08/03/2019"
f1_keywords: ["functional/std::boyer_moore_horspool_searcher"]
helpviewer_keywords: ["std::boyer_moore_horspool_searcher [C++]"]
---
# boyer_moore_horspool_searcher class

The `boyer_moore_horspool_searcher` class is a function object type that uses the Boyer-Moore-Horspool algorithm to search for a sequence specified in the object's constructor. The search is done within another sequence provided to the object’s function call operator. This class is passed as a parameter to one of the overloads of [std::search](algorithm-functions.md#search).

## Syntax

```cpp
template <
    class RandomAccessIterator,
    class Hash = hash<typename iterator_traits<RandomAccessIterator>::value_type>,
    class BinaryPredicate = equal_to<>>
class boyer_moore_horspool_searcher
{
    boyer_moore_horspool_searcher(
        RandomAccessIterator pat_first,
        RandomAccessIterator pat_last,
        Hash hf = Hash(),
        BinaryPredicate pred = BinaryPredicate());

    template <class RandomAccessIterator2>
    pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
        RandomAccessIterator2 first,
        RandomAccessIterator2 last) const;
};
```

## Members

| Member | Description |
| - | - |
| **Constructor** | |
| [boyer_moore_horspool_searcher](#boyer-moore-horspool-searcher-constructor) | Constructs a searcher instance. |
| **Operators** | |
| [operator()](#operator-call) | Invokes the operation on the sequence. |

## <a name="boyer-moore-horspool-searcher-constructor"></a> boyer_moore_horspool_searcher constructor

Constructs a `boyer_moore_horspool_searcher` function object by using the sequence to search for, a hash function object, and an equality predicate.

```cpp
boyer_moore_horspool_searcher(
    RandomAccessIterator pat_first,
    RandomAccessIterator pat_last,
    Hash hf = Hash(),
    BinaryPredicate pred = BinaryPredicate());
```

### Parameters

*pat_first*\
The initial element of the sequence to search for.

*pat_last*\
The end of the sequence to search for.

*hf*\
A callable object, used to hash the sequence elements.

*pred*\
The optional equality comparison predicate for sequence elements. If an equality comparison type isn't specified, the default is `std::equal_to`.

### Remarks

Throws any exception thrown by the copy constructor of the *BinaryPredicate*, *Hash*, or *RandomAccessIterator* types, or the call operator of *BinaryPredicate* or *Hash*.

This class is new in C++17.

## <a name="operator-call"></a> operator()

The call operator of the function object. Searches within the argument sequence `[first, last)` for the sequence specified to the constructor.

```cpp
template <class ForwardIterator2>   // C++17
pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
    RandomAccessIterator2 first,
    RandomAccessIterator2 last) const;
```

### Parameters

*first*\
The initial element of the sequence to search within.

*last*\
The end of the sequence to search within.

### Remarks

If the search pattern `[pat_first, pat_last)` is empty, returns `make_pair(first, first)`. If the search pattern isn't found, returns `make_pair(last, last)`. Otherwise, returns a pair of iterators to the beginning and end of a sequence in `[first, last)` that's equal to `[pat_first, pat_last)` according to the predicate *pred*.

This class is new in C++17.

## See also

[\<functional>](functional.md)\
[algorithm functions](algorithm-functions.md)\
[boyer_moore_searcher class](boyer-moore-searcher-class.md)\
[std::search](algorithm-functions.md#search)
