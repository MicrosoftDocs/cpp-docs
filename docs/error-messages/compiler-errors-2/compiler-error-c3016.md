---
title: "Compiler Error C3016"
description: "Learn more about: Compiler Error C3016"
ms.date: 11/04/2016
f1_keywords: ["C3016"]
helpviewer_keywords: ["C3016"]
---
# Compiler Error C3016

> 'var' : index variable in OpenMP 'for' statement must have signed integral type

## Remarks

The index variable in an OpenMP **`for`** statement must be a signed integral type.

## Example

The following example generates C3016:

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
