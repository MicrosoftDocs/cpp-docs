---
title: "&#39;ReadOnly&#39; variable cannot be the target of an assignment | Microsoft Docs"
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
  - "vbc30064"
  - "bc30064"
helpviewer_keywords: 
  - "BC30064"
ms.assetid: 17e0751d-4c22-40b2-bb07-cb5c845dbc30
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ReadOnly&#39; variable cannot be the target of an assignment
A `ReadOnly` property has been found in a context that assigns a value to it. Only writable variables, properties, and array elements can have values assigned to them during execution.  
  
 **Error ID:** BC30064  
  
### To correct this error  
  
-   Remove the `ReadOnly` keyword from the `Dim` statement declaring the variable, or remove the statement that assigns it a value.  
  
## See Also  
 [ReadOnly](http://msdn.microsoft.com/library/e868185d-6142-4359-a2fd-a7965cadfce8)   
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)