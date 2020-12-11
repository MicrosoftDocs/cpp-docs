---
description: "Learn more about: is_enum Class"
title: "is_enum Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_enum"]
helpviewer_keywords: ["is_enum class", "is_enum"]
ms.assetid: df3b00b7-4f98-4b3a-96ce-10ad958ee69c
---
# is_enum Class

Tests if type is an enumeration.

## Syntax

```cpp
template <class Ty>
struct is_enum;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is an enumeration type or a `cv-qualified` form of an enumeration type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_enum.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

enum color {
    red, greed, blue};

int main()
    {
    std::cout << "is_enum<trivial> == " << std::boolalpha
        << std::is_enum<trivial>::value << std::endl;
    std::cout << "is_enum<color> == " << std::boolalpha
        << std::is_enum<color>::value << std::endl;
    std::cout << "is_enum<int> == " << std::boolalpha
        << std::is_enum<int>::value << std::endl;

    return (0);
    }
```

```Output
is_enum<trivial> == false
is_enum<color> == true
is_enum<int> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_integral Class](../standard-library/is-integral-class.md)
