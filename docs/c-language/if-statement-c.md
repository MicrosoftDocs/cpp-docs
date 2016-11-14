---
title: "if Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "else"
  - "if"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "if keyword [C]"
  - "else clauses"
  - "else keyword [C]"
  - "if keyword [C], if statement syntax"
  - "nested statements"
ms.assetid: d7fc16a0-fdbc-4f39-b596-76e1ca4ad4a5
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
# if Statement (C)
The **if** statement controls conditional branching. The body of an **if** statement is executed if the value of the expression is nonzero. The syntax for the **if** statement has two forms.  
  
## Syntax  
 *selection-statement*:  
 **if (**  *expression*  **)**  *statement*  
  
 **if (**  *expression*  **)**  *statement*  **else**  *statement*  
  
 In both forms of the **if** statement, the expressions, which can have any value except a structure, are evaluated, including all side effects.  
  
 In the first form of the syntax, if *expression* is true (nonzero), *statement* is executed. If *expression* is false, *statement* is ignored. In the second form of syntax, which uses **else**, the second *statement* is executed if *expression* is false. With both forms, control then passes from the **if** statement to the next statement in the program unless one of the statements contains a **break**, **continue**, or `goto`.  
  
 The following are examples of the **if** statement:  
  
```  
if ( i > 0 )  
    y = x / i;  
else   
{  
    x = i;  
    y = f( x );  
}  
```  
  
 In this example, the statement `y = x/i;` is executed if `i` is greater than 0. If `i` is less than or equal to 0, `i` is assigned to `x` and `f( x )` is assigned to `y`. Note that the statement forming the **if** clause ends with a semicolon.  
  
 When nesting **if** statements and **else** clauses, use braces to group the statements and clauses into compound statements that clarify your intent. If no braces are present, the compiler resolves ambiguities by associating each **else** with the closest **if** that lacks an **else**.  
  
```  
if ( i > 0 )           /* Without braces */  
    if ( j > i )  
        x = j;  
    else  
        x = i;  
```  
  
 The **else** clause is associated with the inner **if** statement in this example. If `i` is less than or equal to 0, no value is assigned to `x`.  
  
```  
if ( i > 0 )   
{                      /* With braces */  
    if ( j > i )  
        x = j;  
}  
else  
    x = i;  
```  
  
 The braces surrounding the inner **if** statement in this example make the **else** clause part of the outer **if** statement. If `i` is less than or equal to 0, `i` is assigned to `x`.  
  
## See Also  
 [if-else Statement (C++)](../cpp/if-else-statement-cpp.md)