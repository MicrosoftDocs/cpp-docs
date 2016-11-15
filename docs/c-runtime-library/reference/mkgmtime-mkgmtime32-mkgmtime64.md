---
title: "_mkgmtime, _mkgmtime32, _mkgmtime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mkgmtime32"
  - "_mkgmtime64"
  - "_mkgmtime"
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
  - "_mkgmtime64"
  - "mkgmtime32"
  - "_mkgmtime32"
  - "mkgmtime"
  - "mkgmtime64"
  - "_mkgmtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "mkgmtime32 function"
  - "time functions"
  - "mkgmtime function"
  - "_mkgmtime function"
  - "converting times"
  - "mkgmtime64 function"
  - "_mkgmtime64 function"
  - "_mkgmtime32 function"
  - "time, converting"
ms.assetid: b4ca2b67-e198-4f43-b3e2-e8ad6bd01867
caps.latest.revision: 17
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
# _mkgmtime, _mkgmtime32, _mkgmtime64
Converts a UTC time represented by a `tm``struct` to a UTC time represented by a `time_t` type.  
  
## Syntax  
  
```  
  
      time_t _mkgmtime(  
   struct tm* timeptr  
);  
__time32_t _mkgmtime32(  
   struct tm* timeptr  
);  
__time64_t _mkgmtime64(  
   struct tm* timeptr  
);  
```  
  
#### Parameters  
 `timeptr`  
 A pointer to the UTC time as a `struct``tm` to convert.  
  
## Return Value  
 A quantity of type `__time32_t` or `__time64_t` representing the number of seconds elapsed since midnight, January 1, 1970, in Coordinated Universal Time (UTC). If the date is out of range (see the Remarks section) or the input cannot be interpreted as a valid time, the return value is –1.  
  
## Remarks  
 The `_mkgmtime32` and `_mkgmtime64` functions convert a UTC time to a `__time32_t` or `__time64_t` type representing the time in UTC. To convert a local time to UTC time, use `mktime`, `_mktime32`, and `_mktime64` instead.  
  
 `_mkgmtime` is an inline function that evaluates to `_mkgmtime64`, and `time_t` is equivalent to `__time64_t`. If you need to force the compiler to interpret `time_t`as the old 32-bit `time_t`, you can define `_USE_32BIT_TIME_T`. This is not recommended because your application might fail after January 18, 2038 (the maximum range of a 32-bit `time_t`), and it is not allowed at all on 64-bit platforms.  
  
 The time structure passed in will be changed as follows, in the same way as they are changed with the `_mktime` functions: the `tm_wday` and `tm_yday` fields are set to new values based on the values of `tm_mday` and `tm_year`. When specifying a `tm` structure time, set the `tm_isdst` field to:  
  
-   Zero (0) to indicate that standard time is in effect.  
  
-   A value greater than 0 to indicate that daylight saving time is in effect.  
  
-   A value less than zero to have the C run-time library code compute whether standard time or daylight saving time is in effect.  
  
 The C run-time library uses the TZ environment variable to determine the correct daylight savings time. If TZ is not set, the operating system is queried to get the correct regional daylight savings time behavior. `tm_isdst` is a required field. If not set, its value is undefined and the return value from `mktime` is unpredictable.  
  
 The range of the `_mkgmtime32` function is from midnight, January 1, 1970, UTC to 23:59:59 January 18, 2038, UTC. The range of `_mkgmtime64` is from midnight, January 1, 1970, UTC to 23:59:59, December 31, 3000, UTC. An out-of-range date results in a return value of –1. The range of `_mkgmtime` depends on whether `_USE_32BIT_TIME_T` is defined. If not defined (the default) the range is that of `_mkgmtime64`; otherwise, the range is limited to the 32-bit range of `_mkgmtime32`.  
  
 Note that `gmtime` and `localtime` use a single statically allocated buffer for the conversion. If you supply this buffer to `mkgmtime`, the previous contents are destroyed.  
  
## Example  
  
```  
// crt_mkgmtime.c  
#include <stdio.h>  
#include <time.h>  
  
int main()  
{  
    struct tm t1, t2;  
    time_t now, mytime, gmtime;  
    char buff[30];  
  
    time( & now );  
  
    _localtime64_s( &t1, &now );  
    _gmtime64_s( &t2, &now );  
  
    mytime = mktime(&t1);  
    gmtime = _mkgmtime(&t2);  
  
    printf("Seconds since midnight, January 1, 1970\n");  
    printf("My time: %I64d\nGM time (UTC): %I64d\n\n", mytime, gmtime);  
  
    /* Use asctime_s to display these times. */  
  
    _localtime64_s( &t1, &mytime );  
    asctime_s( buff, sizeof(buff), &t1 );  
    printf( "Local Time: %s\n", buff );  
  
    _gmtime64_s( &t2, &gmtime );  
    asctime_s( buff, sizeof(buff), &t2 );  
    printf( "Greenwich Mean Time: %s\n", buff );  
  
}  
```  
  
## Sample Output  
  
```  
Seconds since midnight, January 1, 1970  
My time: 1171588492  
GM time (UTC): 1171588492  
  
Local Time: Thu Feb 15 17:14:52 2007  
  
Greenwich Mean Time: Fri Feb 16 01:14:52 2007  
```  
  
 The following example shows how the incomplete structure is filled out with the computed values of the day of the week and the day of the year.  
  
```  
// crt_mkgmtime2.c  
#include <stdio.h>  
#include <time.h>  
#include <memory.h>  
  
int main()  
{  
    struct tm t1, t2;  
    time_t gmtime;  
    char buff[30];  
  
    memset(&t1, 0, sizeof(struct tm));  
    memset(&t2, 0, sizeof(struct tm));  
  
    t1.tm_mon = 1;  
    t1.tm_isdst = 0;  
    t1.tm_year = 103;  
    t1.tm_mday = 12;  
  
    // The day of the week and year will be incorrect in the output here.  
    asctime_s( buff, sizeof(buff), &t1);  
    printf("Before calling _mkgmtime, t1 = %s t.tm_yday = %d\n",  
            buff, t1.tm_yday );  
  
    gmtime = _mkgmtime(&t1);  
  
    // The correct day of the week and year were determined.  
    asctime_s( buff, sizeof(buff), &t1);  
    printf("After calling _mkgmtime, t1 = %s t.tm_yday = %d\n",  
            buff, t1.tm_yday );  
  
}  
```  
  
## Output  
  
```  
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003  
 t.tm_yday = 0  
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003  
 t.tm_yday = 42  
```  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [mktime, _mktime32, _mktime64](../../c-runtime-library/reference/mktime-mktime32-mktime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)