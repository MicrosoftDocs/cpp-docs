---
title: "Option Strict On requires that all method parameters have an &#39;As&#39; clause"
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
  - "vbc30211"
  - "bc30211"
helpviewer_keywords: 
  - "BC30211"
ms.assetid: 855795ce-8499-4525-a1de-cbb8ba364cd7
caps.latest.revision: 4
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
# Option Strict On requires that all method parameters have an &#39;As&#39; clause
A method contains a parameter without an `As` clause. When `Option Strict` is on, every variable, property, procedure argument, and function return must be declared with an `As` clause to specify its data type; for example, `Sub GetData(ByVal filter As String)`.  
  
 **Error ID:** BC30211  
  
### To correct this error  
  
-   Check to see whether the `As` keyword is misspelled.  
  
-   Supply an `As` clause for the declared variable, or turn `Option Strict` off.  
  
## See Also  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Sub Statement](../Topic/Sub%20Statement%20\(Visual%20Basic\).md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)