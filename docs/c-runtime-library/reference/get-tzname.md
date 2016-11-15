---
title: "_get_tzname | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_tzname"
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
  - "_get_tzname"
  - "get_tzname"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_tzname function"
  - "time zones"
  - "get_tzname function"
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
caps.latest.revision: 18
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
# _get_tzname
Retrieves the character string representation of the time zone name or the daylight standard time zone name (DST).  
  
## Syntax  
  
```  
errno_t _get_tzname(  
    size_t* pReturnValue,  
    char* timeZoneName,  
    size_t sizeInBytes,  
    int index      
);  
```  
  
#### Parameters  
 [out] `pReturnValue`  
 The string length of `timeZoneName` including a NULL terminator.  
  
 [out] `timeZoneName`  
 The address of a character string for the representation of the time zone name or the daylight standard time zone name (DST), depending on `index`.  
  
 [in] `sizeInBytes`  
 The size of the `timeZoneName` character string in bytes.  
  
 [in] `index`  
 The index of one of the two time zone names to retrieve.  
  
## Return Value  
 Zero if successful, otherwise an `errno` type value.  
  
 If either `timeZoneName` is `NULL`, or `sizeInBytes` is zero or less than zero (but not both), an invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
### Error Conditions  
  
|`pReturnValue`|`timeZoneName`|`sizeInBytes`|`index`|Return value|Contents of `timeZoneName`|  
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|  
|size of TZ name|`NULL`|0|0 or 1|0|not modified|  
|size of TZ name|any|> 0|0 or 1|0|TZ name|  
|not modified|`NULL`|> 0|any|`EINVAL`|not modified|  
|not modified|any|zero|any|`EINVAL`|not modified|  
|not modified|any|> 0|> 1|`EINVAL`|not modified|  
  
## Remarks  
 The `_get_tzname` function retrieves the character string representation of the time zone name or the daylight standard time zone name (DST) into the address of `timeZoneName` depending on the index value, along with the size of the string in `pReturnValue`. If `timeZoneName` is `NULL` and `sizeInBytes` is zero, just the size of the string of either time zone in bytes is returned in `pReturnValue`. The index values must be either 0 for standard time zone or 1 for daylight standard time zone; any other values of index have undetermined results.  
  
### Index values  
  
|`index`|Contents of `timeZoneName`|`timeZoneName` default value|  
|-------------|--------------------------------|----------------------------------|  
|0|Time zone name|"PST"|  
|1|Daylight standard time zone name|"PDT"|  
|> 1 or < 0|`errno` set to `EINVAL`|not modified|  
  
 Unless the values are explicitly changed during run time, the default values are "PST" and "PDT" respectively.  The sizes of these character arrays are governed by `TZNAME_MAX` value.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_tzname`|\<time.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)   
 [_get_daylight](../../c-runtime-library/reference/get-daylight.md)   
 [_get_dstbias](../../c-runtime-library/reference/get-dstbias.md)   
 [_get_timezone](../../c-runtime-library/reference/get-timezone.md)   
 [TZNAME_MAX](../../c-runtime-library/tzname-max.md)