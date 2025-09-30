---
title: "Compiler Error C3003"
description: "Learn more about: Compiler Error C3003"
ms.date: 11/04/2016
f1_keywords: ["C3003"]
helpviewer_keywords: ["C3003"]
---
# Compiler Error C3003

> 'directive' : OpenMP directive name not allowed after directive clauses

## Remarks

An OpenMP directive name cannot follow an OpenMP directive clause.

## Example

The following example generates C3003:

```c
// C3003.c
// compile with: /openmp
int main()
{
   int x, y, z;
   #pragma omp parallel shared(x, y, z) for   // C3003
}
```
