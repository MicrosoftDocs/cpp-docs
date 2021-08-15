---
description: "Learn more about: Compiler Error C3192"
title: "Compiler Error C3192"
ms.date: "11/04/2016"
f1_keywords: ["C3192"]
helpviewer_keywords: ["C3192"]
ms.assetid: 8b0083d4-706f-46f6-858a-e1d9af464cf8
---
# Compiler Error C3192

syntax error : '^' is not a prefix operator (did you mean '*'?)

A handle cannot be used as a dereference operator.

The following sample generates C3192:

```cpp
// C3192.cpp
// compile with: /clr
using namespace System;

ref class MyClass {
public:
   MyClass () {}
   MyClass(MyClass%) {}
};

int main() {
   MyClass ^ s = gcnew MyClass;
   MyClass b = ^s;   // C3192

   // OK
   MyClass b2 = *s;
}
```
