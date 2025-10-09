---
title: "Compiler Error C2251"
description: "Learn more about: Compiler Error C2251"
ms.date: 11/04/2016
f1_keywords: ["C2251"]
helpviewer_keywords: ["C2251"]
---
# Compiler Error C2251

> namespace 'namespace' does not have a member 'member' - Did you mean 'member'?

## Remarks

The compiler was not able to find an identifier in the specified namespace.

## Example

The following example generates C2251:

```cpp
// C2251.cpp
// compile with: /c
namespace A {
   namespace B {
      void f1();
   }

   using namespace B;
}

void A::f1() {}   // C2251
void A::B::f1() {}   // OK
```
