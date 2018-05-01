---
title: "&#39;Return&#39; statement in a Sub or a Set cannot return a value | Microsoft Docs"
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
  - "bc30647"
  - "vbc30647"
helpviewer_keywords: 
  - "BC30647"
ms.assetid: d4c05c28-d650-4f49-976e-650d84802036
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Return&#39; statement in a Sub or a Set cannot return a value
`Sub` procedures and property `Set` procedures cannot return values.  
  
 **Error ID:** BC30647  
  
### To correct this error  
  
-   Change the current procedure to a function, or to a `Get` property procedure if the current procedure is part of a property.  
  
-   You can effectively return values from `Sub` procedures by modifying the value of parameters passed by reference using the `ByRef` keyword.  
  
## See Also  
 [Return Statement](http://msdn.microsoft.com/library/ac86e7f0-5a67-42c3-9834-0e0381efa3ec)   
 [Sub Procedures](http://msdn.microsoft.com/library/6a0a4958-ed0a-4d3d-8d31-0772c82bda58)   
 [Function Procedures](http://msdn.microsoft.com/library/1b9f632c-553b-4cb6-920a-ded117ead8c0)   
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)