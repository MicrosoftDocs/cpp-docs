---
title: "&#39;Continue While&#39; can only appear inside a &#39;While&#39; statement"
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
  - "vbc30784"
  - "bc30784"
helpviewer_keywords: 
  - "BC30784"
ms.assetid: b26c77b2-36ae-4dce-b048-f7c4b196faa4
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
# &#39;Continue While&#39; can only appear inside a &#39;While&#39; statement
A `Continue While` statement can only appear within a `For...Next` loop.  
  
 **Error ID:** BC30784  
  
### To correct this error  
  
1.  If the `Continue While` statement is in a `Do...Loop` loop, change the statement to `Continue Do`.  
  
2.  If the `Continue While` statement is in a `For...Next` loop, change the statement to `Continue For`.  
  
3.  Otherwise, remove the `Continue While` statement.  
  
## See Also  
 [Continue Statement](../Topic/Continue%20Statement%20\(Visual%20Basic\).md)   
 [While...End While Statement](../Topic/While...End%20While%20Statement%20\(Visual%20Basic\).md)