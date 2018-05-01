---
title: "&#39;GoTo &lt;linelabel&gt;&#39; is not valid because &#39;&lt;linelabel&gt;&#39; is inside a &#39;Using&#39; statement that does not contain this statement | Microsoft Docs"
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
  - "bc36009"
  - "vbc36009"
helpviewer_keywords: 
  - "BC36009"
ms.assetid: ebec3cac-d378-4e9b-a792-12e9ece5599e
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;linelabel&gt;&#39; is not valid because &#39;&lt;linelabel&gt;&#39; is inside a &#39;Using&#39; statement that does not contain this statement
A `GoTo` statement outside a `Using` construction attempts to branch to a line label inside the construction.  
  
 It is not valid to branch from anywhere outside a `Using`...`End Using` construction to anywhere inside the construction.  
  
 **Error ID:** BC36009  
  
### To correct this error  
  
-   Change the line label in the `GoTo` statement to a label that is not inside any `For`...`Next`, `For Each`...`Next`, `SyncLock`...`End SyncLock`, `Try`...`Catch`...`Finally`, `With`...`End With`, or `Using`...`End Using` construction.  
  
     -or-  
  
-   Remove the `GoTo` statement entirely. The only way you can enter a `Using`...`End Using` construction is to allow control to pass to the `Using` statement itself.  
  
## See Also  
 [GoTo Statement](http://msdn.microsoft.com/library/313274c2-8ab3-4b9c-9ba3-0fd6798e4f6d)   
 [Using Statement](http://msdn.microsoft.com/library/665d1580-dd54-4e96-a9a9-6be2a68948f1)