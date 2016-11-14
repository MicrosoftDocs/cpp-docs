---
title: "_ftime, _ftime32, _ftime64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ftime64"
  - "_ftime"
  - "_ftime32"
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
  - "_ftime32"
  - "_ftime"
  - "_ftime64"
  - "ftime64"
  - "ftime"
  - "ftime32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ftime64 function"
  - "_ftime64 function"
  - "current time"
  - "_ftime function"
  - "ftime function"
  - "_ftime32 function"
  - "ftime32 function"
  - "time, getting current"
ms.assetid: 96bc464c-3bcd-41d5-a212-8bbd836b814a
caps.latest.revision: 27
author: "corob-msft"
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
# _ftime, _ftime32, _ftime64
Get the current time. More secure versions of these functions are available; see [_ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md).  
  
## Syntax  
  
```  
void _ftime(   
   struct _timeb *timeptr   
);  
void _ftime32(   
   struct __timeb32 *timeptr   
);  
void _ftime64(   
   struct __timeb64 *timeptr   
);  
```  
  
#### Parameters  
 `timeptr`  
 Pointer to a `_timeb`,`__timeb32` or `__timeb64` structure.  
  
## Remarks  
 The `_ftime` function gets the current local time and stores it in the structure pointed to by `timeptr`*.* The `_timeb`, `__timeb32`,and`__timeb64` structures are defined in SYS\Timeb.h. They contain four fields, which are listed in the following table.  
  
 `dstflag`  
 Nonzero if daylight savings time is currently in effect for the local time zone. (See [_tzset](../../c-runtime-library/reference/tzset.md) for an explanation of how daylight savings time is determined.)  
  
 `millitm`  
 Fraction of a second in milliseconds.  
  
 `time`  
 Time in seconds since midnight (00:00:00), January 1, 1970, coordinated universal time (UTC).  
  
 `timezone`  
 Difference in minutes, moving westward, between UTC and local time. The value of `timezone` is set from the value of the global variable `_timezone` (see `_tzset`).  
  
 `_ftime64`, which uses the `__timeb64` structure, allows file-creation dates to be expressed up through 23:59:59, December 31, 3000, UTC; whereas `_ftime32` only represents dates through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for all these functions.  
  
 `_ftime` is equivalent to `_ftime64` and `_timeb` contains a 64-bit time. This is true unless `_USE_32BIT_TIME_T` is defined, in which case the old behavior is in effect; `_ftime` uses a 32-bit time and `_timeb` contains a 32-bit time.  
  
 `_ftime` validates its parameters. If passed a null pointer as `timeptr`, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function sets `errno` to `EINVAL`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_ftime`|\<sys/types.h> and \<sys/timeb.h>|  
|`_ftime32`|\<sys/types.h> and \<sys/timeb.h>|  
|`_ftime64`|\<sys/types.h> and \<sys/timeb.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_ftime.c  
// compile with: /W3  
// This program uses _ftime to obtain the current  
// time and then stores this time in timebuffer.  
  
#include <stdio.h>  
#include <sys/timeb.h>  
#include <time.h>  
  
int main( void )  
{  
   struct _timeb timebuffer;  
   char timeline[26];  
   errno_t err;  
   time_t time1;  
   unsigned short millitm1;  
   short timezone1;  
   short dstflag1;  
  
   _ftime( &timebuffer ); // C4996  
   // Note: _ftime is deprecated; consider using _ftime_s instead  
  
   time1 = timebuffer.time;  
   millitm1 = timebuffer.millitm;  
   timezone1 = timebuffer.timezone;  
   dstflag1 = timebuffer.dstflag;  
  
   printf( "Seconds since midnight, January 1, 1970 (UTC): %I64d\n",   
   time1);  
   printf( "Milliseconds: %d\n", millitm1);  
   printf( "Minutes between UTC and local time: %d\n", timezone1);  
   printf( "Daylight savings time flag (1 means Daylight time is in "  
           "effect): %d\n", dstflag1);   
  
   err = ctime_s( timeline, 26, & ( timebuffer.time ) );  
   if (err)  
   {  
       printf("Invalid argument to ctime_s. ");  
   }  
   printf( "The time is %.19s.%hu %s", timeline, timebuffer.millitm,  
           &timeline[20] );  
}  
```  
  
```Output  
Seconds since midnight, January 1, 1970 (UTC): 1051553334  
Milliseconds: 230  
Minutes between UTC and local time: 480  
Daylight savings time flag (1 means Daylight time is in effect): 1  
The time is Mon Apr 28 11:08:54.230 2003  
```  
  
## .NET Framework Equivalent  
 [System::DateTime::Now](https://msdn.microsoft.com/en-us/library/system.datetime.now.aspx)  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)