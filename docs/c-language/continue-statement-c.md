---
title: "continue Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "continue"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "loop structures, continue keyword"
  - "continue keyword [C]"
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
caps.latest.revision: 7
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
# continue Statement (C)
The `continue` statement passes control to the next iteration of the nearest enclosing `do`, `for`, or `while` statement in which it appears, bypassing any remaining statements in the `do`, `for`, or `while` statement body.  
  
## Syntax  
 `jump-statement`:  
 `continue;`  
  
 The next iteration of a `do`, `for`, or `while` statement is determined as follows:  
  
-   Within a `do` or a `while` statement, the next iteration starts by reevaluating the expression of the `do` or `while` statement.  
  
-   A `continue` statement in a `for` statement causes the loop expression of the `for` statement to be evaluated. Then the compiler reevaluates the conditional expression and, depending on the result, either terminates or iterates the statement body. See [The for Statement](../c-language/for-statement-c.md) for more information on the `for` statement and its nonterminals.  
  
 This is an example of the `continue` statement:  
  
```  
while ( i-- > 0 )   
{  
    x = f( i );  
    if ( x == 1 )  
        continue;  
    y += x * x;  
}  
```  
  
 In this example, the statement body is executed while `i` is greater than 0. First `f(i)` is assigned to `x`; then, if `x` is equal to 1, the `continue` statement is executed. The rest of the statements in the body are ignored, and execution resumes at the top of the loop with the evaluation of the loop's test.  
  
## See Also  
 [continue Statement](../cpp/continue-statement-cpp.md)