---
description: "Learn more about: rank Class"
title: "rank Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::rank"]
helpviewer_keywords: ["rank class", "rank"]
ms.assetid: bc9f1b8f-800f-46ca-b6f4-d8579ed5406a
---
# rank Class

Gets number of array dimensions.

## Syntax

```cpp
template <class Ty>
struct rank;
```

### Parameters

*Ty*\
The type to query.

## Remarks

The type query holds the value of the number of dimensions of the array type *Ty*, or 0 if *Ty* is not an array type.

## Example

```cpp
// std__type_traits__rank.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "rank<int> == "
        << std::rank<int>::value << std::endl;
    std::cout << "rank<int[5]> == "
        << std::rank<int[5]>::value << std::endl;
    std::cout << "rank<int[5][10]> == "
        << std::rank<int[5][10]>::value << std::endl;

    return (0);
    }
```

```Output
rank<int> == 0
rank<int[5]> == 1
rank<int[5][10]> == 2
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[extent Class](../standard-library/extent-class.md)
