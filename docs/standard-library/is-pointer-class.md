---
description: "Learn more about: is_pointer Class"
title: "is_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_pointer"]
helpviewer_keywords: ["is_pointer class", "is_pointer"]
ms.assetid: 44e0a403-7241-4e0a-8922-32877bcb9a4c
---
# is_pointer Class

Tests if type is a pointer.

## Syntax

```cpp
template <class Ty>
struct is_pointer;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a pointer to **`void`**, a pointer to an object, or a pointer to a function, or a `cv-qualified` form of one of them, otherwise it holds false. Note that `is_pointer` holds false if *Ty* is a pointer to member or a pointer to member function.

## Example

```cpp
// std__type_traits__is_pointer.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_pointer<trivial> == " << std::boolalpha
        << std::is_pointer<trivial>::value << std::endl;
    std::cout << "is_pointer<int trivial::*> == " << std::boolalpha
        << std::is_pointer<int trivial::*>::value << std::endl;
    std::cout << "is_pointer<trivial *> == " << std::boolalpha
        << std::is_pointer<trivial *>::value << std::endl;
    std::cout << "is_pointer<int> == " << std::boolalpha
        << std::is_pointer<int>::value << std::endl;
    std::cout << "is_pointer<int *> == " << std::boolalpha
        << std::is_pointer<int *>::value << std::endl;

    return (0);
    }
```

```Output
is_pointer<trivial> == false
is_pointer<int trivial::*> == false
is_pointer<trivial *> == true
is_pointer<int> == false
is_pointer<int *> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_member_pointer Class](../standard-library/is-member-pointer-class.md)\
[is_reference Class](../standard-library/is-reference-class.md)
