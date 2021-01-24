---
description: "Learn more about: is_member_pointer Class"
title: "is_member_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_member_pointer"]
helpviewer_keywords: ["is_member_pointer class", "is_member_pointer"]
ms.assetid: da07ff4e-9ee0-4baa-ad93-1741f10913d1
---
# is_member_pointer Class

Tests if type is a pointer to member.

## Syntax

```cpp
template <class Ty>
struct is_member_pointer;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a pointer to member function or a pointer to member object, or a `cv-qualified` form of one of them, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_member_pointer.cpp
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
    std::cout << "is_member_pointer<trivial *> == "
        << std::boolalpha
        << std::is_member_pointer<trivial *>::value
        << std::endl;
    std::cout << "is_member_pointer<int trivial::*> == "
        << std::boolalpha
        << std::is_member_pointer<int trivial::*>::value
        << std::endl;
    std::cout << "is_member_pointer<int (functional::*)()> == "
        << std::boolalpha
        << std::is_member_pointer<int (functional::*)()>::value
        << std::endl;

    return (0);
    }
```

```Output
is_member_pointer<trivial *> == false
is_member_pointer<int trivial::*> == true
is_member_pointer<int (functional::*)()> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_member_function_pointer Class](../standard-library/is-member-function-pointer-class.md)\
[is_member_object_pointer Class](../standard-library/is-member-object-pointer-class.md)\
[is_pointer Class](../standard-library/is-pointer-class.md)
