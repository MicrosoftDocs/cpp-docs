---
title: "Compiler Warning (level 1) C4258"
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
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4258
'variable' : definition from the for loop is ignored; the definition from the enclosing scope is used"  
  
 Under [/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md) and [/Zc:forScope](../VS_visualcpp/-Zc-forScope--Force-Conformance-in-for-Loop-Scope-.md), variables defined in a [for](../VS_visualcpp/for-Statement--C---.md) loop go out of scope after the **for** loop ends. This warning occurs if a variable with the same name as the loop variable, but defined in the enclosing loop, is used again in the scope containing the **for** loop. For example:  
  
```  
// C4258.cpp  
// compile with: /Zc:forScope /W1  
int main()  
{  
   int i;  
   {  
      for (int i =0; i < 1; i++)  
         ;  
      i = 20;   // C4258 i (in for loop) has gone out of scope  
   }  
}  
```