---
description: "Learn more about: Compiler Error C2724"
title: "Compiler Error C2724"
ms.date: "11/04/2016"
f1_keywords: ["C2724"]
helpviewer_keywords: ["C2724"]
ms.assetid: 4e4664bc-8c96-4156-b79f-03436f532ea8
---
# Compiler Error C2724

'identifier' : 'static' should not be used on member functions defined at file scope

Static member functions should be declared with external linkage.

The following sample generates C2724:

```cpp
// C2724.cpp
class C {
   static void func();
};

static void C::func(){};   // C2724
// try the following line instead
// void C::func(){};
```
