---
description: "Learn more about: Compiler Error C2510"
title: "Compiler Error C2510"
ms.date: "11/04/2016"
f1_keywords: ["C2510"]
helpviewer_keywords: ["C2510"]
ms.assetid: bf6d28db-f2f4-48f8-8f4e-7d662ed278fe
---
# Compiler Error C2510

'identifier' : left of '::' must be a class/struct/union

A class, structure, or union name must appear on the left side of the scope-resolution operator (`::`) operator.

The following sample generates C2510:

```cpp
// C2510.cpp
struct S {
   static const int x = 1;
};

int main() {
   S s;
   int num1 = s::x;   // C2510
   int num2 = S::x;   // OK
}
```
