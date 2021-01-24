---
description: "Learn more about: Compiler Warning (level 1) C4630"
title: "Compiler Warning (level 1) C4630"
ms.date: "11/04/2016"
f1_keywords: ["C4630"]
helpviewer_keywords: ["C4630"]
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
---
# Compiler Warning (level 1) C4630

'symbol' : 'extern' storage class specifier illegal on member definition

A data member or member function is defined as **`extern`**. Members cannot be external, although entire objects can. The compiler ignores the **`extern`** keyword. The following sample generates C4630:

```cpp
// C4630.cpp
// compile with: /W1 /LD
class A {
   void func();
};

extern void A::func() {   // C4630, remove 'extern' to resolve
}
```
