---
description: "Learn more about: remove_reference Class"
title: "remove_reference Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::remove_reference"]
helpviewer_keywords: ["remove_reference class", "remove_reference"]
ms.assetid: 294e1965-3ae3-46ee-bc42-4fdf60c24717
---
# remove_reference Class

Makes non reference type from type.

## Syntax

```cpp
template <class T>
struct remove_reference;

template <class T>
using remove_reference_t = typename remove_reference<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of `remove_reference<T>` holds a modified-type that is `T1` when *T* is of the form `T1&`, otherwise *T*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_reference_t<int&> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_reference_t<int&> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_reference_t<int&> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[add_lvalue_reference Class](../standard-library/add-lvalue-reference-class.md)
