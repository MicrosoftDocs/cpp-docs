---
description: "Learn more about: How to: Marshal ANSI Strings Using C++ Interop"
title: "How to: Marshal ANSI Strings Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["interop [C++], strings", "ANSI [C++], marshaling strings", "marshaling [C++], strings", "C++ Interop, strings", "data marshaling [C++], strings"]
ms.assetid: 5eda2eb6-5140-40f0-82cf-7ce171fffb45
---
# How to: Marshal ANSI Strings Using C++ Interop

This topic demonstrates how ANSI strings can be passed using C++ Interop, but the .NET Framework <xref:System.String> represents strings in Unicode format, so conversion to ANSI is an extra step. For interoperating with other string types, see the following topics:

- [How to: Marshal Unicode Strings Using C++ Interop](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [How to: Marshal COM Strings Using C++ Interop](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Because files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md), they can retain their performance characteristics.

## Example: Pass ANSI string

The example demonstrates passing an ANSI string from a managed to an unmanaged function using <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A>. This method allocates memory on the unmanaged heap and returns the address after performing the conversion. This means that no pinning is necessary (because memory on the GC heap is not being passed to the unmanaged function) and that the IntPtr returned from <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> must be explicitly released or a memory leak results.

```cpp
// MarshalANSI1.cpp
// compile with: /clr
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

void NativeTakesAString(const char* p) {
   printf_s("(native) received '%s'\n", p);
}

#pragma managed

int main() {
   String^ s = gcnew String("sample string");
   IntPtr ip = Marshal::StringToHGlobalAnsi(s);
   const char* str = static_cast<const char*>(ip.ToPointer());

   Console::WriteLine("(managed) passing string...");
   NativeTakesAString( str );

   Marshal::FreeHGlobal( ip );
}
```

## Example: Data marshaling required to access ANSI string

The following example demonstrates the data marshaling required to access an ANSI string in a managed function that is called by an unmanaged function. The managed function, on receiving the native string, can either use it directly or convert it to a managed string using the <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> method, as shown.

```cpp
// MarshalANSI2.cpp
// compile with: /clr
#include <iostream>
#include <vcclr.h>

using namespace std;

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma managed

void ManagedStringFunc(char* s) {
   String^ ms = Marshal::PtrToStringAnsi(static_cast<IntPtr>(s));
   Console::WriteLine("(managed): received '{0}'", ms);
}

#pragma unmanaged

void NativeProvidesAString() {
   cout << "(native) calling managed func...\n";
   ManagedStringFunc("test string");
}

#pragma managed

int main() {
   NativeProvidesAString();
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
