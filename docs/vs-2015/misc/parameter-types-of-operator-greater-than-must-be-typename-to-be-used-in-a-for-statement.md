---
title: "Parameter types of &#39;&lt;operator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;For&#39; statement | Microsoft Docs"
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
  - "BC33040"
  - "vbc33040"
helpviewer_keywords: 
  - "BC33040"
ms.assetid: bffbb812-0d69-47e4-96c5-01882722ccdb
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Parameter types of &#39;&lt;operator&gt;&#39; must be &#39;&lt;typename&gt;&#39; to be used in a &#39;For&#39; statement
A `For` loop specifies a counter variable of a type that does not define the `>=` or `<=` operator with parameters of its own type.  
  
 The counter variable must be of a type that supports greater-than-or-equal (`>=`) and less-than-or-equal (`<=`) operators that compare their containing type. This means both of the operands must be of the type of the counter variable.  
  
 If you use a numeric data type for the counter variable, the `>=` and `<=` operators are supported on the containing type. If you use a user-defined class or structure, you must define both operators with operands of the type of your class or structure.  
  
 **Error ID:** BC33040  
  
### To correct this error  
  
1.  Make sure the spelling of the counter-variable data type is correct.  
  
2.  If you are using a user-defined class or structure for the counter variable, define `>=` and `<=` operators that compare that class or structure.  
  
## See Also  
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)   
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)