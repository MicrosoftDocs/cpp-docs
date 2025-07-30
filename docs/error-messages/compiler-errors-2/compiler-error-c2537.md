---
description: "Learn more about: Compiler Error C2537"
title: "Compiler Error C2537"
ms.date: "03/08/2024"
f1_keywords: ["C2537"]
helpviewer_keywords: ["C2537"]
---
# Compiler Error C2537

> 'specifier' : illegal linkage specification

The linkage specifier is not supported. Only the "C" and "C++" linkage specifiers are supported.

The following sample generates C2537:

```cpp
// C2537.cpp
// compile with: /c
extern "c" void func1();   // C2537
extern "C" void func2();   // OK
extern "C++" void func3();   // OK
```
