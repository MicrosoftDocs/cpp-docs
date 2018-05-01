---
title: "Expression Statement | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Expression Statement
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Statement](https://docs.microsoft.com/cpp/cpp/expression-statement).  
  
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





