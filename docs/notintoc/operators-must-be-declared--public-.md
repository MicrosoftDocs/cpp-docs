---
title: "Operators must be declared &#39;Public&#39;"
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
  - "vbc33011"
  - "bc33011"
helpviewer_keywords: 
  - "BC33011"
ms.assetid: 67fc0dee-4ef5-4afc-a63a-f7d20bce7954
caps.latest.revision: 8
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
# Operators must be declared &#39;Public&#39;
An [Operator Statement](../Topic/Operator%20Statement.md) does not include the [Public](../Topic/Public%20\(Visual%20Basic\).md) keyword.  
  
 An `Operator` procedure requires both the `Public` and [Shared](../Topic/Shared%20\(Visual%20Basic\).md) keywords, and a conversion operator also requires either the [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or the [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md) keyword.  
  
 **Error ID:** BC33011  
  
### To correct this error  
  
-   Add the `Public` keyword to the `Operator` statement.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)