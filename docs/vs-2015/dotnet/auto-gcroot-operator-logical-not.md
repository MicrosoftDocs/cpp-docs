---
title: "auto_gcroot::operator! | Microsoft Docs"
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
  - "msclr.auto_gcroot.operator!"
  - "auto_gcroot.operator!"
  - "msclr::auto_gcroot::operator!"
  - "auto_gcroot::operator!"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot::operator!"
ms.assetid: f9728be3-2e09-4c01-a594-43e0d59d40d3
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_gcroot::operator!
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [auto_gcroot::operator!](https://docs.microsoft.com/cpp/dotnet/auto-gcroot-operator-logical-not).  
  
  
Operator for using `auto_gcroot` in a conditional expression.  
  
## Syntax  
  
```  
bool operator!() const;  
```  
  
## Return Value  
 `true` if the wrapped object is invalid; `false` otherwise.  
  
## Example  
  
```  
// msl_auto_gcroot_operator_not.cpp  
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
 [auto_gcroot::operator bool](../dotnet/auto-gcroot-operator-bool.md)

