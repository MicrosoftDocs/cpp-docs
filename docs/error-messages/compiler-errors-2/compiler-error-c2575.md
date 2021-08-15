---
description: "Learn more about: Compiler Error C2575"
title: "Compiler Error C2575"
ms.date: "11/04/2016"
f1_keywords: ["C2575"]
helpviewer_keywords: ["C2575"]
ms.assetid: 9eb45706-37ef-4481-b373-6d193ba13634
---
# Compiler Error C2575

'identifier' : only member functions and bases can be virtual

A global function or class is declared **`virtual`**. This is not allowed.

The following sample generates C2575:

```cpp
// C2575.cpp
// compile with: /c
virtual void func() {}   // C2575

void func2() {}
struct A {
   virtual void func2(){}
};
```
