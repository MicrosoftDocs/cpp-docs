---
title: "&#39;Try&#39; must end with a matching &#39;End Try&#39;"
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
  - "bc30384"
  - "vbc30384"
helpviewer_keywords: 
  - "BC30384"
ms.assetid: 898300b4-c091-4105-aeb0-9bd559ff6b6f
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
# &#39;Try&#39; must end with a matching &#39;End Try&#39;
`Try` is used to initiate a `Try` block; hence it can only appear at the beginning of the block, with a matching`End Try` statement ending the block. Either you have a redundant `Try`, or you did not end your `Try` block with `Finally`.  
  
 **Error ID:** BC30384  
  
### To correct this error  
  
1.  Locate and remove the extraneous `Try`, or end the block with a matching `End Try`.  
  
## See Also  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Structured Exception Handling Overview for Visual Basic](assetId:///bb81af80-a735-4873-9711-6151a48e418a)