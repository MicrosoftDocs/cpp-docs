---
description: "Learn more about: Compiler Error C2027"
title: "Compiler Error C2027"
ms.date: "11/04/2016"
f1_keywords: ["C2027"]
helpviewer_keywords: ["C2027"]
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
---
# Compiler Error C2027

use of undefined type 'type'

A type cannot be used until it is defined. To resolve the error, be sure the type is fully defined before referencing it.

## Examples

The following sample generates C2027.

```cpp
// C2027.cpp
class C;
class D {
public:
   void func() {
   }
};

int main() {
   C *pC;
   pC->func();   // C2027

   D *pD;
   pD->func();
}
```

It is possible to declare a pointer to a declared but undefined type. But C++ does not allow a reference to an undefined type.

The following sample generates C2027.

```cpp
// C2027_b.cpp
class A;
A& CreateA();

class B;
B* CreateB();

int main() {
   CreateA();   // C2027
   CreateB();   // OK
}
```
