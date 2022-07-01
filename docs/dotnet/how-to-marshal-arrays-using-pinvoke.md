---
description: "Learn more about: How to: Marshal arrays using P/Invoke"
title: "How to: Marshal arrays using P/Invoke"
ms.custom: "get-started-article"
ms.date: 06/30/2022
helpviewer_keywords: ["marshaling [C++], arrays", "platform invoke [C++], arrays", "interop [C++], arrays", "data marshaling [C++], arrays"]
ms.assetid: a1237797-a2da-4df4-984a-6333ed3af406
---
# How to: Marshal arrays using P/Invoke

You can call native functions that accept C-style strings by using the CLR string type <xref:System.String> when using .NET Framework Platform Invoke (P/Invoke) support. We encourage you to use the C++ Interop features instead of P/Invoke when possible. P/Invoke provides little compile-time error reporting, isn't type-safe, and can be tedious to implement. If the unmanaged API is packaged as a DLL and the source code isn't available, P/Invoke is the only option. Otherwise, see [Using C++ Interop (Implicit P/Invoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)).

## Example

Because native and managed arrays are laid out differently in memory, passing them successfully across the managed/unmanaged boundary requires conversion, or *marshaling*. This article demonstrates how an array of simple (blitable) items can be passed to native functions from managed code.

As is true of managed/unmanaged data marshaling in general, the <xref:System.Runtime.InteropServices.DllImportAttribute> attribute is used to create a managed entry point for each native function that's used. In functions that take arrays as arguments, the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute must be used to specify how to marshal the data. In the following example, the <xref:System.Runtime.InteropServices.UnmanagedType> enumeration is used to indicate that the managed array is marshaled as a C-style array.

The following code consists of an unmanaged and a managed module. The unmanaged module is a DLL that defines a function that accepts an array of integers. The second module is a managed command-line application that imports this function, but defines it in terms of a managed array. It uses the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute to specify that the array should be converted to a native array when called.

```cpp
// TraditionalDll4.cpp
// compile with: /LD /EHsc
#include <iostream>

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   TRADITIONALDLL_API void TakesAnArray(int len, int[]);
}

void TakesAnArray(int len, int a[]) {
   printf_s("[unmanaged]\n");
   for (int i=0; i<len; i++)
      printf("%d = %d\n", i, a[i]);
}
```

The managed module is compiled by using **`/clr`**.

```cpp
// MarshalBlitArray.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value struct TraditionalDLL {
   [DllImport("TraditionalDLL4.dll")]
   static public void TakesAnArray(
   int len,[MarshalAs(UnmanagedType::LPArray)]array<int>^);
};

int main() {
   array<int>^ b = gcnew array<int>(3);
   b[0] = 11;
   b[1] = 33;
   b[2] = 55;
   TraditionalDLL::TakesAnArray(3, b);

   Console::WriteLine("[managed]");
   for (int i=0; i<3; i++)
      Console::WriteLine("{0} = {1}", i, b[i]);
}
```

No portion of the DLL is exposed to the managed code through the traditional `#include` directive. In fact, because the DLL is accessed at runtime only, problems in functions imported by using <xref:System.Runtime.InteropServices.DllImportAttribute> can't be detected at compile time.

## See also

[Using explicit P/Invoke in C++ (`DllImport` attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
