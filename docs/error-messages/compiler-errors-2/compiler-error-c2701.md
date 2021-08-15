---
description: "Learn more about: Compiler Error C2701"
title: "Compiler Error C2701"
ms.date: "11/04/2016"
f1_keywords: ["C2701"]
helpviewer_keywords: ["C2701"]
ms.assetid: 31cf2ab7-ced9-4f75-aa51-e169e20407fb
---
# Compiler Error C2701

'function' : a function template cannot be a friend of a local class

A local class cannot have a template function as a friend function.

The following sample generates C2701:

```cpp
// C2701.cpp
// compile with: /c
template<typename T>   // OK
void f1(const T &);

void MyFunction() {
   class MyClass {
      template<typename T> friend void f2(const T &);   // C2701
   };
}
```
