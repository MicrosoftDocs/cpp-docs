---
title: "Only conversion operators can be declared &#39;&lt;keyword&gt;&#39; | Microsoft Docs"
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
  - "bc33019"
  - "vbc33019"
helpviewer_keywords: 
  - "BC33019"
ms.assetid: 946266fe-a909-41b1-aad4-f85dc8050b88
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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