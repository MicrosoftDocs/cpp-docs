---
description: "Learn more about: How to: Marshal Unicode Strings Using C++ Interop"
title: "How to: Marshal Unicode Strings Using C++ Interop"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["interop [C++], strings", "marshaling [C++], strings", "C++ Interop, strings", "data marshaling [C++], strings", "Unicode, marshaling strings"]
ms.assetid: 96c2141d-6c5d-43ef-a1aa-5785afb9a9aa
---
# How to: Marshal Unicode Strings Using C++ Interop

This topic demonstrates one facet of Visual C++ interoperability. For more information, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

The following code examples use the [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

This topic demonstrates how Unicode strings can be passed from a managed to an unmanaged function, and vice versa. For interoperating with other strings types, see the following topics:

- [How to: Marshal ANSI Strings Using C++ Interop](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [How to: Marshal COM Strings Using C++ Interop](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

## Example: Pass Unicode string from managed to unmanaged function

To pass a Unicode string from a managed to an unmanaged function, the PtrToStringChars function (declared in Vcclr.h) can be used to access in the memory where the managed string is stored. Because this address will be passed to a native function, it is important that the memory be pinned with [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) to prevent the string data from being relocated, should a garbage collection cycle take place while the unmanaged function executes.

```cpp
// MarshalUnicode1.cpp
// compile with: /clr
#include <iostream>
#include <stdio.h>
#include <vcclr.h>

using namespace std;

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

void NativeTakesAString(const wchar_t* p) {
   printf_s("(native) received '%S'\n", p);
}

#pragma managed

int main() {
   String^ s = gcnew String("test string");
   pin_ptr<const wchar_t> str = PtrToStringChars(s);

   Console::WriteLine("(managed) passing string to native func...");
   NativeTakesAString( str );
}
```

## Example: Data marshaling required to access Unicode string

The following example demonstrates the data marshaling required to access a Unicode string in a managed function called by an unmanaged function. The managed function, on receiving the native Unicode string, converts it to a managed string using the <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> method.

```cpp
// MarshalUnicode2.cpp
// compile with: /clr
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;

#pragma managed

void ManagedStringFunc(wchar_t* s) {
   String^ ms = Marshal::PtrToStringUni((IntPtr)s);
   Console::WriteLine("(managed) received '{0}'", ms);
}

#pragma unmanaged

void NativeProvidesAString() {
   cout << "(unmanaged) calling managed func...\n";
   ManagedStringFunc(L"test string");
}

#pragma managed

int main() {
   NativeProvidesAString();
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
