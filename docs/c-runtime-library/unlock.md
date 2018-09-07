---
title: "_unlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_unlock"]
apilocation: ["msvcrt.dll", "msvcr100.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr80.dll", "msvcr120.dll", "msvcr90.dll", "msvcr120_clr0400.dll"]
apitype: "DLLExport"
f1_keywords: ["unlock", "_unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["unlock function", "_unlock function"]
ms.assetid: 2eda2507-a134-4997-aa12-f2f8cb319e14
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _unlock
Releases a multi-thread lock.  
  
> [!IMPORTANT]
>  This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.  
  
## Syntax  
  
```  
void __cdecl _unlock(  
   int locknum  
);  
```  
  
#### Parameters  
 [in] `locknum`  
 The identifier of the lock to release.  
  
## Requirements  
 **Source:** mlock.c  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [_lock](../c-runtime-library/lock.md)