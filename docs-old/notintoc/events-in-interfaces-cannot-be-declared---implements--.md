---
title: "Events in interfaces cannot be declared &#39;&lt;implements&gt;&#39;"
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
  - "bc30688"
  - "vbc30688"
helpviewer_keywords: 
  - "BC30688"
ms.assetid: 577823c1-815c-4f1c-9177-4bbf73fa92db
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
# Events in interfaces cannot be declared &#39;&lt;implements&gt;&#39;
Events declared in interfaces cannot implement the events of other interfaces.  
  
 **Error ID:** BC30688  
  
### To correct this error  
  
1.  Remove the `Implements` statement.  
  
2.  Implement the event within a class or structure.  
  
## See Also  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)