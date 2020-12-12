---
description: "Learn more about: is_union Class"
title: "is_union Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_union"]
helpviewer_keywords: ["is_union class", "is_union"]
ms.assetid: 80eda256-40b8-4db5-9ac1-d58bb8032a3e
---
# is_union Class

Tests if type is a union.

## Syntax

```cpp
template <class Ty>
struct is_union;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a union type or a `cv-qualified` form of a union type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_union.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

union ints
    {
    int in;
    long lo;
    };

int main()
    {
    std::cout << "is_union<trivial> == " << std::boolalpha
        << std::is_union<trivial>::value << std::endl;
    std::cout << "is_union<int> == " << std::boolalpha
        << std::is_union<int>::value << std::endl;
    std::cout << "is_union<ints> == " << std::boolalpha
        << std::is_union<ints>::value << std::endl;

    return (0);
    }
```

```Output
is_union<trivial> == false
is_union<int> == false
is_union<ints> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_class Class](../standard-library/is-class-class.md)
