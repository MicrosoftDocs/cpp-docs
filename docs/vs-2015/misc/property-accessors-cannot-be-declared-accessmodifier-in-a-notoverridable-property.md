---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;NotOverridable&#39; property | Microsoft Docs"
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
  - "vbc31106"
  - "bc31106"
helpviewer_keywords: 
  - "BC31106"
ms.assetid: 84bcb157-9c33-4e4f-89a9-c5e6cb73028b
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;NotOverridable&#39; property
A [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94) or [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd) in a `NotOverridable` property includes the `Private` keyword.  
  
 The following line of reasoning explains why `NotOverridable` and `Private` cannot be combined in a [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38):  
  
1.  A property or procedure that does not override a base class property or procedure has a default setting of [NotOverridable](http://msdn.microsoft.com/library/66ec6984-f5f5-4857-b362-6a3907aaf9e0).  
  
2.  However, a property or procedure in a derived class that overrides a base class property or procedure has a default setting of [Overridable](http://msdn.microsoft.com/library/612581e7-8a4c-4a5d-beff-3402fffa6f35). To terminate the hierarchy of overriding, you can declare it `NotOverridable`. This is the only context in which you can use `NotOverridable`. That is, you can use `NotOverridable` only in combination with [Overrides](http://msdn.microsoft.com/library/9f5e6144-ce10-465e-842b-1a8f8760af90).  
  
3.  If a base class property or procedure is declared [Private](http://msdn.microsoft.com/library/aba74a2e-5824-4613-bf63-b9ec7787f4e6), a derived class cannot override that property or procedure because it cannot access it. Because of this, you cannot use `Private` in combination with `Overridable`.  
  
4.  To override a property or procedure, the overriding property or procedure must have not only the identical signature but also the same access level. This means that an overriding property or procedure cannot specify `Private`, because an overridable property or procedure cannot specify `Private`.  
  
5.  Because you can specify `NotOverridable` only on an overriding property or procedure, you cannot combine it with `Private`.  
  
 By the same reasoning, the individual property procedures (`Get` and `Set`) of an overriding property cannot be `Private`.  
  
 **Error ID:** BC31106  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove the `Overrides` and `NotOverridable` keywords from the `Property` statement.  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [Differences Between Shadowing and Overriding](http://msdn.microsoft.com/library/2d014a0b-7630-407d-8f4e-24bd87987923)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)