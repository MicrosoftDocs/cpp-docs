---
title: "How to: Convert System::String to Standard String | Microsoft Docs"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["C++ Standard Library, converting System::String to standard string", "string conversion, System::String"]
ms.assetid: 79e2537e-d4eb-459f-9506-0e738045b59e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Convert System::String to Standard String
You can convert a <xref:System.String> to `std::string` or `std::wstring`, without using `PtrToStringChars` in Vcclr.h.  
  
## Example  
  
```  
// convert_system_string.cpp  
// compile with: /clr  
#include <string>  
#include <iostream>  
using namespace std;  
using namespace System;  
  
void MarshalString ( String ^ s, string& os ) {  
   using namespace Runtime::InteropServices;  
   const char* chars =   
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();  
   os = chars;  
   Marshal::FreeHGlobal(IntPtr((void*)chars));  
}  
  
void MarshalString ( String ^ s, wstring& os ) {  
   using namespace Runtime::InteropServices;  
   const wchar_t* chars =   
      (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();  
   os = chars;  
   Marshal::FreeHGlobal(IntPtr((void*)chars));  
}  
  
int main() {  
   string a = "test";  
   wstring b = L"test2";  
   String ^ c = gcnew String("abcd");  
  
   cout << a << endl;  
   MarshalString(c, a);  
   c = "efgh";  
   MarshalString(c, b);  
   cout << a << endl;  
   wcout << b << endl;  
}  
```  
  
```  
test  
abcd  
efgh  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)