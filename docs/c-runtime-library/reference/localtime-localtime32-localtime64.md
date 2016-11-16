---
title: "localtime, _localtime32, _localtime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_localtime64"
  - "_localtime32"
  - "localtime"
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
  - "localtime64"
  - "_localtime64"
  - "localtime32"
  - "localtime"
  - "_localtime32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "localtime32 function"
  - "_localtime32 function"
  - "_localtime64 function"
  - "localtime64 function"
  - "localtime function"
  - "time, converting values"
ms.assetid: 4260ec3d-43ee-4538-b998-402a282bb9b8
caps.latest.revision: 28
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
# localtime, _localtime32, _localtime64
Convert a time value and correct for the local time zone. More secure versions of these functions are available; see [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md).  
  
## Syntax  
  
```  
struct tm *localtime(  
   const time_t *timer   
);  
struct tm *_localtime32(  
   const __time32_t *timer  
);  
struct tm *_localtime64(  
   const __time64_t *timer   
);  
```  
  
#### Parameters  
 `timer`  
 Pointer to stored time.  
  
## Return Value  
 Return a pointer to the structure result, or `NULL` if the date passed to the function is:  
  
-   Before midnight, January 1, 1970.  
  
-   After 03:14:07, January 19, 2038, UTC (using `_time32` and `time32_t`).  
  
-   After 23:59:59, December 31, 3000, UTC (using `_time64` and `__time64_t`).  
  
 `_localtime64`, which uses the `__time64_t` structure, allows dates to be expressed up through 23:59:59, December 31, 3000, coordinated universal time (UTC), whereas `_localtime32` represents dates through 23:59:59 January 18, 2038, UTC.  
  
 `localtime` is an inline function which evaluates to `_localtime64`, and `time_t` is equivalent to `__time64_t`. If you need to force the compiler to interpret `time_t`as the old 32-bit `time_t`, you can define `_USE_32BIT_TIME_T`. Doing this will cause `localtime` to evaluate to `_localtime32`. This is not recommended because your application may fail after January 18, 2038, and it is not allowed on 64-bit platforms.  
  
 The fields of the structure type [tm](../../c-runtime-library/standard-types.md) store the following values, each of which is an `int`:  
  
 `tm_sec`  
 Seconds after minute (0 – 59).  
  
 `tm_min`  
 Minutes after hour (0 – 59).  
  
 `tm_hour`  
 Hours after midnight (0 – 23).  
  
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
 Positive value if daylight saving time is in effect; 0 if daylight saving time is not in effect; negative value if status of daylight saving time is unknown. If the `TZ` environment variable is set, the C run-time library assumes rules appropriate to the United States for implementing the calculation of daylight-saving time (DST).  
  
## Remarks  
 The `localtime` function converts a time stored as a [time_t](../../c-runtime-library/standard-types.md) value and stores the result in a structure of type `tm`. The `long` value `timer` represents the seconds elapsed since midnight (00:00:00), January 1, 1970, UTC. This value is usually obtained from the `time` function.  
  
 Both the 32-bit and 64-bit versions of `gmtime`, `mktime`, `mkgmtime`, and `localtime` all use a single `tm` structure per thread for the conversion. Each call to one of these routines destroys the result of the previous call.  
  
 `localtime` corrects for the local time zone if the user first sets the global environment variable `TZ`. When `TZ` is set, three other environment variables (`_timezone`, `_daylight`, and `_tzname`) are automatically set as well. If the `TZ` variable is not set, `localtime` attempts to use the time zone information specified in the Date/Time application in Control Panel. If this information cannot be obtained, PST8PDT, which signifies the Pacific Time Zone, is used by default. See [_tzset](../../c-runtime-library/reference/tzset.md) for a description of these variables. `TZ` is a Microsoft extension and not part of the ANSI standard definition of `localtime`.  
  
> [!NOTE]
>  The target environment should try to determine whether daylight saving time is in effect.  
  
 These functions validate their parameters. If `timer` is a null pointer, or if the timer value is negative, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return `NULL` and set `errno` to `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`localtime`|\<time.h>|  
|`_localtime32`|\<time.h>|  
|`_localtime64`|\<time.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_localtime.cpp  
// compile with: /W3  
/* This program uses _time64 to get the current time   
 * and then uses localtime64() to convert this time to a structure   
 * representing the local time. The program converts the result   
 * from a 24-hour clock to a 12-hour clock and determines the   
 * proper extension (AM or PM).  
 */  
  
#include <stdio.h>  
#include <string.h>  
#include <time.h>  
  
int main( void )  
{  
        struct tm *newtime;  
        char am_pm[] = "AM";  
        __time64_t long_time;  
  
        _time64( &long_time );           // Get time as 64-bit integer.  
                                         // Convert to local time.  
        newtime = _localtime64( &long_time ); // C4996  
        // Note: _localtime64 deprecated; consider _localetime64_s  
  
        if( newtime->tm_hour > 12 )        // Set up extension.  
                strcpy_s( am_pm, sizeof(am_pm), "PM" );  
        if( newtime->tm_hour > 12 )        // Convert from 24-hour  
                newtime->tm_hour -= 12;    //   to 12-hour clock.  
        if( newtime->tm_hour == 0 )        // Set hour to 12 if midnight.  
                newtime->tm_hour = 12;  
  
        char buff[30];  
        asctime_s( buff, sizeof(buff), newtime );  
        printf( "%.19s %s\n", buff, am_pm );  
}  
```  
  
```Output  
Tue Feb 12 10:05:58 AM  
```  
  
## .NET Framework Equivalent  
 [System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [_tzset](../../c-runtime-library/reference/tzset.md)