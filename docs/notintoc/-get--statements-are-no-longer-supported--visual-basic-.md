---
title: "&#39;Get&#39; statements are no longer supported (Visual Basic)"
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
  - "vbc30767"
  - "bc30767"
helpviewer_keywords: 
  - "BC30767"
ms.assetid: 6aa62dcc-99aa-4051-a81e-3bbb6a8c355f
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
# &#39;Get&#39; statements are no longer supported (Visual Basic)
`Get` statements are no longer supported. File I/O functionality is normally available in the `Microsoft.VisualBasic` namespace, but the targeted version of the .NET Compact Framework does not support it.  
  
 **Error ID:** BC30767  
  
### To correct this error  
  
-   Perform file operations with functions defined in the \<xref:System.IO> namespace.  
  
## See Also  
 \<xref:System.IO>   
 [Get Statement](../Topic/Get%20Statement.md)   
 [File Access with Visual Basic](../Topic/File%20Access%20with%20Visual%20Basic.md)