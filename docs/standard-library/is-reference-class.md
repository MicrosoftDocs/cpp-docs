---
title: "is_reference Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_reference"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_reference class", "is_reference"]
ms.assetid: 3d9e631f-3092-430c-843e-e914ab58c257
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_reference Class

Tests if type is a reference.

## Syntax

```cpp
template <class Ty>
struct is_reference;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a reference to an object or to a function, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_reference.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_reference<trivial> == " << std::boolalpha
        << std::is_reference<trivial>::value << std::endl;
    std::cout << "is_reference<trivial&> == " << std::boolalpha
        << std::is_reference<trivial&>::value << std::endl;
    std::cout << "is_reference<int()> == " << std::boolalpha
        << std::is_reference<int()>::value << std::endl;
    std::cout << "is_reference<int(&)()> == " << std::boolalpha
        << std::is_reference<int(&)()>::value << std::endl;

    return (0);
    }

```

```Output
is_reference<trivial> == false
is_reference<trivial&> == true
is_reference<int()> == false
is_reference<int(&)()> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[is_pointer Class](../standard-library/is-pointer-class.md)<br/>
