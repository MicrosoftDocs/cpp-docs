---
title: "How to: Marshal Arrays Using PInvoke | Microsoft Docs"
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
  - "marshaling [C++], arrays"
  - "platform invoke [C++], arrays"
  - "interop [C++], arrays"
  - "data marshaling [C++], arrays"
ms.assetid: a1237797-a2da-4df4-984a-6333ed3af406
caps.latest.revision: 20
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
# How to: Marshal Arrays Using PInvoke
This topic explains how native functions that accept C-style strings can be called using the CLR string type <xref:System.String> using .NET Framework Platform Invoke support. Visual C++ programmers are encouraged to use the C++ Interop features instead (when possible) because P/Invoke provides little compile-time error reporting, is not type-safe, and can be tedious to implement. If the unmanaged API is packaged as a DLL and the source code is not available, P/Invoke is the only option (otherwise, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)).  
  
## Example  
 Because native and managed arrays are laid out differently in memory, passing them successfully across the managed/unmanaged boundary requires conversion, or marshaling. This topic demonstrates how an array of simple (blitable) items can be passed to native functions from managed code.  
  
 As is true of managed/unmanaged data marshaling in general, the <xref:System.Runtime.InteropServices.DllImportAttribute> attribute is used to create a managed entry point for each native function that will be used. In the case of functions that take arrays as arguments, the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute must be used as well to specify to the compiler how the data will be marshaled. In the following example, the <xref:System.Runtime.InteropServices.UnmanagedType> enumeration is used to indicate that the managed array will be marshaled as a C-style array.  
  
 The following code consists of an unmanaged and a managed module. The unmanaged module is a DLL that defines a function that accepts an array of integers. The second module is a managed command-line application that imports this function, but defines it in terms of a managed array, and uses the <xref:System.Runtime.InteropServices.MarshalAsAttribute> attribute to specify that the array should be converted to a native array when called.  
  
 The managed module is compiled with /clr, but /clr:pure works as well.  
  
```  
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
  
```  
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
  
 Note that no portion of the DLL is exposed to the managed code through the traditional #include directive. In fact, because the DLL is accessed at run time only, problems with functions imported with <xref:System.Runtime.InteropServices.DllImportAttribute> will not be detected at compile time.  
  
## See Also  
 [Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)