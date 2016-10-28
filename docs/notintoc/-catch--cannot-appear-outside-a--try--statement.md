---
title: "&#39;Catch&#39; cannot appear outside a &#39;Try&#39; statement"
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
  - "bc30380"
  - "vbc30380"
helpviewer_keywords: 
  - "BC30380"
ms.assetid: 73ce950d-881f-4532-8024-40a4930abd32
caps.latest.revision: 7
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
# &#39;Catch&#39; cannot appear outside a &#39;Try&#39; statement
`Catch` must appear within a `Try...Catch...Finally` statement block. Either you have an unnecessary `Catch` statement in your `Try` block, or your `Catch` statement appears outside the bounds of its corresponding `Try` block.  
  
 **Error ID:** BC30380  
  
### To correct this error  
  
1.  Delete the `Catch` statement if it is unnecessary, or place it within a `Try...Catch...Finally` statement block.  
  
## See Also  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Structured Exception Handling Overview for Visual Basic](assetId:///bb81af80-a735-4873-9711-6151a48e418a)