---
title: "Compiler Warning (level 1) C4804"
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
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
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
# Compiler Warning (level 1) C4804
'operation' : unsafe use of type 'bool' in operation  
  
 This warning is for when you used a `bool` variable or value in an unexpected way. For example, C4804 is generated if you use operators such as the negative unary operator (**-**) or the complement operator (`~`). The compiler evaluates the expression.  
  
## Example  
 The following sample generates C4804:  
  
```  
// C4804.cpp  
// compile with: /W1  
  
int main()  
{  
   bool i = true;  
   if (-i)   // C4804, remove the '-' to resolve  
   {  
      i = false;  
   }  
}  
```