---
description: "Learn more about: Compiler Error C3001"
title: "Compiler Error C3001"
ms.date: "11/04/2016"
f1_keywords: ["C3001"]
helpviewer_keywords: ["C3001"]
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
---
# Compiler Error C3001

'error_text' : expected an OpenMP directive name

The `omp` pragma must be followed by a directive.

The following sample generates C3001:

```c
// C3001.c
// compile with: /openmp
int main()
{
   #pragma omp   // C3001 missing token
}
```
