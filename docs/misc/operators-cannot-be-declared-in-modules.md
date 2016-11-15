---
title: "Operators cannot be declared in Modules | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33018"
  - "vbc33018"
helpviewer_keywords: 
  - "BC33018"
ms.assetid: 10a8fd2d-2af7-4f90-9f2a-50c07ebf7589
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Operators cannot be declared in Modules
An [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement) appears in a module definition.  
  
 You can define an operator as part of a class or a structure that you are defining. The operator must take that class or structure as at least one of its operands.  
  
 An operator must use an instance of a programming element as one of its operands, and only classes and structures have instances. Therefore, you cannot define an operator as part of any other programming element.  
  
 **Error ID:** BC33018  
  
### To correct this error  
  
-   If you require an operation on the module, use a [Function Statement](/dotnet/articles/visual-basic/language-reference/statements/function-statement) to define a `Function` procedure that performs the operation.  
  
-   You can also define a class or structure within the module and define an operator on that class or structure. However, that operator must take an instance of that class or structure as at least one of its operands.  
  
## See Also  
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [How to: Define an Operator](http://msdn.microsoft.com/Library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/Library/54203dfa-c24b-463f-9942-d5153e89e762)