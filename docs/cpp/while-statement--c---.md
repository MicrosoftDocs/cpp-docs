---
title: "while Statement (C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "while_cpp"
  - "while"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "while keyword [C++]"
  - "while keyword [C++], syntax"
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
caps.latest.revision: 8
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
# while Statement (C++)
Executes *statement* repeatedly until *expression* evaluates to zero.  
  
## Syntax  
  
```  
  
      while ( expression )  
   statement  
```  
  
## Remarks  
 The test of *expression* takes place before each execution of the loop; therefore, a `while` loop executes zero or more times. *expression* must be of an integral type, a pointer type, or a class type with an unambiguous conversion to an integral or pointer type.  
  
 A `while` loop can also terminate when a [break](../cpp/break-statement--c---.md), [goto](../cpp/goto-statement--c---.md), or [return](../cpp/return-statement--c---.md) within the statement body is executed. Use [continue](../cpp/continue-statement--c---.md) to terminate the current iteration without exiting the `while` loop. **continue** passes control to the next iteration of the `while` loop.  
  
 The following code uses a `while` loop to trim trailing underscores from a string:  
  
```  
// while_statement.cpp  
  
#include <string.h>  
#include <stdio.h>  
char *trim( char *szSource )  
{  
    char *pszEOS = 0;  
  
    //  Set pointer to character before terminating NULL  
    pszEOS = szSource + strlen( szSource ) - 1;  
  
    //  iterate backwards until non '_' is found   
    while( (pszEOS >= szSource) && (*pszEOS == '_') )  
        *pszEOS-- = '\0';  
  
    return szSource;  
}  
int main()  
{  
    char szbuf[] = "12345_____";  
  
    printf_s("\nBefore trim: %s", szbuf);  
    printf_s("\nAfter trim: %s\n", trim(szbuf));  
}  
```  
  
 The termination condition is evaluated at the top of the loop. If there are no trailing underscores, the loop never executes.  
  
## See Also  
 [Iteration Statements](../cpp/iteration-statements--c---.md)   
 [Keywords](../cpp/keywords--c---.md)   
 [do-while Statement (C++)](../cpp/do-while-statement--c---.md)   
 [for Statement (C++)](../cpp/for-statement--c---.md)   
 [Range-based for Statement (C++)](../cpp/range-based-for-statement--c---.md)