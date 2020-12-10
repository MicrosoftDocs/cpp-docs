---
description: "Learn more about: Compiler Error C3002"
title: "Compiler Error C3002"
ms.date: "11/04/2016"
f1_keywords: ["C3002"]
helpviewer_keywords: ["C3002"]
ms.assetid: 2d4241a7-c8eb-4d43-a128-dca255d137bc
---
# Compiler Error C3002

'name1 name2' : multiple OpenMP directive names

Multiple directive names are not allowed.

The following sample generates C3002:

```c
// C3002.c
// compile with: /openmp
int main()
{
   #pragma omp parallel single   // C3002
}
```
