---
title: "_set_doserrno | Microsoft Docs"
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
  - "_set_doserrno"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_set_doserrno"
  - "set_doserrno"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_doserrno function"
  - "doserrno global variable"
  - "set_doserrno function"
  - "_doserrno global variable"
ms.assetid: 8686c159-3797-4705-a53e-7457869ca6f3
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_doserrno
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_set_doserrno](https://docs.microsoft.com/cpp/c-runtime-library/reference/set-doserrno).  
  
Sets the value of the [_doserrno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) global variable.  
  
## Syntax  
  
```  
errno_t _set_doserrno(   
   int value   
);  
```  
  
#### Parameters  
 [in] `value`  
 The new value of `_doserrno`.  
  
## Return Value  
 Returns zero if successful.  
  
## Remarks  
 Possible values are defined in Errno.h.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_set_doserrno`|\<stdlib.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [_get_doserrno](../../c-runtime-library/reference/get-doserrno.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)





