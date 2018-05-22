---
title: "Summary of Statements | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Summary of Statements
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Summary of Statements](https://docs.microsoft.com/cpp/c-language/summary-of-statements).  
  
statement*:  
 *labeled-statement*  
  
 *compound-statement*  
  
 *expression-statement*  
  
 *selection-statement*  
  
 *iteration-statement*  
  
 *jump-statement*  
  
 *try-except-statement* /* Microsoft Specific \*/  
  
 *try-finally-statement* /* Microsoft Specific \*/  
  
 *jump-statement*:  
 **goto**  *identifier*  **;**  
  
 **continue ;**  
  
 **break ;**  
  
 **return**  *expression*opt**;**  
  
 *compound-statement*:  
 **{**  *declaration-list*opt*statement-list*opt**}**  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list declaration*  
  
 *statement-list*:  
 *statement*  
  
 *statement-list statement*  
  
 *expression-statement*:  
 *expression*opt**;**  
  
 *iteration-statement*:  
 **while (**  *expression*  **)**  *statement*  
  
 **do**  *statement*  **while (**  *expression*  **) ;**  
  
 **for (**  *expression*opt**;** *expression*opt**;** *expression*opt**)** *statement*  
  
 *selection-statement*:  
 **if (**  *expression*  **)**  *statement*  
  
 **if (**  *expression*  **)**  *statement*  **else**  *statement*  
  
 **switch (**  *expression*  **)**  *statement*  
  
 *labeled-statement*:  
 *identifier*  **:**  *statement*  
  
 **case**  *constant-expression*  **:**  *statement*  
  
 **default :**  *statement*  
  
 *try-except-statement*:   /\* Microsoft Specific \*/  
 **__try**  *compound-statement*  
  
 **__except (**  *expression*  **)**  *compound-statement*  
  
 *try-finally-statement*:   /\* Microsoft Specific \*/  
 **__try**  *compound-statement*  
  
 **__finally**  *compound-statement*  
  
## See Also  
 [Phrase Structure Grammar](../c-language/phrase-structure-grammar.md)





