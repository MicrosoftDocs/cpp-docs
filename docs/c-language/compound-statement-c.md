---
title: "Compound Statement (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "compound statements"
  - "statements, compound"
ms.assetid: 32d1bf86-cbbc-42a9-ba3a-1be1c6c7754c
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
# Compound Statement (C)
A compound statement (also called a "block") typically appears as the body of another statement, such as the **if** statement. [Declarations and Types](../c-language/declarations-and-types.md) describes the form and meaning of the declarations that can appear at the head of a compound statement.  
  
## Syntax  
 *compound-statement*:  
 **{**  *declaration-list* opt*statement-list*opt**}**  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list declaration*  
  
 *statement-list*:  
 s*tatement*  
  
 *statement-list statement*  
  
 If there are declarations, they must come before any statements. The scope of each identifier declared at the beginning of a compound statement extends from its declaration point to the end of the block. It is visible throughout the block unless a declaration of the same identifier exists in an inner block.  
  
 Identifiers in a compound statement are presumed **auto** unless explicitly declared otherwise with **register**, **static**, or `extern`, except functions, which can only be `extern`. You can leave off the `extern` specifier in function declarations and the function will still be `extern`.  
  
 Storage is not allocated and initialization is not permitted if a variable or function is declared in a compound statement with storage class `extern`. The declaration refers to an external variable or function defined elsewhere.  
  
 Variables declared in a block with the **auto** or **register** keyword are reallocated and, if necessary, initialized each time the compound statement is entered. These variables are not defined after the compound statement is exited. If a variable declared inside a block has the **static** attribute, the variable is initialized when program execution begins and keeps its value throughout the program. See [Storage Classes](../c-language/c-storage-classes.md) for information about **static**.  
  
 This example illustrates a compound statement:  
  
```  
if ( i > 0 )   
{  
    line[i] = x;  
    x++;  
    i--;  
}  
```  
  
 In this example, if `i` is greater than 0, all statements inside the compound statement are executed in order.  
  
## See Also  
 [Statements](../c-language/statements-c.md)