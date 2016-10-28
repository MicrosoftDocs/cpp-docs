---
title: "Only conversion operators can be declared &#39;&lt;keyword&gt;&#39;"
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
  - "bc33019"
  - "vbc33019"
helpviewer_keywords: 
  - "BC33019"
ms.assetid: 946266fe-a909-41b1-aad4-f85dc8050b88
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
# Only conversion operators can be declared &#39;&lt;keyword&gt;&#39;
An [Operator Statement](../Topic/Operator%20Statement.md) specifies [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md) when the operator is not a conversion operator.  
  
 Every operator must be declared as both [Public](../Topic/Public%20\(Visual%20Basic\).md) and [Shared](../Topic/Shared%20\(Visual%20Basic\).md). However, only a conversion operator can be declared with [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md), but not both.  
  
 An operator definition can optionally include the [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) and [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) keywords. No other keywords are permitted in an [Operator Statement](../Topic/Operator%20Statement.md).  
  
 **Error ID:** BC33019  
  
### To correct this error  
  
1.  Remove the `Widening` or `Narrowing` keyword from the operator definition. These do not apply, because no type conversion is taking place.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)