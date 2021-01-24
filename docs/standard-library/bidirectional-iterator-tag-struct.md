---
description: "Learn more about: bidirectional_iterator_tag Struct"
title: "bidirectional_iterator_tag Struct"
ms.date: "11/04/2016"
f1_keywords: ["xutility/std::bidirectional_iterator_tag"]
helpviewer_keywords: ["bidirectional_iterator_tag class", "bidirectional_iterator_tag struct"]
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
---
# bidirectional_iterator_tag Struct

A class that provides a return type for `iterator_category` function that represents a bidirectional iterator.

## Syntax

```cpp
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```

## Remarks

The category tag classes are used as compile tags for algorithm selection. The template function needs to find the most specific category of its iterator argument, so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`>:: **iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.

The type is the same as **iterator**\< **Iter**>:: **iterator_category** when `Iter` describes an object that can serve as a bidirectional iterator.

## Example

See [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) for an example of how to use `bidirectional_iterator_tag`.

## Requirements

**Header:** \<iterator>

**Namespace:** std

## See also

[forward_iterator_tag Struct](../standard-library/forward-iterator-tag-struct.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
