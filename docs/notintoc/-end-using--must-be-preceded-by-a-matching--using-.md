---
title: "&#39;End Using&#39; must be preceded by a matching &#39;Using&#39;"
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
  - "bc36007"
  - "vbc36007"
helpviewer_keywords: 
  - "BC36007"
ms.assetid: 10fb31ba-9b6c-403f-bacc-c7b5df14f1dd
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
# &#39;End Using&#39; must be preceded by a matching &#39;Using&#39;
An `End Using` statement appears with no matching `Using` declaration preceding it.  
  
 **Error ID:** BC36007  
  
### To correct this error  
  
-   Remove the `End Using` statement if it is redundant.  
  
-   Supply the missing [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md) if one is missing.  
  
-   Move the `End Using` statement to the appropriate place in the code.  
  
## See Also  
 [End \<keyword> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)