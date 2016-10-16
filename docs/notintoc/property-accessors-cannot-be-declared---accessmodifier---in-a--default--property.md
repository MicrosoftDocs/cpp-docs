---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property"
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
  - "bc31107"
  - "vbc31107"
helpviewer_keywords: 
  - "BC31107"
ms.assetid: 25657b33-df85-4535-8043-69795c987175
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
# Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property
A [Get Statement](../Topic/Get%20Statement.md) or [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) in a default property includes the `Private` keyword.  
  
 A default property cannot be `Private`, and neither can its individual property procedures (`Get` or `Set`).  
  
 **Error ID:** BC31107  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove `Default` from the [Property Statement](../Topic/Property%20Statement.md).  
  
## See Also  
 [Property Procedures](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)   
 [How to: Declare and Call a Default Property in Visual Basic](../Topic/How%20to:%20Declare%20and%20Call%20a%20Default%20Property%20in%20Visual%20Basic.md)