---
title: "&#39;GoSub&#39; statements are no longer supported"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbc30814"
  - "bc30814"
helpviewer_keywords: 
  - "BC30814"
ms.assetid: fef2d78f-39ba-4aad-93b3-c7a08df9f805
caps.latest.revision: 9
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)