---
description: "Learn more about: is_abstract Class"
title: "is_abstract Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_abstract"]
helpviewer_keywords: ["is_abstract class", "is_abstract"]
ms.assetid: 8867f660-3434-404c-ba90-c26607a5e0d2
---
# is_abstract Class

Tests if type is abstract class.

## Syntax

```cpp
template <class Ty>
struct is_abstract;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has at least one pure virtual function, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_abstract.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

struct abstract
    {
    virtual int val() = 0;
    };

int main()
    {
    std::cout << "is_abstract<trivial> == " << std::boolalpha
        << std::is_abstract<trivial>::value << std::endl;
    std::cout << "is_abstract<abstract> == " << std::boolalpha
        << std::is_abstract<abstract>::value << std::endl;

    return (0);
    }
```

```Output
is_abstract<trivial> == false
is_abstract<abstract> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_polymorphic Class](../standard-library/is-polymorphic-class.md)
