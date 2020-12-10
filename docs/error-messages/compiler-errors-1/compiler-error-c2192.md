---
description: "Learn more about: Compiler Error C2192"
title: "Compiler Error C2192"
ms.date: "11/04/2016"
f1_keywords: ["C2192"]
helpviewer_keywords: ["C2192"]
ms.assetid: a147197e-e72d-4620-939b-f9e08d7c7c12
---
# Compiler Error C2192

parameter 'number' declaration different

A C function was declared a second time with a different parameter list. C does not support overloaded functions.

The following sample generates C2192:

```c
// C2192.c
// compile with: /Za /c
void func( float, int );
void func( int, float );   // C2192, different parameter list
void func2( int, float );   // OK
```
