---
description: "Learn more about: How to: Convert char * String to System::Byte Array"
title: "How to: Convert char * String to System::Byte Array"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["examples [C++], strings", "arrays [C++], character", "character arrays, converting to System::Byte arrays", "examples [C++], arrays"]
ms.assetid: de9bc4eb-773c-4796-a496-9b90ca986503
---
# How to: Convert char \* String to System::Byte Array

The most efficient way to convert a `char *` string to a <xref:System.Byte> array is to use <xref:System.Runtime.InteropServices.Marshal> class.

## Example

```cpp
// convert_native_string_to_Byte_array.cpp
// compile with: /clr
#include <string.h>

using namespace System;
using namespace System::Runtime::InteropServices;

int main() {
   char buf[] = "Native String";
   int len = strlen(buf);

   array< Byte >^ byteArray = gcnew array< Byte >(len + 2);

   // convert native pointer to System::IntPtr with C-Style cast
   Marshal::Copy((IntPtr)buf,byteArray, 0, len);

   for ( int i = byteArray->GetLowerBound(0); i <= byteArray->GetUpperBound(0); i++ ) {
      char dc =  *(Byte^)   byteArray->GetValue(i);
      Console::Write((Char)dc);
   }

   Console::WriteLine();
}
```

```Output
Native String
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
