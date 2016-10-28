---
title: "&#39;Widening&#39; and &#39;Narrowing&#39; cannot be combined"
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
  - "bc33001"
  - "vbc33001"
helpviewer_keywords: 
  - "BC33001"
ms.assetid: 1c576344-083c-45ad-bc71-0489bd3976be
caps.latest.revision: 10
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
# &#39;Widening&#39; and &#39;Narrowing&#39; cannot be combined
An [Operator Statement](../Topic/Operator%20Statement.md) specifies both [Widening](../Topic/Widening%20\(Visual%20Basic\).md) and [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md).  
  
 When you define a conversion operator, you must declare it as either `Widening` or `Narrowing`. These are mutually exclusive characteristics, so you cannot specify both.  
  
 **Error ID:** BC33001  
  
### To correct this error  
  
-   Remove either the `Widening` or the `Narrowing` keyword from the `Operator` statement. You must specify one or the other.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)