---
description: "Learn more about: Compiler Error C2190"
title: "Compiler Error C2190"
ms.date: "11/04/2016"
f1_keywords: ["C2190"]
helpviewer_keywords: ["C2190"]
ms.assetid: 34e15f85-d979-4948-80fc-46c414508a70
---
# Compiler Error C2190

first parameter list longer than second

A C function was declared a second time with a shorter parameter list. C does not support overloaded functions.

The following sample generates C2190:

```c
// C2190.c
// compile with: /Za /c
void func( int, float );
void func( int  );   // C2190, different parameter list
void func2( int  );   // OK
```
