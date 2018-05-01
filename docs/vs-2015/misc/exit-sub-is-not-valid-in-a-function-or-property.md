---
title: "&#39;Exit Sub&#39; is not valid in a Function or Property | Microsoft Docs"
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
  - "bc30065"
  - "vbc30065"
helpviewer_keywords: 
  - "BC30065"
ms.assetid: d6426861-ba64-4dca-9100-262c6c058bd9
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Sub&#39; is not valid in a Function or Property
`Exit Sub` appears in a `Function` procedure or a `Property` procedure. An `Exit` statement must match the block in which it occurs.  
  
 **Error ID:** BC30065  
  
### To correct this error  
  
-   Replace the `Exit Sub` with the `Exit Function` or `Exit Property` statement as appropriate.  
  
## See Also  
 [Sub Procedures](http://msdn.microsoft.com/library/6a0a4958-ed0a-4d3d-8d31-0772c82bda58)   
 [Function Procedures](http://msdn.microsoft.com/library/1b9f632c-553b-4cb6-920a-ded117ead8c0)   
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)