---
title: "&#39;Using&#39; resource variable type can not be array type | Microsoft Docs"
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
  - "vbc36012"
  - "bc36012"
helpviewer_keywords: 
  - "BC36012"
ms.assetid: f98c54b0-6ede-48b6-aa31-438664c219f3
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Using&#39; resource variable type can not be array type
A `Using` statement specifies an array variable for a resource.  
  
 The <xref:System.Array> class does not implement the <xref:System.IDisposable> interface, so the `Using` block cannot call the <xref:System.IDisposable.Dispose%2A> method on an array resource.  
  
 **Error ID:** BC36012  
  
### To correct this error  
  
-   Use a different type of system resource in the `Using` block.  
  
## See Also  
 [Using Statement](http://msdn.microsoft.com/library/665d1580-dd54-4e96-a9a9-6be2a68948f1)   
 [How to: Dispose of a System Resource](http://msdn.microsoft.com/library/8be2b239-8090-419b-8e7e-bcaa75b0ecc8)   
 [NOTINBUILD Overview of Arrays in Visual Basic](http://msdn.microsoft.com/en-us/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)