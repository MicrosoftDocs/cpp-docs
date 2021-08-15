---
description: "Learn more about: Compiler Error C3052"
title: "Compiler Error C3052"
ms.date: "11/04/2016"
f1_keywords: ["C3052"]
helpviewer_keywords: ["C3052"]
ms.assetid: 87480c42-1ceb-4775-8d20-88c54a7bb6a6
---
# Compiler Error C3052

'var' : variable doesn't appear in a data-sharing clause under a default(none) clause

If [default(none)](../../parallel/openmp/reference/openmp-clauses.md#default-openmp) is used, any variable used in the structured block must be explicitly specified as either [shared](../../parallel/openmp/reference/openmp-clauses.md#shared-openmp) or [private](../../parallel/openmp/reference/openmp-clauses.md#private-openmp).

The following sample generates C3052:

```cpp
// C3052.cpp
// compile with: /openmp /c
int main() {
   int n1 = 1;

   #pragma omp parallel default(none) // shared(n1) private(n1)
   {
      n1 = 0;   // C3052 use either a shared or private clause
   }
}
```
