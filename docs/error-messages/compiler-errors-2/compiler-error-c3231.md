---
description: "Learn more about: Compiler Error C3231"
title: "Compiler Error C3231"
ms.date: "11/04/2016"
f1_keywords: ["C3231"]
helpviewer_keywords: ["C3231"]
ms.assetid: fe5dc352-e634-45fa-9534-3da176294c98
---
# Compiler Error C3231

'arg' : template type argument cannot use a generic type parameter

Templates are instantiated at compile time, but generics are instantiated at run time. Therefore, it is not possible to generate generic code that can call the template because the template cannot be instantiated at run time when the generic type is finally known.

The following sample generates C3231:

```cpp
// C3231.cpp
// compile with: /clr /LD
template <class T> class A;

generic <class T>
ref class C {
   void f() {
      A<T> a;   // C3231
   }
};
```
