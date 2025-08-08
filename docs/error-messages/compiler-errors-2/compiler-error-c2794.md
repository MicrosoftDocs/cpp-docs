---
title: "Compiler Error C2794"
description: "Learn more about: Compiler Error C2794"
ms.date: 11/04/2016
f1_keywords: ["C2794"]
helpviewer_keywords: ["C2794"]
---
# Compiler Error C2794

> 'function' : is not a member of any direct or indirect base class of 'class'

## Remarks

You tried to use [super](../../cpp/super.md) to call a nonexistent member function.

## Example

The following example generates C2794

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
