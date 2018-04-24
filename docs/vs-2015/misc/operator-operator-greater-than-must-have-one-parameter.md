---
title: "Operator &#39;&lt;operator&gt;&#39; must have one parameter | Microsoft Docs"
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
  - "bc33014"
  - "vbc33014"
helpviewer_keywords: 
  - "BC33014"
ms.assetid: 512a5724-a6c5-4437-a608-7d6b10e68d49
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operator &#39;&lt;operator&gt;&#39; must have one parameter
A unary operator is defined with no parameters or with more than one parameter.  
  
 A unary operator must have exactly one parameter.  
  
 **Error ID:** BC33014  
  
### To correct this error  
  
-   Adjust the definition to specify exactly one parameter.  
  
-   If you need two parameters, you must define a binary operator.  
  
-   If you need no parameters or more than two, you must use the [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9) to define a `Function` procedure instead of an operator.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)