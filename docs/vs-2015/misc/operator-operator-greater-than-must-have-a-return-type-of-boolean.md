---
title: "Operator &#39;&lt;operator&gt;&#39; must have a return type of Boolean | Microsoft Docs"
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
  - "vbc33023"
  - "bc33023"
helpviewer_keywords: 
  - "BC33023"
ms.assetid: 18e066f4-d71e-4e38-b0bc-8af9145f6015
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operator &#39;&lt;operator&gt;&#39; must have a return type of Boolean
A comparison or logical operator is declared with a return type other than the [Boolean Data Type](http://msdn.microsoft.com/library/4858e630-4813-4216-a55e-f4d0feb884e4).  
  
 The result of a comparison operator (`=`, `<>`, `<`, `<=`, `>`, `>=`, `Is`, `IsNot`, `IsFalse`, `IsTrue`, `Like`, `TypeOf`) can be only `True` or `False`. For more information, see [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee).  
  
 Logical operators (`And`, `AndAlso`, `Not`, `Or`, `OrElse`, `Xor`) work entirely within the domain of Boolean values. For more information, see [Logical and Bitwise Operators in Visual Basic](http://msdn.microsoft.com/library/ca474e13-567d-4b1d-a18b-301433705e57).  
  
 **Error ID:** BC33023  
  
### To correct this error  
  
-   Replace the return type of this comparison or logical operator with `Boolean`.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)