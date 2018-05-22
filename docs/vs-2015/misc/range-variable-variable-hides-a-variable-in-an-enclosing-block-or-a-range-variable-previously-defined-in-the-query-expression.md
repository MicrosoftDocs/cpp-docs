---
title: "Range variable &lt;variable&gt; hides a variable in an enclosing block or a range variable previously defined in the query expression. | Microsoft Docs"
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
  - "bc30978"
  - "vbc30978"
helpviewer_keywords: 
  - "BC30978"
ms.assetid: 806d94c1-653f-40c0-b1c4-95661c76a392
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Range variable &lt;variable&gt; hides a variable in an enclosing block or a range variable previously defined in the query expression.
A range variable in a query has the same name as a variable previously defined within the same scope, or a range variable previously defined within the query.  
  
 **Error ID:** BC30978  
  
### To correct this error  
  
-   Ensure that all range variables in your query have unique names that do not duplicate existing variable names in the same scope.  
  
-   Enclose nested queries with duplicate control variable names in parentheses, separating the scope for each range variable.  
  
## See Also  
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)