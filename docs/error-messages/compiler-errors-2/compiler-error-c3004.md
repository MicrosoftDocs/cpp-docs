---
title: "Compiler Error C3004"
description: "Learn more about: Compiler Error C3004"
ms.date: 11/04/2016
f1_keywords: ["C3004"]
helpviewer_keywords: ["C3004"]
---
# Compiler Error C3004

> 'clause' : clause not valid on OpenMP 'directive' directive

## Remarks

An OpenMP clause was used on a directive for which it is not enabled.

## Example

The following example generates C3004:

```c
// C3004.c
// compile with: /openmp
int main()
{
   int x, y, z;

   // Shared clause not allowed for 'single' directive.
   #pragma omp single shared(x, y)   // C3004

   x = y;
}
```
