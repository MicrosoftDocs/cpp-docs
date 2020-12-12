---
description: "Learn more about: is_copy_constructible Class"
title: "is_copy_constructible Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_copy_constructible"]
helpviewer_keywords: ["is_copy_constructible"]
ms.assetid: d8db9d4c-21ed-4884-bead-0b0b562de007
---
# is_copy_constructible Class

Tests if type has a copy constructor.

## Syntax

```cpp
template <class Ty>
struct is_copy_constructible;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a copy constructor, otherwise it holds false.

## Example

```cpp
#include <type_traits>
#include <iostream>

struct Copyable
{
    int val;
};

struct NotCopyable
{
   NotCopyable(const NotCopyable&) = delete;
   int val;

};

int main()
{
    std::cout << "is_copy_constructible<Copyable> == " << std::boolalpha
        << std::is_copy_constructible<Copyable>::value << std::endl;
    std::cout << "is_copy_constructible<NotCopyable> == " << std::boolalpha
        << std::is_copy_constructible<NotCopyable>::value << std::endl;

    return (0);
}
```

```Output
is_copy_constructible<Copyable> == true
is_copy_constructible<NotCopyable > == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
