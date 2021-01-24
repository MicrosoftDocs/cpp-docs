---
description: "Learn more about: Compiler Warning (level 3) C4243"
title: "Compiler Warning (level 3) C4243"
ms.date: "11/04/2016"
f1_keywords: ["C4243"]
helpviewer_keywords: ["C4243"]
ms.assetid: ca72f9ad-ce0b-43a9-a68c-106e1f8b90ef
---
# Compiler Warning (level 3) C4243

'conversion type' conversion exists from 'type1' to 'type2', but is inaccessible

A pointer to a derived class is converted to a pointer to a base class, but the derived class inherits the base class with private or protected access.

The following sample generates C4243:

```cpp
// C4243.cpp
// compile with: /W3
// C4243 expected
struct B {
   int f() {
      return 0;
   };
};

struct D : private B {};
struct E : public B {};

int main() {
   // Delete the following 2 lines to resolve.
   int (D::* d)() = (int(D::*)()) &B::f;
   d;

   int (E::* e)() = (int(E::*)()) &B::f; // OK
   e;
}
```
