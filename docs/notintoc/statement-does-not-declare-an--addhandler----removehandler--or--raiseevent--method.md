---
title: "Statement does not declare an &#39;AddHandler&#39;, &#39;RemoveHandler&#39; or &#39;RaiseEvent&#39; method"
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
  - "vbc31113"
  - "bc31113"
helpviewer_keywords: 
  - "BC31113"
ms.assetid: f8299c9d-6030-43e5-878e-8d2b042191b5
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
# Statement does not declare an &#39;AddHandler&#39;, &#39;RemoveHandler&#39; or &#39;RaiseEvent&#39; method
The statement does not supply an `AddHandler`, `RemoveHandler`, or `RaiseEvent` declaration statement around a `Custom Event` procedure. A custom event declaration is a block of code enclosed within the `Custom Event` and `End Event` statements. Inside this block, each `Custom Event` procedure appears as an internal block enclosed within a declaration statement and an `End` statement.  
  
 **Error ID:** BC31113  
  
### To correct this error  
  
-   Supply an `AddHandler`, `RemoveHandler`, or `RaiseEvent` declaration statement.  
  
## See Also  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler - delete](assetId:///fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler - delete](assetId:///35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent - delete](assetId:///7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)