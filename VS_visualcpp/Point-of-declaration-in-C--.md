---
title: "Point of declaration in C++"
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
ms.topic: language-reference
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
caps.latest.revision: 7
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
# Point of declaration in C++
A name is considered to be declared immediately after its declarator but before its (optional) initializer. (For more information on declarators, see [Declarators](assetId:///8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).)  
  
 Consider this example:  
  
```  
// point_of_declaration1.cpp  
// compile with: /W1   
double dVar = 7.0;  
int main()  
{  
   double dVar = dVar;   // C4700  
}  
```  
  
 If the point of declaration were *after* the initialization, then the local `dVar` would be initialized to 7.0, the value of the global variable `dVar`. However, since that is not the case, `dVar` is initialized to an undefined value.  
  
## See Also  
 [Scope](../VS_visualcpp/Scope--Visual-C---.md)