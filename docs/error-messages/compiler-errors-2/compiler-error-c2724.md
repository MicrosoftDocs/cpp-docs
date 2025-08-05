---
title: "Compiler Error C2724"
description: "Learn more about: Compiler Error C2724"
ms.date: 11/04/2016
f1_keywords: ["C2724"]
helpviewer_keywords: ["C2724"]
---
# Compiler Error C2724

> 'identifier' : 'static' should not be used on member functions defined at file scope

## Remarks

Static member functions should be declared with external linkage.

## Example

The following sample generates C2724:

```cpp
// C2724.cpp
class C {
   static void func();
};

static void C::func(){}   // C2724
// try the following line instead
// void C::func(){}
```
