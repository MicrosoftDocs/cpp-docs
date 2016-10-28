---
title: "_strtime, _wstrtime"
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
  - "_wstrtime"
  - "_strtime"
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
  - "_wstrtime"
  - "_strtime"
  - "wstrtime"
  - "strtime"
  - "_tstrtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strtime function"
  - "_strtime function"
  - "_wstrtime function"
  - "copying time to buffers"
  - "wstrtime function"
  - "tstrtime function"
  - "_tstrtime function"
  - "time, copying"
ms.assetid: 9e538161-cf49-44ec-bca5-c0ab0b9e4ca3
caps.latest.revision: 20
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
# _strtime, _wstrtime
Copy the time to a buffer. More secure versions of these functions are available; see [_strtime_s, _wstrtime_s](../crt/_strtime_s--_wstrtime_s.md).  
  
## Syntax  
  
```  
char *_strtime(  
   char *timestr   
);  
wchar_t *_wstrtime(  
   wchar_t *timestr   
);  
template <size_t size>  
char *_strtime(  
   char (&timestr)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wstrtime(  
   wchar_t (&timestr)[size]  
); // C++ only  
```  
  
#### Parameters  
 `timestr`  
 Time string.  
  
## Return Value  
 Returns a pointer to the resulting character string `timestr`.  
  
## Remarks  
 The `_strtime` function copies the current local time into the buffer pointed to by `timestr`*.* The time is formatted as `hh:mm:ss` where `hh` is two digits representing the hour in 24-hour notation, `mm` is two digits representing the minutes past the hour, and `ss` is two digits representing seconds. For example, the string `18:23:44` represents 23 minutes and 44 seconds past 6 P.M. The buffer must be at least 9 bytes long.  
  
 `_wstrtime` is a wide-character version of `_strtime`; the argument and return value of `_wstrtime` are wide-character strings. These functions behave identically otherwise.If `timestr` is `NULL` pointer or if `timestr` is formatted incorrectly, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If the exception is allowed to continue, these functions return a NULL and set `errno` to `EINVAL` if `timestr` was a NULL or set `errno` to `ERANGE` if `timestr` is formatted incorrectly.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../crt/secure-template-overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tstrtime`|`_strtime`|`_strtime`|`_wstrtime`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_strtime`|\<time.h>|  
|`_wstrtime`|\<time.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_strtime.c  
// compile with: /W3  
  
#include <time.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char tbuffer [9];  
   _strtime( tbuffer ); // C4996  
   // Note: _strtime is deprecated; consider using _strtime_s instead  
   printf( "The current time is %s \n", tbuffer );  
}  
```  
  
 **The current time is 14:21:44**   
## .NET Framework Equivalent  
  
-   [System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
## See Also  
 [Time Management](../crt/time-management.md)   
 [asctime, _wasctime](../crt/asctime--_wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../crt/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md)   
 [gmtime, _gmtime32, _gmtime64](../crt/gmtime--_gmtime32--_gmtime64.md)   
 [localtime, _localtime32, _localtime64](../crt/localtime--_localtime32--_localtime64.md)   
 [mktime, _mktime32, _mktime64](../crt/mktime--_mktime32--_mktime64.md)   
 [time, _time32, _time64](../crt/time--_time32--_time64.md)   
 [_tzset](../crt/_tzset.md)