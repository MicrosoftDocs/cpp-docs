---
title: "&#39;Group&#39; not allowed in this context; identifier expected | Microsoft Docs"
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
  - "bc36708"
  - "vbc36708"
helpviewer_keywords: 
  - "BC36708"
ms.assetid: ef6b453e-68e7-47c2-997c-9fd1ca074217
caps.latest.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Group&#39; not allowed in this context; identifier expected
The `Group` keyword is included in the `Into` section of an `Aggregate` clause. The `Group` keyword is only valid in the `Group By` or `Group Join` clauses.  
  
 **Error ID:** BC36618  
  
### To correct this error  
  
-   Remove the `Group` keyword from the `Aggregate` clause. You can add a `Group By` clause to the query to group results.  
  
## See Also  
 [Aggregate Clause](http://msdn.microsoft.com/library/1315a814-5db6-4077-b34b-b141e11cc0eb)   
 [Group By Clause](http://msdn.microsoft.com/library/b1b5dcea-6654-473b-a2db-01f7e4c265d7)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)