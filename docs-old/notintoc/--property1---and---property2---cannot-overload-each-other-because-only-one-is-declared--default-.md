---
title: "&#39;&lt;property1&gt;&#39; and &#39;&lt;property2&gt;&#39; cannot overload each other because only one is declared &#39;Default&#39;"
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
  - "bc30361"
  - "vbc30361"
helpviewer_keywords: 
  - "BC30361"
ms.assetid: bac85b32-1a1f-4c43-817c-76e209cfeb8c
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
# &#39;&lt;property1&gt;&#39; and &#39;&lt;property2&gt;&#39; cannot overload each other because only one is declared &#39;Default&#39;
If a property specifies `Default`, all properties overloaded on that name must also specify `Default`.  
  
 **Error ID:** BC30361  
  
### To correct this error  
  
-   Make sure all of the overloaded properties are declared `Default`.  
  
## See Also  
 [Considerations in Overloading Procedures](../Topic/Considerations%20in%20Overloading%20Procedures%20\(Visual%20Basic\).md)   
 [Default](../Topic/Default%20\(Visual%20Basic\).md)