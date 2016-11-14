---
title: "continue Statement (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "continue"
  - "continue_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "continue keyword [C++]"
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
caps.latest.revision: 12
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
# continue Statement (C++)
Forces transfer of control to the controlling expression of the smallest enclosing [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md), or [while](../cpp/while-statement-cpp.md) loop.  
  
## Syntax  
  
```  
continue;  
```  
  
## Remarks  
 Any remaining statements in the current iteration are not executed. The next iteration of the loop is determined as follows:  
  
-   In a `do` or `while` loop, the next iteration starts by reevaluating the controlling expression of the `do` or `while` statement.  
  
-   In a `for` loop (using the syntax `for`(`init-expr`; `cond-expr`; `loop-expr`)), the `loop-expr` clause is executed. Then the `cond-expr` clause is reevaluated and, depending on the result, the loop either ends or another iteration occurs.  
  
 The following example shows how the `continue` statement can be used to bypass sections of code and begin the next iteration of a loop.  
  
## Example  
  
```  
// continue_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        i++;  
        printf_s("before the continue\n");  
        continue;  
        printf("after the continue, should never print\n");  
     } while (i < 3);  
  
     printf_s("after the do loop\n");  
}  
```  
  
```Output  
before the continue  
before the continue  
before the continue  
after the do loop  
```  
  
## See Also  
 [Jump Statements](../cpp/jump-statements-cpp.md)   
 [Keywords](../cpp/keywords-cpp.md)