---
title: "do-while Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "do"
  - "while"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "do-while keyword [C]"
ms.assetid: f2ac20a6-10c7-4a08-b5e3-c3b3639dbeaf
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
# do-while Statement (C)
The `do-while` statement lets you repeat a statement or compound statement until a specified expression becomes false.  
  
## Syntax  
 *iteration-statement*:  
 **do**  *statement*  **while (**  *expression*  **) ;**  
  
 The *expression* in a `do-while` statement is evaluated after the body of the loop is executed. Therefore, the body of the loop is always executed at least once.  
  
 The *expression* must have arithmetic or pointer type. Execution proceeds as follows:  
  
1.  The statement body is executed.  
  
2.  Next, *expression* is evaluated. If *expression* is false, the `do-while` statement terminates and control passes to the next statement in the program. If *expression* is true (nonzero), the process is repeated, beginning with step 1.  
  
 The `do-while` statement can also terminate when a **break**, `goto`, or `return` statement is executed within the statement body.  
  
 This is an example of the `do-while` statement:  
  
```  
do   
{  
    y = f( x );  
    x--;  
} while ( x > 0 );  
```  
  
 In this `do-while` statement, the two statements `y = f( x );` and `x--;` are executed, regardless of the initial value of `x`. Then `x > 0` is evaluated. If `x` is greater than 0, the statement body is executed again and `x > 0` is reevaluated. The statement body is executed repeatedly as long as `x` remains greater than 0. Execution of the `do-while` statement terminates when `x` becomes 0 or negative. The body of the loop is executed at least once.  
  
## See Also  
 [do-while Statement (C++)](../cpp/do-while-statement-cpp.md)