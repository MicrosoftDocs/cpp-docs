---
title: "Buffer Manipulation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["c.memory"]
dev_langs: ["C++"]
helpviewer_keywords: ["buffers, manipulation routines", "buffers"]
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Buffer Manipulation
Use these routines to work with areas of memory on a byte-by-byte basis.  
  
### Buffer-Manipulation Routines  
  
|Routine|Use|  
|-------------|---------|  
|[_memccpy](../c-runtime-library/reference/memccpy.md)|Copy characters from one buffer to another until given character or given number of characters has been copied|  
|[memchr, wmemchr](../c-runtime-library/reference/memchr-wmemchr.md)|Return pointer to first occurrence, within specified number of characters, of given character in buffer|  
|[memcmp, wmemcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|Compare specified number of characters from two buffers|  
|[memcpy, wmemcpy](../c-runtime-library/reference/memcpy-wmemcpy.md), [memcpy_s, wmemcpy_s](../c-runtime-library/reference/memcpy-s-wmemcpy-s.md)|Copy specified number of characters from one buffer to another|  
|[_memicmp, _memicmp_l](../c-runtime-library/reference/memicmp-memicmp-l.md)|Compare specified number of characters from two buffers without regard to case|  
|[memmove, wmemmove](../c-runtime-library/reference/memmove-wmemmove.md),[memmove_s, wmemmove_s](../c-runtime-library/reference/memmove-s-wmemmove-s.md)|Copy specified number of characters from one buffer to another|  
|[memset, wmemset](../c-runtime-library/reference/memset-wmemset.md)|Use given character to initialize specified number of bytes in the buffer|  
|[_swab](../c-runtime-library/reference/swab.md)|Swap bytes of data and store them at specified location|  
  
 When the source and target areas overlap, only `memmove` is guaranteed to copy the full source properly.  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)