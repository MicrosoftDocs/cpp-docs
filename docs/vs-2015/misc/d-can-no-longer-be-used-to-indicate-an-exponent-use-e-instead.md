---
title: "&#39;D&#39; can no longer be used to indicate an exponent, use &#39;E&#39; instead | Microsoft Docs"
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
  - "vbc30827"
  - "bc30827"
helpviewer_keywords: 
  - "BC30827"
ms.assetid: 577f8c0b-9e8a-433f-b504-9ddaa936c250
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;D&#39; can no longer be used to indicate an exponent, use &#39;E&#39; instead
The 'D' character cannot be used to indicate exponentiation.  
  
 **Error ID:** BC30827  
  
### To correct this error  
  
-   Use the `^` operator or `E+` characters to indicate an exponent is present. For example:  
  
    ```  
    Const Mole = 6.02E+23 ' Same as 6.02D23  
    Const Mole2 = 6.02 * 10 ^ 23 ' Same as 6.02D23  
    ```  
  
## See Also  
 [^ Operator](http://msdn.microsoft.com/library/d89a1ca8-83da-4784-a87b-a9d7dceb3f62)   
 [Numeric Data Types](http://msdn.microsoft.com/library/a27bd4d0-7e14-43eb-9cc4-b42eaab323c9)