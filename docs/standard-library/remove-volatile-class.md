---
title: "remove_volatile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::remove_volatile"]
dev_langs: ["C++"]
helpviewer_keywords: ["remove_volatile class", "remove_volatile"]
ms.assetid: 8b87e2c2-a581-4eb3-8691-c5603910d61d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# remove_volatile Class

Makes non volatile type from type.

## Syntax

```cpp
template <class T>
struct remove_volatile;

template <class T>
using remove_volatile_t = typename remove_volatile<T>::type;
```

### Parameters

*T*<br/>
The type to modify.

## Remarks

An instance of `remove_volatile<T>` holds a modified-type that is `T1` when *T* is of the form `volatile T1`, otherwise *T*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_volatile_t<volatile int> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << " remove_volatile_t<volatile int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_volatile_t<volatile int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[add_volatile Class](../standard-library/add-volatile-class.md)<br/>
