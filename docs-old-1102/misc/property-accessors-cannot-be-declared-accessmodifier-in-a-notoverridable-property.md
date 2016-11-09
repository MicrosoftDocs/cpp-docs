---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;NotOverridable&#39; property"
ms.custom: ""
ms.date: "2015-07-20"
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
# Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;NotOverridable&#39; property
A [Get Statement](../Topic/Get%20Statement.md) or [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) in a `NotOverridable` property includes the `Private` keyword.  
  
 The following line of reasoning explains why `NotOverridable` and `Private` cannot be combined in a [Property Statement](../Topic/Property%20Statement.md):  
  
1.  A property or procedure that does not override a base class property or procedure has a default setting of [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md).  
  
2.  However, a property or procedure in a derived class that overrides a base class property or procedure has a default setting of [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md). To terminate the hierarchy of overriding, you can declare it `NotOverridable`. This is the only context in which you can use `NotOverridable`. That is, you can use `NotOverridable` only in combination with [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md).  
  
3.  If a base class property or procedure is declared [Private](../Topic/Private%20\(Visual%20Basic\).md), a derived class cannot override that property or procedure because it cannot access it. Because of this, you cannot use `Private` in combination with `Overridable`.  
  
4.  To override a property or procedure, the overriding property or procedure must have not only the identical signature but also the same access level. This means that an overriding property or procedure cannot specify `Private`, because an overridable property or procedure cannot specify `Private`.  
  
5.  Because you can specify `NotOverridable` only on an overriding property or procedure, you cannot combine it with `Private`.  
  
 By the same reasoning, the individual property procedures (`Get` and `Set`) of an overriding property cannot be `Private`.  
  
 **Error ID:** BC31106  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove the `Overrides` and `NotOverridable` keywords from the `Property` statement.  
  
## See Also  
 [Property Procedures](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Differences Between Shadowing and Overriding](../Topic/Differences%20Between%20Shadowing%20and%20Overriding%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)