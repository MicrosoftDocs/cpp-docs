---
description: "Learn more about: How to: Marshal Structures Using PInvoke"
title: "How to: Marshal Structures Using PInvoke"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["data marshaling [C++], structures", "platform invoke [C++], structures", "interop [C++], structures", "marshaling [C++], structures"]
ms.assetid: 35997e6f-9251-4af3-8c6e-0712d64d6a5d
---
# How to: Marshal Structures Using PInvoke

This document explains how native functions that accept C-style structs can be called from managed functions by using P/Invoke. Although we recommend that you use the C++ Interop features instead of P/Invoke because P/Invoke provides little compile-time error reporting, is not type-safe, and can be tedious to implement, if the unmanaged API is packaged as a DLL and the source code is not available, P/Invoke is the only option. Otherwise, see the following documents:

- [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

- [How to: Marshal Strings Using PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)

By default, native and managed structures are laid out differently in memory, so successfully passing structures across the managed/unmanaged boundary requires extra steps to preserve data integrity.

This document explains the steps required to define managed equivalents of native structures and how the resulting structures can be passed to unmanaged functions. This document assumes that simple structures — those that do not contain strings or pointers — are used. For information about non-blittable interoperability, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md). P/Invoke cannot have non-blittable types as a return value. Blittable types have the same representation in managed and unmanaged code. For more information, see [Blittable and Non-Blittable Types](/dotnet/framework/interop/blittable-and-non-blittable-types).

Marshaling simple, blittable structures across the managed/unmanaged boundary first requires that managed versions of each native structure be defined. These structures can have any legal name; there is no relationship between the native and managed version of the two structures other than their data layout. Therefore, it is vital that the managed version contains fields that are the same size and in the same order as the native version. (There is no mechanism for ensuring that the managed and native versions of the structure are equivalent, so incompatibilities will not become apparent until run time. It is the programmer's responsibility to ensure that the two structures have the same data layout.)

Because the members of managed structures are sometimes rearranged for performance purposes, it is necessary to use the <xref:System.Runtime.InteropServices.StructLayoutAttribute> attribute to indicate that the structure are laid out sequentially. It is also a good idea to explicitly set the structure packing setting to be the same as that used by the native structure. (Although by default, Visual C++ uses an 8-byte structure packing for both managed code.)

1. Next, use <xref:System.Runtime.InteropServices.DllImportAttribute> to declare entry points that correspond to any unmanaged functions that accept the structure, but use the managed version of the structure in the function signatures, which is a moot point if you use the same name for both versions of the structure.

1. Now managed code can pass the managed version of the structure to the unmanaged functions as though they are actually managed functions. These structures can be passed either by value or by reference, as demonstrated in the following example.

## Unmanaged and a managed modules

The following code consists of an unmanaged and a managed module. The unmanaged module is a DLL that defines a structure called Location and a function called GetDistance that accepts two instances of the Location structure. The second module is a managed command-line application that imports the GetDistance function, but defines it in terms of a managed equivalent of the Location structure, MLocation. In practice the same name would probably be used for both versions of the structure; however, a different name is used here to demonstrate that the DllImport prototype is defined in terms of the managed version.

Note that no portion of the DLL is exposed to the managed code using the traditional #include directive. In fact, the DLL is accessed at run time only, so problems with functions imported with DllImport will not be detected at compile time.

### Example: Unmanaged DLL module

```cpp
// TraditionalDll3.cpp
// compile with: /LD /EHsc
#include <iostream>
#include <stdio.h>
#include <math.h>

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
   #define TRADITIONALDLL_API __declspec(dllexport)
#else
   #define TRADITIONALDLL_API __declspec(dllimport)
#endif

#pragma pack(push, 8)
struct Location {
   int x;
   int y;
};
#pragma pack(pop)

extern "C" {
   TRADITIONALDLL_API double GetDistance(Location, Location);
   TRADITIONALDLL_API void InitLocation(Location*);
}

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
```

### Example: Managed command-line application module

```cpp
// MarshalStruct_pi.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Sequential, Pack=8)]
value struct MLocation {
   int x;
   int y;
};

value struct TraditionalDLL {
   [DllImport("TraditionalDLL3.dll")]
   static public double GetDistance(MLocation, MLocation);
   [DllImport("TraditionalDLL3.dll")]
   static public double InitLocation(MLocation*);
};

int main() {
   MLocation loc1;
   loc1.x = 0;
   loc1.y = 0;

   MLocation loc2;
   loc2.x = 100;
   loc2.y = 100;

   double dist = TraditionalDLL::GetDistance(loc1, loc2);
   Console::WriteLine("[managed] distance = {0}", dist);

   MLocation loc3;
   TraditionalDLL::InitLocation(&loc3);
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);
}
```

```Output
[unmanaged] loc1(0,0) loc2(100,100)
[managed] distance = 141.42135623731
[unmanaged] Initializing location...
[managed] x=50 y=50
```

## See also

[Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
