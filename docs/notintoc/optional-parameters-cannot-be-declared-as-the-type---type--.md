---
title: "Optional parameters cannot be declared as the type &#39;&lt;type&gt;&#39;"
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
  - "bc30423"
  - "vbc30423"
helpviewer_keywords: 
  - "BC30423"
ms.assetid: 972dab8b-d91e-4a89-b822-2b8e4aadd25f
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
# Optional parameters cannot be declared as the type &#39;&lt;type&gt;&#39;
Optional parameters cannot be of the data type of a structure.  
  
 **Error ID:** BC30423  
  
### To correct this error  
  
1.  To pass a structure to an optional parameter, declare the parameter as `Object`.  
  
2.  Use `CType` to cast the parameter to that structure type within the procedure.  
  
## See Also  
 [Structures and Classes](../Topic/Structures%20and%20Classes%20\(Visual%20Basic\).md)   
 [CType Function](../Topic/CType%20Function%20\(Visual%20Basic\).md)