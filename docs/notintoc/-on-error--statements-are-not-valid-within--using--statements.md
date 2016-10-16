---
title: "&#39;On Error&#39; statements are not valid within &#39;Using&#39; statements"
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
  - "vbc36013"
  - "bc36013"
helpviewer_keywords: 
  - "BC36013"
ms.assetid: 5b399bf9-6595-46e0-a808-378f6c28568b
caps.latest.revision: 10
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
# &#39;On Error&#39; statements are not valid within &#39;Using&#39; statements
An `On Error` statement appears within a `Using` statement but is not valid in that context.  
  
 **Error ID:** BC36013  
  
### To correct this error  
  
-   Use structured error handling, such as a `Try…Catch` block, in place of the `On Error` statement.  
  
## See Also  
 [Structured Exception Handling Overview for Visual Basic](assetId:///bb81af80-a735-4873-9711-6151a48e418a)   
 [Choosing When to Use Structured and Unstructured Exception Handling (Visual Basic)](assetId:///e897d7ca-07e8-45dd-8a6d-a5b2a2fc9b9a)   
 [On Error Statement](../Topic/On%20Error%20Statement%20\(Visual%20Basic\).md)   
 [How to: Test Code with a Try…Catch Block in Visual Basic](assetId:///8368e205-ed73-4185-a247-af84fb4fafa9)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)