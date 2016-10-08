---
title: "Compiler Error C3541"
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
ms.topic: error-reference
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
caps.latest.revision: 8
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
# Compiler Error C3541
'type': typeid cannot be applied to a type that contains 'auto'  
  
 The [typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md) operator cannot be applied to the indicated type because it contains the `auto` specifier.  
  
## Example  
 The following example yields C3541.  
  
```  
// C3541.cpp  
// Compile with /Zc:auto  
#include <typeinfo>  
int main() {  
    auto x = 123;  
    typeid(x);    // OK  
    typeid(auto); // C3541  
    return 0;  
}  
```  
  
## See Also  
 [auto Keyword](../VS_visualcpp/auto-Keyword.md)   
 [/Zc:auto (Deduce Variable Type)](../VS_visualcpp/-Zc-auto--Deduce-Variable-Type-.md)   
 [typeid](../VS_visualcpp/typeid---C---Component-Extensions-.md)