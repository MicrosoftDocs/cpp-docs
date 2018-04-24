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
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [Aggregate Clause](../Topic/Aggregate%20Clause%20\(Visual%20Basic\).md)   
 [Select Clause](../Topic/Select%20Clause%20\(Visual%20Basic\).md)   
 [Group By Clause](../Topic/Group%20By%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)