---
description: "Learn more about: Compiler Error C3058"
title: "Compiler Error C3058"
ms.date: "11/04/2016"
f1_keywords: ["C3058"]
helpviewer_keywords: ["C3058"]
ms.assetid: 669d08c8-0b58-4351-88aa-c6e6e1af481c
---
# Compiler Error C3058

'symbol' : symbol not declared as 'threadprivate' before it is used in the 'copyin' clause

A symbol must first be declared [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) before it can be used in a [copyin](../../parallel/openmp/reference/openmp-clauses.md#copyin) clause.

The following sample generates C3058:

```cpp
// C3058.cpp
// compile with: /openmp
int x, y, z;
#pragma omp threadprivate(x, z)

void test() {
   #pragma omp parallel copyin(x, y)   // C3058
   {
   }
}
```

Possible resolution:

```cpp
// C3058b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
   }
}
```
