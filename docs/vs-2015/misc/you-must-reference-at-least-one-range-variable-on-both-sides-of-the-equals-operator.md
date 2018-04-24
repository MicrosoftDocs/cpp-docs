---
title: "You must reference at least one range variable on both sides of the &#39;Equals&#39; operator | Microsoft Docs"
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
  - "vbc36622"
  - "bc36622"
helpviewer_keywords: 
  - "BC36622"
ms.assetid: 8d301227-131d-4977-b3ff-1fc4e427f8fa
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# You must reference at least one range variable on both sides of the &#39;Equals&#39; operator
You must reference at least one range variable on both sides of the 'Equals' operator. Range variable(s) \<variable(s)> must appear on one side of the 'Equals' operator, and range variable(s) \<variable(s)> must appear on the other.  
  
 Range variables identified for collections to be joined in a LINQ query must be on opposite sides of the `Equals` operator, depending on the collection they are identified for. That is, range variables identified for one of the collections being joined must be on the opposite side of the `Equals` operator from range variables for the other collection being joined. Range variables from separate collections cannot be mixed on the same side of the `Equals` operator.  
  
 At least one variable from each collection being joined must be referenced on each side of the `Equals` operator.  
  
 **Error ID:** BC36622  
  
## See Also  
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)   
 [Join Clause](http://msdn.microsoft.com/library/6dd37936-b27c-4e00-98ad-154b23f4de64)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [From Clause](http://msdn.microsoft.com/library/83e3665e-68a0-4540-a3a3-3d777a0f95d5)   
 [Select Clause](http://msdn.microsoft.com/library/27a3f61c-5960-4692-9b91-4d0c4b6178fe)