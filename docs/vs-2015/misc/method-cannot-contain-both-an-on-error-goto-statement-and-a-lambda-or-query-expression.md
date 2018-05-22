---
title: "Method cannot contain both an &#39;On Error GoTo&#39; statement and a lambda or query expression | Microsoft Docs"
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
  - "bc36595"
  - "vbc36595"
helpviewer_keywords: 
  - "BC36595"
ms.assetid: 4e7cc11e-f53d-4481-afb4-653a81d54483
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Method cannot contain both an &#39;On Error GoTo&#39; statement and a lambda or query expression
A method contains both an `On Error Goto` statement and either a lambda expression or a LINQ query. You cannot include an `On Error Goto` statement with a lambda expression or LINQ query in a method.  
  
 **Error ID:** BC36595  
  
### To correct this error  
  
1.  Replace the exception handling code that uses the `On Error Goto` statement with a `Try...Catch` statement.  
  
## See Also  
 [Introduction to Exception Handling (Visual Basic)](http://msdn.microsoft.com/en-us/9792f16a-0cd2-40bd-ace2-f7a4344c0e52)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [Lambda Expressions](http://msdn.microsoft.com/library/137064b0-3928-4bfa-ba71-c3f9cbd951e2)   
 [On Error Statement](http://msdn.microsoft.com/library/ff947930-fb84-40cf-bd66-1ea219561d5c)