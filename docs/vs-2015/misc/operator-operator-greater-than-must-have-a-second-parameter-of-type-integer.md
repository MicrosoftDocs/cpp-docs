---
title: "Operator &#39;&lt;operator&gt;&#39; must have a second parameter of type &#39;Integer&#39; | Microsoft Docs"
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
  - "BC33041"
  - "vbc33041"
helpviewer_keywords: 
  - "BC33041"
ms.assetid: 5cd56f6d-2f0f-49de-a8e6-59bdb57bdb1d
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operator &#39;&lt;operator&gt;&#39; must have a second parameter of type &#39;Integer&#39;
A bit-shift operator is declared with the second parameter of a type other than `Integer`.  
  
 When you use the right shift (`>>`) or left shift (`<<`) operator in an expression, you specify the shift amount in the second operand. For this operand, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] allows you to supply any data type that widens to `Integer`. However, the definition of the second operand is strictly `Integer`. If you define a class or structure with a bit-shift operator on that class or structure, your definition must specify `Integer` for the second operand.  
  
 **Error ID:** BC33041  
  
### To correct this error  
  
-   Change the definition of the bit-shift operator to return an `Integer` value.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Bit Shift Operators](../Topic/Bit%20Shift%20Operators%20\(Visual%20Basic\).md)