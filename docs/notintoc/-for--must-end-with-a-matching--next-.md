---
title: "&#39;For&#39; must end with a matching &#39;Next&#39;"
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
  - "vbc30084"
  - "bc30084"
helpviewer_keywords: 
  - "BC30084"
ms.assetid: 4c5e49c2-7343-4487-b5f8-a38c97ba895b
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
# &#39;For&#39; must end with a matching &#39;Next&#39;
A `For` statement occurs without a corresponding `Next` statement. A `Next` statement must be used to end the `For` loop.  
  
 **Error ID:** BC30084  
  
### To correct this error  
  
-   If this `For` loop is part of a set of nested loops, make sure each loop is properly terminated.  
  
-   Add a `Next` statement to the end of the `For` loop.  
  
## See Also  
 [For...Next Statement](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)