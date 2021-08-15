---
description: "Learn more about: is_arithmetic Class"
title: "is_arithmetic Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_arithmetic"]
helpviewer_keywords: ["is_arithmetic class", "is_arithmetic"]
ms.assetid: ea427b7e-0141-4a04-848f-561054c53001
---
# is_arithmetic Class

Tests if type is arithmetic.

## Syntax

```cpp
template <class Ty>
struct is_arithmetic;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is an arithmetic type, that is, an integral type or a floating point type, or a `cv-qualified` form of one of them, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_arithmetic.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_arithmetic<trivial> == " << std::boolalpha
        << std::is_arithmetic<trivial>::value << std::endl;
    std::cout << "is_arithmetic<int> == " << std::boolalpha
        << std::is_arithmetic<int>::value << std::endl;
    std::cout << "is_arithmetic<float> == " << std::boolalpha
        << std::is_arithmetic<float>::value << std::endl;

    return (0);
    }
```

```Output
is_arithmetic<trivial> == false
is_arithmetic<int> == true
is_arithmetic<float> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_floating_point Class](../standard-library/is-floating-point-class.md)\
[is_integral Class](../standard-library/is-integral-class.md)
