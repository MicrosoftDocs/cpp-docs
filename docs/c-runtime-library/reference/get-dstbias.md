---
title: "_get_dstbias | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_get_dstbias", "__dstbias"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["__dstbias", "_get_dstbias", "get_dstbias"]
dev_langs: ["C++"]
helpviewer_keywords: ["__dstbias", "daylight saving time offset", "get_dstbias function", "_get_dstbias function"]
ms.assetid: e751358c-1ecc-411b-ae2c-81b2ec54ea45
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _get_dstbias
Retrieves the daylight saving time offset in seconds.  
  
## Syntax  
  
```  
  
      error_t _get_dstbias(   
    int* seconds  
);  
```  
  
#### Parameters  
 `seconds`  
 The offset in seconds of daylight saving time.  
  
## Return Value  
 Zero if successful or an `errno` value if an error occurs.  
  
## Remarks  
 The `_get_dstbias` function retrieves the number of seconds in daylight saving time as an integer. If daylight saving time is in effect, the default offset is 3600 seconds, which is the number of seconds in one hour (though a few regions do observe a two-hour offset).  
  
 If `seconds` is `NULL`, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
 We recommend you use this function instead of the macro `_dstbias` or the deprecated function `__dstbias`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_dstbias`|\<time.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)   
 [_get_daylight](../../c-runtime-library/reference/get-daylight.md)   
 [_get_timezone](../../c-runtime-library/reference/get-timezone.md)   
 [_get_tzname](../../c-runtime-library/reference/get-tzname.md)