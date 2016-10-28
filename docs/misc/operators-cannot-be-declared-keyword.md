---
title: "Operators cannot be declared &#39;&lt;keyword&gt;&#39;"
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
  - "vbc33013"
  - "bc33013"
helpviewer_keywords: 
  - "BC33013"
ms.assetid: bfd805f4-e30e-4553-9cb7-2690595f0480
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
# Operators cannot be declared &#39;&lt;keyword&gt;&#39;
An operator is declared with a keyword that is not valid for operator definitions.  
  
 Every operator must be declared as both [Public](../Topic/Public%20\(Visual%20Basic\).md) and [Shared](../Topic/Shared%20\(Visual%20Basic\).md). In addition, a conversion operator must be declared with either [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md), but not both. An operator definition can optionally include the [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) or [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) keywords. No other keywords are permitted in an [Operator Statement](../Topic/Operator%20Statement.md).  
  
 **Error ID:** BC33013  
  
### To correct this error  
  
-   Remove the invalid keyword from the operator definition.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)