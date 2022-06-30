---
description: "Learn more about: remove_const class"
title: "remove_const class"
ms.date: 06/29/2022
f1_keywords: ["type_traits/std::remove_const"]
helpviewer_keywords: ["remove_const class", "remove_const"]
ms.assetid: feb76fb3-9228-41d6-80f6-2fbb04daec43
---
# `remove_const` class

Makes a non-`const` type from a type.

## Syntax

```cpp
template <class T>
struct remove_const;

template <class T>
using remove_const_t = typename remove_const<T>::type;
```

### Parameters

*`T`*\
The type to modify.

## Remarks

An instance of `remove_const<T>` holds a modified-type that is `T1` when *`T`* is of the form `const T1`, otherwise *`T`*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_const_t<const int>*)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_const_t<const int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_const_t<const int> == int
```

## Requirements

**Header:** `<type_traits>`

**Namespace:** `std`

## See also

[`<type_traits>`](../standard-library/type-traits.md)\
[`add_const` class](../standard-library/add-const-class.md)\
[`remove_cv` class](../standard-library/remove-cv-class.md)
