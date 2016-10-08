---
title: "Compiler Error C2561"
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
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
caps.latest.revision: 9
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
# Compiler Error C2561
'identifier' : function must return a value  
  
 The function was declared as returning a value, but the function definition does not contain a `return` statement.  
  
 This error can be caused by an incorrect function prototype:  
  
1.  If the function does not return a value, declare the function with return type [void](../VS_visualcpp/void--C---.md).  
  
2.  Check that all possible branches of the function return a value of the type declared in the prototype.  
  
3.  C++ functions containing inline assembly routines that store the return value in the `AX` register may need a return statement. Copy the value in `AX` to a temporary variable and return that variable from the function.  
  
 The following sample generates C2561:  
  
```  
// C2561.cpp  
int Test(int x) {  
   if (x) {  
      return;   // C2561  
      // try the following line instead  
      // return 1;  
   }  
   return 0;  
}  
  
int main() {  
   Test(1);  
}  
```