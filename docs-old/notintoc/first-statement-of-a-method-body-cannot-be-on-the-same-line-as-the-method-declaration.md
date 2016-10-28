---
title: "First statement of a method body cannot be on the same line as the method declaration"
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
  - "vbc30040"
  - "bc30040"
helpviewer_keywords: 
  - "BC30040"
ms.assetid: 27df3488-de77-499d-b9a6-08037d540cb0
caps.latest.revision: 9
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
# First statement of a method body cannot be on the same line as the method declaration
A `Function`, `Sub`, `Get`, `Set`, or `Property` statement must be alone on a source code line.  
  
 **Error ID:** BC30040  
  
### To correct this error  
  
1.  Remove any line label preceding the procedure declaration.  
  
2.  Move any statement preceding the procedure declaration to a previous source code line.  
  
3.  Move any statement following the procedure declaration to a subsequent source code line.  
  
## See Also  
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)   
 [How to: Label Statements](../Topic/How%20to:%20Label%20Statements%20\(Visual%20Basic\).md)