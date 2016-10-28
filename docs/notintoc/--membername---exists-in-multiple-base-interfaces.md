---
title: "&#39;&lt;membername&gt;&#39; exists in multiple base interfaces"
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
  - "vbc31040"
  - "bc31040"
helpviewer_keywords: 
  - "BC31040"
ms.assetid: c1a80d64-3986-417f-af92-412183e490ad
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
# &#39;&lt;membername&gt;&#39; exists in multiple base interfaces
'\<membername>' exists in multiple base interfaces. Use the name of the interface that declares '\<membername>' in the 'Implements' clause instead of the name of the derived interface.  
  
 This interface inherits members with the same name from multiple interfaces, creating ambiguity.  
  
 **Error ID:** BC31040  
  
### To correct this error  
  
-   Use the defining interface name in the `Implements` clauses instead of the name of the derived interface.  
  
## See Also  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)