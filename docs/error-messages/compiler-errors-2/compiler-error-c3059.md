---
description: "Learn more about: Compiler Error C3059"
title: "Compiler Error C3059"
ms.date: "11/04/2016"
f1_keywords: ["C3059"]
helpviewer_keywords: ["C3059"]
ms.assetid: 57220324-8286-4cab-a1ab-45385eb1eae0
---
# Compiler Error C3059

'var' : 'threadprivate' symbol cannot be used in the 'clause' clause

A [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) symbol was used in a clause.

The following sample generates C3059:

```cpp
// C3059.cpp
// compile with: /openmp
#include "omp.h"
int x, y;
#pragma omp threadprivate(x, y)

int main() {
   #pragma omp parallel private(x, y)   // C3059
   {
      x = y;
   }
}
```

Possible resolution:

```cpp
// C3059b.cpp
// compile with: /openmp
#include "omp.h"
int x = 0, y = 0;

int main() {
   #pragma omp parallel firstprivate(y) private(x)
   {
      x = y;
   }
}
```
