---
description: "Learn more about: How to: Marshal Function Pointers Using PInvoke"
title: "How to: Marshal Function Pointers Using PInvoke"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["data marshaling [C++], callbacks and delegates", "interop [C++], callbacks and delegates", "platform invoke [C++], callbacks and delegates", "marshaling [C++], callbacks and delegates"]
ms.assetid: dcf396fd-a91d-49c0-ab0b-1ea160668a89
---
# How to: Marshal Function Pointers Using PInvoke

This topic explains how managed delegates can be used in place of function pointers when interoperating with unmanaged functions using .NET Framework P/Invoke features. However, Visual C++ programmers are encouraged to use the C++ Interop features instead (when possible) because P/Invoke provides little compile-time error reporting, is not type-safe, and can be tedious to implement. If the unmanaged API is packaged as a DLL and the source code is not available, P/Invoke is the only option. Otherwise, see the following topics:

- [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

- [How to: Marshal Callbacks and Delegates By Using C++ Interop](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

Unmanaged APIs that take functions pointers as arguments can be called from managed code with a managed delegate in place of the native function pointer. The compiler automatically marshals the delegate to unmanaged functions as a function pointer and inserts the necessary managed/unmanaged transition code.

## Example

The following code consists of an unmanaged and a managed module. The unmanaged module is a DLL that defines a function called TakesCallback that accepts a function pointer. This address is used to execute the function.

The managed module defines a delegate that is marshaled to the native code as a function pointer and uses the <xref:System.Runtime.InteropServices.DllImportAttribute> attribute to expose the native TakesCallback function to the managed code. In the main function, an instance of the delegate is created and passed to the TakesCallback function. The program output demonstrates that this function gets executed by the native TakesCallback function.

The managed function suppresses garbage collection for the managed delegate to prevent .NET Framework garbage collection from relocating the delegate while the native function executes.

```cpp
// TraditionalDll5.cpp
// compile with: /LD /EHsc
#include <iostream>
#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   /* Declare an unmanaged function type that takes two int arguments
      Note the use of __stdcall for compatibility with managed code */
   typedef int (__stdcall *CALLBACK)(int);
   TRADITIONALDLL_API int TakesCallback(CALLBACK fp, int);
}

int TakesCallback(CALLBACK fp, int n) {
   printf_s("[unmanaged] got callback address, calling it...\n");
   return fp(n);
}
```

```cpp
// MarshalDelegate.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

public delegate int GetTheAnswerDelegate(int);
public value struct TraditionalDLL {
   [DllImport("TraditionalDLL5.dll")]
   static public int TakesCallback(GetTheAnswerDelegate^ pfn, int n);
};

int GetNumber(int n) {
   Console::WriteLine("[managed] callback!");
   static int x = 0;
   ++x;
   return x + n;
}

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);
   pin_ptr<GetTheAnswerDelegate^> pp = &fp;
   Console::WriteLine("[managed] sending delegate as callback...");

   int answer = TraditionalDLL::TakesCallback(fp, 42);
}
```

Note that no portion of the DLL is exposed to the managed code using the traditional #include directive. In fact, the DLL is accessed at run time only, so problems with functions imported with <xref:System.Runtime.InteropServices.DllImportAttribute> will not be detected at compile time.

## See also

[Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
