---
description: "Learn more about: add_lvalue_reference Class"
title: "add_lvalue_reference Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_lvalue_reference"]
helpviewer_keywords: ["add_lvalue_reference"]
ms.assetid: 9933afc2-ad0d-465d-98fe-7d547fa3efe2
---
# add_lvalue_reference Class

Makes reference to type from type.

## Syntax

```cpp
template <class T>
struct add_lvalue_reference;

template <class T>
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of the type modifier holds a modified-type that is *T* if *T* is an lvalue reference, otherwise `T&`.

## Example

```cpp
#include <type_traits>
#include <iostream>

using namespace std;
int main()
{
    int val = 0;
    add_lvalue_reference_t<int> p = (int&)val;
    p = p;  // to quiet "unused" warning
    cout << "add_lvalue_reference_t<int> == "
        << typeid(p).name() << endl;

    return (0);
}
```

```Output
add_lvalue_reference_t<int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[remove_reference Class](remove-reference-class.md)
