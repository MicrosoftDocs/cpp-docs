---
description: "Learn more about: is_member_function_pointer Class"
title: "is_member_function_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_member_function_pointer"]
helpviewer_keywords: ["is_member_function_pointer class", "is_member_function_pointer"]
ms.assetid: 02e372c4-2714-40f2-b376-2e10ca91c8ed
---
# is_member_function_pointer Class

Tests if type is a pointer to member function.

## Syntax

```cpp
template <class Ty>
struct is_member_function_pointer;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a pointer to member function or a `cv-qualified` pointer to member function, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_member_function_pointer.cpp
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
    std::cout << "is_member_function_pointer<trivial *> == "
        << std::boolalpha
        << std::is_member_function_pointer<trivial *>::value
        << std::endl;
    std::cout << "is_member_function_pointer<int trivial::*> == "
        << std::boolalpha
        << std::is_member_function_pointer<int trivial::*>::value
        << std::endl;
    std::cout << "is_member_function_pointer<int (functional::*)()> == "
        << std::boolalpha
        << std::is_member_function_pointer<int (functional::*)()>::value
        << std::endl;

    return (0);
    }
```

```Output
is_member_function_pointer<trivial *> == false
is_member_function_pointer<int trivial::*> == false
is_member_function_pointer<int (functional::*)()> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_member_pointer Class](../standard-library/is-member-pointer-class.md)
