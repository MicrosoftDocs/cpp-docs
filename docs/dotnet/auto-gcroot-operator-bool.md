---
title: "auto_gcroot::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "auto_gcroot.operator bool"
  - "auto_gcroot::operator bool"
  - "msclr.auto_gcroot.operator bool"
  - "msclr::auto_gcroot::operator bool"
  - "operator bool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bool operator"
ms.assetid: 87d38498-4221-4de8-8d02-c2dd2e6274ec
caps.latest.revision: 15
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
# auto_gcroot::operator bool
Operator for using `auto_gcroot` in a conditional expression.  
  
## Syntax  
  
```  
operator bool() const;  
```  
  
## Return Value  
 `true` if the wrapped object is valid; `false` otherwise.  
  
## Remarks  
 This operator actually converts to `_detail_class::_safe_bool` which is safer than `bool` because it cannot be converted to an integral type.  
  
## Example  
  
```  
// msl_auto_gcroot_operator_bool.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_gcroot<String^> s;  
   if ( s ) Console::WriteLine( "s is valid" );  
   if ( !s ) Console::WriteLine( "s is invalid" );  
   s = "something";  
   if ( s ) Console::WriteLine( "now s is valid" );  
   if ( !s ) Console::WriteLine( "now s is invalid" );  
   s.reset();  
   if ( s ) Console::WriteLine( "now s is valid" );  
   if ( !s ) Console::WriteLine( "now s is invalid" );  
}  
```  
  
```Output  
s is invalid  
now s is valid  
now s is invalid  
```  
  
## Requirements  
 **Header file** \<msclr\auto_gcroot.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_gcroot Members](../dotnet/auto-gcroot-members.md)   
 [auto_gcroot::operator!](../dotnet/auto-gcroot-operator-logical-not.md)