---
description: "Learn more about: Compiler Error C2273"
title: "Compiler Error C2273"
ms.date: "11/04/2016"
f1_keywords: ["C2273"]
helpviewer_keywords: ["C2273"]
ms.assetid: 3c682c66-97bf-4a23-a22c-d9a26a92bf95
---
# Compiler Error C2273

'type' : illegal as right side of '->' operator

A type appears as the right operand of a `->` operator.

This error can be caused by trying to access a user-defined type conversion. Use the keyword **`operator`** between -> and `type`.

The following sample generates C2273:

```cpp
// C2273.cpp
struct MyClass {
   operator int() {
      return 0;
   }
};
int main() {
   MyClass * ClassPtr = new MyClass;
   int i = ClassPtr->int();   // C2273
   int j = ClassPtr-> operator int();   // OK
}
```
