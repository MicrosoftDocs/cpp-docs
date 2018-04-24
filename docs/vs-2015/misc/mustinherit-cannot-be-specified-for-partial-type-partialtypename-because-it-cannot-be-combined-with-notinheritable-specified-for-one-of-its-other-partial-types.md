---
title: "&#39;MustInherit&#39; cannot be specified for partial type &#39;&lt;partialtypename&gt;&#39; because it cannot be combined with &#39;NotInheritable&#39; specified for one of its other partial types | Microsoft Docs"
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
  - "vbc30926"
  - "BC30926"
helpviewer_keywords: 
  - "BC30926"
ms.assetid: 59a0b5d9-f53c-4234-88f4-dfc66342f143
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MustInherit&#39; cannot be specified for partial type &#39;&lt;partialtypename&gt;&#39; because it cannot be combined with &#39;NotInheritable&#39; specified for one of its other partial types
A class is defined in multiple partial declarations, one of which specifies `MustInherit` and another of which specifies `NotInheritable`.  
  
 When you divide the definition of a class among several partial declarations, the compiler treats the class as the union of all its partial declarations. This applies not only to the members but also to the implementation, inheritance, and access level.  
  
 A class cannot be both *abstract* and *sealed*, meaning it cannot both require and forbid inheritance. Therefore you cannot specify both `MustInherit` and `NotInheritable` for the same class.  
  
 **Error ID:** BC30926  
  
### To correct this error  
  
-   Decide whether the class should require inheritance, forbid inheritance, or neither, and remove the keywords that are inappropriate to your decision.  
  
## See Also  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NotInheritable](../Topic/NotInheritable%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)