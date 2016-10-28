---
title: "auto_handle::release"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
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
# auto_handle::release
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
  
 **ClassA constructor: first**  
**ClassA constructor: second**  
**ClassA destructor: second**  
**Hello from first A!**  
**done**   
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../cli/auto_handle-members.md)   
 [auto_handle::~auto_handle](../cli/auto_handle--~auto_handle.md)   
 [auto_handle::reset](../cli/auto_handle--reset.md)