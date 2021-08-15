---
description: "Learn more about: is_void Class"
title: "is_void Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_void"]
helpviewer_keywords: ["is_void class", "is_void"]
ms.assetid: 99b0de3b-1b38-4949-b053-080e5363174e
---
# is_void Class

Tests whether the type is void.

## Syntax

```cpp
template <class T>
struct is_void;
```

### Parameters

*T*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *T* is **`void`** or a cv-qualified form of **`void`**, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_void.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_void<trivial> == " << std::boolalpha
        << std::is_void<trivial>::value << std::endl;
    std::cout << "is_void<void()> == " << std::boolalpha
        << std::is_void<void()>::value << std::endl;
    std::cout << "is_void<void> == " << std::boolalpha
        << std::is_void<void>::value << std::endl;

    return (0);
    }
```

```Output
is_void<trivial> == false
is_void<void()> == false
is_void<void> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
