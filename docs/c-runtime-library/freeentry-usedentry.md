---
title: "_FREEENTRY, _USEDENTRY | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-standard-libraries"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "USEDENTRY"
  - "_USEDENTRY"
  - "_FREEENTRY"
  - "FREEENTRY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_USEDENTRY constant"
  - "_FREEENTRY constant"
  - "FREEENTRY constant"
  - "USEDENTRY constant"
ms.assetid: 26f658e6-6846-4a4e-9984-262cfe392770
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# _FREEENTRY, _USEDENTRY
## Syntax  
  
```  
#include <malloc.h>  
```  
  
## Remarks  
 These constants represent values assigned by the `_heapwalk` routines to the **_useflag** element of the **_HEAPINFO** structure. They indicate the status of the heap entry.  
  
## See Also  
 [_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [Global Constants](../c-runtime-library/global-constants.md)