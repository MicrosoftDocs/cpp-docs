---
title: "Syntax error in cast operator; two arguments separated by comma are required | Microsoft Docs"
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
  - "vbc30944"
  - "bc30944"
helpviewer_keywords: 
  - "BC30944"
ms.assetid: 1f7ed4a1-6ff5-4836-8424-21618c68ff45
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Syntax error in cast operator; two arguments separated by comma are required
An expression uses the `CType` conversion function or the `DirectCast` or `TryCast` conversion keyword but supplies only one argument.  
  
 `CType`, `DirectCast`, and `TryCast` all require two arguments. The first is an expression to be converted and the second is the data type or class type to which to convert it.  
  
 **Error ID:** BC30944  
  
### To correct this error  
  
-   Supply both arguments as required for the conversion.  
  
-   If you intend to use one of the specific [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md) such as `CString`, you must use that function name instead of `CType`. Then only one argument is required.  
  
## See Also  
 [CType Function](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md)   
 [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)