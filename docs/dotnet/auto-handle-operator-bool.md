---
title: "auto_handle::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["auto_handle.operator bool", "msclr.auto_handle.operator bool", "operator bool", "msclr::auto_handle::operator bool", "auto_handle::operator bool"]
dev_langs: ["C++"]
helpviewer_keywords: ["auto_handle::operator bool"]
ms.assetid: 2e535e99-cf87-4008-b588-02c587d77453
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# auto_handle::operator bool
Operator for using `auto_handle` in a conditional expression.  
  
## Syntax  
  
```  
operator bool();  
```  
  
## Return Value  
 `true` if the wrapped object is valid; `false` otherwise.  
  
## Remarks  
 This operator actually converts to `_detail_class::_safe_bool` which is safer than `bool` because it cannot be converted to an integral type.  
  
## Example  
  
```  
// msl_auto_handle_operator_bool.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_handle<String> s1;  
   auto_handle<String> s2 = "hi";  
   if ( s1 ) Console::WriteLine( "s1 is valid" );  
   if ( !s1 ) Console::WriteLine( "s1 is invalid" );  
   if ( s2 ) Console::WriteLine( "s2 is valid" );  
   if ( !s2 ) Console::WriteLine( "s2 is invalid" );  
   s2.reset();  
   if ( s2 ) Console::WriteLine( "s2 is now valid" );  
   if ( !s2 ) Console::WriteLine( "s2 is now invalid" );  
}  
```  
  
```Output  
s1 is invalid  
s2 is valid  
s2 is now invalid  
```  
  
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../dotnet/auto-handle-members.md)   
 [auto_handle::operator!](../dotnet/auto-handle-operator-logical-not.md)