---
title: "auto_gcroot::~auto_gcroot | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "auto_gcroot::~auto_gcroot"
  - "~auto_gcroot"
  - "auto_gcroot.~auto_gcroot"
  - "msclr::auto_gcroot::~auto_gcroot"
  - "msclr.auto_gcroot.~auto_gcroot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot::~auto_gcroot"
ms.assetid: 3c970d43-0cb1-4b27-8bee-0394d91b4739
caps.latest.revision: 11
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
# auto_gcroot::~auto_gcroot
The `auto_gcroot` destructor.  
  
## Syntax  
  
```  
~auto_gcroot();  
```  
  
## Remarks  
 The destructor also destructs the owned object.  
  
## Example  
  
```  
// msl_auto_gcroot_dtor.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
public:  
   ClassA() { Console::WriteLine( "ClassA constructor" ); }  
   ~ClassA() { Console::WriteLine( "ClassA destructor" ); }  
};  
  
int main()  
{  
   // create a new scope for a:  
   {  
      auto_gcroot<ClassA^> a = gcnew ClassA;  
   }  
   // a goes out of scope here, invoking its destructor  
   // which in turns destructs the ClassA object.  
  
   Console::WriteLine( "done" );  
}  
```  
  
```Output  
ClassA constructor  
ClassA destructor  
done  
```  
  
## Requirements  
 **Header file** \<msclr\auto_gcroot.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_gcroot Members](../dotnet/auto-gcroot-members.md)   
 [auto_gcroot::release](../dotnet/auto-gcroot-release.md)   
 [auto_gcroot::auto_gcroot](../dotnet/auto-gcroot-auto-gcroot.md)