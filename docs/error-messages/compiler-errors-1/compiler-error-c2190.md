---
title: "Compiler Error C2190"
description: "Learn more about: Compiler Error C2190"
ms.date: 08/22/2025
f1_keywords: ["C2190"]
helpviewer_keywords: ["C2190"]
---
# Compiler Error C2190

> first parameter list longer than second

## Remarks

A C function was declared a second time with a shorter parameter list. C does not support overloaded functions. Without [`/Za`](../../build/reference/za-ze-disable-language-extensions.md), the compiler emits [Compiler Warning (level 1) C4030](../compiler-warnings/compiler-warning-level-1-c4030.md) instead.

## Example

The following example generates C2190:

```c
// C2190.c
// compile with: /Za /c

void func1(int, float);
void func1(int);   // C2190, shorter parameter list

void func2(int);   // OK
```

## See also

[Compiler Error C2191](compiler-error-c2191.md)
