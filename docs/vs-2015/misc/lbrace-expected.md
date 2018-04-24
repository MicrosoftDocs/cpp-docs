---
title: "&#39;{&#39; expected | Microsoft Docs"
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
  - "vbc30987"
  - "bc30987"
helpviewer_keywords: 
  - "BC30987"
ms.assetid: 3d1552b6-338a-47cf-84d5-77b59209e0d3
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;{&#39; expected
To declare an instance of a named or anonymous type by using an object initializer, you must enclose the list of fields or properties and their initial values in braces ({ and }).  
  
```  
Dim client As New Customer() With {.Name = "Microsoft", .City = "Seattle"}  
Dim emp = New Employee() With {.Name = "Rob Young", .ID = 55555}  
Dim anon = New With {.ID = 123456}  
```  
  
 **Error ID:** BC30987  
  
### To correct this error  
  
-   Include an initialization list after `With`, enclosed in braces.  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](http://msdn.microsoft.com/library/e2df3807-a70f-49dd-ac94-f1e07f472b1b)   
 [NOT IN BUILD: Property Procedures vs. Fields](http://msdn.microsoft.com/en-us/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)   
 [Anonymous Types](http://msdn.microsoft.com/library/7b87532c-4b3e-4398-8503-6ea9d67574a4)