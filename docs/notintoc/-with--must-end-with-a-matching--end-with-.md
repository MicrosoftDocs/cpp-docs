---
title: "&#39;With&#39; must end with a matching &#39;End With&#39;"
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
  - "bc30085"
  - "vbc30085"
helpviewer_keywords: 
  - "BC30085"
ms.assetid: aa88f4d0-be5f-4efe-a4ef-80e6d6124e6e
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
# &#39;With&#39; must end with a matching &#39;End With&#39;
A `With` statement occurs without a corresponding `End With` statement. An `End With` statement must be used to end the `With` block.  
  
 **Error ID:** BC30085  
  
### To correct this error  
  
-   If this `With` block is part of a set of nested `With` blocks, make sure each block is properly terminated.  
  
-   Add an `End With` statement to the end of the `With` block.  
  
## See Also  
 [With...End With Statement](../Topic/With...End%20With%20Statement%20\(Visual%20Basic\).md)