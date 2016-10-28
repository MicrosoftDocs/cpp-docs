---
title: "Range specified for &#39;Case&#39; statement is not valid"
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
  - "vbc40052"
  - "bc40052"
helpviewer_keywords: 
  - "BC40052"
ms.assetid: a11d92f6-dc13-46a0-a8ca-5a962a0ed968
caps.latest.revision: 9
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
# Range specified for &#39;Case&#39; statement is not valid
An invalid range has been specified for a `Case` statement.  
  
 When you are comparing the same expression to several different values, you can use the `Select...Case` statements as an alternative to the `If...Then...Else` statements. While the `If` and `ElseIf` statements can evaluate a different expression in each statement, the `Select` statement evaluates a single expression only once and then uses it for every comparison. Each `Case` statement can contain more than one value, a range of values, or a combination of values and comparison operators.  
  
 **Error ID:** BC40052  
  
### To correct this error  
  
-   Modify the range to include all values, or use a `Case Else` statement to catch an undefined value.  
  
## See Also  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)   
 [Decision Structures](../Topic/Decision%20Structures%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)