---
title: "&#39;&lt;specifier&gt;&#39; is not valid on a member variable declaration | Microsoft Docs"
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
  - "vbc30235"
  - "bc30235"
helpviewer_keywords: 
  - "BC30235"
ms.assetid: 8c5764e4-0096-4ca0-8656-05341a39833a
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;specifier&gt;&#39; is not valid on a member variable declaration
A `Dim` statement contains an invalid keyword. A `Dim` statement can include only the `Friend`, `Private`, `Protected`, `Public`, `ReadOnly`, `Shadows`, `Shared`, or `Static` keywords.  
  
 This message can also appear if you declare a `Static` variable outside of a procedure. You can use `Static` only at procedure level.  
  
 Note that if you include a valid keyword in a `Dim` statement, you can optionally omit the `Dim` keyword.  
  
 **Error ID:** BC30235  
  
### To correct this error  
  
1.  Remove the invalid keyword from the `Dim` statement.  
  
2.  If you have declared a `Static` variable outside of a procedure, either move the declaration inside a procedure or remove the `Static` keyword.  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)