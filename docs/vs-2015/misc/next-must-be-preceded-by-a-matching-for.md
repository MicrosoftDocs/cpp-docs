---
title: "&#39;Next&#39; must be preceded by a matching &#39;For&#39; | Microsoft Docs"
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
  - "vbc30092"
  - "bc30092"
helpviewer_keywords: 
  - "BC30092"
ms.assetid: 4bf49bb2-c69b-443d-aa58-cb40fcfb1370
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Next&#39; must be preceded by a matching &#39;For&#39;
A `Next` statement occurs without a corresponding `For` or `For Each` statement. `Next` must be preceded by a corresponding `For` or `For Each` statement.  
  
 **Error ID:** BC30092  
  
### To correct this error  
  
1.  If this `For` loop is part of a set of nested `For` loops, make sure each loop is properly terminated.  
  
2.  Verify that other control structures within the `For` loop are correctly terminated.  
  
3.  Ensure that this `For` loop is correctly formatted.  
  
## See Also  
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)   
 [For Each...Next Statement](http://msdn.microsoft.com/library/ebce3120-95c3-42b1-b70b-fa7da40c75e2)