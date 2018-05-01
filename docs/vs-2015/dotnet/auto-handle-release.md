---
title: "auto_handle::release | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::auto_handle::release"
  - "auto_handle.release"
  - "msclr.auto_handle.release"
  - "auto_handle::release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle::release"
ms.assetid: d4848150-859e-4c61-a946-09d24d3d6577
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::release
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [auto_handle::release](https://docs.microsoft.com/cpp/dotnet/auto-handle-release).  
  
  
Releases the object from `auto_handle` management.  
  
## Syntax  
  
```  
_element_type ^ release();  
```  
  
## Return Value  
 The released object.  
  
## Example  
  
```  
// msl_auto_handle_release.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
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
   ClassA^ a;  
  
   // create a new scope:  
   {  
      auto_handle<ClassA> agc1 = gcnew ClassA( "first" );  
      auto_handle<ClassA> agc2 = gcnew ClassA( "second" );  
      a = agc1.release();  
   }  
   // agc1 and agc2 go out of scope here  
  
   a->PrintHello();  
  
   Console::WriteLine( "done" );  
}  
```  
  
```Output  
ClassA constructor: first  
ClassA constructor: second  
ClassA destructor: second  
Hello from first A!  
done  
```  
  
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../dotnet/auto-handle-members.md)   
 [auto_handle::~auto_handle](../dotnet/auto-handle-tilde-auto-handle.md)   
 [auto_handle::reset](../dotnet/auto-handle-reset.md)

