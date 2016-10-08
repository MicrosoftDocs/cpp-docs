---
title: "Compiler Warning (level 3) C4645"
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
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
caps.latest.revision: 7
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
# Compiler Warning (level 3) C4645
function declared with __declspec(noreturn) has a return statement  
  
 A [return](../VS_visualcpp/return-Statement-in-Program-Termination--C---.md) statement was found in a function that is marked with the [noreturn](../VS_visualcpp/noreturn.md) `__declspec` modifier. The `return` statement was ignored.  
  
 The following sample generates C4645:  
  
```  
// C4645.cpp  
// compile with:  /W3  
void __declspec(noreturn) func() {  
   return;   // C4645, delete this line to resolve  
}  
  
int main() {  
}  
```