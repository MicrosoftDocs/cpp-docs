---
description: "Learn more about: Compiler Error C2191"
title: "Compiler Error C2191"
ms.date: "11/04/2016"
f1_keywords: ["C2191"]
helpviewer_keywords: ["C2191"]
ms.assetid: 051b8350-e5de-4f51-ab6e-96d32366bcef
---
# Compiler Error C2191

second parameter list longer than first

A C function was declared a second time with a longer parameter list. C does not support overloaded functions.

## Example

The following sample generates C2191:

```c
// C2191.c
// compile with: /Za /c
void func( int );
void func( int, float );   // C2191 different parameter list
void func2( int, float );   // OK
```
