---
title: "is_function Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_function class", "is"]
ms.assetid: e5c0dbcd-829b-415f-853f-8c5be47c5040
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_function Class

Tests if type is a function type.

## Syntax

```cpp
template <class Ty>
struct is_function;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a function type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_function.cpp
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
    std::cout << "is_function<trivial> == " << std::boolalpha
        << std::is_function<trivial>::value << std::endl;
    std::cout << "is_function<functional> == " << std::boolalpha
        << std::is_function<functional>::value << std::endl;
    std::cout << "is_function<float()> == " << std::boolalpha
        << std::is_function<float()>::value << std::endl;

    return (0);
    }

```

```Output
is_function<trivial> == false
is_function<functional> == false
is_function<float()> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[is_object Class](../standard-library/is-object-class.md)<br/>
