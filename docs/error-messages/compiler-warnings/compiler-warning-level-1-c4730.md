---
description: "Learn more about: Compiler Warning (Level 1) C4730"
title: "Compiler Warning (Level 1) C4730"
ms.date: "11/04/2016"
f1_keywords: ["C4730"]
helpviewer_keywords: ["C4730"]
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
---
# Compiler Warning (Level 1) C4730

'main' : mixing _m64 and floating point expressions may result in incorrect code

A function uses [__m64](../../cpp/m64.md) and **`float`**/**`double`** types. Because the MMX and floating-point registers share the same physical register space (cannot be used simultaneously), using **`__m64`** and **`float`**/**`double`** types in the same function can result in data corruption, possibly causing an exception.

To safely use **`__m64`** types and floating-point types in the same function, each instruction that uses one of the types should be separated by the **_m_empty()** (for MMX) or **_m_femms()** (for 3DNow!) intrinsic.

The following sample generates C4730:

```cpp
// C4730.cpp
// compile with: /W1
// processor: x86
#include "mmintrin.h"

void func(double)
{
}

int main(__m64 a, __m64 b)
{
   __m64 m;
   double f;
   f = 1.0;
   m = _m_paddb(a, b);
   // uncomment the next line to resolve C4730
   // _m_empty();
   func(f * 3.0);   // C4730
}
```
