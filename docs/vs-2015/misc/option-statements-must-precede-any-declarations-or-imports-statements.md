---
title: "&#39;Option&#39; statements must precede any declarations or &#39;Imports&#39; statements | Microsoft Docs"
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
  - "vbc30627"
  - "bc30627"
helpviewer_keywords: 
  - "BC30627"
ms.assetid: 2ce0fcf2-80f4-47d3-a394-44e0aed456db
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Option&#39; statements must precede any declarations or &#39;Imports&#39; statements
`Option` statements should be the first non-comment statements in your source code.  
  
 **Error ID:** BC30627  
  
### To correct this error  
  
-   Move the `Option` statements to the top of the source code, immediately before `Imports` and `Namespace` statements.  
  
## See Also  
 [Option \<keyword> Statement](http://msdn.microsoft.com/library/6b2f41c4-2403-43b6-8a14-94a3775e5b47)   
 [Option Compare Statement](http://msdn.microsoft.com/library/54e8eeeb-3b0d-4fb9-acce-fbfbd5975f6e)   
 [Option Explicit Statement](http://msdn.microsoft.com/library/e82ac1ad-2cd3-49b2-b985-8bcf016f3fcc)   
 [Option Infer Statement](http://msdn.microsoft.com/library/4ad3e6e9-8f5b-4209-a248-de22ef6e4652)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)