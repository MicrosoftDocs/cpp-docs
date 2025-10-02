---
title: "Compiler Error C3056"
description: "Learn more about: Compiler Error C3056"
ms.date: 11/04/2016
f1_keywords: ["C3056"]
helpviewer_keywords: ["C3056"]
---
# Compiler Error C3056

> 'symbol' : symbol is not in the same scope with 'threadprivate' directive

## Remarks

A symbol used in a [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) clause must be in the same scope as the `threadprivate` clause.

## Example

The following example generates C3056:

```cpp
// C3056.cpp
// compile with: /openmp
int x, y;
void test() {
   #pragma omp threadprivate(x, y)   // C3056
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possible resolution:

```cpp
// C3056b.cpp
// compile with: /openmp /LD
int x, y;
#pragma omp threadprivate(x, y)
void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
