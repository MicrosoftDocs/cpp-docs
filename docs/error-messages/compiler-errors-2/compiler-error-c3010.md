---
title: "Compiler Error C3010"
description: "Learn more about: Compiler Error C3010"
ms.date: 11/04/2016
f1_keywords: ["C3010"]
helpviewer_keywords: ["C3010"]
---
# Compiler Error C3010

> 'label' : jump out of OpenMP structured block not allowed

## Remarks

Code cannot jump into or out of an OpenMP block.

## Example

The following example generates C3010:

```c
// C3010.c
// compile with: /openmp
int main() {
   #pragma omp parallel
   {
      #pragma omp parallel
      {
         goto lbl3;
      }
   }
   lbl3:;   // C3010
}
```
