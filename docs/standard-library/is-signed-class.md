---
description: "Learn more about: is_signed Class"
title: "is_signed Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_signed"]
helpviewer_keywords: ["is_signed class", "is_signed"]
ms.assetid: 20ae44d9-22ad-4fbd-b26a-f18c62689451
---
# is_signed Class

Test if type is signed integer.

## Syntax

```cpp
template <class Ty>
struct is_signed;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a signed integral type or a `cv-qualified` signed integral type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_signed.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_signed<trivial> == " << std::boolalpha
        << std::is_signed<trivial>::value << std::endl;
    std::cout << "is_signed<int> == " << std::boolalpha
        << std::is_signed<int>::value << std::endl;
    std::cout << "is_signed<unsigned int> == " << std::boolalpha
        << std::is_signed<unsigned int>::value << std::endl;
    std::cout << "is_signed<float> == " << std::boolalpha
        << std::is_signed<float>::value << std::endl;

    return (0);
    }
```

```Output
is_signed<trivial> == false
is_signed<int> == true
is_signed<unsigned int> == false
is_signed<float> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_unsigned Class](../standard-library/is-unsigned-class.md)
