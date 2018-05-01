---
title: "&#39;Sub New&#39; cannot implement interface members | Microsoft Docs"
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
  - "bc31042"
  - "vbc31042"
helpviewer_keywords: 
  - "BC31042"
ms.assetid: 43ad231f-878d-4d08-b43c-06bf167ddd7d
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; cannot implement interface members
`Sub New` is a constructor and it cannot implement members.  
  
 **Error ID:** BC31042  
  
### To correct this error  
  
-   Remove `Implements` statements from `Sub New` procedures.  
  
## See Also  
 [Interfaces](http://msdn.microsoft.com/library/61b06674-12c9-430b-be68-cc67ecee1f5b)   
 [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a)