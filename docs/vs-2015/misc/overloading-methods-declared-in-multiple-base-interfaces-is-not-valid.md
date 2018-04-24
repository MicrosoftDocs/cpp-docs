---
title: "Overloading methods declared in multiple base interfaces is not valid | Microsoft Docs"
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
  - "bc31410"
  - "vbc31410"
helpviewer_keywords: 
  - "BC31410"
ms.assetid: 7d1831c2-837c-4b02-8492-d0fc038fe184
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Overloading methods declared in multiple base interfaces is not valid
Multiple inherited interfaces implicitly overload the same method.  
  
 **Error ID:** BC31410  
  
### To correct this error  
  
-   Use the `Shadows` modifier instead of the `Overloads` modifier.  
  
## See Also  
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)