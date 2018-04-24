---
title: "Optional parameters cannot be declared as the type &#39;&lt;type&gt;&#39; | Microsoft Docs"
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
  - "bc30423"
  - "vbc30423"
helpviewer_keywords: 
  - "BC30423"
ms.assetid: 972dab8b-d91e-4a89-b822-2b8e4aadd25f
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Optional parameters cannot be declared as the type &#39;&lt;type&gt;&#39;
Optional parameters cannot be of the data type of a structure.  
  
 **Error ID:** BC30423  
  
### To correct this error  
  
1.  To pass a structure to an optional parameter, declare the parameter as `Object`.  
  
2.  Use `CType` to cast the parameter to that structure type within the procedure.  
  
## See Also  
 [Structures and Classes](http://msdn.microsoft.com/library/a221e74a-ffcf-4bdc-a0f6-a088a9bf26cc)   
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)