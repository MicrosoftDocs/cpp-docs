---
title: "&#39;ReadOnly&#39; variable cannot be the target of an assignment"
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
  - "vbc30064"
  - "bc30064"
helpviewer_keywords: 
  - "BC30064"
ms.assetid: 17e0751d-4c22-40b2-bb07-cb5c845dbc30
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
# &#39;ReadOnly&#39; variable cannot be the target of an assignment
A `ReadOnly` property has been found in a context that assigns a value to it. Only writable variables, properties, and array elements can have values assigned to them during execution.  
  
 **Error ID:** BC30064  
  
### To correct this error  
  
-   Remove the `ReadOnly` keyword from the `Dim` statement declaring the variable, or remove the statement that assigns it a value.  
  
## See Also  
 [ReadOnly](../Topic/ReadOnly%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)