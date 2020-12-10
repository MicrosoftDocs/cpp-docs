---
description: "Learn more about: Compiler Error C2798"
title: "Compiler Error C2798"
ms.date: "11/04/2016"
f1_keywords: ["C2798"]
helpviewer_keywords: ["C2798"]
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
---
# Compiler Error C2798

'super::member' is ambiguous

Multiple inherited structures contain the member you referenced with [super](../../cpp/super.md). You could fix the error by either:

- Removing B1 or B2 from the inheritance list of D.

- Changing the name of the data member in B1 or B2.

The following sample generates C2798:

```cpp
// C2798.cpp
struct B1 {
   int i;
};

struct B2 {
   int i;
};

struct D : B1, B2 {
   void g() {
      __super::i = 4; // C2798
   }
};
```
