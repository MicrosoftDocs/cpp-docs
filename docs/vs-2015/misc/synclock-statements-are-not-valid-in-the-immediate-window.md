---
title: "&#39;SyncLock&#39; statements are not valid in the Immediate window | Microsoft Docs"
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
  - "vbc30135"
  - "bc30135"
helpviewer_keywords: 
  - "BC30135"
ms.assetid: 099771a1-5bf4-4c16-8fc3-262926c771df
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;SyncLock&#39; statements are not valid in the Immediate window
The `SyncLock` statement synchronizes threads and is not permitted in a debugging context.  
  
 **Error ID:** BC30135  
  
### To correct this error  
  
-   Do not issue a `SyncLock` statement in the **Immediate** window.  
  
## See Also  
 [Immediate Window](http://msdn.microsoft.com/library/d33e7937-73f3-4c69-9df0-777a8713c6f2)   
 [SyncLock Statement](http://msdn.microsoft.com/library/14501703-298f-4d43-b139-c4b6366af176)