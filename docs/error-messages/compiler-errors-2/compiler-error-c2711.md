---
title: "Compiler Error C2711"
description: "Learn more about: Compiler Error C2711"
ms.date: 11/04/2016
f1_keywords: ["C2711"]
helpviewer_keywords: ["C2711"]
---
# Compiler Error C2711

> 'function' : this function cannot be compiled as managed, consider using #pragma unmanaged

## Remarks

Some instructions will prevent the compiler from generating MSIL for the enclosing function.

## Example

The following example generates C2711:

```cpp
// C2711.cpp
// compile with: /clr
// processor: x86
using namespace System;
value struct V {
   static const t = 10;
};

void bar() {
   V::t;
   __asm int 3   // C2711 inline asm can't be compiled managed
}
```
