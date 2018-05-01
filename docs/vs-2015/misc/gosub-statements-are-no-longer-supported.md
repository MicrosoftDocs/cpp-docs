---
title: "&#39;GoSub&#39; statements are no longer supported | Microsoft Docs"
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
  - "vbc30814"
  - "bc30814"
helpviewer_keywords: 
  - "BC30814"
ms.assetid: fef2d78f-39ba-4aad-93b3-c7a08df9f805
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoSub&#39; statements are no longer supported
`GoSub` cannot be used to call a procedure.  
  
 **Error ID:** BC30814  
  
### To correct this error  
  
-   Call procedures directly without using `GoSub`; for example:  
  
    ```  
    CalculateInterest(Amount, Rate, Time)  
    ```  
  
## See Also  
 [Procedures](http://msdn.microsoft.com/library/9effbcf0-80a0-4d1a-98f4-2c6920592766)