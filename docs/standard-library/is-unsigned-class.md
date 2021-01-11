---
description: "Learn more about: is_unsigned Class"
title: "is_unsigned Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_unsigned"]
helpviewer_keywords: ["is_unsigned class", "is_unsigned"]
ms.assetid: ba5bec3d-796b-4e54-8595-a3941ec6a8dc
---
# is_unsigned Class

Tests if type is unsigned integer.

## Syntax

```cpp
template <class Ty>
struct is_unsigned;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is an unsigned integral type or a `cv-qualified` unsigned integral type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_unsigned.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_unsigned<trivial> == " << std::boolalpha
        << std::is_unsigned<trivial>::value << std::endl;
    std::cout << "is_unsigned<int> == " << std::boolalpha
        << std::is_unsigned<int>::value << std::endl;
    std::cout << "is_unsigned<unsigned int> == " << std::boolalpha
        << std::is_unsigned<unsigned int>::value << std::endl;
    std::cout << "is_unsigned<float> == " << std::boolalpha
        << std::is_unsigned<float>::value << std::endl;

    return (0);
    }
```

```Output
is_unsigned<trivial> == false
is_unsigned<int> == false
is_unsigned<unsigned int> == true
is_unsigned<float> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_signed Class](../standard-library/is-signed-class.md)
