---
title: "How to: Marshal Strings Using PInvoke | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interop [C++], strings"
  - "marshaling [C++], strings"
  - "data marshaling [C++], strings"
  - "platform invoke [C++], strings"
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Marshal Strings Using PInvoke
This topic explains how native functions that accept C-style strings can be called using the CLR string type System::String using .NET Framework Platform Invoke support. Visual C++ programmers are encouraged to use the C++ Interop features instead (when possible) because P/Invoke provides little compile-time error reporting, is not type-safe, and can be tedious to implement. If the unmanaged API is packaged as a DLL, and the source code is not available, then P/Invoke is the only option, but otherwise see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Managed and unmanaged strings are laid out differently in memory, so passing strings from managed to unmanaged functions requires the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute to instruct the compiler to insert the required conversion mechanisms for marshaling the string data correctly and safely.  
  
 As with functions that use only intrinsic data types, <xref:System.Runtime.InteropServices.DllImportAttribute> is used to declare managed entry points into the native functions, but--for passing strings--instead of defining these entry points as taking C-style strings, a handle to the <xref:System.String> type can be used instead. This prompts the compiler to insert code that performs the required conversion. For each function argument in an unmanaged function that takes a string, the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute should be used to indicate that the String object should be marshaled to the native function as a C-style string.  
  
## Example  
 The following code consists of a unmanaged and a managed module. The unmanaged module is a DLL that defines a function called TakesAString that accepts a C-style ANSI string in the form of a char*. The managed module is a command-line application that imports the TakesAString function, but defines it as taking a managed System.String instead of a char\*. The <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute is used to indicate how the managed string should be marshaled when TakesAString is called.  
  
 The managed module is compiled with /clr, but /clr:pure works as well.  
  
```  
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
  
```  
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
  
 This technique causes a copy of the string to be constructed on the unmanaged heap, so changes made to the string by the native function will not be reflected in the managed copy of the string.  
  
 Note that no portion of the DLL is exposed to the managed code via the traditional #include directive. In fact, the DLL is accessed at runtime only, so problems with functions imported with `DllImport` will not be detected at compile time.  
  
## See Also  
 [Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)