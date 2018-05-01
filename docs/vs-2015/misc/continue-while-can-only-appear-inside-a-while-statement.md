---
title: "&#39;Continue While&#39; can only appear inside a &#39;While&#39; statement | Microsoft Docs"
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
  - "vbc30784"
  - "bc30784"
helpviewer_keywords: 
  - "BC30784"
ms.assetid: b26c77b2-36ae-4dce-b048-f7c4b196faa4
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Continue While&#39; can only appear inside a &#39;While&#39; statement
A `Continue While` statement can only appear within a `For...Next` loop.  
  
 **Error ID:** BC30784  
  
### To correct this error  
  
1.  If the `Continue While` statement is in a `Do...Loop` loop, change the statement to `Continue Do`.  
  
2.  If the `Continue While` statement is in a `For...Next` loop, change the statement to `Continue For`.  
  
3.  Otherwise, remove the `Continue While` statement.  
  
## See Also  
 [Continue Statement](http://msdn.microsoft.com/library/3ad00103-358b-4af3-a3a8-1b9ea0e995d3)   
 [While...End While Statement](http://msdn.microsoft.com/library/b931d1ce-e8ed-44d8-a13d-92a4f5458a1e)