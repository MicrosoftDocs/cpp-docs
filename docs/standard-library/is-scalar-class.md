---
description: "Learn more about: is_scalar Class"
title: "is_scalar Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_scalar"]
helpviewer_keywords: ["is_scalar class", "is_scalar"]
ms.assetid: a0cdfc9a-f27e-4808-890f-6ed7942db60c
---
# is_scalar Class

Tests if type is scalar.

## Syntax

```cpp
template <class Ty>
struct is_scalar;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is an integral type, a floating point type, an enumeration type, a pointer type, or a pointer to member type, or a `cv-qualified` form of one of them, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_scalar.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_scalar<trivial> == " << std::boolalpha
        << std::is_scalar<trivial>::value << std::endl;
    std::cout << "is_scalar<trivial *> == " << std::boolalpha
        << std::is_scalar<trivial *>::value << std::endl;
    std::cout << "is_scalar<int> == " << std::boolalpha
        << std::is_scalar<int>::value << std::endl;
    std::cout << "is_scalar<float> == " << std::boolalpha
        << std::is_scalar<float>::value << std::endl;

    return (0);
    }
```

```Output
is_scalar<trivial> == false
is_scalar<trivial *> == true
is_scalar<int> == true
is_scalar<float> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_compound Class](../standard-library/is-compound-class.md)
