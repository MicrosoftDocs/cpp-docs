---
description: "Learn more about: is_object Class"
title: "is_object Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_object"]
helpviewer_keywords: ["is_object class", "is_object"]
ms.assetid: b452ceea-5676-488f-925b-ab881126c387
---
# is_object Class

Tests if type is an object type.

## Syntax

```cpp
template <class Ty>
struct is_object;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds false if the type *Ty* is a reference type, a function type, or void, or a `cv-qualified` form of one of them, otherwise holds true.

## Example

```cpp
// std__type_traits__is_object.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

struct functional
    {
    int f();
    };

int main()
    {
    std::cout << "is_object<trivial> == " << std::boolalpha
        << std::is_object<trivial>::value << std::endl;
    std::cout << "is_object<functional> == " << std::boolalpha
        << std::is_object<functional>::value << std::endl;
    std::cout << "is_object<trivial&> == " << std::boolalpha
        << std::is_object<trivial&>::value << std::endl;
    std::cout << "is_object<float()> == " << std::boolalpha
        << std::is_object<float()>::value << std::endl;
    std::cout << "is_object<void> == " << std::boolalpha
        << std::is_object<void>::value << std::endl;

    return (0);
    }
```

```Output
is_object<trivial> == true
is_object<functional> == true
is_object<trivial&> == false
is_object<float()> == false
is_object<void> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_function Class](../standard-library/is-function-class.md)
