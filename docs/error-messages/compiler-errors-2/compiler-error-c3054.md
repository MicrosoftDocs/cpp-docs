---
title: "Compiler Error C3054"
description: "Learn more about: Compiler Error C3054"
ms.date: 06/01/2022
f1_keywords: ["C3054"]
helpviewer_keywords: ["C3054"]
---
# Compiler Error C3054

> '#pragma omp parallel' is currently not supported in a generic class or function

## Remarks

For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md) and [OpenMP](../../parallel/openmp/openmp-in-visual-cpp.md).

This error is obsolete in Visual Studio 2022 and later versions.

## Example

The following example generates C3054.

```cpp
// C3054.cpp
// compile with: /openmp /clr /c
#include <omp.h>

ref struct MyBaseClass {
   // Delete the following 7 lines to resolve.
   generic <class ItemType>
   void Test(ItemType i) {   // C3054
      #pragma omp parallel num_threads(4)
      {
         int i = omp_get_thread_num();
      }
   }

   // OK
   void Test2() {
      #pragma omp parallel num_threads(4)
      {
         int i = omp_get_thread_num();
      }
   }
};
```
