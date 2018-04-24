---
title: "FILETIME Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FILETIME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FILETIME structure"
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FILETIME Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [FILETIME Structure](https://docs.microsoft.com/cpp/mfc/reference/filetime-structure).  
  
  
The `FILETIME` structure is a 64-bit value representing the number of 100-nanosecond intervals since January 1, 1601.  
  
## Syntax  
  
```  
typedef struct _FILETIME {  
    DWORD dwLowDateTime;   /* low 32 bits */  
    DWORD dwHighDateTime;  /* high 32 bits */  
} FILETIME, *PFILETIME, *LPFILETIME;  
```  
  
#### Parameters  
 *dwLowDateTime*  
 Specifies the low 32 bits of the file time.  
  
 *dwHighDateTime*  
 Specifies the high 32 bits of the file time.  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CTime::CTime](../../atl-mfc-shared/reference/ctime-class.md#ctime)







