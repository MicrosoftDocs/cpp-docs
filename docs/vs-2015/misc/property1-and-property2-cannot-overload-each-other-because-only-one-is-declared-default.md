---
title: "&#39;&lt;property1&gt;&#39; and &#39;&lt;property2&gt;&#39; cannot overload each other because only one is declared &#39;Default&#39; | Microsoft Docs"
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
  - "bc30361"
  - "vbc30361"
helpviewer_keywords: 
  - "BC30361"
ms.assetid: bac85b32-1a1f-4c43-817c-76e209cfeb8c
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;property1&gt;&#39; and &#39;&lt;property2&gt;&#39; cannot overload each other because only one is declared &#39;Default&#39;
If a property specifies `Default`, all properties overloaded on that name must also specify `Default`.  
  
 **Error ID:** BC30361  
  
### To correct this error  
  
-   Make sure all of the overloaded properties are declared `Default`.  
  
## See Also  
 [Considerations in Overloading Procedures](http://msdn.microsoft.com/library/a2001248-10d0-42c5-b0ce-eeedc987319f)   
 [Default](http://msdn.microsoft.com/library/45fce9b9-d212-4b2d-ab86-6e359b8b57af)