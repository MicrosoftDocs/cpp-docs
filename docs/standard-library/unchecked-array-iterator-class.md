---
description: "Learn more about: unchecked_array_iterator Class"
title: "unchecked_array_iterator Class"
ms.date: "11/04/2016"
f1_keywords: ["stdext::unchecked_array_iterator"]
---
# unchecked_array_iterator Class

The `unchecked_array_iterator` class allows you to wrap an array or pointer into an unchecked iterator. Use this class as a wrapper (using the [make_unchecked_array_iterator](../standard-library/iterator-functions.md#make_unchecked_array_iterator) function) for raw pointers or arrays as a targeted way to manage unchecked pointer warnings instead of globally silencing these warnings. If possible, prefer the checked version of this class, [checked_array_iterator](../standard-library/checked-array-iterator-class.md).

> [!NOTE]
> The `unchecked_array_iterator` class was removed in MSVC Build Tools 14.51.
> This class is a Microsoft extension of the C++ Standard Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.

## Syntax

```cpp
template <class Iterator>
class unchecked_array_iterator;
```

## Remarks

This class is defined in the [stdext](../standard-library/stdext-namespace.md) namespace.

This is the unchecked version of the [checked_array_iterator Class](../standard-library/checked-array-iterator-class.md) and supports all the same overloads and members. For more information on the checked iterator feature with code examples, see [Checked Iterators](../standard-library/checked-iterators.md).

## Requirements

**Header:** \<iterator>

**Namespace:** stdext

## See also

[\<iterator>](../standard-library/iterator.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
