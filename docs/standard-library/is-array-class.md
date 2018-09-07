---
title: "is_array Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::is_array"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_array class", "is_array"]
ms.assetid: 61fb2201-8de3-4746-9721-617f02df170f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_array Class

Tests if type is array.

## Syntax

```cpp
template <class Ty>
struct is_array;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is an array type, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_array.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_array<trivial> == " << std::boolalpha
        << std::is_array<trivial>::value << std::endl;
    std::cout << "is_array<int> == " << std::boolalpha
        << std::is_array<int>::value << std::endl;
    std::cout << "is_array<int[5]> == " << std::boolalpha
        << std::is_array<int[5]>::value << std::endl;

    return (0);
    }
```

```Output
is_array<trivial> == false
is_array<int> == false
is_array<int[5]> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[extent Class](../standard-library/extent-class.md)<br/>
[rank Class](../standard-library/rank-class.md)<br/>
