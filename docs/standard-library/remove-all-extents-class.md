---
title: "remove_all_extents Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::remove_all_extents"]
dev_langs: ["C++"]
helpviewer_keywords: ["remove_all_extents class", "remove_all_extents"]
ms.assetid: 548dc536-82e7-423a-b8c1-443d66d9632e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# remove_all_extents Class

Makes non array type from array type.

## Syntax

```cpp
template <class T>
struct remove_all_extents;

template <class T>
using remove_all_extents_t = typename remove_all_extents<T>::type;
```

### Parameters

*T*
 The type to modify.

## Remarks

An instance of `remove_all_extents<T>` holds a modified-type that is the element type of the array type *T* with all array dimensions removed, or *T* if *T* is not an array type.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "remove_all_extents<int> == "
        << typeid(std::remove_all_extents_t<int>).name()
        << std::endl;
    std::cout << "remove_all_extents_t<int[5]> == "
        << typeid(std::remove_all_extents_t<int[5]>).name()
        << std::endl;
    std::cout << "remove_all_extents_t<int[5][10]> == "
        << typeid(std::remove_all_extents_t<int[5][10]>).name()
        << std::endl;

    return (0);
    }
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[remove_extent Class](../standard-library/remove-extent-class.md)<br/>
