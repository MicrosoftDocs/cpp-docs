---
title: "Inheriting from &#39;System.&lt;classname&gt;&#39; is not valid | Microsoft Docs"
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
  - "vbc30015"
  - "bc30015"
helpviewer_keywords: 
  - "BC30015"
ms.assetid: b4c005df-a510-47c7-b5cc-27f4514d32b6
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inheriting from &#39;System.&lt;classname&gt;&#39; is not valid
A class cannot inherit from `System.Array`, `System.Delegate`, `System.Enum`, or `System.ValueType`.  
  
 **Error ID:** BC30015  
  
### To correct this error  
  
-   Remove the `Inherits` statement or change it to inherit from a valid base class.  
  
## See Also  
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)   
 [Object Variable Declaration](http://msdn.microsoft.com/library/2a5a41a3-1aa8-4236-b1f0-2382af7bf715)