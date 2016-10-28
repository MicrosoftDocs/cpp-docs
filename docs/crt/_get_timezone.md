---
title: "_get_timezone"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_get_timezone"
apilocation: 
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
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_get_timezone"
  - "get_timezone"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "time zones"
  - "get_timezone function"
  - "_get_timezone function"
ms.assetid: 30ab0838-0ae9-4a2f-bfe6-a49ee443b21e
caps.latest.revision: 17
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _get_timezone
Retrieves the difference in seconds between coordinated universal time (UTC) and local time.  
  
## Syntax  
  
```  
  
      error_t _get_timezone(   
    long* seconds  
);  
```  
  
#### Parameters  
 `seconds`  
 The difference in seconds between UTC and local time.  
  
## Return Value  
 Zero if successful or an `errno` value if an error occurs.  
  
## Remarks  
 The `_get_timezone` function retrieves the difference in seconds between UTC and local time as an integer. The default value is 28,800 seconds, for Pacific Standard Time (eight hours behind UTC).  
  
 If `seconds` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_timezone`|\<time.h>|  
  
 For more information, see [Compatibility](../crt/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Time Management](../crt/time-management.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md)   
 [_get_daylight](../crt/_get_daylight.md)   
 [_get_dstbias](../crt/_get_dstbias.md)   
 [_get_tzname](../crt/_get_tzname.md)