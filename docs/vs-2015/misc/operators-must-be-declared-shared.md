---
title: "Operators must be declared &#39;Shared&#39; | Microsoft Docs"
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
  - "vbc33012"
  - "bc33012"
helpviewer_keywords: 
  - "BC33012"
ms.assetid: 5ad97616-4032-46cd-aaf7-517db5d1195f
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operators must be declared &#39;Shared&#39;
An [Operator Statement](../Topic/Operator%20Statement.md) does not include the [Shared](../Topic/Shared%20\(Visual%20Basic\).md) keyword.  
  
 An `Operator` procedure requires both the [Public](../Topic/Public%20\(Visual%20Basic\).md) and `Shared` keywords, and a conversion operator also requires either the [Widening](../Topic/Widening%20\(Visual%20Basic\).md) or the [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md) keyword.  
  
 **Error ID:** BC33012  
  
### To correct this error  
  
-   Add the `Shared` keyword to the `Operator` statement.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)