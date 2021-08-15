---
description: "Learn more about: How to: Marshal Structures Using C++ Interop"
title: "How to: Marshal Structures Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ Interop, structures", "structures [C++], marshaling", "data marshaling [C++], structures", "interop [C++], structures", "marshaling [C++], structures"]
ms.assetid: c2080200-f983-4d6e-a557-cd870f060a54
---
# How to: Marshal Structures Using C++ Interop

This topic demonstrates one facet of Visual C++ interoperability. For more information, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

## Example: Pass structure from managed to unmanaged function

The following example demonstrates passing a structure from a managed to an unmanaged function, both by value and by reference. Because the structure in this example contains only simple, intrinsic data types (see [Blittable and Non-Blittable Types](/dotnet/framework/interop/blittable-and-non-blittable-types)), no special marshaling is required. To marshal non-blittable structures, such as those that contain pointers, see [How to: Marshal Embedded Pointers Using C++ Interop](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

```cpp
// PassStruct1.cpp
// compile with: /clr

#include <stdio.h>
#include <math.h>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

struct Location {
   int x;
   int y;
};

double GetDistance(Location loc1, Location loc2) {
   printf_s("[unmanaged] loc1(%d,%d)", loc1.x, loc1.y);
   printf_s(" loc2(%d,%d)\n", loc2.x, loc2.y);

   double h = loc1.x - loc2.x;
   double v = loc1.y = loc2.y;
   double dist = sqrt( pow(h,2) + pow(v,2) );

   return dist;
}

void InitLocation(Location* lp) {
   printf_s("[unmanaged] Initializing location...\n");
   lp->x = 50;
   lp->y = 50;
}

#pragma managed

int main() {
   Location loc1;
   loc1.x = 0;
   loc1.y = 0;

   Location loc2;
   loc2.x = 100;
   loc2.y = 100;

   double dist = GetDistance(loc1, loc2);
   Console::WriteLine("[managed] distance = {0}", dist);

   Location loc3;
   InitLocation(&loc3);
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);
}
```

## Example: Pass structure from unmanaged to managed function

The following example demonstrates passing a structure from an unmanaged to a managed function, both by value and by reference. Because the structure in this example contains only simple, intrinsic data types (see [Blittable and Non-Blittable Types](/dotnet/framework/interop/blittable-and-non-blittable-types)), no special marshalling is required. To marshal non-blittable structures, such as those that contain pointers, see [How to: Marshal Embedded Pointers Using C++ Interop](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

```cpp
// PassStruct2.cpp
// compile with: /clr
#include <stdio.h>
#include <math.h>
using namespace System;

// native structure definition
struct Location {
   int x;
   int y;
};

#pragma managed

double GetDistance(Location loc1, Location loc2) {
   Console::Write("[managed] got loc1({0},{1})", loc1.x, loc1.y);
   Console::WriteLine(" loc2({0},{1})", loc2.x, loc2.y);

   double h = loc1.x - loc2.x;
   double v = loc1.y = loc2.y;
   double dist = sqrt( pow(h,2) + pow(v,2) );

   return dist;
}

void InitLocation(Location* lp) {
   Console::WriteLine("[managed] Initializing location...");
   lp->x = 50;
   lp->y = 50;
}

#pragma unmanaged

int UnmanagedFunc() {
   Location loc1;
   loc1.x = 0;
   loc1.y = 0;

   Location loc2;
   loc2.x = 100;
   loc2.y = 100;

   printf_s("(unmanaged) loc1=(%d,%d)", loc1.x, loc1.y);
   printf_s(" loc2=(%d,%d)\n", loc2.x, loc2.y);

   double dist = GetDistance(loc1, loc2);
   printf_s("[unmanaged] distance = %f\n", dist);

   Location loc3;
   InitLocation(&loc3);
   printf_s("[unmanaged] got x=%d y=%d\n", loc3.x, loc3.y);

    return 0;
}

#pragma managed

int main() {
   UnmanagedFunc();
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
