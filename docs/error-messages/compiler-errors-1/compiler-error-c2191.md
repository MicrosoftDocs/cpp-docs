---
title: "Compiler Error C2191"
description: "Learn more about: Compiler Error C2191"
ms.date: 11/04/2016
f1_keywords: ["C2191"]
helpviewer_keywords: ["C2191"]
---
# Compiler Error C2191

> second parameter list longer than first

## Remarks

A C function was declared a second time with a longer parameter list. C does not support overloaded functions. Without [`/Za`](../../build/reference/za-ze-disable-language-extensions.md), the compiler emits [Compiler Warning (level 1) C4031](../compiler-warnings/compiler-warning-level-1-c4031.md) instead.

## Example

The following example generates C2191:

```c
// C2191.c
// compile with: /Za /c
void func( int );
void func( int, float );   // C2191 different parameter list
void func2( int, float );   // OK
```
