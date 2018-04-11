---
title: "is_empty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_empty"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_empty class", "is_empty"]
ms.assetid: 44a6fc92-7e55-4fbe-9a24-2a0ce2dccba0
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# is_empty Class

Tests if type is an empty class.

## Syntax

```cpp
template <class Ty>
struct is_empty;
```

### Parameters

`Ty`
 The type to query.

## Remarks

An instance of the type predicate holds true if the type `Ty` is an empty class, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_empty.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct empty
    {
    };

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_empty<trivial> == " << std::boolalpha
        << std::is_empty<trivial>::value << std::endl;
    std::cout << "is_empty<empty> == " << std::boolalpha
        << std::is_empty<empty>::value << std::endl;
    std::cout << "is_empty<int> == " << std::boolalpha
        << std::is_empty<int>::value << std::endl;

    return (0);
    }

```

```Output
is_empty<trivial> == false
is_empty<empty> == true
is_empty<int> == false
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
