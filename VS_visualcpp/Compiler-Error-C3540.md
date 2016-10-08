---
title: "Compiler Error C3540"
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
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
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
# Compiler Error C3540
'type': sizeof cannot be applied to a type that contains 'auto'  
  
 The [sizeof](../VS_visualcpp/sizeof-Operator.md) operator cannot be applied to the indicated type because it contains the `auto` specifier.  
  
## Example  
 The following example yields C3540.  
  
```  
// C3540.cpp  
// Compile with /Zc:auto  
int main() {  
    auto x = 123;  
    sizeof(x);    // OK  
    sizeof(auto); // C3540  
    return 0;  
}  
```  
  
## See Also  
 [auto Keyword](../VS_visualcpp/auto-Keyword.md)   
 [/Zc:auto (Deduce Variable Type)](../VS_visualcpp/-Zc-auto--Deduce-Variable-Type-.md)   
 [sizeof Operator](../VS_visualcpp/sizeof-Operator.md)