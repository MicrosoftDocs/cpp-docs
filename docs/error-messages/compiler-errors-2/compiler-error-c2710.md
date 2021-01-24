---
description: "Learn more about: Compiler Error C2710"
title: "Compiler Error C2710"
ms.date: "11/04/2016"
f1_keywords: ["C2710"]
helpviewer_keywords: ["C2710"]
ms.assetid: a2a6bb5b-86ad-4a6c-acd0-e2bef8464e0e
---
# Compiler Error C2710

'construct' : '__declspec(modifier)' can only be applied to a function returning a pointer

A function whose return value is a pointer is the only construct to which `modifier` can be applied.

The following sample generates C2710:

```cpp
// C2710.cpp
__declspec(restrict) void f();   // C2710
// try the following line instead
__declspec(restrict) int * g();
```
