---
title: "Implicit reference to object under construction is not valid when calling another constructor | Microsoft Docs"
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
  - "vbc31096"
  - "bc31096"
helpviewer_keywords: 
  - "BC31096"
ms.assetid: 558a2beb-aa5d-41a8-8655-ad3d16ac8acd
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Implicit reference to object under construction is not valid when calling another constructor
A reference was made to an object member before the objects constructor finished constructing the object.  
  
 **Error ID:** BC31096  
  
### To correct this error  
  
-   Do not use `MyBase`, `MyClass`, or `Me` when calling a constructor from another constructor.  
  
## See Also  
 [Object Lifetime: How Objects Are Created and Destroyed](http://msdn.microsoft.com/library/f1ee8458-b156-44e0-9a8a-5dd171648cd8)   
 [NOT IN BUILD: Using Constructors and Destructors](http://msdn.microsoft.com/en-us/548eebe1-86c4-4377-b2f5-447cb8be3d90)