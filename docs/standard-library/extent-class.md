---
description: "Learn more about: extent Class"
title: "extent Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::extent"]
helpviewer_keywords: ["extent class", "extent"]
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
---
# extent Class

Gets an array dimension.

## Syntax

```cpp
template <class Ty, unsigned I = 0>
struct extent;
```

### Parameters

*Ty*\
The type to query.

*I*\
The array bound to query.

## Remarks

If *Ty* is an array type that has at least *I* dimensions, the type query holds the number of elements in the dimension specified by *I*. If *Ty* is not an array type or its rank is less than *I*, or if *I* is zero and *Ty* is of type "array of unknown bound of `U`", the type query holds the value 0.

## Example

```cpp
// std__type_traits__extent.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "extent 0 == "
        << std::extent<int[5][10]>::value << std::endl;
    std::cout << "extent 1 == "
        << std::extent<int[5][10], 1>::value << std::endl;

    return (0);
    }
```

```Output
extent 0 == 5
extent 1 == 10
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[remove_all_extents Class](../standard-library/remove-all-extents-class.md)\
[remove_extent Class](../standard-library/remove-extent-class.md)
