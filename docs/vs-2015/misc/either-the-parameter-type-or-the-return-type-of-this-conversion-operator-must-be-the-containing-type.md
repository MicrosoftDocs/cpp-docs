---
title: "Either the parameter type or the return type of this conversion operator must be the containing type | Microsoft Docs"
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
  - "vbc33022"
  - "bc33022"
helpviewer_keywords: 
  - "BC33022"
ms.assetid: 55baff11-eb35-4c81-bc04-5006524ab450
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Either the parameter type or the return type of this conversion operator must be the containing type
A definition of a conversion operator specifies both the parameter and the return type with types other than that of the class or structure in which the operator is defined.  
  
 When you define a conversion operator in a class or structure, it must convert to or from the type of that class or structure.  
  
 **Error ID:** BC33022  
  
### To correct this error  
  
-   Change the parameter type or the return type to the type of the class or structure in which the operator is defined.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)