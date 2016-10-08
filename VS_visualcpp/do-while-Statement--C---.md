---
title: "do-while Statement (C++)"
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
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
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
# do-while Statement (C++)
Executes a *statement* repeatedly until the specified termination condition (the *expression*) evaluates to zero.  
  
## Syntax  
  
```  
  
      do  
   statement  
   while ( expression ) ;  
```  
  
## Remarks  
 The test of the termination condition is made after each execution of the loop; therefore, a `do-while` loop executes one or more times, depending on the value of the termination expression. The `do-while` statement can also terminate when a [break](../VS_visualcpp/break-Statement--C---.md), [goto](../VS_visualcpp/goto-Statement--C---.md), or [return](../VS_visualcpp/return-Statement--C---.md) statement is executed within the statement body.  
  
 The *expression* must have arithmetic or pointer type. Execution proceeds as follows:  
  
1.  The statement body is executed.  
  
2.  Next, *expression* is evaluated. If *expression* is false, the `do-while` statement terminates and control passes to the next statement in the program. If *expression* is true (nonzero), the process is repeated, beginning with step 1.  
  
## Example  
 The following sample demonstrates the `do-while` statement:  
  
```  
// do_while_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        printf_s("\n%d",i++);  
    } while (i < 3);  
}  
```  
  
## See Also  
 [Iteration Statements](../VS_visualcpp/Iteration-Statements--C---.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [while Statement (C++)](../VS_visualcpp/while-Statement--C---.md)   
 [for Statement (C++)](../VS_visualcpp/for-Statement--C---.md)   
 [Range-based for Statement (C++)](../VS_visualcpp/Range-based-for-Statement--C---.md)