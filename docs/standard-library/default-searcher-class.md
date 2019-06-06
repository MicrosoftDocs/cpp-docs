---
title: "default_searcher Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::default_searcher"]
helpviewer_keywords: ["std::default_searcher [C++]"]
---
# default_searcher Class

## Syntax

```cpp
template <class ForwardIterator1, class BinaryPredicate = equal_to<>>
class default_searcher {
    default_searcher(ForwardIterator1 pat_first, ForwardIterator1 pat_last,
        BinaryPredicate pred = BinaryPredicate());
    template <class ForwardIterator2>
    pair<ForwardIterator2, ForwardIterator2>
        operator()(ForwardIterator2 first, ForwardIterator2 last) const;
};
```

## Members

### Constructors

|||
|-|-|
|[default_searcher]()||

### Operators

|||
|-|-|
|[operator()]()||
