---
description: "Learn more about: Compiler Error C2793"
title: "Compiler Error C2793"
ms.date: "11/04/2016"
f1_keywords: ["C2793"]
helpviewer_keywords: ["C2793"]
ms.assetid: ce35f4e8-c357-40ca-95c4-15ff001ad69d
---
# Compiler Error C2793

'token' : unexpected token following '::', identifier or keyword 'operator' expected

The only tokens that can follow `__super::` are an identifier or the keyword **`operator`**.

The following sample generates C2793

```cpp
// C2793.cpp
struct B {
   void mf();
};

struct D : B {
   void mf() {
      __super::(); // C2793
   }
};
```
