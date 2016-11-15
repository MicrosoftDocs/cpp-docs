---
title: "gmtime, _gmtime32, _gmtime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_gmtime32"
  - "gmtime"
  - "_gmtime64"
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
  - "gmtime"
  - "_gmtime32"
  - "_gmtime64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gmtime32 function"
  - "_gmtime64 function"
  - "gmtime function"
  - "time functions"
  - "_gmtime32 function"
  - "gmtime64 function"
  - "time structure conversion"
ms.assetid: 315501f3-477e-475d-a414-ef100ee0db27
caps.latest.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# gmtime, _gmtime32, _gmtime64
Converts a time value to a structure. More secure versions of these functions are available; see [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md).  
  
## Syntax  
  
```  
struct tm *gmtime(   
   const time_t *timer   
);  
struct tm *_gmtime32(   
   const __time32_t *timer   
);  
struct tm *_gmtime64(   
   const __time64_t *timer   
);  
```  
  
#### Parameters  
 `timer`  
 Pointer to the stored time. The time is represented as seconds elapsed since midnight (00:00:00), January 1, 1970, coordinated universal time (UTC).  
  
## Return Value  
 A pointer to a structure of type [tm](../../c-runtime-library/standard-types.md). The fields of the returned structure hold the evaluated value of the `timer` argument in UTC rather than in local time. Each of the structure fields is of type `int`, as follows:  
  
 `tm_sec`  
 Seconds after minute (0 – 59).  
  
 `tm_min`  
 Minutes after hour (0 – 59).  
  
 `tm_hour`  
 Hours since midnight (0 – 23).  
  
 `tm_mday`  
 Day of month (1 – 31).  
  
 `tm_mon`  
 Month (0 – 11; January = 0).  
  
 `tm_year`  
 Year (current year minus 1900).  
  
 `tm_wday`  
 Day of week (0 – 6; Sunday = 0).  
  
 `tm_yday`  
 Day of year (0 – 365; January 1 = 0).  
  
 `tm_isdst`  
 Always 0 for `gmtime`.  
  
 Both the 32-bit and 64-bit versions of `gmtime`, `mktime`, `mkgmtime`, and `localtime` all use one common `tm` structure per thread for the conversion. Each call to one of these functions destroys the result of any previous call. If `timer` represents a date before midnight, January 1, 1970, `gmtime` returns `NULL`. There is no error return.  
  
 `_gmtime64`, which uses the `__time64_t` structure, enables dates to be expressed up through 23:59:59, December 31, 3000, UTC, whereas `_gmtime32` only represent dates through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for both functions.  
  
 `gmtime` is an inline function that evaluates to `_gmtime64`, and `time_t` is equivalent to `__time64_t` unless `_USE_32BIT_TIME_T` is defined. If you must force the compiler to interpret `time_t` as the old 32-bit `time_t`, you can define `_USE_32BIT_TIME_T`, but doing so causes `gmtime` to be in-lined to `_gmtime32` and `time_t` to be defined as `__time32_t`. We recommend that you do not do this, because it is not allowed on 64-bit platforms and in any case your application may fail after January 18, 2038.  
  
 These functions validate their parameters. If `timer` is a null pointer, or if the timer value is negative, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return `NULL` and set `errno` to `EINVAL`.  
  
## Remarks  
 The `_gmtime32` function breaks down the `timer` value and stores it in a statically allocated structure of type `tm`, defined in TIME.H. The value of `timer` is typically obtained from a call to the `time` function.  
  
> [!NOTE]
>  In most cases, the target environment tries to determine whether daylight savings time is in effect. The C run-time library assumes that the United States rules for implementing the calculation of Daylight Saving Time (DST) are used.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`gmtime`|\<time.h>|  
|`_gmtime32`|\<time.h>|  
|`_gmtime64`|\<time.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
  
      // crt_gmtime.c  
// compile with: /W3  
// This program uses _gmtime64 to convert a long-  
// integer representation of coordinated universal time  
// to a structure named newtime, then uses asctime to  
// convert this structure to an output string.  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm *newtime;  
   __int64 ltime;  
   char buff[80];  
  
   _time64( &ltime );  
  
   // Obtain coordinated universal time:  
   newtime = _gmtime64( &ltime ); // C4996  
   // Note: _gmtime64 is deprecated; consider using _gmtime64_s  
   asctime_s( buff, sizeof(buff), newtime );  
   printf( "Coordinated universal time is %s\n", buff );  
}  
```  
  
```Output  
Coordinated universal time is Tue Feb 12 23:11:31 2002  
```  
  
## .NET Framework Equivalent  
  
-   [System::DateTime::UtcNow](https://msdn.microsoft.com/en-us/library/system.datetime.utcnow.aspx)  
  
-   [System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [_mkgmtime, _mkgmtime32, _mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)