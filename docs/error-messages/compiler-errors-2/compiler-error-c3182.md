---
title: "Compiler Error C3182"
description: "Learn more about: Compiler Error C3182"
ms.date: 11/04/2016
f1_keywords: ["C3182"]
helpviewer_keywords: ["C3182"]
---
# Compiler Error C3182

> 'class' : a member using-declaration or access declaration is illegal within a managed or WinRTtype

## Remarks

A [using](../../cpp/using-declaration.md) declaration is invalid within all forms of managed classes.

## Example

The following example generates C3182 and shows how to fix it.

```cpp
// C3182a.cpp
// compile with: /clr /c
ref struct B {
   void mf(int) {
   }
};

ref struct D : B {
   using B::mf;   // C3182, delete to resolve
   void mf(char) {
   }
};
```
