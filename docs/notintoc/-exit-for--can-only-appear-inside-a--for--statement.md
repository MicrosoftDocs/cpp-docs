---
title: "&#39;Exit For&#39; can only appear inside a &#39;For&#39; statement"
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
  - "bc30096"
  - "vbc30096"
helpviewer_keywords: 
  - "BC30096"
ms.assetid: 1062a329-9364-4234-9175-4c70a51cb7ae
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
# &#39;Exit For&#39; can only appear inside a &#39;For&#39; statement
An `Exit For` statement occurs outside a `For` loop. `Exit For` is valid only between a `For` or `For Each` statement and a corresponding `Next` statement.  
  
 **Error ID:** BC30096  
  
### To correct this error  
  
1.  Make sure a valid `For` or `For Each` statement precedes the `Exit For`, and a valid `Next` statement appears after it.  
  
2.  Verify that other control structures within the `For` loop are correctly terminated.  
  
## See Also  
 [For...Next Statement](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [For Each...Next Statement](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)