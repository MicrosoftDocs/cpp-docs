---
title: "&#39;Sub New&#39; cannot handle events | Microsoft Docs"
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
  - "vbc30497"
  - "bc30497"
helpviewer_keywords: 
  - "BC30497"
ms.assetid: b8a546c4-914e-49de-b553-9fc0f41424ed
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; cannot handle events
You attempted to combine `Sub New` with `Handles`, which is invalid. Use the `Handles` keyword at the end of a procedure declaration to cause it to handle events raised by an object variable declared using the `WithEvents` keyword.  
  
 **Error ID:** BC30497  
  
### To correct this error  
  
1.  Do not use `New` in this context.  
  
## See Also  
 [Handles](http://msdn.microsoft.com/library/1b051c0e-f499-42f6-acb5-6f4f27824b40)   
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [WithEvents](http://msdn.microsoft.com/library/19d461f5-d72f-4de9-8c1d-0a6650316990)