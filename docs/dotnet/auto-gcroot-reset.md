---
title: "auto_gcroot::reset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["msclr::auto_gcroot::reset", "auto_gcroot::reset", "msclr.auto_gcroot.reset", "auto_gcroot.reset"]
dev_langs: ["C++"]
helpviewer_keywords: ["reset method"]
ms.assetid: dd58467f-3885-4a15-99fb-ed6dd5d19622
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# auto_gcroot::reset
Destroy the current owned object and optionally take possession of a new object.  
  
## Syntax  
  
```  
void reset(  
   _element_type _new_ptr = nullptr  
);  
```  
  
#### Parameters  
 `_new_ptr`  
 (Optional) The new object.  
  
## Example  
  
```  
// msl_auto_gcroot_reset.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {  
      Console::WriteLine( "ClassA constructor: " + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "ClassA destructor: " + m_s );  
   }  
  
   void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
int main()  
{  
   auto_gcroot<ClassA^> agc1 = gcnew ClassA( "first" );  
   agc1->PrintHello();  
  
   ClassA^ ha = gcnew ClassA( "second" );  
   agc1.reset( ha ); // release first object, reference second  
   agc1->PrintHello();  
  
   agc1.reset(); // release second object, set to nullptr  
  
   Console::WriteLine( "done" );  
}  
```  
  
```Output  
ClassA constructor: first  
Hello from first A!  
ClassA constructor: second  
ClassA destructor: first  
Hello from second A!  
ClassA destructor: second  
done  
```  
  
## Requirements  
 **Header file** \<msclr\auto_gcroot.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_gcroot Members](../dotnet/auto-gcroot-members.md)   
 [auto_gcroot::release](../dotnet/auto-gcroot-release.md)   
 [auto_gcroot::attach](../dotnet/auto-gcroot-attach.md)