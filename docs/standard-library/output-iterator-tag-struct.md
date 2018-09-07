---
title: "output_iterator_tag Struct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xutility/std::output_iterator_tag"]
dev_langs: ["C++"]
helpviewer_keywords: ["output_iterator_tag class", "output_iterator_tag struct"]
ms.assetid: c23a4331-b069-4fa0-9c3a-1c9be7095553
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# output_iterator_tag Struct

A class that provides a return type for `iterator_category` function that represents an output iterator.

## Syntax

struct output_iterator_tag {};

## Remarks

The category tag classes are used as compile tags for algorithm selection. The template function needs to find the most specific category of its iterator argument so that it can use the most efficient algorithm at compile time. For every iterator of type `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** must be defined to be the most specific category tag that describes the iterator's behavior.

The type is the same as **iterator**\< **Iter**> **::iterator_category** when `Iter` describes an object that can serve as a output iterator.

This tag is not parameterized on the `value_type` or `difference_type` for the iterator, as with the other iterator tags, because output iterators do not have either a `value_type` or a `difference_type`.

## Example

See [iterator_traits](../standard-library/iterator-traits-struct.md) or [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) for an example of how to use `iterator_tag`s.

## Requirements

**Header:** \<iterator>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
