---
title: "Return and parameter types of &#39;&lt;logicaloperator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
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
# Return and parameter types of &#39;&lt;logicaloperator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;&lt;shortcircuitoperator&gt;&#39; expression
An `And` operator or an `Or` operator is declared with unsuitable parameters or return type for use in an [AndAlso Operator](/dotnet/articles/visual-basic/language-reference/operators/andalso-operator) or an [OrElse Operator](/dotnet/articles/visual-basic/language-reference/operators/orelse-operator).  
  
 Because you do not define a short-circuiting operator (`AndAlso` or `OrElse`) directly, you must define the corresponding logical and determinant operators. The following table shows the required operators.  
  
|Short-circuiting operator|Logical operator|Determinant operator|  
|--------------------------------|----------------------|--------------------------|  
|`AndAlso`|[And Operator](/dotnet/articles/visual-basic/language-reference/operators/and-operator)|[IsFalse Operator](/dotnet/articles/visual-basic/language-reference/operators/isfalse-operator)|  
|`OrElse`|[Or Operator](/dotnet/articles/visual-basic/language-reference/operators/or-operator)|[IsTrue Operator](/dotnet/articles/visual-basic/language-reference/operators/istrue-operator)|  
  
 [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] uses these logical and determinant operators to construct the short-circuiting logic for `AndAlso` or `OrElse`. For this to work properly, both operands and the return value of your `And` or `Or` definition must be of the containing type, that is, the type of the class or structure in which you are defining `And` or `Or`.  
  
 **Error ID:** BC33034  
  
### To correct this error  
  
-   Change the type of both operands and the return value to the type of the class or structure in which you are defining this operator.  
  
     -or-  
  
-   Do not use the corresponding short-circuiting operator (`AndAlso` or `OrElse`) with operands of the type of the class or structure in which you are defining this `And` or `Or` operator.  
  
## See Also  
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](http://msdn.microsoft.com/Library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/Library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [Logical and Bitwise Operators in Visual Basic](/dotnet/articles/visual-basic/programming-guide/language-features/operators-and-expressions/logical-and-bitwise-operators)