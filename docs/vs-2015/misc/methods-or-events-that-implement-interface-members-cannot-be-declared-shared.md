---
title: "Methods or events that implement interface members cannot be declared &#39;Shared&#39; | Microsoft Docs"
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
  - "bc30505"
  - "vbc30505"
helpviewer_keywords: 
  - "BC30505"
ms.assetid: a24937c5-aeac-47de-a08b-d8696dd8221a
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Methods or events that implement interface members cannot be declared &#39;Shared&#39;
You have attempted to declare as `Shared` a method or event that implements an interface member. Methods and events being implemented in a class cannot be designated `Shared` or `Private`, except in a non-inheritable class.  
  
 **Error ID:** BC30505  
  
### To correct this error  
  
-   Remove the `Shared` keyword.  
  
## See Also  
 [Shared](http://msdn.microsoft.com/library/2bf7cf2c-b0dd-485e-8749-b5d674dab4cd)