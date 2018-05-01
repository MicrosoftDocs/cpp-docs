---
title: "Type character cannot be used in a &#39;Sub&#39; declaration because a &#39;Sub&#39; doesn&#39;t return a value | Microsoft Docs"
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
  - "bc30303"
  - "vbc30303"
helpviewer_keywords: 
  - "BC30303"
ms.assetid: f5a744f0-d312-4fe3-90cd-3cf372a93664
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type character cannot be used in a &#39;Sub&#39; declaration because a &#39;Sub&#39; doesn&#39;t return a value
A `Sub` procedure, like a `Function` procedure, is a separate procedure that can take arguments and perform a series of statements. Unlike a `Function` procedure, a `Sub` does not return a value, and therefore cannot contain a type declaration.  
  
 **Error ID:** BC30303  
  
### To correct this error  
  
-   Change the `Sub` procedure to a `Function` procedure.  
  
## See Also  
 [Sub Procedures](http://msdn.microsoft.com/library/6a0a4958-ed0a-4d3d-8d31-0772c82bda58)   
 [Function Procedures](http://msdn.microsoft.com/library/1b9f632c-553b-4cb6-920a-ded117ead8c0)