---
title: "Compound Statements (Blocks) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "}"
  - "{"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocks, about blocks"
  - "compound statements"
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Compound Statements (Blocks)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Compound Statements (Blocks)](https://docs.microsoft.com/cpp/cpp/compound-statements-blocks).  
  
A compound statement consists of zero or more statements enclosed in curly braces (**{ }**). A compound statement can be used anywhere a statement is expected. Compound statements are commonly called "blocks."  
  
## Syntax  
  
```  
  
{ [ statement-list ] }  
```  
  
## Remarks  
 The following example uses a compound statement as the *statement* part of the **if** statement (see [The if Statement](../cpp/if-else-statement-cpp.md) for details about the syntax):  
  
```  
if( Amount > 100 )  
{  
    cout << "Amount was too large to handle\n";  
    Alert();  
}  
else  
    Balance -= Amount;  
```  
  
> [!NOTE]
>  Because a declaration is a statement, a declaration can be one of the statements in the *statement-list*. As a result, names declared inside a compound statement, but not explicitly declared as static, have local scope and (for objects) lifetime. See [Scope](../cpp/scope-visual-cpp.md) for details about treatment of names with local scope.  
  
## See Also  
 [Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)





