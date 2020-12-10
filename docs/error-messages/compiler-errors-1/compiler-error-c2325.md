---
description: "Learn more about: Compiler Error C2325"
title: "Compiler Error C2325"
ms.date: "11/04/2016"
f1_keywords: ["C2325"]
helpviewer_keywords: ["C2325"]
ms.assetid: e6b0a186-3f2a-4adf-beae-fadd75492bf7
---
# Compiler Error C2325

'type' : unexpected type to the right of 'name'

A call is made to a destructor of incorrect type.

The following sample generates C2325:

```cpp
// C2325.cpp
// compile with: /c
class A {};
typedef A* pA_t;
void f() {
    A** ppa = new A *;
    ppa->~A*;   // C2325

   pA_t *ppa2 = new pA_t;
   ppa2->~pA_t();   // OK
}
```
