---
title: "Explicit initialization is not permitted with multiple variables declared with a single type specifier | Microsoft Docs"
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
  - "bc30671"
  - "vbc30671"
helpviewer_keywords: 
  - "BC30671"
ms.assetid: 57bbdd58-b58d-4144-8fa6-366a7167df27
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Explicit initialization is not permitted with multiple variables declared with a single type specifier
Initialization is not allowed when multiple variables are declared on the same line.  
  
 **Error ID:** BC30671  
  
### To correct this error  
  
1.  Declare and initialize each item separately.  
  
2.  Declare multiple items together and then initialize each item; for example:  
  
    ```  
    Dim x, b, i As Integer  
    x = 9 : b = 9 : i = 9   
    ' ":" is the same as a new line.  
    ```  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [Variable Declaration](http://msdn.microsoft.com/library/d8f10226-92b1-480f-9f53-df377b2d7e15)