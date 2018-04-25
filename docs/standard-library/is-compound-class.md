---
title: "is_compound Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_compound"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_compound class", "is_compound"]
ms.assetid: bdad1167-cf3f-4f37-8321-62a5df159ead
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# is_compound Class

Tests if the specified type is not fundamental.

## Syntax

```cpp
template <class Ty>
struct is_compound;
```

### Parameters

`Ty`
 The type to query.

## Remarks

An instance of the type predicate holds `false` if the type of `Ty` is a fundamental type (that is, if [is_fundamental](../standard-library/is-fundamental-class.md)\<Ty> holds `true`); otherwise, it holds `true`. Thus, the predicate holds `true` if `Ty` is an array type, a function type, a pointer to `void` or an object or a function, a reference, a class, a union, an enumeration, or a pointer to non-static class member, or a *cv-qualified* form of one of them.

## Example

```cpp
// std__type_traits__is_compound.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_compound<trivial> == " << std::boolalpha
        << std::is_compound<trivial>::value << std::endl;
    std::cout << "is_compound<int[]> == " << std::boolalpha
        << std::is_compound<int[]>::value << std::endl;
    std::cout << "is_compound<int()> == " << std::boolalpha
        << std::is_compound<int()>::value << std::endl;
    std::cout << "is_compound<int&> == " << std::boolalpha
        << std::is_compound<int&>::value << std::endl;
    std::cout << "is_compound<void *> == " << std::boolalpha
        << std::is_compound<void *>::value << std::endl;
    std::cout << "is_compound<int> == " << std::boolalpha
        << std::is_compound<int>::value << std::endl;

    return (0);
    }

```

```Output
is_compound<trivial> == true
is_compound<int[]> == true
is_compound<int()> == true
is_compound<int&> == true
is_compound<void *> == true
is_compound<int> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[is_class Class](../standard-library/is-class-class.md)<br/>
