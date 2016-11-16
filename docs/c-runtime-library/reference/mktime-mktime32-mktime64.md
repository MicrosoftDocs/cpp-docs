---
title: "mktime, _mktime32, _mktime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mktime32"
  - "mktime"
  - "_mktime64"
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
  - "mktime"
  - "_mktime64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mktime32 function"
  - "mktime function"
  - "time functions"
  - "mktime64 function"
  - "converting times"
  - "mktime32 function"
  - "_mktime64 function"
  - "time, converting"
ms.assetid: 284ed5d4-7064-48a2-bd50-15effdae32cf
caps.latest.revision: 25
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
# mktime, _mktime32, _mktime64
Convert the local time to a calendar value.  
  
## Syntax  
  
```  
time_t mktime(  
   struct tm *timeptr   
);  
__time32_t _mktime32(  
   struct tm *timeptr   
);  
__time64_t _mktime64(  
   struct tm *timeptr   
);  
```  
  
#### Parameters  
 *timeptr*  
 Pointer to time structure; see [asctime](../../c-runtime-library/reference/asctime-wasctime.md).  
  
## Return Value  
 `_mktime32` returns the specified calendar time encoded as a value of type [time_t](../../c-runtime-library/standard-types.md). If *timeptr* references a date before midnight, January 1, 1970, or if the calendar time cannot be represented, `_mktime32` returns –1 cast to type `time_t`. When using `_mktime32` and if *timeptr* references a date after 23:59:59 January 18, 2038, Coordinated Universal Time (UTC), it will return –1 cast to type `time_t`.  
  
 `_mktime64` will return –1 cast to type `__time64_t` if *timeptr* references a date after 23:59:59, December 31, 3000, UTC.  
  
## Remarks  
 The `mktime`, `_mktime32` and `_mktime64` functions convert the supplied time structure (possibly incomplete) pointed to by *timeptr* into a fully defined structure with normalized values and then converts it to a `time_t` calendar time value. The converted time has the same encoding as the values returned by the [time](../../c-runtime-library/reference/time-time32-time64.md) function. The original values of the `tm_wday` and `tm_yday` components of the *timeptr* structure are ignored, and the original values of the other components are not restricted to their normal ranges.  
  
 `mktime` is an inline function that is equivalent to `_mktime64`, unless `_USE_32BIT_TIME_T` is defined, in which case it is equivalent to `_mktime32`.  
  
 After an adjustment to UTC, `_mktime32` handles dates from midnight, January 1, 1970, to 23:59:59 January 18, 2038, UTC. `_mktime64` handles dates from midnight, January 1, 1970 to 23:59:59, December 31, 3000. This adjustment may cause these functions to return -1 (cast to `time_t`, `__time32_t` or `__time64_t`) even though the date you specify is within range. For example, if you are in Cairo, Egypt, which is two hours ahead of UTC, two hours will first be subtracted from the date you specify in *timeptr*; this may now put your date out of range.  
  
 These functions may be used to validate and fill in a tm structure. If successful, these functions set the values of `tm_wday` and `tm_yday` as appropriate and set the other components to represent the specified calendar time, but with their values forced to the normal ranges. The final value of `tm_mday` is not set until `tm_mon` and `tm_year` are determined. When specifying a `tm` structure time, set the `tm_isdst` field to:  
  
-   Zero (0) to indicate that standard time is in effect.  
  
-   A value greater than 0 to indicate that daylight saving time is in effect.  
  
-   A value less than zero to have the C run-time library code compute whether standard time or daylight saving time is in effect.  
  
 The C run-time library will determine the daylight savings time behavior from the [TZ](../../c-runtime-library/reference/tzset.md) environment variable. If `TZ` is not set, the Win32 API call [GetTimeZoneInformation](http://msdn.microsoft.com/library/windows/desktop/ms724421.aspx) is used to get the daylight savings time information from the operating system. If this fails, the library assumes the United States' rules for implementing the calculation of daylight saving time are used. `tm_isdst` is a required field. If not set, its value is undefined and the return value from these functions is unpredictable. If *timeptr* points to a `tm` structure returned by a previous call to `asctime`, `gmtime`, or `localtime` (or variants of these functions), the `tm_isdst` field contains the correct value.  
  
 Note that `gmtime` and `localtime` (and `_gmtime32`, `_gmtime64`, `_localtime32`, and `_localtime64`) use a single buffer per thread for the conversion. If you supply this buffer to `mktime`, `_mktime32` or `_mktime64`, the previous contents are destroyed.  
  
 These functions validate their parameter. If *timeptr* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`mktime`|\<time.h>|  
|`_mktime32`|\<time.h>|  
|`_mktime64`|\<time.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// crt_mktime.c  
/* The example takes a number of days  
 * as input and returns the time, the current  
 * date, and the specified number of days.  
 */  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct tm  when;  
   __time64_t now, result;  
   int        days;  
   char       buff[80];  
  
   time( &now );  
   _localtime64_s( &when, &now );  
   asctime_s( buff, sizeof(buff), &when );  
   printf( "Current time is %s\n", buff );  
   days = 20;  
   when.tm_mday = when.tm_mday + days;  
   if( (result = mktime( &when )) != (time_t)-1 ) {  
      asctime_s( buff, sizeof(buff), &when );  
      printf( "In %d days the time will be %s\n", days, buff );  
   } else  
      perror( "mktime failed" );  
}  
```  
  
## Sample Output  
  
```  
Current time is Fri Apr 25 13:34:07 2003  
  
In 20 days the time will be Thu May 15 13:34:07 2003  
```  
  
## .NET Framework Equivalent  
 <xref:System.DateTimeOffset.%23ctor%2A>  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [_mkgmtime, _mkgmtime32, _mkgmtime64](../../c-runtime-library/reference/mkgmtime-mkgmtime32-mkgmtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)