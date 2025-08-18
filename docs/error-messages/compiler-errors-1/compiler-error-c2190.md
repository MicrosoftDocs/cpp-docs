---
title: "Compiler Error C2190"
description: "Learn more about: Compiler Error C2190"
ms.date: 11/04/2016
f1_keywords: ["C2190"]
helpviewer_keywords: ["C2190"]
---
# Compiler Error C2190

> first parameter list longer than second

## Remarks

A C function was declared a second time with a shorter parameter list. C does not support overloaded functions.

## Example

The following example generates C2190:

```c
// C2190.c
// compile with: /Za /c
void func( int, float );
void func( int  );   // C2190, different parameter list
void func2( int  );   // OK
```
