---
title: "&#39;ReDim&#39; statements can no longer be used to declare array variables | Microsoft Docs"
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
  - "bc30811"
  - "vbc30811"
helpviewer_keywords: 
  - "BC30811"
ms.assetid: 9227a06e-a997-4b16-9977-19e2bce9035b
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ReDim&#39; statements can no longer be used to declare array variables
`ReDim` can only be used to change the size of an existing array.  
  
 **Error ID:** BC30811  
  
### To correct this error  
  
-   Specify the size of arrays when they are declared; for example:  
  
    ```  
    Dim X(20) As Integer  
    ```  
  
## See Also  
 [Arrays Summary](http://msdn.microsoft.com/library/167f77d4-7cb2-4a31-9dc9-0fd0b26fda7e)   
 [ReDim Statement](http://msdn.microsoft.com/library/ad1c5e07-dcd7-4ae1-a79e-ad3f2dcc2083)   
 [ReDim Statement Changes in Visual Basic](http://msdn.microsoft.com/en-us/b4da14db-ff23-490f-b3c6-d7ae1b649532)