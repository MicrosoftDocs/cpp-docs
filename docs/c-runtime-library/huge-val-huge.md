---
title: "HUGE_VAL, _HUGE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_HUGE"]
apilocation: ["msvcrt.dll"]
apitype: "DLLExport"
f1_keywords: ["_HUGE", "HUGE_VAL"]
dev_langs: ["C++"]
helpviewer_keywords: ["_HUGE constant", "HUGE_VAL constant", "double value"]
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# HUGE_VAL, _HUGE
## Syntax  
  
```  
  
#include <math.h>  
  
```  
  
## Remarks  
 `HUGE_VAL` is the largest representable double value. This value is returned by many run-time math functions when an error occurs. For some functions, -`HUGE_VAL` is returned. `HUGE_VAL` is defined as `_HUGE`, but run-time math functions return `HUGE_VAL`. You should also use `HUGE_VAL` in your code for consistency.  
  
## See Also  
 [Global Constants](../c-runtime-library/global-constants.md)