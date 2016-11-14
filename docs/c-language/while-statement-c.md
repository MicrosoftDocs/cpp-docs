---
title: "while Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "while"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "while keyword [C]"
  - "while keyword [C], syntax"
ms.assetid: d0c970b8-12a9-4827-afb2-a051111834b7
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
# while Statement (C)
The `while` statement lets you repeat a statement until a specified expression becomes false.  
  
## Syntax  
 *iteration-statement*:  
 **while (**  *expression*  **)**  *statement*  
  
 The *expression* must have arithmetic or pointer type. Execution proceeds as follows:  
  
1.  The *expression* is evaluated.  
  
2.  If *expression* is initially false, the body of the `while` statement is never executed, and control passes from the `while` statement to the next statement in the program.  
  
     If *expression* is true (nonzero), the body of the statement is executed and the process is repeated beginning at step 1.  
  
 The `while` statement can also terminate when a **break**, `goto`, or `return` within the statement body is executed. Use the **continue** statement to terminate an iteration without exiting the `while` loop. The **continue** statement passes control to the next iteration of the `while` statement.  
  
 This is an example of the `while` statement:  
  
```  
while ( i >= 0 )   
{  
    string1[i] = string2[i];  
    i--;  
}  
```  
  
 This example copies characters from `string2` to `string1`. If `i` is greater than or equal to 0, `string2[i]` is assigned to `string1[i]` and `i` is decremented. When `i` reaches or falls below 0, execution of the `while` statement terminates.  
  
## See Also  
 [while Statement (C++)](../cpp/while-statement-cpp.md)