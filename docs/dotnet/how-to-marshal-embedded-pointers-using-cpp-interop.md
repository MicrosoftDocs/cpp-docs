---
description: "Learn more about: How to: Marshal Embedded Pointers Using C++ Interop"
title: "How to: Marshal Embedded Pointers Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["structures [C++], marshaling embedded pointers", "interop [C++], embedded pointers", "C++ Interop, embedded pointers", "marshaling [C++], embedded pointers", "pointers [C++], marshaling", "data marshaling [C++], embedded pointers"]
ms.assetid: 05fb8858-97f2-47aa-86b2-2c0ad713bdb2
---
# How to: Marshal Embedded Pointers Using C++ Interop

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following example demonstrates how an unmanaged function that takes a structure containing pointers can be called from a managed function. The managed function creates an instance of the structure and initializes the embedded pointer with the new keyword (instead of the [ref new, gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md) keyword). Because this allocates the memory on the native heap, there is no need to pin the array to suppress garbage collection. However, the memory must be explicitly deleted to avoid memory leakage.

```cpp
// marshal_embedded_pointer.cpp
// compile with: /clr
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

// unmanaged struct
struct ListStruct {
   int count;
   double* item;
};

#pragma unmanaged

void UnmanagedTakesListStruct(ListStruct list) {
   printf_s("[unmanaged] count = %d\n", list.count);
   for (int i=0; i<list.count; i++)
      printf_s("array[%d] = %f\n", i, list.item[i]);
}

#pragma managed

int main() {
   ListStruct list;
   list.count = 10;
   list.item = new double[list.count];

   Console::WriteLine("[managed] count = {0}", list.count);
   Random^ r = gcnew Random(0);
   for (int i=0; i<list.count; i++) {
      list.item[i] = r->NextDouble() * 100.0;
      Console::WriteLine("array[{0}] = {1}", i, list.item[i]);
   }

   UnmanagedTakesListStruct( list );
   delete list.item;
}
```

```Output
[managed] count = 10
array[0] = 72.624326996796
array[1] = 81.7325359590969
array[2] = 76.8022689394663
array[3] = 55.8161191436537
array[4] = 20.6033154021033
array[5] = 55.8884794618415
array[6] = 90.6027066011926
array[7] = 44.2177873310716
array[8] = 97.754975314138
array[9] = 27.370445768987
[unmanaged] count = 10
array[0] = 72.624327
array[1] = 81.732536
array[2] = 76.802269
array[3] = 55.816119
array[4] = 20.603315
array[5] = 55.888479
array[6] = 90.602707
array[7] = 44.217787
array[8] = 97.754975
array[9] = 27.370446
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
