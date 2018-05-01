---
title: "Lambda parameter &#39;&lt;parameter&gt;&#39; hides a variable in an enclosing block, a previously defined range variable, or an implicitly declared variable in a query expression. | Microsoft Docs"
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
  - "bc36641"
  - "vbc36641"
helpviewer_keywords: 
  - "BC36641"
ms.assetid: ee08c366-29d1-4abb-b14c-23ae2b9680e7
caps.latest.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Lambda parameter &#39;&lt;parameter&gt;&#39; hides a variable in an enclosing block, a previously defined range variable, or an implicitly declared variable in a query expression.
A variable in a lambda expression has the same name as a variable previously defined within the same scope. This can be a variable in an enclosing block of code for a nested lambda expression, a range variable previously defined within a LINQ query, or a variable that is implicitly declared for a LINQ query.  
  
 **Error ID:** BC36641  
  
### To correct this error  
  
-   Ensure that all variables in your lambda expression have unique names that do not duplicate existing variable names in the same scope.  
  
## See Also  
 [Lambda Expressions](http://msdn.microsoft.com/library/137064b0-3928-4bfa-ba71-c3f9cbd951e2)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)