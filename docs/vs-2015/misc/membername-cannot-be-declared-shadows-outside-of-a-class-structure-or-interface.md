---
title: "&#39;&lt;membername&gt;&#39; cannot be declared &#39;Shadows&#39; outside of a class, structure, or interface | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32200"
  - "vbc32200"
helpviewer_keywords: 
  - "BC32200"
ms.assetid: 23e28894-5854-46ef-924d-f1cb6e81bcb1
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;membername&gt;&#39; cannot be declared &#39;Shadows&#39; outside of a class, structure, or interface
The `Shadows` keyword appears in a declaration at namespace, module, or file level. Shadowing is meaningful only within a programming element that can inherit from a base element.  
  
 **Error ID:** BC32200  
  
### To correct this error  
  
-   Remove the `Shadows` keyword, or move the declaration inside a class, structure, or interface.  
  
## See Also  
 [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)   
 [Shadowing in Visual Basic](http://msdn.microsoft.com/library/54bb4c25-12c4-4181-b4a0-93546053964e)