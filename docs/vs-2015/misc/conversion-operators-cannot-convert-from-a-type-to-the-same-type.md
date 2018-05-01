---
title: "Conversion operators cannot convert from a type to the same type | Microsoft Docs"
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
  - "bc33024"
  - "vbc33024"
helpviewer_keywords: 
  - "BC33024"
ms.assetid: 4b47bcb0-4f0c-4d1c-9274-cce5b8e2b370
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion operators cannot convert from a type to the same type
A conversion operator is declared with the same type for both the parameter and the return.  
  
 It is not meaningful to convert from any type to itself.  
  
 **Error ID:** BC33024  
  
### To correct this error  
  
-   Change the type of either the parameter or the return value. One of them must be of the type of the class or structure in which this operator is defined. The other must be of a different type.  
  
-   If you need to perform a transformation on the contents of the parameter, use a [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9) to define a `Function` procedure instead of an operator.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)