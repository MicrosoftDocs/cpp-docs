---
title: "Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39; | Microsoft Docs"
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
  - "vbc33017"
  - "bc33017"
helpviewer_keywords: 
  - "BC33017"
ms.assetid: 5972d955-ce1d-4348-a021-167eecb3a507
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39;
An [Operator Statement](../Topic/Operator%20Statement.md) does not specify either [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md).  
  
 When you define a conversion operator, you must declare it as either `Widening` or `Narrowing`. These are mutually exclusive characteristics, so you cannot specify both.  
  
 **Error ID:** BC33017  
  
### To correct this error  
  
-   Decide whether the conversion operator is to be `Widening` or `Narrowing`, and include the appropriate keyword in the `Operator` statement. You must specify one or the other.  
  
## See Also  
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)