---
title: "Operator &#39;&lt;operator&gt;&#39; must have two parameters | Microsoft Docs"
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
  - "bc33015"
  - "vbc33015"
helpviewer_keywords: 
  - "BC33015"
ms.assetid: 506ea996-8abe-4dbe-aff4-d3910bf4399e
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operator &#39;&lt;operator&gt;&#39; must have two parameters
A binary operator is defined with fewer than two or more than two parameters.  
  
 A binary operator must have exactly two parameters.  
  
 **Error ID:** BC33015  
  
### To correct this error  
  
-   Adjust the definition to specify exactly two parameters.  
  
-   If you need only one parameter, you must define a unary operator.  
  
-   If you need no parameters or more than two, you must use the [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9) to define a `Function` procedure instead of an operator.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)