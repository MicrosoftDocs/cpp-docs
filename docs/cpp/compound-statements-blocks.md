---
title: "Compound Statements (Blocks) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Compound Statements (Blocks)
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