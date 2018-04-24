---
title: "&#39;#Region&#39; statement must end with a matching &#39;#End Region&#39; | Microsoft Docs"
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
  - "bc30681"
  - "vbc30681"
helpviewer_keywords: 
  - "BC30681"
ms.assetid: 05a0402b-da68-4ab8-b6d6-940379bc5973
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#Region&#39; statement must end with a matching &#39;#End Region&#39;
Use the `#Region` directive to specify a block of code that you can expand or collapse when using the outlining feature of the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Code Editor. The start and end of `#Region` statements must be in the same code block.  
  
 **Error ID:** BC30681  
  
### To correct this error  
  
1.  Insert `#End Region` at the appropriate place in the code after the `#Region` statement.  
  
## See Also  
 [#Region Directive](http://msdn.microsoft.com/library/90a6a104-3cbf-47d0-bdc4-b585d0921b87)