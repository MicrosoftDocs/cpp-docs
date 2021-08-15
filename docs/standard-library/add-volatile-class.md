---
description: "Learn more about: add_volatile Class"
title: "add_volatile Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_volatile"]
helpviewer_keywords: ["add_volatile class", "add_volatile"]
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
---
# add_volatile Class

Makes a **`volatile`** type from the specified type.

## Syntax

```cpp
template <class Ty>
struct add_volatile;

template <class T>
using add_volatile_t = typename add_volatile<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of `add_volatile<T>` has a member **`typedef`** `type` that is *T* if *T* is a reference, a function, or a volatile-qualified type, otherwise **`volatile`** *T*. The alias `add_volatile_t` is a shortcut to access the member **`typedef`** `type`.

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

[<type_traits>](type-traits.md)\
[remove_volatile Class](remove-volatile-class.md)
