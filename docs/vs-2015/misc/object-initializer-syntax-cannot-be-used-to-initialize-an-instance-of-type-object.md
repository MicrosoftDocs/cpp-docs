---
title: "Object initializer syntax cannot be used to initialize an instance of type &#39;Object&#39; | Microsoft Docs"
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
  - "bc30994"
  - "vbc30994"
helpviewer_keywords: 
  - "BC30994"
ms.assetid: 2ef65965-f014-4fc1-8c7d-c603f0a764df
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Object initializer syntax cannot be used to initialize an instance of type &#39;Object&#39;
You cannot initialize an instance of `Object` by using object initializer syntax. An instance of `Object` has no properties or fields to assign a value to, and object initializer syntax requires at least one such property or field.  
  
```  
' Not valid.  
' Dim obj1 = New Object With {}  
' Dim obj2 = New Object With {.ToString = <some value>}  
```  
  
 **Error ID:** BC30994  
  
### To correct this error  
  
1.  Declare instances of type `Object` without using an initializer list:  
  
    ```  
    Dim obj3 as Object  
    Dim obj4 as New Object()  
    ```  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](http://msdn.microsoft.com/library/e2df3807-a70f-49dd-ac94-f1e07f472b1b)   
 [Object Data Type](http://msdn.microsoft.com/library/61ea4a7c-3b3d-48d4-adc4-eacfa91779b2)