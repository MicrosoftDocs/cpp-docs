---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;NotOverridable&#39; property | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
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
A [Get Statement](/dotnet/articles/visual-basic/language-reference/statements/get-statement) or [Set Statement](/dotnet/articles/visual-basic/language-reference/statements/set-statement) in a `NotOverridable` property includes the `Private` keyword.  
  
 The following line of reasoning explains why `NotOverridable` and `Private` cannot be combined in a [Property Statement](/dotnet/articles/visual-basic/language-reference/statements/property-statement):  
  
1.  A property or procedure that does not override a base class property or procedure has a default setting of [NotOverridable](/dotnet/articles/visual-basic/language-reference/modifiers/notoverridable).  
  
2.  However, a property or procedure in a derived class that overrides a base class property or procedure has a default setting of [Overridable](/dotnet/articles/visual-basic/language-reference/modifiers/overridable). To terminate the hierarchy of overriding, you can declare it `NotOverridable`. This is the only context in which you can use `NotOverridable`. That is, you can use `NotOverridable` only in combination with [Overrides](/dotnet/articles/visual-basic/language-reference/modifiers/overrides).  
  
3.  If a base class property or procedure is declared [Private](/dotnet/articles/visual-basic/language-reference/modifiers/private), a derived class cannot override that property or procedure because it cannot access it. Because of this, you cannot use `Private` in combination with `Overridable`.  
  
4.  To override a property or procedure, the overriding property or procedure must have not only the identical signature but also the same access level. This means that an overriding property or procedure cannot specify `Private`, because an overridable property or procedure cannot specify `Private`.  
  
5.  Because you can specify `NotOverridable` only on an overriding property or procedure, you cannot combine it with `Private`.  
  
 By the same reasoning, the individual property procedures (`Get` and `Set`) of an overriding property cannot be `Private`.  
  
 **Error ID:** BC31106  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove the `Overrides` and `NotOverridable` keywords from the `Property` statement.  
  
## See Also  
 [Property Procedures](/dotnet/articles/visual-basic/language-reference/procedures/property-procedures)   
 [Differences Between Shadowing and Overriding](/dotnet/articles/visual-basic/programming-guide/language-features/declared-elements/differences-between-shadowing-and-overriding)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)