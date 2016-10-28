---
title: "Parameter type of this unary operator must be the containing type &#39;&lt;typename&gt;&#39;"
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
  - "vbc33020"
  - "bc33020"
helpviewer_keywords: 
  - "BC33020"
ms.assetid: 9c2c2c5b-6f18-49d2-bd6e-e735a6bced77
caps.latest.revision: 8
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
# Parameter type of this unary operator must be the containing type &#39;&lt;typename&gt;&#39;
A definition of a unary operator specifies a parameter with a type other than that of the class or structure in which the operator is defined.  
  
 When you define an operator in a class or structure, at least one of the parameters must be of the type of that class or structure. In the case of a unary operator, the sole operand must be of the type of that class or structure.  
  
 **Error ID:** BC33020  
  
### To correct this error  
  
-   Change the parameter type to the type of the class or structure in which the operator is defined.  
  
-   If you want to take one data type as a parameter and return a different data type as the result of the operation, define a conversion operator instead.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)