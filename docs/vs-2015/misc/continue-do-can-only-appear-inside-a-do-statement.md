---
title: "&#39;Continue Do&#39; can only appear inside a &#39;Do&#39; statement | Microsoft Docs"
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
  - "vbc30782"
  - "bc30782"
helpviewer_keywords: 
  - "BC30782"
ms.assetid: c6b35e63-4d84-449d-9685-41a1bc0a7f35
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Continue Do&#39; can only appear inside a &#39;Do&#39; statement
A `Continue Do` statement can only appear within a `Do...Loop` loop.  
  
 **Error ID:** BC30782  
  
### To correct this error  
  
1.  If the `Continue Do` statement is in a `For...Next` loop, change the statement to `Continue For`.  
  
2.  If the `Continue Do` statement is in a `While...End While` loop, change the statement to `Continue While`.  
  
3.  Otherwise, remove the `Continue Do` statement.  
  
## See Also  
 [Continue Statement](http://msdn.microsoft.com/library/3ad00103-358b-4af3-a3a8-1b9ea0e995d3)   
 [Do...Loop Statement](http://msdn.microsoft.com/library/892f9096-b3e2-4aee-834d-83bc4e2c379d)