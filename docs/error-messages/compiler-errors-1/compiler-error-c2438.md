---
description: "Learn more about: Compiler Error C2438"
title: "Compiler Error C2438"
ms.date: "11/04/2016"
f1_keywords: ["C2438"]
helpviewer_keywords: ["C2438"]
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
---
# Compiler Error C2438

'identifier' : cannot initialize static class data via constructor

A constructor is used to initialize a static member of a class. Static members must be initialized in a definition outside the class declaration.

The following sample generates C2438:

```cpp
// C2438.cpp
struct X {
   X(int i) : j(i) {}   // C2438
   static int j;
};

int X::j;

int main() {
   X::j = 1;
}
```
