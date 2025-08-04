---
title: "Compiler Error C2695"
description: "Learn more about: Compiler Error C2695"
ms.date: 11/04/2016
f1_keywords: ["C2695"]
helpviewer_keywords: ["C2695"]
---
# Compiler Error C2695

> 'function1': overriding virtual function differs from 'function2' only by calling convention

## Remarks

The signature of a function in a derived class cannot override a function in a base class and change the calling convention.

## Example

The following example generates C2695:

```cpp
// C2695.cpp
class C {
   virtual void __fastcall func();
};

class D : public C {
   virtual void __clrcall func();   // C2695
};
```
