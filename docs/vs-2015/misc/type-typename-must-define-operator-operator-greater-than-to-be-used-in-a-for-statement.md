---
title: "Type &#39;&lt;typename&gt;&#39; must define operator &#39;&lt;operator&gt;&#39; to be used in a &#39;For&#39; statement | Microsoft Docs"
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
  - "vbc33038"
  - "BC33038"
helpviewer_keywords: 
  - "BC33038"
ms.assetid: b1c9d87f-80f9-4c8c-8908-f8400b9fe4c5
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type &#39;&lt;typename&gt;&#39; must define operator &#39;&lt;operator&gt;&#39; to be used in a &#39;For&#39; statement
A `For` loop specifies a counter variable of a type that does not support a required operator.  
  
 The counter variable in a `For` loop can be of any data type that supports all of the following operators:  
  
-   Greater than or equal (`>=`)  
  
-   Less than or equal (`<=`)  
  
-   Addition (`+`)  
  
-   Subtraction (`-`)  
  
 If you use a numeric data type for the counter variable, all the preceding operators are supported. If you use a user-defined class or structure, you must define all the preceding operators on that class or structure.  
  
 Note also that the data types of the `start`, `end`, and `step` expressions in the `For` statement must widen to the data type of the counter variable. If the counter variable is a user-defined class or structure and the `start`, `end`, or `step` expression is of a different type, you must define the `CType` conversion operator to accomplish the necessary conversion.  
  
 **Error ID:** BC33038  
  
### To correct this error  
  
1.  Make sure the spelling of the counter-variable data type is correct.  
  
2.  If you are using a user-defined class or structure for the counter variable, define all the required operators on that class or structure.  
  
3.  Depending on the data types of the `start`, `end`, and `step` expressions, you might have to define one or more `CType` conversion operators to convert them to the counter variable data type.  
  
## See Also  
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)   
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)   
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)