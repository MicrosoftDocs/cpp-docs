---
title: "&#39;Catch&#39; must end with a matching &#39;End Try&#39; | Microsoft Docs"
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
  - "bc30441"
  - "vbc30441"
helpviewer_keywords: 
  - "BC30441"
ms.assetid: 0e4756b4-1f29-4073-88c5-8f8c93ba6c9e
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Catch&#39; must end with a matching &#39;End Try&#39;
A `Catch` statement appears in your code without a matching `End Try` statement. `Catch` statements must be concluded with an `End Try` statement.  
  
 **Error ID:** BC30441  
  
### To correct this error  
  
1.  Remove the `Catch` statement.  
  
2.  Add an `End Try` statement to conclude the block.  
  
## See Also  
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Structured Exception Handling Overview for Visual Basic](http://msdn.microsoft.com/en-us/bb81af80-a735-4873-9711-6151a48e418a)