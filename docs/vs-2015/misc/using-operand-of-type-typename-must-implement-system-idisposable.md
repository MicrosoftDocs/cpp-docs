---
title: "&#39;Using&#39; operand of type &#39;&lt;typename&gt;&#39; must implement System.IDisposable | Microsoft Docs"
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
  - "vbc36010"
  - "bc36010"
helpviewer_keywords: 
  - "BC36010"
ms.assetid: ae9ed5d5-68ba-4950-bb7a-61327fa0e7d5
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Using&#39; operand of type &#39;&lt;typename&gt;&#39; must implement System.IDisposable
A `Using` statement specifies a resource of a type that does not implement the <xref:System.IDisposable> interface.  
  
 The purpose of a `Using` block is to guarantee the disposal of a system resource when exiting the block. To satisfy this purpose, the resource must expose the <xref:System.IDisposable.Dispose%2A> method implemented from <xref:System.IDisposable>.  
  
 **Error ID:** BC36010  
  
### To correct this error  
  
-   Remove the resource from the resource list of the `Using` statement, or replace it with a resource that implements <xref:System.IDisposable>.  
  
## See Also  
 <xref:System.IDisposable>   
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)   
 [How to: Dispose of a System Resource](../Topic/How%20to:%20Dispose%20of%20a%20System%20Resource%20\(Visual%20Basic\).md)