---
description: "Learn more about: How to: Marshal strings using P/Invoke"
title: "How to: Marshal strings using P/Invoke"
ms.custom: "get-started-article"
ms.date: 06/29/2022
helpviewer_keywords: ["interop [C++], strings", "marshaling [C++], strings", "data marshaling [C++], strings", "platform invoke [C++], strings"]
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
---
# How to: Marshal strings using P/Invoke

Native functions that accept C-style strings can be called using the CLR string type `System::String` by using .NET Framework Platform Invoke (P/Invoke) support. We encourage you to use the C++ Interop features instead of P/Invoke when possible. because P/Invoke provides little compile-time error reporting, isn't type-safe, and can be tedious to implement. If the unmanaged API is packaged as a DLL, and the source code isn't available, then P/Invoke is the only option. Otherwise, see [Using C++ Interop (Implicit P/Invoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Managed and unmanaged strings are laid out differently in memory, so passing strings from managed to unmanaged functions requires the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute to instruct the compiler to insert the required conversion mechanisms for marshaling the string data correctly and safely.

As with functions that use only intrinsic data types, <xref:System.Runtime.InteropServices.DllImportAttribute> is used to declare managed entry points into the native functions. Functions that pass strings can use a handle to the <xref:System.String> type instead of defining these entry points as taking C-style strings. Using this type prompts the compiler to insert code that performs the required conversion. For each function argument in an unmanaged function that takes a string, use the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute to indicate that the `String` object should be marshaled to the native function as a C-style string.

The marshaler wraps the call to the unmanaged function in a hidden wrapper routine. The wrapper routine pins and copies the managed string into a locally allocated string in the unmanaged context. The local copy is then passed to the unmanaged function. When the unmanaged function returns, the wrapper deletes the resource. Or, if it was on the stack, it's reclaimed when the wrapper goes out of scope. The unmanaged function isn't responsible for this memory. The unmanaged code only creates and deletes memory in the heap set up by its own CRT, so there's never an issue with the marshaller using a different CRT version.

If your unmanaged function returns a string, either as a return value or an out parameter, the marshaler copies it into a new managed string, and then releases the memory. For more information, see [Default Marshaling Behavior](/dotnet/framework/interop/default-marshaling-behavior) and [Marshaling Data with Platform Invoke](/dotnet/framework/interop/marshaling-data-with-platform-invoke).

## Example

The following code consists of an unmanaged module and a managed module. The unmanaged module is a DLL that defines a function called `TakesAString`. `TakesAString` accepts a C-style narrow string in the form of a `char*`.

```cpp
// TraditionalDll2.cpp
// compile with: /LD /EHsc
#include <windows.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   TRADITIONALDLL_API void TakesAString(char*);
}

void TakesAString(char* p) {
   printf_s("[unmanaged] %s\n", p);
}
```

The managed module is a command-line application that imports the `TakesAString` function, but defines it as taking a managed `System.String` instead of a `char*`. The <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute is used to indicate how the managed string should be marshaled when `TakesAString` is called.

```cpp
// MarshalString.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value struct TraditionalDLL
{
   [DllImport("TraditionalDLL2.dll")]
      static public void
      TakesAString([MarshalAs(UnmanagedType::LPStr)]String^);
};

int main() {
   String^ s = gcnew String("sample string");
   Console::WriteLine("[managed] passing managed string to unmanaged function...");
   TraditionalDLL::TakesAString(s);
   Console::WriteLine("[managed] {0}", s);
}
```

This technique constructs a copy of the string on the unmanaged heap, so changes made to the string by the native function won't be reflected in the managed copy of the string.

No portion of the DLL is exposed to the managed code by the traditional `#include` directive. In fact, the DLL is accessed at runtime only, so problems in functions imported by using `DllImport` aren't detected at compile time.

## See also

[Using explicit P/Invoke in C++ (`DllImport` attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
