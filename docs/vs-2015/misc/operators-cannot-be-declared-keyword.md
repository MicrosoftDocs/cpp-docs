---
title: "Operators cannot be declared &#39;&lt;keyword&gt;&#39; | Microsoft Docs"
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
  - "vbc33013"
  - "bc33013"
helpviewer_keywords: 
  - "BC33013"
ms.assetid: bfd805f4-e30e-4553-9cb7-2690595f0480
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operators cannot be declared &#39;&lt;keyword&gt;&#39;
An operator is declared with a keyword that is not valid for operator definitions.  
  
 Every operator must be declared as both [Public](http://msdn.microsoft.com/library/284c9e1b-ed23-499b-9bc9-ad87c11485a5) and [Shared](http://msdn.microsoft.com/library/2bf7cf2c-b0dd-485e-8749-b5d674dab4cd). In addition, a conversion operator must be declared with either [Widening](http://msdn.microsoft.com/library/646ae263-94d3-40a2-b0cc-64f619292f56) or [Narrowing](http://msdn.microsoft.com/library/a207ee91-aca4-4771-b4e2-713f029bf2bb), but not both. An operator definition can optionally include the [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) or [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) keywords. No other keywords are permitted in an [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5).  
  
 **Error ID:** BC33013  
  
### To correct this error  
  
-   Remove the invalid keyword from the operator definition.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)