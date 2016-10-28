---
title: "Operators cannot be declared in Modules"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc33018"
  - "vbc33018"
helpviewer_keywords: 
  - "BC33018"
ms.assetid: 10a8fd2d-2af7-4f90-9f2a-50c07ebf7589
caps.latest.revision: 11
ms.author: "billchi"
manager: "douge"
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
An [Operator Statement](../Topic/Operator%20Statement.md) appears in a module definition.  
  
 You can define an operator as part of a class or a structure that you are defining. The operator must take that class or structure as at least one of its operands.  
  
 An operator must use an instance of a programming element as one of its operands, and only classes and structures have instances. Therefore, you cannot define an operator as part of any other programming element.  
  
 **Error ID:** BC33018  
  
### To correct this error  
  
-   If you require an operation on the module, use a [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) to define a `Function` procedure that performs the operation.  
  
-   You can also define a class or structure within the module and define an operator on that class or structure. However, that operator must take an instance of that class or structure as at least one of its operands.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)