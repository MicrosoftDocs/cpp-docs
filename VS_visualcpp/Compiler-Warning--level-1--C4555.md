---
title: "Compiler Warning (level 1) C4555"
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
ms.assetid: 50b286c1-f7bf-4292-b1fa-baaac9538611
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
# Compiler Warning (level 1) C4555
expression has no effect; expected expression with side-effect  
  
 This warning informs you when an expression has no effect.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.  
  
 For example:  
  
```  
// C4555.cpp  
// compile with: /W1  
#pragma warning(default:4555)  
  
void func1()  
{  
   1;   // C4555  
}  
  
void func2()  
{  
   int x;  
   x;   // C4555  
}  
  
int main()  
{  
}  
```