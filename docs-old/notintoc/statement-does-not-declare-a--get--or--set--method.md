---
title: "Statement does not declare a &#39;Get&#39; or &#39;Set&#39; method"
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
  - "bc30576"
  - "vbc30576"
helpviewer_keywords: 
  - "BC30576"
ms.assetid: 0f5aabd8-7cd0-4eaa-ae92-67be260cf63e
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
# Statement does not declare a &#39;Get&#39; or &#39;Set&#39; method
Your statement fails to supply either a `Get` or `Set` declaration statement around a `Property` procedure. A property is defined as a block of code enclosed within the `Property` and `End Property` statements. Inside this block, each `Property` procedure appears as an internal block enclosed within a declaration statement and an end statement.  
  
 **Error ID:** BC30576  
  
### To correct this error  
  
-   Supply a `Get` or `Set` declaration statement.  
  
## See Also  
 [Property Procedures](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)