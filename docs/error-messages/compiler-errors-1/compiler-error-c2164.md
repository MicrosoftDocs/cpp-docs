---
title: "Compiler Error C2164"
description: "Learn more about: Compiler Error C2164"
ms.date: 11/04/2016
f1_keywords: ["C2164"]
helpviewer_keywords: ["C2164"]
---
# Compiler Error C2164

> 'function' : intrinsic function not declared

## Remarks

An `intrinsic` pragma uses an undeclared function (only occurs with **/Oi**). Or, one of the compiler intrinsics was used without including its header file.

## Example

The following example generates C2164:

```c
// C2164.c
// compile with: /c
// processor: x86
// Uncomment the following line to resolve.
// #include "xmmintrin.h"
void b(float *p) {
   _mm_load_ss(p);   // C2164
}
```
