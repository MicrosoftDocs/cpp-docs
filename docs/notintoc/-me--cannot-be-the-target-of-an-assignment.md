---
title: "&#39;Me&#39; cannot be the target of an assignment"
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
  - "bc30062"
  - "vbc30062"
helpviewer_keywords: 
  - "BC30062"
ms.assetid: 05350c30-f227-453f-a743-54fa4305b1f5
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
# &#39;Me&#39; cannot be the target of an assignment
The `Me` keyword always refers to the specific instance of a class where the code is currently executing. Its value cannot be changed.  
  
 **Error ID:** BC30062  
  
### To correct this error  
  
-   Remove the statement that assigns a value to `Me`.  
  
## See Also  
 [Me](assetId:///a65973c7-cf06-4547-9b25-9fba885525c2)   
 [Object Variable Assignment](../Topic/Object%20Variable%20Assignment%20\(Visual%20Basic\).md)