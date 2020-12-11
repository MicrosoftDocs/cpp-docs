---
description: "Learn more about: add_cv Class"
title: "add_cv Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_cv"]
helpviewer_keywords: ["add_cv class", "add_cv"]
ms.assetid: a5572c78-a097-45d7-b476-ed4876889dea
---
# add_cv Class

Makes **`const volatile`** type from type.

## Syntax

```cpp
template <class T>
struct add_cv;

template <class T>
using add_cv_t = typename add_cv<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of the modified type `add_cv<T>` has a `type` member **`typedef`** equivalent to *T* modified by both [add_volatile](add-volatile-class.md) and [add_const](add-const-class.md), unless *T* already has the cv-qualifiers, is a reference, or is a function.

The `add_cv_t<T>` helper type is a shortcut to access the `add_cv<T>` member typedef `type`.

## Example

```cpp
// add_cv.cpp
// compile by using: cl /EHsc /W4 add_cv.cpp
#include <type_traits>
#include <iostream>

struct S {
    void f() {
        std::cout << "invoked non-cv-qualified S.f()" << std::endl;
    }
    void f() const {
        std::cout << "invoked const S.f()" << std::endl;
    }
    void f() volatile {
        std::cout << "invoked volatile S.f()" << std::endl;
    }
    void f() const volatile {
        std::cout << "invoked const volatile S.f()" << std::endl;
    }
};

template <class T>
void invoke() {
    T t;
    ((T *)&t)->f();
}

int main()
{
    invoke<S>();
    invoke<std::add_const<S>::type>();
    invoke<std::add_volatile<S>::type>();
    invoke<std::add_cv<S>::type>();
}
```

```Output
invoked non-cv-qualified S.f()
invoked const S.f()
invoked volatile S.f()
invoked const volatile S.f()
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[remove_const Class](remove-const-class.md)\
[remove_volatile Class](remove-volatile-class.md)
