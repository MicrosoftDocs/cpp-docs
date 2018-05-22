---
title: "&#39;Exit Function&#39; is not valid in a Sub or Property | Microsoft Docs"
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
  - "vbc30067"
  - "bc30067"
helpviewer_keywords: 
  - "BC30067"
ms.assetid: 207fef65-4383-4120-9e5a-e0e14d168a72
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Function&#39; is not valid in a Sub or Property
`Exit Function` appears in a `Sub` procedure or a `Property` procedure. An `Exit` statement must match the block in which it occurs.  
  
 **Error ID:** BC30067  
  
### To correct this error  
  
-   Replace the `Exit Function` with the `Exit Sub` or `Exit Property` statement as appropriate.  
  
## See Also  
 [Sub Procedures](http://msdn.microsoft.com/library/6a0a4958-ed0a-4d3d-8d31-0772c82bda58)   
 [Function Procedures](http://msdn.microsoft.com/library/1b9f632c-553b-4cb6-920a-ded117ead8c0)   
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)