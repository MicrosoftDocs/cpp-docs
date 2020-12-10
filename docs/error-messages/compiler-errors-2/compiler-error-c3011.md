---
description: "Learn more about: Compiler Error C3011"
title: "Compiler Error C3011"
ms.date: "11/04/2016"
f1_keywords: ["C3011"]
helpviewer_keywords: ["C3011"]
ms.assetid: 24c3a917-ebff-4deb-9155-23adf6468531
---
# Compiler Error C3011

inline assembly not allowed directly within a parallel region

An `omp` parallel region cannot contain inline assembly instructions.

The following sample generates C3011:

```cpp
// C3011.cpp
// compile with: /openmp
// processor: /x86
int main() {
   int   n = 0;

   #pragma omp parallel
   {
      _asm mov eax, n   // Delete this line to resolve this error.
   }   // C3011
}
```
