---
title: "&#39;Global&#39; not allowed in handles; local name expected"
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
  - "bc36002"
  - "vbc36002"
helpviewer_keywords: 
  - "BC36002"
ms.assetid: 7b4602a9-84c9-4068-81bc-e8df03ffc130
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
# &#39;Global&#39; not allowed in handles; local name expected
A `Handles` clause must refer to a local event. The `Global` keyword provides access to global programming elements.  
  
 **Error ID:** BC36002  
  
### To correct this error  
  
-   Change the `Handles` clause to refer to a local instance of the event instead of the global instance.  
  
## See Also  
 [Global - delete](assetId:///18c8ba14-40f6-4978-8096-6a5852324635)   
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)