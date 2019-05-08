---
title: "boyer_moore_searcher Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::boyer_moore_searcher"]
helpviewer_keywords: ["std::boyer_moore_searcher [C++]"]
---
# boyer_moore_searcher Class

## Syntax

```cpp
template <class RandomAccessIterator1,
class Hash = hash<typename iterator_traits<RandomAccessIterator1>::value_type>,
class BinaryPredicate = equal_to<>>
    class boyer_moore_searcher {
        boyer_moore_searcher(RandomAccessIterator1 pat_first,
            RandomAccessIterator1 pat_last,
            Hash hf = Hash(),
            BinaryPredicate pred = BinaryPredicate());
        template <class RandomAccessIterator2>
        pair<RandomAccessIterator2, RandomAccessIterator2>
            operator()(RandomAccessIterator2 first, RandomAccessIterator2 last) const;
};
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[boyer_moore_searcher](#boyer_moore_searcher)||

### Operators

|Name|Description|
|----------|-----------------|
|[operator()](#op_paren)||

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[\<functional>](../standard-library/functional.md)
