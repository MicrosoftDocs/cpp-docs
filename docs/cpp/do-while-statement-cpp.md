---
title: "do-while Statement (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "do-while_cpp"
  - "do-while"
  - "do"
  - "while_cpp"
  - "do_cpp"
  - "while"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "do keyword [C++], do-while"
  - "do-while keyword [C++]"
  - "do keyword [C++]"
  - "while keyword [C++], do-while"
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
 The test of the termination condition is made after each execution of the loop; therefore, a `do-while` loop executes one or more times, depending on the value of the termination expression. The `do-while` statement can also terminate when a [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), or [return](../cpp/return-statement-cpp.md) statement is executed within the statement body.  
  
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
 [Iteration Statements](../cpp/iteration-statements-cpp.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [while Statement (C++)](../cpp/while-statement-cpp.md)   
 [for Statement (C++)](../cpp/for-statement-cpp.md)   
 [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md)