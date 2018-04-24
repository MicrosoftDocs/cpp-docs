---
title: "Branching out of a &#39;Finally&#39; is not valid | Microsoft Docs"
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
  - "bc30101"
  - "vbc30101"
helpviewer_keywords: 
  - "BC30101"
ms.assetid: 16a0dc29-3657-4373-b77f-38f3cb80e6c9
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Branching out of a &#39;Finally&#39; is not valid
A `GoTo` statement inside a `Finally` block branches outside the block. It is not valid to branch into or out of a `Catch` or `Finally` block.  
  
 **Error ID:** BC30101  
  
### To correct this error  
  
-   Remove the `GoTo` statement, and consider implementing the program logic with decision or loop control structures.  
  
## See Also  
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [GoTo Statement](http://msdn.microsoft.com/library/313274c2-8ab3-4b9c-9ba3-0fd6798e4f6d)   
 [Control Flow](http://msdn.microsoft.com/library/5623ef47-52b1-4202-befd-9af36422ec6f)