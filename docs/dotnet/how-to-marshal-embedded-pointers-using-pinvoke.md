---
description: "Learn more about: How to: Marshal Embedded Pointers Using PInvoke"
title: "How to: Marshal Embedded Pointers Using PInvoke"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["embedded pointers [C++]", "interop [C++], embedded pointers", "platform invoke [C++], embedded pointers", "marshaling [C++], embedded pointers", "data marshaling [C++], embedded pointers"]
ms.assetid: f12c1b9a-4f82-45f8-83c8-3fc9321dbb98
---
# How to: Marshal Embedded Pointers Using PInvoke

Functions that are implemented in unmanaged DLLs can be called from managed code using Platform Invoke (P/Invoke) functionality. If the source code for the DLL is not available, P/Invoke is the only option for interoperating. However, unlike other .NET languages, Visual C++ provides an alternative to P/Invoke. For more information, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md) and [How to: Marshal Embedded Pointers Using C++ Interop](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

## Example

Passing structures to native code requires that a managed structure that is equivalent in terms of data layout to the native structure is created. However, structures that contain pointers require special handling. For each embedded pointer in the native structure, the managed version of the structure should contain an instance of the <xref:System.IntPtr> type. Also, memory for these instances must be explicitly allocated, initialized, and released using the <xref:System.Runtime.InteropServices.Marshal.AllocCoTaskMem%2A>, <xref:System.Runtime.InteropServices.Marshal.StructureToPtr%2A>, and <xref:System.Runtime.InteropServices.Marshal.FreeCoTaskMem%2A> methods.

The following code consists of an unmanaged and a managed module. The unmanaged module is a DLL that defines a function that accepts a structure called ListString that contains a pointer, and a function called TakesListStruct. The managed module is a command-line application that imports the TakesListStruct function and defines a structure called MListStruct that is equivalent to the native ListStruct except that the double* is represented with an <xref:System.IntPtr> instance. Before calling TakesListStruct, the main function allocates and initializes the memory that this field references.

```cpp
// TraditionalDll6.cpp
// compile with: /EHsc /LD
#include <stdio.h>
#include <iostream>
#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

#pragma pack(push, 8)
struct ListStruct {
   int count;
   double* item;
};
#pragma pack(pop)

extern "C" {
   TRADITIONALDLL_API void TakesListStruct(ListStruct);
}

void TakesListStruct(ListStruct list) {
   printf_s("[unmanaged] count = %d\n", list.count);
   for (int i=0; i<list.count; i++)
      printf_s("array[%d] = %f\n", i, list.item[i]);
}
```

```cpp
// EmbeddedPointerMarshalling.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Sequential, Pack=8)]
value struct MListStruct {
   int count;
   IntPtr item;
};

value struct TraditionalDLL {
    [DllImport("TraditionalDLL6.dll")]
   static public void TakesListStruct(MListStruct);
};

int main() {
   array<double>^ parray = gcnew array<double>(10);
   Console::WriteLine("[managed] count = {0}", parray->Length);

   Random^ r = gcnew Random();
   for (int i=0; i<parray->Length; i++) {
      parray[i] = r->NextDouble() * 100.0;
      Console::WriteLine("array[{0}] = {1}", i, parray[i]);
   }

   int size = Marshal::SizeOf(double::typeid);
   MListStruct list;
   list.count = parray->Length;
   list.item = Marshal::AllocCoTaskMem(size * parray->Length);

   for (int i=0; i<parray->Length; i++) {
      IntPtr t = IntPtr(list.item.ToInt32() + i * size);
      Marshal::StructureToPtr(parray[i], t, false);
   }

   TraditionalDLL::TakesListStruct( list );
   Marshal::FreeCoTaskMem(list.item);
}
```

Note that no portion of the DLL is exposed to the managed code using the traditional #include directive. In fact, the DLL is accessed at run time only, so problems with functions imported with <xref:System.Runtime.InteropServices.DllImportAttribute> will not be detected at compile time.

## See also

[Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
