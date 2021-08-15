---
description: "Learn more about: is_floating_point Class"
title: "is_floating_point Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_floating_point"]
helpviewer_keywords: ["is_floating_point class", "is_floating_point"]
ms.assetid: 070679c1-115b-4ee4-8ab7-f52e5d9e157f
---
# is_floating_point Class

Tests if type is floating point.

## Syntax

```cpp
template <class Ty>
struct is_floating_point;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a floating point type or a `cv-qualified` form of a floating point type, otherwise it holds false.

A floating point type is one of **`float`**, **`double`**, or **`long double`**.

## Example

```cpp
// std__type_traits__is_floating_point.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_floating_point<trivial> == " << std::boolalpha
        << std::is_floating_point<trivial>::value << std::endl;
    std::cout << "is_floating_point<int> == " << std::boolalpha
        << std::is_floating_point<int>::value << std::endl;
    std::cout << "is_floating_point<float> == " << std::boolalpha
        << std::is_floating_point<float>::value << std::endl;

    return (0);
    }
```

```Output
is_floating_point<trivial> == false
is_floating_point<int> == false
is_floating_point<float> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_integral Class](../standard-library/is-integral-class.md)
