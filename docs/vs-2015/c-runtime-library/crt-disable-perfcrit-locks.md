---
title: "_CRT_DISABLE_PERFCRIT_LOCKS | Microsoft Docs"
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
  - "_CRT_DISABLE_PERFCRIT_LOCKS"
  - "CRT_DISABLE_PERFCRIT_LOCKS"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CRT_DISABLE_PERFCRIT_LOCKS constant"
  - "_CRT_DISABLE_PERFCRIT_LOCKS constant"
ms.assetid: 36cc2d86-cdb1-4b2b-a03c-c0d3818e7c6f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CRT_DISABLE_PERFCRIT_LOCKS
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CRT_DISABLE_PERFCRIT_LOCKS](https://docs.microsoft.com/cpp/c-runtime-library/crt-disable-perfcrit-locks).  
  
Disables performance-critical locking in I/O operations.  
  
## Syntax  
  
```  
#define _CRT_DISABLE_PERFCRIT_LOCKS  
```  
  
## Remarks  
 Defining this symbol can improve performance in single-threaded I/O-bound programs by forcing all I/O operations to assume a single-threaded I/O model. For more information, see [Multithreaded Libraries Performance](../c-runtime-library/multithreaded-libraries-performance.md).  
  
## See Also  
 [Global Constants](../c-runtime-library/global-constants.md)





