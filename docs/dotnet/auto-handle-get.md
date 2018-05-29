---
title: "auto_handle::get | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["auto_handle::get", "msclr::auto_handle::get", "auto_handle.get", "msclr.auto_handle.get"]
dev_langs: ["C++"]
helpviewer_keywords: ["auto_handle::get"]
ms.assetid: 8c75727b-8f21-44b3-be3e-7eb8858da4f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# auto_handle::get
Gets the contained object.  
  
## Syntax  
  
```  
_element_type ^ get();  
```  
  
## Return Value  
 The contained object.  
  
## Example  
  
```  
// msl_auto_handle_get.cpp  
// compile with: /clr  
#include "msclr\auto_handle.h"  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ){  
      Console::WriteLine( "in ClassA constructor:" + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "in ClassA destructor:" + m_s );  
   }  
  
   void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
void PrintA( ClassA^ a ) {  
   a->PrintHello();  
}  
  
int main() {  
   auto_handle<ClassA> a = gcnew ClassA( "first" );  
   a->PrintHello();  
  
   ClassA^ a2 = a.get();  
   a2->PrintHello();  
  
   PrintA( a.get() );  
}  
```  
  
```Output  
in ClassA constructor:first  
Hello from first A!  
Hello from first A!  
Hello from first A!  
in ClassA destructor:first  
```  
  
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../dotnet/auto-handle-members.md)