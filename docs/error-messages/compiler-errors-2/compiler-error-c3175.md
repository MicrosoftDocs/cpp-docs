---
description: "Learn more about: Compiler Error C3175"
title: "Compiler Error C3175"
ms.date: "11/04/2016"
f1_keywords: ["C3175"]
helpviewer_keywords: ["C3175"]
ms.assetid: 3f19d513-a05a-4b6c-806f-276fe5c36b90
---
# Compiler Error C3175

'function1' : cannot call a method of a managed type from unmanaged function 'function2'

Unmanaged functions cannot call member functions of managed classes.

The following sample generates C3175:

```cpp
// C3175_2.cpp
// compile with: /clr

ref struct A {
   static void func() {
   }
};

#pragma unmanaged   // remove this line to resolve

void func2() {
   A::func();   // C3175
}

#pragma managed

int main() {
   A ^a = gcnew A;
   func2();
}
```
