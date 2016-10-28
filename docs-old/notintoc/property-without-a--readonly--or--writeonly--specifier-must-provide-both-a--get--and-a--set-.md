---
title: "Property without a &#39;ReadOnly&#39; or &#39;WriteOnly&#39; specifier must provide both a &#39;Get&#39; and a &#39;Set&#39;"
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
  - "bc30124"
  - "vbc30124"
helpviewer_keywords: 
  - "BC30124"
ms.assetid: b24fc997-9a6b-44d1-b712-dab498a6fc72
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
# Property without a &#39;ReadOnly&#39; or &#39;WriteOnly&#39; specifier must provide both a &#39;Get&#39; and a &#39;Set&#39;
If a property is not declared as `ReadOnly` or `WriteOnly`, it must supply procedures for reading and writing its value.  
  
 **Error ID:** BC30124  
  
### To correct this error  
  
1.  Make sure you include both a `Get` procedure and a `Set` procedure between the `Property` statement and the `End Property` statement.  
  
2.  Verify that other procedures within the `Property` declaration are correctly terminated.  
  
## See Also  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)