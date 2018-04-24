---
title: "Next control variable does not match For loop control variable &#39;&lt;variablename&gt;&#39; | Microsoft Docs"
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
  - "vbc30070"
  - "bc30070"
helpviewer_keywords: 
  - "BC30070"
ms.assetid: e9e96008-b053-4fa0-8966-decaad99fecd
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Next control variable does not match For loop control variable &#39;&lt;variablename&gt;&#39;
The control variable in the `Next` statement of a `For...Next` loop must match the variable in the corresponding `For` statement.  
  
 **Error ID:** BC30070  
  
### To correct this error  
  
1.  Check the spelling of the variable in the `Next` statement and in the corresponding `For` statement to be sure it matches.  
  
2.  Ensure that no parts of the enclosing loop have been inadvertently deleted.  
  
3.  If this loop is part of a set of nested loops, check that every loop is properly terminated.  
  
## See Also  
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)