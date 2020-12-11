---
description: "Learn more about: Compiler Error C3771"
title: "Compiler Error C3771"
ms.date: "11/04/2016"
f1_keywords: ["C3771"]
helpviewer_keywords: ["C3771"]
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
---
# Compiler Error C3771

"identifier" : friend declaration cannot be found in the nearest namespace scope

The class template declaration for the specified template *identifier* cannot be found within the current namespace.

### To correct this error

- Ensure that the class template declaration for the template identifier is defined in the current namespace or that the template identifier is a fully-qualified name.

## Example

The following code example declares a class template and function in namespace `NA`, but attempts to declare a friend function template in namespace `NB`.

```cpp
// C3771.cpp
// compile with: /c

namespace NA {
template<class T> class A {
    void aFunction(T t) {};
    };
}
// using namespace NA;
namespace NB {
    class X {
        template<class T> friend void A<T>::aFunction(T); // C3771
// try the following line instead
//      template<class T> friend void NA::A<T>::aFunction(T);
// or try "using namespace NA;" instead.
    };
}
```

## See also

[Templates](../../cpp/templates-cpp.md)
