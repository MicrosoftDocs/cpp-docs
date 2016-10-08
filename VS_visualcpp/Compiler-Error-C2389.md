---
title: "Compiler Error C2389"
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
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
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
# Compiler Error C2389
'operator' : illegal operand 'nullptr'  
  
 `nullptr` cannot be an operand.  
  
 The following sample generates C2389:  
  
```  
// C2389.cpp  
// compile with: /clr  
int main() {  
   throw nullptr;   // C2389  
}  
```