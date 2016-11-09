---
title: "Property cannot be declared &#39;&lt;propertymodifier&gt;&#39; because it contains a &#39;Private&#39; accessor"
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
  - "vbc31108"
  - "bc31108"
helpviewer_keywords: 
  - "BC31108"
ms.assetid: 74fb36f4-54cd-4fda-bcc6-e965b5c7c37b
caps.latest.revision: 9
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
# Property cannot be declared &#39;&lt;propertymodifier&gt;&#39; because it contains a &#39;Private&#39; accessor
A property with a `Private` property procedure (`Get` or `Set`) is marked [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md).  
  
 If a base class property or procedure is declared [Private](../Topic/Private%20\(Visual%20Basic\).md), a derived class cannot override that property or procedure because it cannot access it. Because of this, you cannot use `Private` in combination with `Overridable`. This applies not only to the property itself but to the individual property procedures as well.  
  
 **Error ID:** BC31108  
  
### To correct this error  
  
-   Remove the `Overridable` keyword from the [Property Statement](../Topic/Property%20Statement.md), or remove the `Private` keyword from the [Get Statement](../Topic/Get%20Statement.md) or the [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md).  
  
## See Also  
 [Property Procedures](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)