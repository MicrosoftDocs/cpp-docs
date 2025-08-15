---
title: "Compiler Error C3175"
description: "Learn more about: Compiler Error C3175"
ms.date: 11/04/2016
f1_keywords: ["C3175"]
helpviewer_keywords: ["C3175"]
---
# Compiler Error C3175

> 'function1' : cannot call a method of a managed type from unmanaged function 'function2'

## Remarks

Unmanaged functions cannot call member functions of managed classes.

## Example

The following example generates C3175:

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
