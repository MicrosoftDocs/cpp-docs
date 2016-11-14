---
title: "Heap Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_HEAPBADPTR"
  - "_HEAPEMPTY"
  - "_HEAPBADBEGIN"
  - "_HEAPOK"
  - "_HEAPBADNODE"
  - "_HEAPEND"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_HEAPOK constants"
  - "_HEAPEND constants"
  - "HEAPBADBEGIN constants"
  - "_HEAPBADNODE constants"
  - "HEAPBADNODE constants"
  - "HEAPBADPTR constants"
  - "_HEAPEMPTY constants"
  - "HEAPEND constants"
  - "HEAPOK constants"
  - "HEAPEMPTY constants"
  - "_HEAPBADBEGIN constants"
  - "_HEAPBADPTR constants"
  - "heap constants"
ms.assetid: 3f751bb9-2dc4-486f-b5f5-9061c96d3754
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Heap Constants
## Syntax  
  
```  
  
#include <malloc.h>  
  
```  
  
## Remarks  
 These constants give the return value indicating status of the heap.  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_HEAPBADBEGIN`|Initial header information was not found or was invalid.|  
|`_HEAPBADNODE`|Bad node was found, or heap is damaged.|  
|`_HEAPBADPTR`|**_pentry** field of **_HEAPINFO** structure does not contain valid pointer into heap (`_heapwalk` routine only).|  
|`_HEAPEMPTY`|Heap has not been initialized.|  
|`_HEAPEND`|End of heap was reached successfully (`_heapwalk` routine only).|  
|`_HEAPOK`|Heap is consistent (`_heapset` and `_heapchk` routines only). No errors so far; **_HEAPINFO** structure contains information about next entry (`_heapwalk` routine only).|  
  
## See Also  
 [_heapchk](../c-runtime-library/reference/heapchk.md)   
 [_heapset](../c-runtime-library/heapset.md)   
 [_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [Global Constants](../c-runtime-library/global-constants.md)