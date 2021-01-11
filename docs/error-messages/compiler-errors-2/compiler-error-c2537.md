---
description: "Learn more about: Compiler Error C2537"
title: "Compiler Error C2537"
ms.date: "11/04/2016"
f1_keywords: ["C2537"]
helpviewer_keywords: ["C2537"]
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
---
# Compiler Error C2537

'specifier' : illegal linkage specification

Possible causes:

1. The linkage specifier is not supported. Only the "C" linkage specifier is supported.

1. "C" linkage is specified for more than one function in a set of overloaded functions. This is not allowed.

The following sample generates C2537:

```cpp
// C2537.cpp
// compile with: /c
extern "c" void func();   // C2537
extern "C" void func2();   // OK
```
