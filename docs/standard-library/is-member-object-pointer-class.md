---
description: "Learn more about: is_member_object_pointer Class"
title: "is_member_object_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_member_object_pointer"]
helpviewer_keywords: ["is_member_object_pointer class", "is_member_object_pointer"]
ms.assetid: 64f9cdf3-4621-4310-a076-a7bc986926b9
---
# is_member_object_pointer Class

Tests if type is a pointer to member object.

## Syntax

```cpp
template <class Ty>
struct is_member_object_pointer;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a pointer to member object or a `cv-qualified` pointer to member object, otherwise it holds false. Note that `is_member_object_pointer` holds false if *Ty* is a pointer to member function.

## Example

```cpp
// std__type_traits__is_member_object_pointer.cpp
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
    std::cout << "is_member_object_pointer<trivial *> == "
        << std::boolalpha
        << std::is_member_object_pointer<trivial *>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int trivial::*> == "
        << std::boolalpha
        << std::is_member_object_pointer<int trivial::*>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int (functional::*)()> == "
        << std::boolalpha
        << std::is_member_object_pointer<int (functional::*)()>::value
        << std::endl;

    return (0);
    }
```

```Output
is_member_object_pointer<trivial *> == false
is_member_object_pointer<int trivial::*> == true
is_member_object_pointer<int (functional::*)()> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_member_pointer Class](../standard-library/is-member-pointer-class.md)
