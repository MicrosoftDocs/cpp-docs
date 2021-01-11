---
description: "Learn more about: Compiler Error C3006"
title: "Compiler Error C3006"
ms.date: "11/04/2016"
f1_keywords: ["C3006"]
helpviewer_keywords: ["C3006"]
ms.assetid: 449082ec-fd45-4c47-8ab3-ba6a719e4dc4
---
# Compiler Error C3006

'clause' : clause on OpenMP 'directive' directive is missing an expected argument

An OpenMP directive did not have an expected argument.

The following sample generates C3006:

```c
// C3006.c
// compile with: /openmp
int main()
{
   #pragma omp parallel shared   // C3006
   // Try the following line instead:
   // #pragma omp parallel shared(x) {}

}
```
