---
description: "Learn more about: Compiler Error C3041"
title: "Compiler Error C3041"
ms.date: "11/04/2016"
f1_keywords: ["C3041"]
helpviewer_keywords: ["C3041"]
ms.assetid: 9df1ae44-3ac7-4c6c-899f-f35ffe7ccf0d
---
# Compiler Error C3041

'var' : variable in 'copyprivate' clause must be private in enclosing context

A variable passed to [copyprivate](../../parallel/openmp/reference/openmp-clauses.md#copyprivate) cannot be shared in the enclosing context.

The following sample generates C3041:

```cpp
// C3041.cpp
// compile with: /openmp /c
#include "omp.h"
double d;
int main() {
   #pragma omp parallel shared(d)
   // try the following line instead
   // #pragma omp parallel private(d)
   {
      // or don't make d copyprivate
      #pragma omp single copyprivate(d)   // C3041
      {
      }
   }
}
```
