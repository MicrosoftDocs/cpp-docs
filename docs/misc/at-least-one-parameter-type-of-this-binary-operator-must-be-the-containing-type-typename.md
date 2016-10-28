---
title: "At least one parameter type of this binary operator must be the containing type &#39;&lt;typename&gt;&#39;"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33021"
  - "vbc33021"
helpviewer_keywords: 
  - "BC33021"
ms.assetid: 934d4d2e-d368-46d7-819e-5571cdc0ce4f
caps.latest.revision: 9
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
# At least one parameter type of this binary operator must be the containing type &#39;&lt;typename&gt;&#39;
A definition of a binary operator specifies both parameters with types other than that of the class or structure in which the operator is defined.  
  
 When you define an operator in a class or structure, at least one of the parameters must be of the type of that class or structure.  
  
 **Error ID:** BC33021  
  
### To correct this error  
  
-   Change the type of one or both of the parameters to the type of the class or structure in which the operator is defined.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)