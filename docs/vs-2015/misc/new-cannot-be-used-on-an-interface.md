---
title: "&#39;New&#39; cannot be used on an interface | Microsoft Docs"
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
  - "vbc30375"
  - "bc30375"
helpviewer_keywords: 
  - "BC30375"
ms.assetid: c1e06108-1b52-4cbe-8cae-e816a0dbac0b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;New&#39; cannot be used on an interface
A [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448) uses a [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0) clause when declaring a variable to be of an interface type.  
  
 Although an interface is a reference type, you cannot create an instance of it. You can use `New` only to create an instance of a class or a structure.  
  
 **Error ID:** BC30375  
  
### To correct this error  
  
1.  If the variable is to be of an interface type, remove the `New` keyword.  
  
2.  If the variable is to refer to an instance, declare it to be of a class or structure type. Retain the `New` keyword to create an instance.  
  
## See Also  
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)   
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)