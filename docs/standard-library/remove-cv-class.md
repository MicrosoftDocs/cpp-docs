---
description: "Learn more about: remove_cv Class"
title: "remove_cv Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::remove_cv"]
helpviewer_keywords: ["remove_cv class", "remove_cv"]
ms.assetid: 8502602a-1c80-479c-84e0-33bd1d6496d6
---
# remove_cv Class

Makes non const/volatile type from type.

## Syntax

```cpp
template <class T>
struct remove_cv;

template <class T>
using remove_cv_t = typename remove_cv<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of `remove_cv<T>` holds a modified-type that is `T1` when *T* is of the form `const T1`, `volatile T1`, or `const volatile T1`, otherwise *T*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_cv_t<const volatile int> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_cv_t<const volatile int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_cv_t<const volatile int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[remove_const Class](../standard-library/remove-const-class.md)\
[remove_volatile Class](../standard-library/remove-volatile-class.md)
