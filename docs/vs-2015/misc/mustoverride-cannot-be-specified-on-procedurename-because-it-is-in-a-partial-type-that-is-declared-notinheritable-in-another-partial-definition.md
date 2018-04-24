---
title: "&#39;MustOverride&#39; cannot be specified on &#39;&lt;procedurename&gt;&#39; because it is in a partial type that is declared &#39;NotInheritable&#39; in another partial definition | Microsoft Docs"
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
  - "vbc30927"
  - "BC30927"
helpviewer_keywords: 
  - "BC30927"
ms.assetid: 5798dfda-3d7b-4f30-9715-40cbf52d6dc4
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MustOverride&#39; cannot be specified on &#39;&lt;procedurename&gt;&#39; because it is in a partial type that is declared &#39;NotInheritable&#39; in another partial definition
A procedure or property is declared as `MustOverride` within a class that is defined in multiple partial declarations, but one of the partial definitions specifies `NotInheritable` for the class.  
  
 When you divide the definition of a class among several partial declarations, the compiler treats the class as the union of all its partial declarations. This applies not only to the members but also to the implementation, inheritance, and access level.  
  
 To override a procedure or property, a class must inherit it from a base class. Therefore, to specify `MustOverride` for a procedure or property in a base class, you must specify `MustInherit` for the class. Because they are mutually contradictory, you cannot specify both `MustInherit` and `NotInheritable` for the same class.  
  
 **Error ID:** BC30927  
  
### To correct this error  
  
-   If the property or procedure must be overridden, then remove the `NotInheritable` keyword from the partial declaration in which it appears.  
  
-   If the class must be `NotInheritable`, then remove the `MustOverride` keyword from the procedure or property. You cannot override it because you cannot inherit the class.  
  
## See Also  
 [Partial](http://msdn.microsoft.com/library/7adaef80-f435-46e1-970a-269fff63b448)   
 [MustOverride](http://msdn.microsoft.com/library/6e9d9ad6-bb64-433f-b32b-3ef84293bf96)   
 [MustInherit](http://msdn.microsoft.com/library/b8f05185-90e3-4dd7-adc2-90d852fab5b4)   
 [NotInheritable](http://msdn.microsoft.com/library/5c4da7c9-9562-4653-a947-1972e992f9f9)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)