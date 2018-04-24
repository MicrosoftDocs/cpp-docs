---
title: "&#39;Namespace&#39; statements can occur only at file or namespace level | Microsoft Docs"
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
  - "bc30618"
  - "vbc30618"
helpviewer_keywords: 
  - "BC30618"
ms.assetid: bcd365a4-5d84-4c3c-83dc-40cb4c47f73b
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Namespace&#39; statements can occur only at file or namespace level
`Namespace` statements must appear after `Option` statements, `Imports` statements, and global attributes, but before all other declarations in your source file.  
  
 **Error ID:** BC30618  
  
### To correct this error  
  
-   Move the `Namespace` statement to the top of your namespace declaration or source file.  
  
## See Also  
 [Namespace Statement](http://msdn.microsoft.com/library/a31fbd95-9ace-4c3d-bbb1-51222a2272b2)   
 [Namespaces in Visual Basic](http://msdn.microsoft.com/library/cffac744-ab8c-4f1f-ba50-732c22ab4b88)