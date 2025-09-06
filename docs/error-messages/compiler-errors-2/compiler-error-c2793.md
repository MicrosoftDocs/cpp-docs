---
title: "Compiler Error C2793"
description: "Learn more about: Compiler Error C2793"
ms.date: 11/04/2016
f1_keywords: ["C2793"]
helpviewer_keywords: ["C2793"]
---
# Compiler Error C2793

> 'token' : unexpected token following '::', identifier or keyword 'operator' expected

## Remarks

The only tokens that can follow `__super::` are an identifier or the keyword **`operator`**.

## Example

The following example generates C2793

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
