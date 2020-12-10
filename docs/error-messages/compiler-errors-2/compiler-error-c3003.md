---
description: "Learn more about: Compiler Error C3003"
title: "Compiler Error C3003"
ms.date: "11/04/2016"
f1_keywords: ["C3003"]
helpviewer_keywords: ["C3003"]
ms.assetid: 22e74f99-bb7f-4518-ab0d-934d5d49bcc7
---
# Compiler Error C3003

'directive' : OpenMP directive name not allowed after directive clauses

An OpenMP directive name cannot follow an OpenMP directive clause.

The following sample generates C3003:

```c
// C3003.c
// compile with: /openmp
int main()
{
   int x, y, z;
   #pragma omp parallel shared(x, y, z) for   // C3003
}
```
