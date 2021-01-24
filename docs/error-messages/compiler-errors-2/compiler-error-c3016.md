---
description: "Learn more about: Compiler Error C3016"
title: "Compiler Error C3016"
ms.date: "11/04/2016"
f1_keywords: ["C3016"]
helpviewer_keywords: ["C3016"]
ms.assetid: 3423467e-e8bb-4f35-b4db-7925cafa74c1
---
# Compiler Error C3016

'var' : index variable in OpenMP 'for' statement must have signed integral type

The index variable in an OpenMP **`for`** statement must be a signed integral type.

The following sample generates C3016:

```cpp
// C3016.cpp
// compile with: /openmp
int main()
{
   #pragma omp parallel
   {
      unsigned int i = 0;
      // Try the following line instead:
      // int i = 0;

      #pragma omp for
      for (i = 0; i <= 10; ++i)   // C3016
      {
      }
   }
}
```
