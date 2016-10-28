---
title: "&#39;If&#39; must end with a matching &#39;End If&#39;"
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
  - "bc30081"
  - "vbc30081"
helpviewer_keywords: 
  - "BC30081"
ms.assetid: e5905d59-56bb-4daf-aca5-5ff847fc62f6
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
# &#39;If&#39; must end with a matching &#39;End If&#39;
An `If` statement occurs without a corresponding `End If` statement. An `End If` statement must be used to end the `If` block.  
  
 **Error ID:** BC30081  
  
### To correct this error  
  
1.  If this `If` block is part of a set of nested `If` blocks, make sure each block is properly terminated.  
  
2.  Add an `End If` statement to the end of the `If` block.  
  
## See Also  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)