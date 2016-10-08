---
title: "Compiler Warning (level 1) C4602"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c1f0300f-e2a2-4c9e-a7c3-4c7318d10509
caps.latest.revision: 8
manager: douge
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
# Compiler Warning (level 1) C4602
\#pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier  
  
 If you use [pop_macro](../VS_visualcpp/pop_macro.md) for a particular macro, you must first have passed that macro name to [push_macro](../VS_visualcpp/push_macro.md). For example, the following sample generates C4602:  
  
```  
// C4602.cpp  
// compile with: /W1  
int main()  
{  
   #pragma pop_macro("x")   // C4602 x is not on the stack  
}  
```