---
title: "Anonymous type must contain at least one member | Microsoft Docs"
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
  - "bc36574"
  - "vbc36574"
helpviewer_keywords: 
  - "BC36574"
ms.assetid: fdc8dd47-ea38-49e8-8dd5-676f726cd101
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Anonymous type must contain at least one member
The initializer list in an anonymous type declaration cannot be empty.  
  
```  
' Not valid.  
' Dim anonInstance = New With {}  
```  
  
 **Error ID:** BC36574  
  
### To correct this error  
  
-   Declare a member within the braces, as shown in the following code.  
  
    ```  
    Dim anonInstance = New With {.MemberName = "value"}  
    ```  
  
## See Also  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)