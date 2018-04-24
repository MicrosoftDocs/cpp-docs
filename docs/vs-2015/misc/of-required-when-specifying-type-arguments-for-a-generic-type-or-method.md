---
title: "&#39;Of&#39; required when specifying type arguments for a generic type or method | Microsoft Docs"
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
  - "bc32093"
  - "vbc32093"
helpviewer_keywords: 
  - "BC32093"
ms.assetid: 9a1baf12-a4a4-442d-9baa-852ad30a956b
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Of&#39; required when specifying type arguments for a generic type or method
A statement attempts to construct a type from a generic type, or call a generic method, without using an [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md) clause.  
  
 The [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] syntax for generic types calls for the type parameters and type arguments to be introduced by the `Of` keyword. In addition, the type parameter list or type argument list must be enclosed within parentheses.  
  
 **Error ID:** BC32093  
  
### To correct this error  
  
-   Include the `Of` keyword at the beginning of the type argument list, and enclose the entire list within parentheses.  
  
## See Also  
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [How to: Use a Generic Class](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)