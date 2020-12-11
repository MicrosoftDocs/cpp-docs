---
description: "Learn more about: Compiler Error C2583"
title: "Compiler Error C2583"
ms.date: "11/04/2016"
f1_keywords: ["C2583"]
helpviewer_keywords: ["C2583"]
ms.assetid: b1c952dc-872c-47e4-9fc8-4dd72bcee6f9
---
# Compiler Error C2583

'identifier' : 'const/volatile' 'this' pointer is illegal for constructors/destructors

A constructor or destructor is declared **`const`** or **`volatile`**. This is not allowed.

The following sample generates C2583:

```cpp
// C2583.cpp
// compile with: /c
class A {
public:
   int i;
   A() const;   // C2583

   // try the following line instead
   // A();
};
```
