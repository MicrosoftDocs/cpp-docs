---
title: "auto_handle::operator auto_handle | Microsoft Docs"
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
  - "msclr.auto_handle.operator auto_handle"
  - "operator auto_handle"
  - "msclr::auto_handle::operator auto_handle"
  - "auto_handle.operator auto_handle"
  - "auto_handle::operator auto_handle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator auto_handle"
ms.assetid: 2f8b35d1-2783-4d91-b6fb-eae551270fb8
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::operator auto_handle
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [auto_handle::operator auto_handle](https://docs.microsoft.com/cpp/dotnet/auto-handle-operator-auto-handle).  
  
  
Type-cast operator between `auto_handle` and compatible types.  
  
## Syntax  
  
```  
template<typename _other_type>  
operator auto_handle<_other_type>();  
```  
  
## Return Value  
 The current `auto_handle` cast to `auto_handle<_other_type>`.  
  
## Example  
  
```  
// msl_auto_handle_op_auto_handle.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
protected:     
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {}  
  
   virtual void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
ref class ClassB : ClassA {  
public:  
   ClassB( String ^ s) : ClassA( s ) {}  
   virtual void PrintHello() new {  
      Console::WriteLine( "Hello from {0} B!", m_s );  
   }  
};  
  
int main() {  
   auto_handle<ClassB> b = gcnew ClassB("first");  
   b->PrintHello();  
   auto_handle<ClassA> a = (auto_handle<ClassA>)b;  
   a->PrintHello();  
}  
```  
  
```Output  
Hello from first B!  
Hello from first A!  
```  
  
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../dotnet/auto-handle-members.md)

