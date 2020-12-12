---
description: "Learn more about: iterator Struct"
title: "iterator Struct"
ms.date: "11/04/2016"
f1_keywords: ["xutility/std::iterator"]
helpviewer_keywords: ["iterator class", "iterator struct"]
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
---
# iterator Struct

An empty base struct used to ensure that a user-defined iterator class works properly with `iterator_trait`s.

## Syntax

```cpp
struct iterator {
   typedef Category iterator_category;
   typedef Type value_type;
   typedef Distance difference_type;
   typedef Distance distance_type;
   typedef Pointer pointer;
   typedef Reference reference;
   };
```

## Remarks

The template struct serves as a base type for all iterators. It defines the member types

- `iterator_category` (a synonym for the template parameter `Category`).

- `value_type` (a synonym for the template parameter `Type`).

- `difference_type` (a synonym for the template parameter `Distance`).

- `distance_type` (a synonym for the template parameter `Distance`)

- `pointer` (a synonym for the template parameter `Pointer`).

- `reference` (a synonym for the template parameter `Reference`).

Note that `value_type` should not be a constant type even if `pointer` points at an object of **`const`** `Type` and reference designates an object of **`const`** `Type`.

## Example

See [iterator_traits](../standard-library/iterator-traits-struct.md) for an example of how to declare and use the types in the iterator base class.

## Requirements

**Header:** \<iterator>

**Namespace:** std

## See also

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
