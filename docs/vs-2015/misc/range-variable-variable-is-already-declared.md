---
title: "Range variable &lt;variable&gt; is already declared | Microsoft Docs"
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
  - "vbc36600"
  - "bc36600"
helpviewer_keywords: 
  - "BC36600"
ms.assetid: d53da04d-cd36-44ec-8b23-48cd81231191
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Range variable &lt;variable&gt; is already declared
A range variable name specified in a `Select` clause, or the `Into` part of an `Aggregate`, `Group By`, or `Group Join` clause, duplicates the name of a range variable already specified in the query clause.  
  
 **Error ID:** BC36600  
  
### To correct this error  
  
1.  Ensure that all range variables in a query clause have unique names.  
  
## See Also  
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [Aggregate Clause](http://msdn.microsoft.com/library/1315a814-5db6-4077-b34b-b141e11cc0eb)   
 [Select Clause](http://msdn.microsoft.com/library/27a3f61c-5960-4692-9b91-4d0c4b6178fe)   
 [Group By Clause](http://msdn.microsoft.com/library/b1b5dcea-6654-473b-a2db-01f7e4c265d7)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)