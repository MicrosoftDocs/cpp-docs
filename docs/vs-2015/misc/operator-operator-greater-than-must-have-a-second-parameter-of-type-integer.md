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
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [Bit Shift Operators](http://msdn.microsoft.com/library/64889319-a057-471b-85d8-69fcd4af6230)