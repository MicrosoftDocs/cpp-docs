---
title: "Range variable name cannot match the name of a member of the &#39;Object&#39; class | Microsoft Docs"
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
  - "bc36606"
  - "vbc36606"
helpviewer_keywords: 
  - "BC36606"
ms.assetid: 964245e6-2601-4de6-8a51-25c0d9633418
caps.latest.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Range variable name cannot match the name of a member of the &#39;Object&#39; class
A range variable in a LINQ query matches the name of a member of the <xref:System.Object> class. This creates a conflict with the objects created by Visual Basic for the LINQ query.  
  
 **Error ID:** BC36606  
  
### To correct this error  
  
1.  Choose a new name for the range variable that does not match the name of any member of the <xref:System.Object> class.  
  
## See Also  
 <xref:System.Object>   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [From Clause](http://msdn.microsoft.com/library/83e3665e-68a0-4540-a3a3-3d777a0f95d5)   
 [Aggregate Clause](http://msdn.microsoft.com/library/1315a814-5db6-4077-b34b-b141e11cc0eb)   
 [Select Clause](http://msdn.microsoft.com/library/27a3f61c-5960-4692-9b91-4d0c4b6178fe)