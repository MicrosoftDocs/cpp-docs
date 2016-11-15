---
title: "Expression Statement | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "statements, expression"
  - "expression statements"
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
caps.latest.revision: 6
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
# Expression Statement
Expression statements cause expressions to be evaluated. No transfer of control or iteration takes place as a result of an expression statement.  
  
 The syntax for the expression statement is simply  
  
## Syntax  
  
```  
[expression ] ;  
```  
  
## Remarks  
 All expressions in an expression statement are evaluated and all side effects are completed before the next statement is executed. The most common expression statements are assignments and function calls.  Since the expression is optional, a semicolon alone is considered an empty expression statement, referred to as the [null](../cpp/null-statement.md) statement.  
  
## See Also  
 [Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)