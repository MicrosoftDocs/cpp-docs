---
title: "&#39;On Error&#39; statements are not valid within &#39;SyncLock&#39; statements"
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
  - "bc30752"
  - "vbc30752"
helpviewer_keywords: 
  - "BC30752"
ms.assetid: 5c726627-b0fc-4edf-bd29-a83a0009f44d
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
# &#39;On Error&#39; statements are not valid within &#39;SyncLock&#39; statements
`On Error` statements are cannot be used in `SyncLock` blocks because they would disrupt thread synchronization.  
  
 **Error ID:** BC30752  
  
### To correct this error  
  
1.  Place `On Error` statements outside `SyncLock` blocks.  
  
## See Also  
 [On Error Statement](../Topic/On%20Error%20Statement%20\(Visual%20Basic\).md)