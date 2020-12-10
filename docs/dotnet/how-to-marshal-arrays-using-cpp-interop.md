---
description: "Learn more about: How to: Marshal Arrays Using C++ Interop"
title: "How to: Marshal Arrays Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["arrays [C++], marshaling", "marshaling [C++], arrays", "interop [C++], arrays", "C++ Interop, arrays", "data marshaling [C++], arrays"]
ms.assetid: c2b37ab1-8acf-4855-ad3c-7d2864826b14
---
# How to: Marshal Arrays Using C++ Interop

This topic demonstrates one facet of Visual C++ interoperability. For more information, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

## Example: Pass managed array to unmanaged function

The following example demonstrates how to pass a managed array to an unmanaged function. The managed function uses [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) to suppress garbage collection for the array before calling the unmanaged function. By providing the unmanaged function with a pinned pointer into the GC heap, the overhead of making a copy of the array can be avoided. To demonstrate that the unmanaged function is accessing GC heap memory, it modifies the contents of the array and the changes are reflected when the managed function resumes control.

```cpp
// PassArray1.cpp
// compile with: /clr
#ifndef _CRT_RAND_S
#define _CRT_RAND_S
#endif

#include <iostream>
#include <stdlib.h>
using namespace std;

using namespace System;

#pragma unmanaged

void TakesAnArray(int* a, int c) {
   cout << "(unmanaged) array received:\n";
   for (int i=0; i<c; i++)
      cout << "a[" << i << "] = " << a[i] << "\n";

   unsigned int number;
   errno_t err;

   cout << "(unmanaged) modifying array contents...\n";
   for (int i=0; i<c; i++) {
      err = rand_s( &number );
      if ( err == 0 )
         a[i] = number % 100;
   }
}

#pragma managed

int main() {
   array<int>^ nums = gcnew array<int>(5);

   nums[0] = 0;
   nums[1] = 1;
   nums[2] = 2;
   nums[3] = 3;
   nums[4] = 4;

   Console::WriteLine("(managed) array created:");
   for (int i=0; i<5; i++)
      Console::WriteLine("a[{0}] = {1}", i, nums[i]);

   pin_ptr<int> pp = &nums[0];
   TakesAnArray(pp, 5);

   Console::WriteLine("(managed) contents:");
   for (int i=0; i<5; i++)
      Console::WriteLine("a[{0}] = {1}", i, nums[i]);
}
```

## Example: Pass unmanaged array to managed function

The following example demonstrates passing an unmanaged array to a managed function. The managed function accesses the array memory directly (as opposed to creating a managed array and copying the array content), which allows changes made by the managed function to be reflected in the unmanaged function when it regains control.

```cpp
// PassArray2.cpp
// compile with: /clr
#include <iostream>
using namespace std;

using namespace System;

#pragma managed

void ManagedTakesAnArray(int* a, int c) {
   Console::WriteLine("(managed) array received:");
   for (int i=0; i<c; i++)
      Console::WriteLine("a[{0}] = {1}", i, a[i]);

   cout << "(managed) modifying array contents...\n";
   Random^ r = gcnew Random(DateTime::Now.Second);
   for (int i=0; i<c; i++)
      a[i] = r->Next(100);
}

#pragma unmanaged

void NativeFunc() {
   int nums[5] = { 0, 1, 2, 3, 4 };

   printf_s("(unmanaged) array created:\n");
   for (int i=0; i<5; i++)
      printf_s("a[%d] = %d\n", i, nums[i]);

   ManagedTakesAnArray(nums, 5);

   printf_s("(ummanaged) contents:\n");
   for (int i=0; i<5; i++)
      printf_s("a[%d] = %d\n", i, nums[i]);
}

#pragma managed

int main() {
   NativeFunc();
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
