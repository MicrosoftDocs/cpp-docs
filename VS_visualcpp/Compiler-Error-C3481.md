---
title: "Compiler Error C3481"
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
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
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
# Compiler Error C3481
'var': lambda capture variable not found  
  
 The compiler could not find the definition of a variable that you passed to the capture list of a lambda expression.  
  
### To correct this error  
  
-   Remove the variable from the capture list of the lambda expression.  
  
## Example  
 The following example generates C3481 because the variable `n` is not defined:  
  
```  
// C3481.cpp  
  
int main()  
{  
   [n] {}(); // C3481  
}  
```  
  
## See Also  
 [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md)