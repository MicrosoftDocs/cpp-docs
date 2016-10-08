---
title: "if-else Statement (C++)"
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
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
caps.latest.revision: 11
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
# if-else Statement (C++)
Controls conditional branching.  
  
## Syntax  
  
```  
  
      if ( expression )  
   statement1  
[else  
   statement2]  
```  
  
## Remarks  
 If the value of *expression* is nonzero, *statement1* is executed. If the optional **else** is present, *statement2* is executed if the value of *expression* is zero. *expression* must be of arithmetic or pointer type, or it must be of a class type that defines an unambiguous conversion to an arithmetic or pointer type. (For information about conversions, see [Standard Conversions](../VS_visualcpp/Standard-Conversions.md).)  
  
 In both forms of the **if** statement, *expression*, which can have any value except a structure, is evaluated, including all side effects. Control passes from the **if** statement to the next statement in the program unless one of the *statement*s contains a [break](../VS_visualcpp/break-Statement--C---.md), [continue](../VS_visualcpp/continue-Statement--C---.md), or [goto](../VS_visualcpp/goto-Statement--C---.md).  
  
 The **else** clause of an `if...else` statement is associated with the closest previous **if** statement in the same scope that does not have a corresponding **else** statement.  
  
 For this sample to be unambiguous about `if...else` pairing, uncomment the braces.  
  
## Example  
  
```  
// if_else_statement.cpp  
#include <stdio.h>  
  
int main()   
{  
   int x = 0;  
   if (x == 0)  
   {  
      printf_s("x is 0!\n");  
   }  
   else  
   {  
      printf_s("x is not 0!\n"); // this statement will not be executed  
   }  
  
   x = 1;  
   if (x == 0)  
   {  
      printf_s("x is 0!\n"); // this statement will not be executed  
   }  
   else  
   {  
      printf_s("x is not 0!\n");  
   }  
  
   return 0;  
}  
```  
  
 **x is 0!**  
**x is not 0!**   
## See Also  
 [Selection Statements](../VS_visualcpp/Selection-Statements--C---.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [switch Statement (C++)](../VS_visualcpp/switch-Statement--C---.md)