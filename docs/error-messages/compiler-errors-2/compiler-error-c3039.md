---
description: "Learn more about: Compiler Error C3039"
title: "Compiler Error C3039"
ms.date: "11/04/2016"
f1_keywords: ["C3039"]
helpviewer_keywords: ["C3039"]
ms.assetid: 02776f16-f57a-4ffd-b7f7-9c696b633e08
---
# Compiler Error C3039

'var' : index variable in OpenMP 'for' statement cannot be a reduction variable

An index variable is implicitly private, so the variable cannot be used in a [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) clause in the enclosing [parallel](../../parallel/openmp/reference/openmp-directives.md#parallel) directive.

## Example

The following sample generates C3039:

```cpp
// C3039.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel reduction(+: i)
   {
      #pragma omp for
      for (i = 0; i < 10; ++i)   // C3039
         g_i += i;
   }
}
```
