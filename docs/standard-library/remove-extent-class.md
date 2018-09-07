---
title: "remove_extent Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::remove_extent"]
dev_langs: ["C++"]
helpviewer_keywords: ["remove_extent class", "remove_extent"]
ms.assetid: b9320862-3891-49fc-80bc-571eb2c035cf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# remove_extent Class

Makes element type from array type.

## Syntax

```cpp
template <class T>
struct remove_extent;

template <class T>
using remove_extent_t = typename remove_extent<T>::type;
```

### Parameters

*T*<br/>
The type to modify.

## Remarks

An instance of `remove_extent<T>` holds a modified-type that is `T1` when *T* is of the form `T1[N]`, otherwise *T*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "remove_extent_t<int> == "
        << typeid(std::remove_extent_t<int>).name()
        << std::endl;T
    std::cout << "remove_extent_t<int[5]> == "
        << typeid(std::remove_extent_t<int[5]>).name()
        << std::endl;T
    std::cout << "remove_extent_t<int[5][10]> == "
        << typeid(std::remove_extent_t<int[5][10]>).name()
        << std::endl;
    return (0);
    }
```

```Output
remove_extent_t<int> == int
remove_extent_t<int[5]> == int
remove_extent_t<int[5][10]> == int [10]
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[remove_all_extents Class](../standard-library/remove-all-extents-class.md)<br/>
