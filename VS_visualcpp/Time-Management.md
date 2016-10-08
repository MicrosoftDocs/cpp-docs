---
title: "Time Management"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 93599220-c011-45d5-978f-12182abfdd2f
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Time Management
Use these functions to get the current time and convert, adjust, and store it as necessary. The current time is the system time.  
  
 The `_ftime` and `localtime` routines use the `TZ` environment variable. If `TZ` is not set, the run-time library attempts to use the time-zone information specified by the operating system. If this information is unavailable, these functions use the default value of PST8PDT. For more information on `TZ`, see [_tzset](../VS_visualcpp/_tzset.md); also see [_daylight, timezone, and _tzname](../VS_visualcpp/_daylight--_dstbias--_timezone--and-_tzname.md).  
  
### Time Routines  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[asctime, _wasctime](../VS_visualcpp/asctime--_wasctime.md), [asctime_s, _wasctime_s](../VS_visualcpp/asctime_s--_wasctime_s.md)|Convert time from type `struct tm` to character string. The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[clock](../VS_visualcpp/clock.md)|Return elapsed wall-clock time for process.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../VS_visualcpp/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md), [_ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../VS_visualcpp/ctime_s--_ctime32_s--_ctime64_s--_wctime_s--_wctime32_s--_wctime64_s.md)|Convert time from type `time_t`, `__time32_t` or `__time64_t` to character string. The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::GetDateTimeFormats](https://msdn.microsoft.com/en-us/library/system.datetime.getdatetimeformats.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)|  
|[difftime, _difftime32, _difftime64](../VS_visualcpp/difftime--_difftime32--_difftime64.md)|Compute difference between two times.|[System::DateTime::Subtract](https://msdn.microsoft.com/en-us/library/system.datetime.subtract.aspx)|  
|[_ftime, _ftime32, _ftime64](../VS_visualcpp/_ftime--_ftime32--_ftime64.md),[_ftime_s, _ftime32_s, _ftime64_s](../VS_visualcpp/_ftime_s--_ftime32_s--_ftime64_s.md)|Store current system time in variable of type `struct _timeb` or type `struct``__timeb64` The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::Now](https://msdn.microsoft.com/en-us/library/system.datetime.now.aspx)|  
|[_futime, _futime32, _futime64](../VS_visualcpp/_futime--_futime32--_futime64.md)|Set modification time on open file|[System::IO::File::SetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastaccesstime.aspx), [System::IO::File::SetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastwritetime.aspx), [System::IO::File::SetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.setcreationtime.aspx)|  
|[gmtime, _gmtime32, _gmtime64](../VS_visualcpp/gmtime--_gmtime32--_gmtime64.md), [gmtime_s, _gmtime32_s, _gmtime64_s](../VS_visualcpp/gmtime_s--_gmtime32_s--_gmtime64_s.md)|Convert time from type `time_t` to `struct tm` or from type `__time64_t` to `struct tm`.The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::UtcNow](https://msdn.microsoft.com/en-us/library/system.datetime.utcnow.aspx), [System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)|  
|[localtime, _localtime32, _localtime64](../VS_visualcpp/localtime--_localtime32--_localtime64.md), [localtime_s, _localtime32_s, _localtime64_s](../VS_visualcpp/localtime_s--_localtime32_s--_localtime64_s.md)|Convert time from type `time_t` to `struct tm` or from type `__time64_t` to `struct tm`with local correction. The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::ToLocalTime](https://msdn.microsoft.com/en-us/library/system.datetime.tolocaltime.aspx)|  
|[_mkgmtime, _mkgmtime32, _mkgmtime64](../VS_visualcpp/_mkgmtime--_mkgmtime32--_mkgmtime64.md)|Convert time to calendar value in Greenwich Mean Time.|[System::DateTime::ToUniversalTime](https://msdn.microsoft.com/en-us/library/system.datetime.touniversaltime.aspx)|  
|[mktime, _mktime32, _mktime64](../VS_visualcpp/mktime--_mktime32--_mktime64.md)|Convert time to calendar value.|[System::DateTime::DateTime](Overload:System.DateTime.)|  
|[_strdate, _wstrdate](../VS_visualcpp/_strdate--_wstrdate.md), [_strdate_s, _wstrdate_s](../VS_visualcpp/_strdate_s--_wstrdate_s.md)|Return current system date as string. The versions of these functions with the `_s` suffix are more secure.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[strftime, wcsftime, _strftime_l, _wcsftime_l](../VS_visualcpp/strftime--wcsftime--_strftime_l--_wcsftime_l.md)|Format date-and-time string for international use.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[_strtime, _wstrtime](../VS_visualcpp/_strtime--_wstrtime.md), [_strtime_s, _wstrtime_s](../VS_visualcpp/_strtime_s--_wstrtime_s.md)|Return current system time as string. The versions of these functions with the `_s` suffix are more secure.|[System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx), [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx), [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx), [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx), [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)|  
|[time, _time32, _time64](../VS_visualcpp/time--_time32--_time64.md)|Get current system time as type `time_t`, `__time32_t` or as type `__time64_t`.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_tzset](../VS_visualcpp/_tzset.md)|Set external time variables from environment time variable `TZ`.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../VS_visualcpp/_utime--_utime32--_utime64--_wutime--_wutime32--_wutime64.md)|Set modification time for specified file using either current time or time value stored in structure.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
> [!NOTE]
>  In all versions of Microsoft C/C++ except Microsoft C/C++ version 7.0, and in all versions of Visual C++, the time function returns the current time as the number of seconds elapsed since midnight on January 1, 1970. In Microsoft C/C++ version 7.0, `time` returned the current time as the number of seconds elapsed since midnight on December 31, 1899.  
  
> [!NOTE]
>  In versions of Visual C++ and Microsoft C/C++ before Visual C++ 2005, `time_t` was a `long int` (32 bits) and hence could not be used for dates past 3:14:07 January 19, 2038, UTC. `time_t` is now equivalent to `__time64_t` by default, but defining `_USE_32BIT_TIME_T` changes `time_t` to `__time32_t` and forces many time functions to call versions that take the 32-bit `time_t`. For more information, see [Standard Types](../VS_visualcpp/Standard-Types.md) and comments in the documentation for the individual time functions.  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)