---
title: "How to: Marshal ANSI Strings Using C++ Interop"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: get-started-article
ms.assetid: 5eda2eb6-5140-40f0-82cf-7ce171fffb45
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Marshal ANSI Strings Using C++ Interop
This topic demonstrates how ANSI strings can be passed using C++ Interop, but the .NET Framework <xref:System.String?qualifyHint=False> represents strings in Unicode format, so conversion to ANSI is an extra step. For interoperating with other string types, see the following topics:  
  
-   [How to: Marshal Unicode Strings Using C++ Interop](../VS_visualcpp/How-to--Marshal-Unicode-Strings-Using-C---Interop.md)  
  
-   [How to: Marshal COM Strings Using C++ Interop](../VS_visualcpp/How-to--Marshal-COM-Strings-Using-C---Interop.md)  
  
 The following code examples use the [managed, unmanaged](../VS_visualcpp/managed--unmanaged.md) #pragma directives to implement managed and unmanaged functions in the same file, but these functions interoperate in the same manner if defined in separate files. Because files containing only unmanaged functions do not need to be compiled with [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md), they can retain their performance characteristics.  
  
## Example  
 The example demonstrates passing an ANSI string from a managed to an unmanaged function using <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi?qualifyHint=False>. This method allocates memory on the unmanaged heap and returns the address after performing the conversion. This means that no pinning is necessary (because memory on the GC heap is not being passed to the unmanaged function) and that the IntPtr returned from <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi?qualifyHint=False> must be explicitly released or a memory leak results.  
  
```  
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
  
## Example  
 The following example demonstrates the data marshaling required to access an ANSI string in a managed function that is called by an unmanaged function. The managed function, on receiving the native string, can either use it directly or convert it to a managed string using the <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi?qualifyHint=False> method, as shown.  
  
```  
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
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../VS_visualcpp/Using-C---Interop--Implicit-PInvoke-.md)