---
description: "Learn more about: Standard Types"
title: "Standard Types"
ms.date: "11/04/2016"
f1_keywords: ["__time64_t", "_diskfree_t", "_CRT_DUMP_CLIENT", "_fsize_t", "__timeb64", "File", "__utimeb64", "jmp_buf", "__finddata64_t", "_wfinddata_t", "_finddata_t", "utimbuf64", "wint_t", "wctrans_t", "wctype_t", "_HFILE", "_secerr_handler_func", "clock_t", "fpos_t", "_dev_t", "time64_t", "wfinddata64_t", "stat64", "ldiv_t", "_EXCEPTION_POINTERS", "terminate_function", "size_t", "timeb64", "tm", "_HEAPINFO", "unexpected_function", "_CrtMemState", "_se_translator_function", "sig_atomic_t", "_CRT_REPORT_HOOK", "_complex", "_w_finddatai64_t", "_timeb", "_onexit_t", "_RTC_ErrorNumber", "lconv", "_PNH", "_off_t", "ptrdiff_t", "time_t", "_FPIEEE_RECORD", "_exception", "__w_finddata64_t", "__stat64", "_utimbuf", "__utimbuf64", "div_t", "_CRT_ALLOC_HOOK", "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "int64_t", "int_least8_t", "uint_least8_t", "int_least16_t", "uint_least16_t", "int_least32_t", "uint_least32_t", "int_least64_t", "uint_least64_t", "int_fast8_t", "uint_fast8_t", "int_fast16_t", "uint_fast16_t", "int_fast32_t", "uint_fast32_t", "int_fast64_t", "uint_fast64_t", "intmax_t", "uintmax_t"]
helpviewer_keywords: ["__timeb64 type", "tm type", "clock_t type", "intptr_t type", "diskfree_t type", "wctype_t type", "CRT_DUMP_CLIENT type", "sig_atomic_t type", "_PNH type", "time_t type", "wfinddata_t type", "timeb64", "CRT, standard types", "wint_t type", "_RTC_ErrorNumber type", "_diskfree_t type", "_dev_t type", "_wfinddata_t type", "HFILE type", "__utimbuf64 type", "div_t type", "_onexit_t type", "_secerr_handler_func type", "FPIEEE_RECORD type", "HEAPINFO type", "PNH type", "_CRT_ALLOC_HOOK type", "_se_translater_function type", "va_list type", "wctrans_t type", "secerr_handler_func type", "_locale_t type", "timeb type", "lconv type", "utimbuf type", "dev_t type", "unexpected_function typedef", "_complex type", "_off_t type", "off_t type", "RTC_ErrorNumber type", "_FPIEEE_RECORD type", "exception type", "_CRT_REPORT_HOOK type", "_HEAPINFO type", "ldiv_t type", "terminate_function type", "uintptr_t type", "_CRT_DUMP_CLIENT type", "_utimbuf type", "wfinddatai64_t type", "fpos_t type", "wchar_t type", "CRT_ALLOC_HOOK type", "_HFILE type", "__time64_t type", "_timeb type", "CrtMemState type", "__finddata64_t type", "_exception type", "stat type", "onexit_t type", "FILE constant", "_stat type", "finddata_t type", "__wfinddata64_t type", "ptrdiff_t type", "complex types", "_wfinddatai64_t type", "_EXCEPTION_POINTERS type", "jmp_buf type", "se_translater_function type", "size_t type", "EXCEPTION_POINTERS type", "__stat64 type", "_fsize_t type", "CRT_REPORT_HOOK type", "_finddata_t type"]
ms.assetid: 23312dd2-4a6a-4d70-9b48-2a5d0d8c9f28
---
# Standard Types

The Microsoft run-time library defines the following standard types and typedefs.

### Fixed-width integral types (stdint.h)

|Name|Equivalent built-in type|
|----------|-------------------------------|
|int8\_t, uint8\_t|signed char, unsigned char|
|int16\_t, uint16\_t|short, unsigned short|
|int32\_t, uint32\_t|int, unsigned int|
|int64\_t, uint64\_t|long long, unsigned long long|
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
|`clock_t` (long)|Stores time values; used by [clock](../c-runtime-library/reference/clock.md).|TIME.H|
|`_complex` structure|Stores real and imaginary parts of complex numbers; used by [_cabs](../c-runtime-library/reference/cabs.md).|MATH.H|
|`_CRT_ALLOC_HOOK`|A type define for the user-defined hook function. Used in [_CrtSetAllocHook](../c-runtime-library/reference/crtsetallochook.md).|CRTDBG.H|
|`_CRT_DUMP_CLIENT`,<br /><br /> `_CRT_DUMP_CLIENT_M`|A type define for a call-back function that will get called in [_CrtMemDumpAllObjectsSince](../c-runtime-library/reference/crtmemdumpallobjectssince.md).|CRTDBG.H|
|`_CrtMemState` structure|Provides information about the current state of the C run-time debug heap.|CRTDBG.H|
|`_CRT_REPORT_HOOK`,<br /><br /> `_CRT_REPORT_HOOKW`,<br /><br /> `_CRT_REPORT_HOOKW_M`|A type define for a call-back function that will get called in [_CrtDbgReport](../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).<br /><br /> The parameters for this function are: report type, output message and the return value from the call-back function.|CRTDBG.H|
|`dev_t`, `_dev_t` short or unsigned integer|Represents device handles.|SYS\TYPES.H|
|`_diskfree_t` structure|Contains information about a disk drive. Used by [_getdiskfree](../c-runtime-library/reference/getdiskfree.md)**.**|DOS.H and DIRECT.H|
|`div_t`, `ldiv_t` and `lldiv_t` structures|Store values returned by [div](reference/div.md), [ldiv](./reference/div.md), and [lldiv](./reference/div.md), respectively.|STDLIB.H|
|`errno_t` integer|Used for a function return type or parameter that deals with the error codes of `errno`.|STDDEF.H,<br /><br /> CRTDEFS.H|
|`_exception` structure|Stores error information for [_matherr](../c-runtime-library/reference/matherr.md).|MATH.H|
|`_EXCEPTION_POINTERS`|Contains an exception record. See [EXCEPTION_POINTERS](/windows/win32/api/winnt/ns-winnt-exception_pointers) for more information.|FPIEEE.H|
|`FILE` structure|Stores information about current state of stream; used in all stream I/O operations.|STDIO.H|
|`_finddata_t`, `_wfinddata_t`, `_finddata32_t`, `_wfinddata32_t`, `_finddatai64_t`, `_wfinddatai64_t`, `__finddata64_t`, `__wfinddata64_t`, `__finddata32i64_t`, `__wfinddata32i64_t`, `__finddata64i32_t`, `__wfinddata64i32_t` structures|Store file-attribute information returned by [_findfirst, _wfindfirst, and related functions](../c-runtime-library/reference/findfirst-functions.md) and [_findnext, _wfindnext and related functions](../c-runtime-library/reference/findnext-functions.md). See [Filename Search Functions](../c-runtime-library/filename-search-functions.md) for information on structure members.|IO.H, WCHAR.H|
|`_FPIEEE_RECORD` structure|Contains information pertaining to IEEE floating-point exception; passed to user-defined trap handler by [_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md).|FPIEEE.H|
|`fpos_t` (long integer, **`__int64`**, or structure, depending on the target platform)|Used by [fgetpos](../c-runtime-library/reference/fgetpos.md) and [fsetpos](../c-runtime-library/reference/fsetpos.md) to record information for uniquely specifying every position within a file.|STDIO.H|
|`_fsize_t` (unsigned long integer)|Used to represent the size of a file.|IO.H,<br /><br /> WCHAR.H|
|`_HEAPINFO` structure|Contains information about next heap entry for [_heapwalk](../c-runtime-library/reference/heapwalk.md).|MALLOC.H|
|`_HFILE` (void \*)|An operating system file handle.|CRTDBG.H|
|`imaxdiv_t`|The type of value that's returned by the [imaxdiv](../c-runtime-library/reference/imaxdiv.md) function, containing both the quotient and the remainder.|inttypes.h|
|`ino_t`, `_ino_t` (unsigned short)|For returning status information.|WCHAR.H|
|`intmax_t`|A signed integer type capable of representing any value of any signed integer type.|stdint.h|
|`intptr_t` (long integer or **`__int64`**, depending on the target platform)|Stores a pointer (or HANDLE) on both Win32 and Win64 platforms.|STDDEF.H and other include files|
|`jmp_buf` array|Used by [setjmp](../c-runtime-library/reference/setjmp.md) and [longjmp](../c-runtime-library/reference/longjmp.md) to save and restore program environment.|SETJMP.H|
|`lconv` structure|Contains formatting rules for numeric values in different countries/regions. Used by [localeconv](../c-runtime-library/reference/localeconv.md).|LOCALE.H|
|`_LDOUBLE`,<br /><br /> `_LONGDOUBLE`,<br /><br /> `_LDBL12` (long double or an unsigned char array)|Use to represent a long double value.|STDLIB.H|
|`_locale_t` structure|Stores current locale values; used in all locale specific C run-time libraries.|CRTDEFS.H|
|`mbstate_t`|Tracks the state of a multibyte character conversion.|WCHAR.H|
|`off_t`, `_off_t` long integer|Represents file-offset value.|WCHAR.H, SYS\TYPES.H|
|`_onexit_t`,<br /><br /> `_onexit_m_t` pointer|Returned by [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md).|STDLIB.H|
|`_PNH` pointer to function|Type of argument to [_set_new_handler](../c-runtime-library/reference/set-new-handler.md).|NEW.H|
|`ptrdiff_t` (long integer or **`__int64`**, depending on the target platform)|Result of subtraction of two pointers.|CRTDEFS.H|
|`_purecall_handler`,<br /><br /> `_purecall_handler_m`|A type define for a call-back function that is called when a pure virtual function is called. Used by [_get_purecall_handler, _set_purecall_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md). A `_purecall_handler` function should have a void return type.|STDLIB.H|
|`_RTC_error_fn` type define|A type define for a function that will handle run-time error checks. Used in [_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md).|RTCAPI.H|
|`_RTC_error_fnW` type define|A type define for a function that will handle run-time error checks. Used in [_RTC_SetErrorFuncW](../c-runtime-library/reference/rtc-seterrorfuncw.md).|RTCAPI.H|
|`_RTC_ErrorNumber` enumeration|Defines error conditions for [_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md) and [_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md).|RTCAPI.H|
|`_se_translator_function`|A type define for a call-back function that translates an exception. The first parameter is the exception code and the second parameter is the exception record. Used by [_set_se_translator](../c-runtime-library/reference/set-se-translator.md).|EH.H|
|`sig_atomic_t` integer|Type of object that can be modified as atomic entity, even in presence of asynchronous interrupts; used with [signal](../c-runtime-library/reference/signal.md).|SIGNAL.H|
|`size_t` (unsigned __int64 or unsigned integer, depending on the target platform)|Result of **`sizeof`** operator.|CRTDEFS.H and other include files|
|`_stat` structure|Contains file-status information returned by [_stat](../c-runtime-library/reference/stat-functions.md) and [_fstat](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md).|SYS\STAT.H|
|`__stat64` structure|Contains file-status information returned by [_fstat64](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md) and [_stat64](../c-runtime-library/reference/stat-functions.md), and [_wstat64](../c-runtime-library/reference/stat-functions.md).|SYS\STAT.H|
|`_stati64` structure|Contains file-status information returned by [_fstati64](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md), [_stati64](../c-runtime-library/reference/stat-functions.md), and [_wstati64](../c-runtime-library/reference/stat-functions.md).|SYS\STAT.H|
|`terminate_function` type define|A type define for a call-back function that is called when [terminate](../c-runtime-library/reference/terminate-crt.md) is called. Used by [set_terminate](../c-runtime-library/reference/set-terminate-crt.md).|EH.H|
|`time_t` (__int64 or long integer)|Represents time values in [mktime](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [time](../c-runtime-library/reference/time-time32-time64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) and [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md). The number of seconds since January 1, 1970, 0:00 UTC. If _USE_32BIT_TIME_T is defined, `time_t` is a long integer. If not defined, it is a 64-bit integer.|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|
|`__time32_t` (long integer)|Represents time values in [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) and [localtime, _localtime32, _localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md).|CRTDEFS.H, SYS\STAT.H,<br /><br /> SYS\TIMEB.H|
|`__time64_t` (**`__int64`**)|Represents time values in [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [_ctime64, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [_gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [_localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md) and [_time64](../c-runtime-library/reference/time-time32-time64.md).|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|
|`_timeb` structure|Used by [_ftime](../c-runtime-library/reference/ftime-ftime32-ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) to store current system time.|SYS\TIMEB.H|
|`__timeb32` structure|Used by [_ftime, _ftime32, _ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) to store current system time.|SYS\TIMEB.H|
|`__timeb64` structure|Used by [_ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md) and [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) to store current system time.|SYS\TIMEB.H|
|`tm` structure|Used by [asctime, _wasctime](../c-runtime-library/reference/asctime-wasctime.md), [asctime_s, _wasctime_s](../c-runtime-library/reference/asctime-s-wasctime-s.md), [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [gmtime_s, _gmtime32_s, _gmtime64_s](../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), [localtime, _localtime32, _localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md), [localtime_s, _localtime32_s, _localtime64_s](../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md) and [strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) to store and retrieve time information.|TIME.H|
|`uintmax_t`|An unsigned integer type capable of representing any value of any unsigned integer type.|stdint.h|
|`uintptr_t` (long integer or **`__int64`**, depending on the target platform)|An unsigned integer or unsigned __int64 version of `intptr_t`.|STDDEF.H and other include files|
|`unexpected_function`|A type define for a call-back function that is called when [unexpected](../c-runtime-library/reference/unexpected-crt.md) is called. Used by [set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md).|EH.H|
|`_utimbuf` structure|Stores file access and modification times used by [_utime, _wutime](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) and [_futime, _futime32, _futime64](../c-runtime-library/reference/futime-futime32-futime64.md) to change file-modification dates.|SYS\UTIME.H|
|`_utimbuf32` structure|Stores file access and modification times used by [_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) and [_futime, _futime32, _futime64](../c-runtime-library/reference/futime-futime32-futime64.md) to change file-modification dates.|SYS\UTIME.H|
|`__utimbuf64` structure|Used by [_utime64, _wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) and [_futime64](../c-runtime-library/reference/futime-futime32-futime64.md) to store the current time.|SYS\UTIME.H|
|`va_list` structure|Used to hold information needed by [va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) and [va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) macros. Called function declares variable of type `va_list` that can be passed as argument to another function.|STDARG.H,<br /><br /> CRTDEFS.H|
|**`wchar_t`** wide character|Useful for writing portable programs for international markets.|STDDEF.H, STDLIB.H,<br /><br /> CRTDEFS.H,<br /><br /> SYS\STAT.H|
|`wctrans_t` integer|Represents locale-specific character mappings.|WCTYPE.H|
|`wctype_t` integer|Can represent all characters of any language character set.|WCHAR.H,<br /><br /> CRTDEFS.H|
|`wint_t` integer|Type of data object that can hold any wide character or wide end-of-file value.|WCHAR.H,<br /><br /> CRTDEFS.H|

## See also

[C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)
