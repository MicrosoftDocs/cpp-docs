---
title: "auto_handle::operator bool"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 2e535e99-cf87-4008-b588-02c587d77453
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
  
 **s1 is invalid**  
**s2 is valid**  
**s2 is now invalid**   
## Requirements  
 **Header file** <msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle Members](../VS_visualcpp/auto_handle-Members.md)   
 [auto_handle::operator!](../VS_visualcpp/auto_handle--operator!.md)