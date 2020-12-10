---
description: "Learn more about: Compiler Error C2794"
title: "Compiler Error C2794"
ms.date: "11/04/2016"
f1_keywords: ["C2794"]
helpviewer_keywords: ["C2794"]
ms.assetid: d508191c-9044-4c6a-9119-4bca668c0b93
---
# Compiler Error C2794

'function' : is not a member of any direct or indirect base class of 'class'

You tried to use [super](../../cpp/super.md) to call a nonexistent member function.

The following sample generates C2794

```cpp
// C2794.cpp
struct B {
   void mf();
};

struct D : B {
   void mf() {
      __super::f();  // C2794
   }
};
```
