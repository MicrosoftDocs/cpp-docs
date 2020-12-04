---
description: "Learn more about: How to: Convert System::String to wchar_t* or char*"
title: "How to: Convert System::String to wchar_t* or char*"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["System::String, converting to char or wchar_t", "PtrToStringChars method", "System::String", "wchart type, converting System::String", "char data type, converting System::String to"]
ms.assetid: 385da01b-5649-4543-8076-e3e251243ff0
---
# How to: Convert System::String to wchar_t* or char*

You can use `PtrToStringChars` in Vcclr.h to convert <xref:System.String> to native `wchar_t *` or `char *`.  This always returns a wide Unicode string pointer because CLR strings are internally Unicode. You can then convert from wide as shown in the following example.

## Example

```cpp
// convert_string_to_wchar.cpp
// compile with: /clr
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >

using namespace System;

int main() {
   String ^str = "Hello";

   // Pin memory so GC can't move it while native function is called
   pin_ptr<const wchar_t> wch = PtrToStringChars(str);
   printf_s("%S\n", wch);

   // Conversion to char* :
   // Can just convert wchar_t* to char* using one of the
   // conversion functions such as:
   // WideCharToMultiByte()
   // wcstombs_s()
   // ... etc
   size_t convertedChars = 0;
   size_t  sizeInBytes = ((str->Length + 1) * 2);
   errno_t err = 0;
   char    *ch = (char *)malloc(sizeInBytes);

   err = wcstombs_s(&convertedChars,
                    ch, sizeInBytes,
                    wch, sizeInBytes);
   if (err != 0)
      printf_s("wcstombs_s  failed!\n");

    printf_s("%s\n", ch);
}
```

```Output
Hello
Hello
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
