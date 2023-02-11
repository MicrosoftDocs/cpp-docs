---
description: "Learn more about: timespec_get, _timespec32_get, _timespec64_get"
title: "timespec_get, _timespec32_get, _timespec64_get1"
ms.date: "4/2/2020"
api_name: ["timespec_get", "_timespec32_get", "_timespec64_get", "_o__timespec32_get", "_o__timespec64_get"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["TIME/timespec_get", "TIME/_timespec32_get", "TIME/_timespec64_get", "TIME/timespec", "TIME/_timespec32", "TIME/_timespec64", "timespec_get", "_timespec32_get", "_timespec64_get", "timespec", "_timespec32", "_timespec64"]
helpviewer_keywords: ["timespec_get function", "_timespec32_get function", "_timespec64_get function"]
ms.assetid: ed757258-b4f2-4c1d-a91b-22ea6ffce4ab
---
# `timespec_get`, `_timespec32_get`, `_timespec64_get`

Sets the interval pointed to by the first argument to the current calendar time, based on the specified time base.

## Syntax

```C
int timespec_get(
    struct timespec* const time_spec,
    int const base
);
int _timespec32_get(
    struct _timespec32* const time_spec,
    int const base
);
int _timespec64_get(
    struct _timespec64* const time_spec,
    int const base
);
```

### Parameters

*`time_spec`*\
Pointer to a struct that is set to the time in seconds and nanoseconds since the start of the epoch.

*`base`*\
A non-zero implementation-specific value that specifies the time base.

## Return value

The value of *`base`* if successful, otherwise it returns zero.

## Remarks

The **`timespec_get`** functions set the current time in the struct pointed to by the *`time_spec`* argument. All versions of this struct have two members, `tv_sec` and `tv_nsec`. The `tv_sec` value is set to the whole number of seconds and `tv_nsec` to the integral number of nanoseconds, rounded to the resolution of the system clock, since the start of the epoch specified by *`base`*.

**Microsoft Specific**

These functions support only `TIME_UTC` as the *`base`* value. `TIME_UTC` sets the *`time_spec`* value to the number of seconds and nanoseconds since the epoch start, Midnight, January 1, 1970, Coordinated Universal Time (UTC). In a `_timespec32`, `tv_sec` is a `__time32_t` value. In a `_timespec64`, `tv_sec` is a `__time64_t` value. In a `timespec`, `tv_sec` is a `time_t` type, which is 32 bits or 64 bits in length depending on whether the preprocessor macro  _USE_32BIT_TIME_T is defined. The **`timespec_get`** function is an inline function that calls **`_timespec32_get`** if `_USE_32BIT_TIME_T` is defined; otherwise it calls **`_timespec64_get`**.

**End Microsoft Specific**

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`timespec_get`**, **`_timespec32_get`**, **`_timespec64_get`** | C: \<time.h>, C++: \<ctime> or \<time.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Time management](../time-management.md)\
[`asctime`, `_wasctime`](asctime-wasctime.md)\
[`asctime_s`, `_wasctime_s`](asctime-s-wasctime-s.md)\
[`_ftime`, `_ftime32`, `_ftime64`](ftime-ftime32-ftime64.md)\
[`gmtime`, `_gmtime32`, `_gmtime64`](gmtime-gmtime32-gmtime64.md)\
[`gmtime_s`, `_gmtime32_s`, `_gmtime64_s`](gmtime-s-gmtime32-s-gmtime64-s.md)\
[`localtime`, `_localtime32`, `_localtime64`](localtime-localtime32-localtime64.md)\
[`localtime_s`, `_localtime32_s`, `_localtime64_s`](localtime-s-localtime32-s-localtime64-s.md)\
[`time`, `_time32`, `_time64`](time-time32-time64.md)\
[`_utime`, `_utime32`, `_utime64`, `_wutime`, `_wutime32`, `_wutime64`](utime-utime32-utime64-wutime-wutime32-wutime64.md)
