---
title: "Operator is not overloadable"
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
  - "vbc33002"
  - "bc33002"
helpviewer_keywords: 
  - "BC33002"
ms.assetid: 8628ea42-57d8-41ca-8bdc-5e4c27be543e
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
# Operator is not overloadable
Only certain operators are eligible for overloading. The following table lists the operators you can define.  
  
|Type|Operators|  
|----------|---------------|  
|Unary|`+`, `-`, `IsFalse`, `IsTrue`, `Not`|  
|Binary|`+`, `-`, `*`, `/`, `\`, `&`, `^`, `>>`, `<<`, `=`, `<>`, `>`, `>=`, `<`, `<=`, `And`, `Like`, `Mod`, `Or`, `Xor`|  
|Conversion (unary)|`CType`|  
  
 Notice that the `=` operator in the binary list is the comparison operator, not the assignment operator.  
  
 **Error ID:** BC33002  
  
### To correct this error  
  
1.  Select an operator from the set of overloadable operators.  
  
2.  If you need the functionality of overloading an operator that you cannot overload directly, create a `Function` procedure that takes the appropriate parameters and returns the appropriate value.  
  
## See Also  
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)