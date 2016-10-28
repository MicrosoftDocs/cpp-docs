---
title: "&#39;WriteOnly&#39; property must provide a &#39;Set&#39;"
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
  - "bc30125"
  - "vbc30125"
helpviewer_keywords: 
  - "BC30125"
ms.assetid: c2b18086-9cd9-4094-b9a9-491c8d617096
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
# &#39;WriteOnly&#39; property must provide a &#39;Set&#39;
If a property is declared as `WriteOnly`, it must supply a procedure for writing its value.  
  
 **Error ID:** BC30125  
  
### To correct this error  
  
1.  Make sure you include a `Set` procedure between the `Property` statement and the `End Property` statement.  
  
2.  Verify that other procedures within the `Property` declaration are correctly terminated.  
  
## See Also  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)