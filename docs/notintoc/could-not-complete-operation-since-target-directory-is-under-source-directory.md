---
title: "Could not complete operation since target directory is under source directory"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbrIO_CyclicOperation"
ms.assetid: 850d3a24-5d51-4ac8-a912-630efcd75278
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Could not complete operation since target directory is under source directory
A cyclic operation has failed. Cyclic operations cycle and therefore cannot complete. For example, Object A may attempt to inherit from Object B, which in turn inherits from Object A.  
  
### To correct this error  
  
-   When inheriting, make sure that there are no cyclic references.  
  
## See Also  
 [Error Types](../Topic/Error%20Types%20\(Visual%20Basic\).md)   
 [Debugging Basics: Breakpoints](assetId:///752a02c2-0ac7-4c8b-aa1b-4b2b3b21152e)