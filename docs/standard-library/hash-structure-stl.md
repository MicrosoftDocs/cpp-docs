---
description: "Learn more about: hash Structure (C++ Standard Library)"
title: "hash Structure (C++ Standard Library)| Microsoft Docs"
ms.date: "11/04/2016"
f1_keywords: ["thread/std::hash"]
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
---
# hash Structure (C++ Standard Library)

Defines a member function that returns a value that's uniquely determined by `Val`. The member function defines a [hash](../standard-library/hash-class.md) function that's suitable for mapping values of type `thread::id` to a distribution of index values.

## Syntax

```cpp
template <>
struct hash<thread::id> :
    public unary_function<thread::id, size_t>
{
    size_t operator()(thread::id Val) const;

};
```

## Requirements

**Header:** \<thread>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<thread>](../standard-library/thread.md)\
[unary_function Struct](../standard-library/unary-function-struct.md)
