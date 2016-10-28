---
title: "Standard Types"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "__time64_t"
  - "_diskfree_t"
  - "_CRT_DUMP_CLIENT"
  - "_fsize_t"
  - "__timeb64"
  - "File"
  - "__utimeb64"
  - "jmp_buf"
  - "__finddata64_t"
  - "_wfinddata_t"
  - "_finddata_t"
  - "utimbuf64"
  - "wint_t"
  - "wctrans_t"
  - "wctype_t"
  - "_HFILE"
  - "_secerr_handler_func"
  - "clock_t"
  - "fpos_t"
  - "_dev_t"
  - "time64_t"
  - "wfinddata64_t"
  - "stat64"
  - "ldiv_t"
  - "_EXCEPTION_POINTERS"
  - "terminate_function"
  - "size_t"
  - "timeb64"
  - "tm"
  - "_HEAPINFO"
  - "unexpected_function"
  - "_CrtMemState"
  - "_se_translator_function"
  - "sig_atomic_t"
  - "_CRT_REPORT_HOOK"
  - "_complex"
  - "_w_finddatai64_t"
  - "_timeb"
  - "_onexit_t"
  - "_RTC_ErrorNumber"
  - "lconv"
  - "_PNH"
  - "_off_t"
  - "ptrdiff_t"
  - "time_t"
  - "_FPIEEE_RECORD"
  - "_exception"
  - "__w_finddata64_t"
  - "__stat64"
  - "_utimbuf"
  - "__utimbuf64"
  - "div_t"
  - "_CRT_ALLOC_HOOK"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__timeb64 type"
  - "tm type"
  - "clock_t type"
  - "intptr_t type"
  - "diskfree_t type"
  - "wctype_t type"
  - "CRT_DUMP_CLIENT type"
  - "sig_atomic_t type"
  - "_PNH type"
  - "time_t type"
  - "wfinddata_t type"
  - "timeb64"
  - "CRT, standard types"
  - "wint_t type"
  - "_RTC_ErrorNumber type"
  - "_diskfree_t type"
  - "_dev_t type"
  - "_wfinddata_t type"
  - "HFILE type"
  - "__utimbuf64 type"
  - "div_t type"
  - "_onexit_t type"
  - "_secerr_handler_func type"
  - "FPIEEE_RECORD type"
  - "HEAPINFO type"
  - "PNH type"
  - "_CRT_ALLOC_HOOK type"
  - "_se_translater_function type"
  - "va_list type"
  - "wctrans_t type"
  - "secerr_handler_func type"
  - "_locale_t type"
  - "timeb type"
  - "lconv type"
  - "utimbuf type"
  - "dev_t type"
  - "unexpected_function typedef"
  - "_complex type"
  - "_off_t type"
  - "off_t type"
  - "RTC_ErrorNumber type"
  - "_FPIEEE_RECORD type"
  - "exception type"
  - "_CRT_REPORT_HOOK type"
  - "_HEAPINFO type"
  - "ldiv_t type"
  - "terminate_function type"
  - "uintptr_t type"
  - "_CRT_DUMP_CLIENT type"
  - "_utimbuf type"
  - "wfinddatai64_t type"
  - "fpos_t type"
  - "wchar_t type"
  - "CRT_ALLOC_HOOK type"
  - "_HFILE type"
  - "__time64_t type"
  - "_timeb type"
  - "CrtMemState type"
  - "__finddata64_t type"
  - "_exception type"
  - "stat type"
  - "onexit_t type"
  - "FILE constant"
  - "_stat type"
  - "finddata_t type"
  - "__wfinddata64_t type"
  - "ptrdiff_t type"
  - "complex types"
  - "_wfinddatai64_t type"
  - "_EXCEPTION_POINTERS type"
  - "jmp_buf type"
  - "se_translater_function type"
  - "size_t type"
  - "EXCEPTION_POINTERS type"
  - "__stat64 type"
  - "_fsize_t type"
  - "CRT_REPORT_HOOK type"
  - "_finddata_t type"
ms.assetid: 23312dd2-4a6a-4d70-9b48-2a5d0d8c9f28
caps.latest.revision: 27
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
# Standard Types
The Microsoft run-time library defines the following standard types and typedefs.  
  
### Fixed-width integral types (stdint.h)  
  
|Name|Equivalent built-in type|  
|----------|-------------------------------|  
|int8_t, uint8_t|signed char, unsigned char|  
|int16_t, int16_t|short, unsigned short|  
|int32_t, uint32_t|int, unsigned int|  
|int64_t, int64_t|long long, unsigned long long|  
|int_least8_t, uint_least8_t|signed char, unsigned char|  
|int_least16_t, uint_least16_t|short, unsigned short|  
|int_least32_t, uint_least32_t|int, unsigned int|  
|int_least64_t, uint_least64_t|long long, unsigned long long|  
|int_fast8_t, uint_fast8_t|signed char, unsigned char|  
|int_fast16_t, uint_fast16_t|int, unsigned int|  
|int_fast32_t, uint_fast32_t|int, unsigned int|  
|int_fast64_t, uint_fast64_t|long long, unsigned long long|  
|intmax_t, uintmax_t|long long, unsigned long long|  
  
|Type|Description|Declared in|  
|----------|-----------------|-----------------|  
|`clock_t` (long)|Stores time values; used by [clock](../crt/clock.md).|TIME.H|  
|`_complex` structure|Stores real and imaginary parts of complex numbers; used by [_cabs](../crt/_cabs.md).|MATH.H|  
|`_CRT_ALLOC_HOOK`|A type define for the user-defined hook function. Used in [_CrtSetAllocHook](../crt/_crtsetallochook.md).|CRTDBG.H|  
|`_CRT_DUMP_CLIENT`,<br /><br /> `_CRT_DUMP_CLIENT_M`|A type define for a call-back function that will get called in [_CrtMemDumpAllObjectsSince](../crt/_crtmemdumpallobjectssince.md).|CRTDBG.H|  
|`_CrtMemState` structure|Provides information about the current state of the C run-time debug heap.|CRTDBG.H|  
|`_CRT_REPORT_HOOK`,<br /><br /> `_CRT_REPORT_HOOKW`,<br /><br /> `_CRT_REPORT_HOOKW_M`|A type define for a call-back function that will get called in [_CrtDbgReport](../crt/_crtdbgreport--_crtdbgreportw.md).<br /><br /> The parameters for this function are: report type, output message and the return value from the call-back function.|CRTDBG.H|  
|`dev_t`, `_dev_t` short or unsigned integer|Represents device handles.|SYS\TYPES.H|  
|`_diskfree_t` structure|Contains information about a disk drive. Used by [_getdiskfree](../crt/_getdiskfree.md)**.**|DOS.H and DIRECT.H|  
|`div_t`, `ldiv_t` and `lldiv_t` structures|Store values returned by [div](../crt/div.md), [ldiv](../crt/ldiv--lldiv.md), and [lldiv](../crt/ldiv--lldiv.md), respectively.|STDLIB.H|  
|`errno_t` integer|Used for a function return type or parameter that deals with the error codes of `errno`.|STDDEF.H,<br /><br /> CRTDEFS.H|  
|`_exception` structure|Stores error information for [_matherr](../crt/_matherr.md).|MATH.H|  
|`_EXCEPTION_POINTERS`|Contains an exception record. See [EXCEPTION_POINTERS](http://msdn.microsoft.com/library/windows/desktop/ms679331) for more information.|FPIEEE.H|  
|`FILE` structure|Stores information about current state of stream; used in all stream I/O operations.|STDIO.H|  
|`_finddata_t`, `_wfinddata_t`, `_finddata32_t`, `_wfinddata32_t`, `_finddatai64_t`, `_wfinddatai64_t`, `__finddata64_t`, `__wfinddata64_t`, `__finddata32i64_t`, `__wfinddata32i64_t`, `__finddata64i32_t`, `__wfinddata64i32_t` structures|Store file-attribute information returned by [_findfirst, _wfindfirst, and related functions](../crt/9bb46d1a-b946-47de-845a-a0b109a33ead.md) and [_findnext, _wfindnext and related functions](../crt/75d97188-5add-4698-a46c-4c492378f0f8.md). See [Filename Search Functions](../crt/filename-search-functions.md) for information on structure members.|IO.H, WCHAR.H|  
|`_FPIEEE_RECORD` structure|Contains information pertaining to IEEE floating-point exception; passed to user-defined trap handler by [_fpieee_flt](../crt/_fpieee_flt.md).|FPIEEE.H|  
|`fpos_t` (long integer, `__int64`, or structure, depending on the target platform)|Used by [fgetpos](../crt/fgetpos.md) and [fsetpos](../crt/fsetpos.md) to record information for uniquely specifying every position within a file.|STDIO.H|  
|`_fsize_t` (unsigned long integer)|Used to represent the size of a file.|IO.H,<br /><br /> WCHAR.H|  
|`_HEAPINFO` structure|Contains information about next heap entry for [_heapwalk](../crt/_heapwalk.md).|MALLOC.H|  
|`_HFILE` (void *)|An operating system file handle.|CRTDBG.H|  
|`imaxdiv_t`|The type of value that's returned by the [imaxdiv](../crt/imaxdiv.md) function, containing both the quotient and the remainder.|inttypes.h|  
|`ino_t`, `_ino_t` (unsigned short)|For returning status information.|WCHAR.H|  
|`intmax_t`|A signed integer type capable of representing any value of any signed integer type.|stdint.h|  
|`intptr_t` (long integer or `__int64`, depending on the target platform)|Stores a pointer (or HANDLE) on both Win32 and Win64 platforms.|STDDEF.H and other include files|  
|`jmp_buf` array|Used by [setjmp](../crt/setjmp.md) and [longjmp](../crt/longjmp.md) to save and restore program environment.|SETJMP.H|  
|`lconv` structure|Contains formatting rules for numeric values in different countries/regions. Used by [localeconv](../crt/localeconv.md).|LOCALE.H|  
|`_LDOUBLE`,<br /><br /> `_LONGDOUBLE`,<br /><br /> `_LDBL12` (long double or an unsigned char array)|Use to represent a long double value.|STDLIB.H|  
|`_locale_t` structure|Stores current locale values; used in all locale specific C run-time libraries.|CRTDEF.H|  
|`mbstate_t`|Tracks the state of a multibyte character conversion.|WCHAR.H|  
|`off_t`, `_off_t` long integer|Represents file-offset value.|WCHAR.H, SYS\TYPES.H|  
|`_onexit_t`,<br /><br /> `_onexit_m_t` pointer|Returned by [_onexit, _onexit_m](../crt/_onexit--_onexit_m.md).|STDLIB.H|  
|`_PNH` pointer to function|Type of argument to [_set_new_handler](../crt/_set_new_handler.md).|NEW.H|  
|`ptrdiff_t` (long integer or `__int64`, depending on the target platform)|Result of subtraction of two pointers.|CRTDEFS.H|  
|`_purecall_handler`,<br /><br /> `_purecall_handler_m`|A type define for a call-back function that is called when a pure virtual function is called. Used by [_get_purecall_handler, _set_purecall_handler](../crt/_get_purecall_handler--_set_purecall_handler.md). A `_purecall_handler` function should have a void return type.|STDLIB.H|  
|`_RTC_error_fn` type define|A type define for a function that will handle run-time error checks. Used in [_RTC_SetErrorFunc](../crt/_rtc_seterrorfunc.md).|RTCAPI.H|  
|`_RTC_error_fnW` type define|A type define for a function that will handle run-time error checks. Used in [_RTC_SetErrorFuncW](../crt/_rtc_seterrorfuncw.md).|RTCAPI.H|  
|`_RTC_ErrorNumber` enumeration|Defines error conditions for [_RTC_GetErrDesc](../crt/_rtc_geterrdesc.md) and [_RTC_SetErrorType](../crt/_rtc_seterrortype.md).|RTCAPI.H|  
|`_se_translator_function`|A type define for a call-back function that translates an exception. The first parameter is the exception code and the second parameter is the exception record. Used by [_set_se_translator](../crt/_set_se_translator.md).|EH.H|  
|`sig_atomic_t` integer|Type of object that can be modified as atomic entity, even in presence of asynchronous interrupts; used with [signal](../crt/signal.md).|SIGNAL.H|  
|`size_t` (unsigned __int64 or unsigned integer, depending on the target platform)|Result of `sizeof` operator.|CRTDEFS.H and other include files|  
|`_stat` structure|Contains file-status information returned by [_stat](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md) and [_fstat](../crt/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md).|SYS\STAT.H|  
|`__stat64` structure|Contains file-status information returned by [_fstat64](../crt/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md) and [_stat64](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md), and [_wstat64](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md).|SYS\STAT.H|  
|`_stati64` structure|Contains file-status information returned by [_fstati64](../crt/_fstat--_fstat32--_fstat64--_fstati64--_fstat32i64--_fstat64i32.md), [_stati64](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md), and [_wstati64](../crt/99a75ae6-ff26-47ad-af70-5ea7e17226a5.md).|SYS\STAT.H|  
|`terminate_function` type define|A type define for a call-back function that is called when [terminate](../crt/terminate--crt-.md) is called. Used by [set_terminate](../crt/set_terminate--crt-.md).|EH.H|  
|`time_t` (__int64 or long integer)|Represents time values in [mktime](../crt/mktime--_mktime32--_mktime64.md), [time](../crt/time--_time32--_time64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../crt/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../crt/ctime_s--_ctime32_s--_ctime64_s--_wctime_s--_wctime32_s--_wctime64_s.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../crt/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md) and [gmtime, _gmtime32, _gmtime64](../crt/gmtime--_gmtime32--_gmtime64.md). The number of seconds since January 1, 1970, 0:00 UTC. If _USE_32BIT_TIME_T is defined, `time_t` is a long integer. If not defined, it is a 64-bit integer.|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|`__time32_t` (long integer)|Represents time values in [mktime, _mktime32, _mktime64](../crt/mktime--_mktime32--_mktime64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../crt/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../crt/ctime_s--_ctime32_s--_ctime64_s--_wctime_s--_wctime32_s--_wctime64_s.md), [gmtime, _gmtime32, _gmtime64](../crt/gmtime--_gmtime32--_gmtime64.md) and [localtime, _localtime32, _localtime64](../crt/localtime--_localtime32--_localtime64.md).|CRTDEFS.H, SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|`__time64_t` (`__int64`)|Represents time values in [mktime, _mktime32, _mktime64](../crt/mktime--_mktime32--_mktime64.md), [_ctime64, _wctime64](../crt/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../crt/ctime_s--_ctime32_s--_ctime64_s--_wctime_s--_wctime32_s--_wctime64_s.md), [_gmtime64](../crt/gmtime--_gmtime32--_gmtime64.md), [_localtime64](../crt/localtime--_localtime32--_localtime64.md) and [_time64](../crt/time--_time32--_time64.md).|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|`_timeb` structure|Used by [_ftime](../crt/_ftime--_ftime32--_ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../crt/_ftime_s--_ftime32_s--_ftime64_s.md) to store current system time.|SYS\TIMEB.H|  
|`__timeb32` structure|Used by [_ftime, _ftime32, _ftime64](../crt/_ftime--_ftime32--_ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../crt/_ftime_s--_ftime32_s--_ftime64_s.md) to store current system time.|SYS\TIMEB.H|  
|`__timeb64` structure|Used by [_ftime64](../crt/_ftime--_ftime32--_ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../crt/_ftime_s--_ftime32_s--_ftime64_s.md) to store current system time.|SYS\TIMEB.H|  
|`tm` structure|Used by [asctime, _wasctime](../crt/asctime--_wasctime.md), [asctime_s, _wasctime_s](../crt/asctime_s--_wasctime_s.md), [gmtime, _gmtime32, _gmtime64](../crt/gmtime--_gmtime32--_gmtime64.md), [gmtime_s, _gmtime32_s, _gmtime64_s](../crt/gmtime_s--_gmtime32_s--_gmtime64_s.md), [localtime, _localtime32, _localtime64](../crt/localtime--_localtime32--_localtime64.md), [localtime_s, _localtime32_s, _localtime64_s](../crt/localtime_s--_localtime32_s--_localtime64_s.md), [mktime, _mktime32, _mktime64](../crt/mktime--_mktime32--_mktime64.md) and [strftime, wcsftime, _strftime_l, _wcsftime_l](../crt/strftime--wcsftime--_strftime_l--_wcsftime_l.md) to store and retrieve time information.|TIME.H|  
|`uintmax_t`|An unsigned integer type capable of representing any value of any unsigned integer type.|stdint.h|  
|`uintptr_t` (long integer or `__int64`, depending on the target platform)|An unsigned integer or unsigned __int64 version of `intptr_t`.|STDDEF.H and other include files|  
|`unexpected_function`|A type define for a call-back function that is called when [unexpected](../crt/unexpected--crt-.md) is called. Used by [set_unexpected](../crt/set_unexpected--crt-.md).|EH.H|  
|`_utimbuf` structure|Stores file access and modification times used by [_utime, _wutime](../crt/_utime--_utime32--_utime64--_wutime--_wutime32--_wutime64.md) and [_futime, _futime32, _futime64](../crt/_futime--_futime32--_futime64.md) to change file-modification dates.|SYS\UTIME.H|  
|`_utimbuf32` structure|Stores file access and modification times used by [_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../crt/_utime--_utime32--_utime64--_wutime--_wutime32--_wutime64.md) and [_futime, _futime32, _futime64](../crt/_futime--_futime32--_futime64.md) to change file-modification dates.|SYS\UTIME.H|  
|`__utimbuf64` structure|Used by [_utime64, _wutime64](../crt/_utime--_utime32--_utime64--_wutime--_wutime32--_wutime64.md) and [_futime64](../crt/_futime--_futime32--_futime64.md) to store the current time.|SYS\UTIME.H|  
|`va_list` structure|Used to hold information needed by [va_arg](../crt/va_arg--va_copy--va_end--va_start.md) and [va_end](../crt/va_arg--va_copy--va_end--va_start.md) macros. Called function declares variable of type `va_list` that can be passed as argument to another function.|STDARG.H,<br /><br /> CRTDEFS.H|  
|`wchar_t` wide character|Useful for writing portable programs for international markets.|STDDEF.H, STDLIB.H,<br /><br /> CRTDEFS.H,<br /><br /> SYS\STAT.H|  
|`wctrans_t` integer|Represents locale-specific character mappings.|WCTYPE.H|  
|`wctype_t` integer|Can represent all characters of any language character set.|WCHAR.H,<br /><br /> CRTDEFS.H|  
|`wint_t` integer|Type of data object that can hold any wide character or wide end-of-file value.|WCHAR.H,<br /><br /> CRTDEFS.H|  
  
## See Also  
 [C Run-Time Library Reference](../crt/c-run-time-library-reference.md)