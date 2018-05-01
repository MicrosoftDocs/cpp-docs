---
title: "Type &#39;&lt;typename&gt;&#39; must define operator &#39;&lt;determinantoperator&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression | Microsoft Docs"
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
  - "bc33035"
  - "vbc33035"
helpviewer_keywords: 
  - "BC33035"
ms.assetid: 50a0a39f-63cd-4100-aea9-91b5b6ab5bbf
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type &#39;&lt;typename&gt;&#39; must define operator &#39;&lt;determinantoperator&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression
An [AndAlso Operator](http://msdn.microsoft.com/library/bbc15191-b374-495b-9b8f-7b8c2f4388eb) or an [OrElse Operator](http://msdn.microsoft.com/library/253803d8-05b0-47d7-b213-abd222847779) uses operands of a class or structure type, when that class or structure does not define a required operator.  
  
 Because you do not define a short-circuiting operator (`AndAlso` or `OrElse`) directly, you must define the corresponding logical and determinant operators. The following table shows the required operators.  
  
|Short-circuiting operator|Logical operator|Determinant operator|  
|--------------------------------|----------------------|--------------------------|  
|`AndAlso`|[And Operator](http://msdn.microsoft.com/library/2ea711f3-439a-4c7c-9e3a-1ffe3b0d6046)|[IsFalse Operator](http://msdn.microsoft.com/library/37fc9dbf-e5cc-4570-b93f-7213447974df)|  
|`OrElse`|[Or Operator](http://msdn.microsoft.com/library/41ed6905-bf3d-468a-9e3b-03c10d461891)|[IsTrue Operator](http://msdn.microsoft.com/library/b6cec0f2-61b1-4331-a7f0-4d07ee3179d6)|  
  
 [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] uses these logical and determinant operators to construct the short-circuiting logic for `AndAlso` or `OrElse`. For this to work properly, both operands and the return value of your `And` or `Or` definition must be of the containing type, that is, the type of the class or structure in which you are defining `And` or `Or`.  
  
 **Error ID:** BC33035  
  
### To correct this error  
  
-   Define the `And` and `IsFalse` operators, or the `Or` and `IsTrue` operators, in the class or structure used for the operand type of the `AndAlso` or `OrElse` operator. Be sure the operands for `And` or `Or` are of the type of the class or structure in which you define it.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [Logical and Bitwise Operators in Visual Basic](http://msdn.microsoft.com/library/ca474e13-567d-4b1d-a18b-301433705e57)