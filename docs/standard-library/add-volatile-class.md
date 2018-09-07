---
title: "add_volatile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::add_volatile"]
dev_langs: ["C++"]
helpviewer_keywords: ["add_volatile class", "add_volatile"]
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# add_volatile Class

Makes a **volatile** type from the specified type.

## Syntax

```cpp
template <class Ty>
struct add_volatile;

template <class T>
using add_volatile_t = typename add_volatile<T>::type;
```

### Parameters

*T*<br/>
The type to modify.

## Remarks

An instance of `add_volatile<T>` has a member **typedef** `type` that is *T* if *T* is a reference, a function, or a volatile-qualified type, otherwise **volatile** *T*. The alias `add_volatile_t` is a shortcut to access the member **typedef** `type`.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
{
    std::add_volatile_t<int> *p = (volatile int *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_volatile<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_volatile<int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[remove_volatile Class](../standard-library/remove-volatile-class.md)<br/>
