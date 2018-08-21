---
title: "Character Comparison | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["comparing characters", "MBCS [C++], character comparison", "characters [C++], comparing"]
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Character Comparison
Use the following tips:  
  
-   Comparing a known lead byte with an ASCII character works correctly:  
  
    ```  
    if( *sz1 == 'A' )  
    ```  
  
-   Comparing two unknown characters requires the use of one of the macros defined in Mbstring.h:  
  
    ```  
    if( !_mbccmp( sz1, sz2) )  
    ```  
  
     This ensures that both bytes of a double-byte character are compared for equality.  
  
## See Also  
 [MBCS Programming Tips](../text/mbcs-programming-tips.md)   
 [Buffer Overflow](../text/buffer-overflow.md)