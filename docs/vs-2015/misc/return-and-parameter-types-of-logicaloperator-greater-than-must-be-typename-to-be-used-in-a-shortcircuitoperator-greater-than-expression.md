---
title: "Return and parameter types of &#39;&lt;logicaloperator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression | Microsoft Docs"
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
  - "vbc33034"
  - "bc33034"
helpviewer_keywords: 
  - "BC33034"
ms.assetid: 94cd52dc-5d48-4673-b0b8-38a1954483c6
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Return and parameter types of &#39;&lt;logicaloperator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression
An `And` operator or an `Or` operator is declared with unsuitable parameters or return type for use in an [AndAlso Operator](../Topic/AndAlso%20Operator%20\(Visual%20Basic\).md) or an [OrElse Operator](../Topic/OrElse%20Operator%20\(Visual%20Basic\).md).  
  
 Because you do not define a short-circuiting operator (`AndAlso` or `OrElse`) directly, you must define the corresponding logical and determinant operators. The following table shows the required operators.  
  
|Short-circuiting operator|Logical operator|Determinant operator|  
|--------------------------------|----------------------|--------------------------|  
|`AndAlso`|[And Operator](../Topic/And%20Operator%20\(Visual%20Basic\).md)|[IsFalse Operator](../Topic/IsFalse%20Operator%20\(Visual%20Basic\).md)|  
|`OrElse`|[Or Operator](../Topic/Or%20Operator%20\(Visual%20Basic\).md)|[IsTrue Operator](../Topic/IsTrue%20Operator%20\(Visual%20Basic\).md)|  
  
 [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] uses these logical and determinant operators to construct the short-circuiting logic for `AndAlso` or `OrElse`. For this to work properly, both operands and the return value of your `And` or `Or` definition must be of the containing type, that is, the type of the class or structure in which you are defining `And` or `Or`.  
  
 **Error ID:** BC33034  
  
### To correct this error  
  
-   Change the type of both operands and the return value to the type of the class or structure in which you are defining this operator.  
  
     -or-  
  
-   Do not use the corresponding short-circuiting operator (`AndAlso` or `OrElse`) with operands of the type of the class or structure in which you are defining this `And` or `Or` operator.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Logical and Bitwise Operators in Visual Basic](../Topic/Logical%20and%20Bitwise%20Operators%20in%20Visual%20Basic.md)