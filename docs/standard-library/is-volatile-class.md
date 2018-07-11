---
title: "is_volatile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_volatile"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_volatile class", "is_volatile"]
ms.assetid: 54922e8a-db4e-4cae-8931-b3352f0b8d3b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_volatile Class

Tests if type is volatile.

## Syntax

```cpp
template <class Ty>
struct is_volatile;
```

### Parameters

*Ty*
 The type to query.

## Remarks

An instance of the type predicate holds true if *Ty* is `volatile-qualified`.

## Example

```cpp
// std__type_traits__is_volatile.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_volatile<trivial> == " << std::boolalpha
        << std::is_volatile<trivial>::value << std::endl;
    std::cout << "is_volatile<volatile trivial> == " << std::boolalpha
        << std::is_volatile<volatile trivial>::value << std::endl;
    std::cout << "is_volatile<int> == " << std::boolalpha
        << std::is_volatile<int>::value << std::endl;
    std::cout << "is_volatile<volatile int> == " << std::boolalpha
        << std::is_volatile<volatile int>::value << std::endl;

    return (0);
    }

```

```Output
is_volatile<trivial> == false
is_volatile<volatile trivial> == true
is_volatile<int> == false
is_volatile<volatile int> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[is_const Class](../standard-library/is-const-class.md)<br/>
