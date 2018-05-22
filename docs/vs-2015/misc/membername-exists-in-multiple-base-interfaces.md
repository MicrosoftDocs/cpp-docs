---
title: "&#39;&lt;membername&gt;&#39; exists in multiple base interfaces | Microsoft Docs"
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
  - "vbc31040"
  - "bc31040"
helpviewer_keywords: 
  - "BC31040"
ms.assetid: c1a80d64-3986-417f-af92-412183e490ad
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;membername&gt;&#39; exists in multiple base interfaces
'\<membername>' exists in multiple base interfaces. Use the name of the interface that declares '\<membername>' in the 'Implements' clause instead of the name of the derived interface.  
  
 This interface inherits members with the same name from multiple interfaces, creating ambiguity.  
  
 **Error ID:** BC31040  
  
### To correct this error  
  
-   Use the defining interface name in the `Implements` clauses instead of the name of the derived interface.  
  
## See Also  
 [Interfaces](http://msdn.microsoft.com/library/61b06674-12c9-430b-be68-cc67ecee1f5b)   
 [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a)