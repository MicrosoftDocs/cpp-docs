---
description: "Learn more about: is_fundamental Class"
title: "is_fundamental Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_fundamental"]
helpviewer_keywords: ["is_fundamental class", "is_fundamental"]
ms.assetid: b84eee84-2fb2-4611-beaf-b384074d8b6a
---
# is_fundamental Class

Tests if type is void or arithmetic.

## Syntax

```cpp
template <class Ty>
struct is_fundamental;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a fundamental type, that is, **`void`**, an integral type, an floating point type, or a `cv-qualified` form of one of them, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_fundamental.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_fundamental<trivial> == " << std::boolalpha
        << std::is_fundamental<trivial>::value << std::endl;
    std::cout << "is_fundamental<int> == " << std::boolalpha
        << std::is_fundamental<int>::value << std::endl;
    std::cout << "is_fundamental<const float> == " << std::boolalpha
        << std::is_fundamental<const float>::value << std::endl;
    std::cout << "is_fundamental<void> == " << std::boolalpha
        << std::is_fundamental<void>::value << std::endl;

    return (0);
    }
```

```Output
is_fundamental<trivial> == false
is_fundamental<int> == true
is_fundamental<const float> == true
is_fundamental<void> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_compound Class](../standard-library/is-compound-class.md)
