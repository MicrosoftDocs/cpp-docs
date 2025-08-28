---
description: "Learn more about: rank class"
title: "rank class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::rank"]
helpviewer_keywords: ["rank class", "rank"]
ms.assetid: bc9f1b8f-800f-46ca-b6f4-d8579ed5406a
---
# `rank` class

Gets number of array dimensions.

## Syntax

```cpp
template <class Type>
struct rank;
```

### Template parameters

*`Type`*\
The type to query.

## Remarks

The type query holds the value of the number of dimensions of the array type *`Type`*, or 0 if *`Type`* is not an array type.

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

    int single_dim_array[]{ 1, 2, 3 };
    int double_dim_array[2][1]{ { 4 }, { 5 } };

    std::cout << "\nrank<decltype(single_dim_array)> == "
        << std::rank<decltype(single_dim_array)>::value << std::endl;
    std::cout << "rank<decltype(double_dim_array)> == "
        << std::rank<decltype(double_dim_array)>::value << std::endl;
}
```

```Output
rank<int> == 0
rank<int[5]> == 1
rank<int[5][10]> == 2

rank<decltype(single_dim_array)> == 1
rank<decltype(double_dim_array)> == 2
```

## Requirements

**Header:** `<type_traits>`

**Namespace:** `std`

## See also

[`<type_traits>`](type-traits.md)\
[`extent` class](extent-class.md)
