---
title: "swap Function (auto_handle) | Microsoft Docs"
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
  - "msclr::swap"
  - "msclr.swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "swap function"
ms.assetid: 7dd91b5c-f0de-4634-a2e2-642626706e27
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# swap Function (auto_handle)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [swap Function (auto_handle)](https://docs.microsoft.com/cpp/dotnet/swap-function-auto-handle).  
  
  
Swaps objects between one `auto_handle` and another.  
  
## Syntax  
  
```  
template<typename _element_type>  
void swap(  
   auto_handle<_element_type> % _left,  
   auto_handle<_element_type> % _right  
);  
```  
  
#### Parameters  
 `_left`  
 An `auto_handle`.  
  
 `_right`  
 Another `auto_handle`.  
  
## Example  
  
```  
// msl_swap_auto_handle.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_handle<String> s1 = "string one";  
   auto_handle<String> s2 = "string two";  
  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
   swap( s1, s2 );  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
}  
```  
  
```Output  
s1 = 'string one', s2 = 'string two'  
s1 = 'string two', s2 = 'string one'  
```  
  
## Requirements  
 **Header file** \<msclr\auto_handle.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_handle](../dotnet/auto-handle.md)   
 [auto_handle::swap](../dotnet/auto-handle-swap.md)

