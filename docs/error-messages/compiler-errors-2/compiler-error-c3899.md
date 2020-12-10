---
description: "Learn more about: Compiler Error C3899"
title: "Compiler Error C3899"
ms.date: "11/04/2016"
f1_keywords: ["C3899"]
helpviewer_keywords: ["C3899"]
ms.assetid: 14e07e4a-f7a7-4309-baaa-649d69e12e23
---
# Compiler Error C3899

'var' : l-value use of initonly data member is not allowed directly within a parallel region in class 'class'

An [initonly (C++/CLI)](../../dotnet/initonly-cpp-cli.md) data member cannot be initialized inside that part of a constructor that is in a [parallel](../../parallel/openmp/reference/openmp-directives.md#parallel) region.  This is because the compiler does an internal relocation of that code, such that, it is effectively no longer part of the constructor.

To resolve, initialize the initonly data member in the constructor, but outside the parallel region.

## Example

The following sample generates C3899.

```cpp
// C3899.cpp
// compile with: /clr /openmp
#include <omp.h>

public ref struct R {
   initonly int x;
   R() {
      x = omp_get_thread_num() + 1000;   // OK
      #pragma omp parallel num_threads(5)
      {
         // cannot assign to 'x' here
         x = omp_get_thread_num() + 1000;   // C3899
         System::Console::WriteLine("thread {0}", omp_get_thread_num());
      }
      x = omp_get_thread_num() + 1000;   // OK
   }
};

int main() {
   R^ r = gcnew R;
   System::Console::WriteLine(r->x);
}
```
