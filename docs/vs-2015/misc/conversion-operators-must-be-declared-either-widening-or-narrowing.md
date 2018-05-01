---
title: "Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39; | Microsoft Docs"
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
  - "vbc33017"
  - "bc33017"
helpviewer_keywords: 
  - "BC33017"
ms.assetid: 5972d955-ce1d-4348-a021-167eecb3a507
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39;
An [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5) does not specify either [Widening](http://msdn.microsoft.com/library/646ae263-94d3-40a2-b0cc-64f619292f56) or [Narrowing](http://msdn.microsoft.com/library/a207ee91-aca4-4771-b4e2-713f029bf2bb).  
  
 When you define a conversion operator, you must declare it as either `Widening` or `Narrowing`. These are mutually exclusive characteristics, so you cannot specify both.  
  
 **Error ID:** BC33017  
  
### To correct this error  
  
-   Decide whether the conversion operator is to be `Widening` or `Narrowing`, and include the appropriate keyword in the `Operator` statement. You must specify one or the other.  
  
## See Also  
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)