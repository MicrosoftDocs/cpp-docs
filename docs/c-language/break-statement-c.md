---
title: "break Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "break"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "break keyword [C]"
ms.assetid: 015627c7-0924-49b2-a4d1-c77edf5eae6a
caps.latest.revision: 8
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
# break Statement (C)
The `break` statement terminates the execution of the nearest enclosing `do`, `for`, `switch`, or `while` statement in which it appears. Control passes to the statement that follows the terminated statement.  
  
## Syntax  
 *jump-statement*:  
 `break;`  
  
 The `break` statement is frequently used to terminate the processing of a particular case within a `switch` statement. Lack of an enclosing iterative or `switch` statement generates an error.  
  
 Within nested statements, the `break` statement terminates only the `do`, `for`, `switch`, or `while` statement that immediately encloses it. You can use a `return` or `goto` statement to transfer control elsewhere out of the nested structure.  
  
 This example illustrates the `break` statement:  
  
```  
#include <stdio.h>  
int main() {  
   char c;  
   for(;;) {  
      printf_s( "\nPress any key, Q to quit: " );  
  
      // Convert to character value  
      scanf_s("%c", &c);  
      if (c == 'Q')  
          break;  
   }  
} // Loop exits only when 'Q' is pressed  
```  
  
## See Also  
 [break Statement](../cpp/break-statement-cpp.md)