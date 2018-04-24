---
title: "&#39;Using&#39; resource variable must have an explicit initialization | Microsoft Docs"
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
  - "vbc36011"
  - "bc36011"
helpviewer_keywords: 
  - "BC36011"
ms.assetid: 5db996a6-0802-4b67-91f1-4aa9c3dd6b09
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Using&#39; resource variable must have an explicit initialization
A `Using` statement specifies at least one resource that it does not initialize with a `New` clause.  
  
 If you have not already acquired the resource before passing control to the `Using` block, the `Using` statement must acquire the resource. To do this, it must create an object from the specified class, which requires a `New` clause.  
  
 **Error ID:** BC36011  
  
### To correct this error  
  
-   If you have already acquired the resource, use a reference variable or expression in the `Using` statement that evaluates to the acquired resource.  
  
     `Dim newFont As New System.Drawing.Font`  
  
     `Using newFont`  
  
-   If you have not already acquired the resource, add a `New` clause to the `Using` statement.  
  
     `Using newFont as`   `New`   `System.Drawing.Font`  
  
## See Also  
 [Using Statement](http://msdn.microsoft.com/library/665d1580-dd54-4e96-a9a9-6be2a68948f1)   
 [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0)   
 [How to: Dispose of a System Resource](http://msdn.microsoft.com/library/8be2b239-8090-419b-8e7e-bcaa75b0ecc8)