---
title: "At least one parameter type of this binary operator must be the containing type &#39;&lt;typename&gt;&#39; | Microsoft Docs"
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
  - "bc33021"
  - "vbc33021"
helpviewer_keywords: 
  - "BC33021"
ms.assetid: 934d4d2e-d368-46d7-819e-5571cdc0ce4f
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# At least one parameter type of this binary operator must be the containing type &#39;&lt;typename&gt;&#39;
A definition of a binary operator specifies both parameters with types other than that of the class or structure in which the operator is defined.  
  
 When you define an operator in a class or structure, at least one of the parameters must be of the type of that class or structure.  
  
 **Error ID:** BC33021  
  
### To correct this error  
  
-   Change the type of one or both of the parameters to the type of the class or structure in which the operator is defined.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)