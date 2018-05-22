---
title: "HUGE_VAL, _HUGE | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_HUGE"
api_location: 
  - "msvcrt.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_HUGE"
  - "HUGE_VAL"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_HUGE constant"
  - "HUGE_VAL constant"
  - "double value"
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# HUGE_VAL, _HUGE
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HUGE_VAL, _HUGE](https://docs.microsoft.com/cpp/c-runtime-library/huge-val-huge).  
  
Syntax  
  
```  
  
#include <math.h>  
  
```  
  
## Remarks  
 `HUGE_VAL` is the largest representable double value. This value is returned by many run-time math functions when an error occurs. For some functions, –`HUGE_VAL` is returned. `HUGE_VAL` is defined as `_HUGE`, but run-time math functions return `HUGE_VAL`. You should also use `HUGE_VAL` in your code for consistency.  
  
## See Also  
 [Global Constants](../c-runtime-library/global-constants.md)





