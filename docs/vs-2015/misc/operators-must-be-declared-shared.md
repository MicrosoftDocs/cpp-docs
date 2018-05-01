---
title: "Operators must be declared &#39;Shared&#39; | Microsoft Docs"
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
  - "vbc33012"
  - "bc33012"
helpviewer_keywords: 
  - "BC33012"
ms.assetid: 5ad97616-4032-46cd-aaf7-517db5d1195f
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operators must be declared &#39;Shared&#39;
An [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5) does not include the [Shared](http://msdn.microsoft.com/library/2bf7cf2c-b0dd-485e-8749-b5d674dab4cd) keyword.  
  
 An `Operator` procedure requires both the [Public](http://msdn.microsoft.com/library/284c9e1b-ed23-499b-9bc9-ad87c11485a5) and `Shared` keywords, and a conversion operator also requires either the [Widening](http://msdn.microsoft.com/library/646ae263-94d3-40a2-b0cc-64f619292f56) or the [Narrowing](http://msdn.microsoft.com/library/a207ee91-aca4-4771-b4e2-713f029bf2bb) keyword.  
  
 **Error ID:** BC33012  
  
### To correct this error  
  
-   Add the `Shared` keyword to the `Operator` statement.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)