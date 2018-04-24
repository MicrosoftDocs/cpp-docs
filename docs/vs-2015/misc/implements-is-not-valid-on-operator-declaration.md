---
title: "&#39;Implements&#39; is not valid on operator declaration | Microsoft Docs"
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
  - "vbc33004"
  - "bc33004"
helpviewer_keywords: 
  - "BC33004"
ms.assetid: 22f27f4d-4bbd-4f8f-a6e8-0fc10efb268d
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Implements&#39; is not valid on operator declaration
An [Operator Statement](../Topic/Operator%20Statement.md) specifies the [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md) keyword.  
  
 Only a `Function` or `Sub` procedure, a property, or an event can implement an interface member. For more information on implementation, see [NOT IN BUILD: Interface Implementation Examples in Visual Basic](http://msdn.microsoft.com/en-us/50bf2a30-73b6-4126-a921-075fd6eec278).  
  
 An `Operator` procedure requires both the `Public` and `Shared` keywords, and a conversion operator requires either the `Widening` or the `Narrowing` keyword. For more information, see [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md).  
  
 **Error ID:** BC33004  
  
### To correct this error  
  
-   If you intend this procedure to implement an interface member, rewrite it as a `Function` or `Sub` procedure, a property, or an event.  
  
-   If you intend this procedure to define an operator, remove the `Implements` keyword from its declaration.  
  
## See Also  
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)