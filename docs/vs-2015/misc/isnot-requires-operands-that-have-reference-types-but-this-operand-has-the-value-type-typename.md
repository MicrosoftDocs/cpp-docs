---
title: "&#39;IsNot&#39; requires operands that have reference types, but this operand has the value type &#39;&lt;typename&gt;&#39;. | Microsoft Docs"
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
  - "bc31419"
  - "vbc31419"
helpviewer_keywords: 
  - "BC31419"
ms.assetid: c44d2936-8c07-443a-b320-ac2bfbc1e9ec
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;IsNot&#39; requires operands that have reference types, but this operand has the value type &#39;&lt;typename&gt;&#39;.
An expression uses the [IsNot Operator](../Topic/IsNot%20Operator%20\(Visual%20Basic\).md) with at least one value type operand.  
  
 The `IsNot` operator determines whether two object references refer to different objects. It compares the pointer values of reference types and is meaningless with value types.  
  
 **Error ID:** BC31419  
  
### To correct this error  
  
-   If you intend to compare the values of two value types, use the `=` or `<>` comparison operator.  
  
-   If you intend to compare the pointers of two reference types, be sure you are using object references for both operands. You can use reference variables or elements, such as the [Me](http://msdn.microsoft.com/en-us/a65973c7-cf06-4547-9b25-9fba885525c2) keyword, that behave like reference variables.  
  
## See Also  
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [How to: Test Whether Two Objects Are the Same](../Topic/How%20to:%20Test%20Whether%20Two%20Objects%20Are%20the%20Same%20\(Visual%20Basic\).md)