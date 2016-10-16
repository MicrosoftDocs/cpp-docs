---
title: "&#39;ElseIf&#39; must be preceded by a matching &#39;If&#39; or &#39;ElseIf&#39;"
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
  - "bc36005"
  - "vbc36005"
helpviewer_keywords: 
  - "BC36005"
ms.assetid: bcebae85-b438-4839-bada-2f8f8dcc8a86
caps.latest.revision: 7
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
# &#39;ElseIf&#39; must be preceded by a matching &#39;If&#39; or &#39;ElseIf&#39;
An `ElseIf` statement occurs without a corresponding `If` statement. `ElseIf` must be preceded by an `If` statement or another `ElseIf` statement.  
  
 **Error ID:** BC36005  
  
### To correct this error  
  
1.  If this `If` block is part of a set of nested control structures, make sure each structure is properly terminated.  
  
2.  Verify that other control structures nested within this `If` block are properly terminated.  
  
3.  Ensure that this `If` block is correctly formatted.  
  
## See Also  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)   
 [Decision Structures](../Topic/Decision%20Structures%20\(Visual%20Basic\).md)