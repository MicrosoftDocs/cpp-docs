---
title: "Compiler Error C3055"
description: "Learn more about: Compiler Error C3055"
ms.date: 11/04/2016
f1_keywords: ["C3055"]
helpviewer_keywords: ["C3055"]
---
# Compiler Error C3055

> 'symbol' : symbol cannot be referenced before it is used in 'threadprivate' directive

## Remarks

A symbol was referenced and then used in a [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) clause, which is not allowed.

## Example

The following example generates C3055:

```cpp
// C3055.cpp
// compile with: /openmp
int x, y;
int z = x;
#pragma omp threadprivate(x, y)   // C3055

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possible resolution:

```cpp
// C3055b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
