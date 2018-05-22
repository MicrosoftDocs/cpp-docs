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
 [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448)   
 [MustInherit](http://msdn.microsoft.com/library/b8f05185-90e3-4dd7-adc2-90d852fab5b4)   
 [NotInheritable](http://msdn.microsoft.com/library/5c4da7c9-9562-4653-a947-1972e992f9f9)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)