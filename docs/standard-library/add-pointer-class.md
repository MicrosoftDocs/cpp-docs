---
description: "Learn more about: add_pointer Class"
title: "add_pointer Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_pointer"]
helpviewer_keywords: ["add_pointer class", "add_pointer"]
ms.assetid: d8095cb0-6578-4143-b78f-87f82485298c
---
# add_pointer Class

Makes a pointer-to-type from a specified type.

## Syntax

```cpp
template <class T>
struct add_pointer;

template <class T>
using add_pointer_t = typename add_pointer<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

The member **`typedef`** `type` names the same type as `remove_reference<T>::type*`. The alias `add_pointer_t` is a shortcut to access the member **`typedef`** `type`.

Because it is invalid to make a pointer from a reference, `add_pointer` removes the reference, if any, from the specified type before it makes a pointer-to-type. Consequently, you can use a type with `add_pointer` without being concerned about whether the type is a reference.

## Example

The following example demonstrates that `add_pointer` of a type is the same as a pointer to that type.

```cpp
#include <type_traits>
#include <iostream>

int main()
{
    std::add_pointer_t<int> *p = (int **)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_pointer_t<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_pointer_t<int> == int *
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[remove_pointer Class](remove-pointer-class.md)
