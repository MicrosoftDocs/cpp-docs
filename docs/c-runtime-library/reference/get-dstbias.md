---
description: "Learn more about: _get_dstbias"
title: "_get_dstbias"
ms.date: "4/2/2020"
api_name: ["_get_dstbias", "__dstbias", "_o___dstbias", "_o__get_dstbias"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__dstbias", "_get_dstbias", "get_dstbias"]
helpviewer_keywords: ["__dstbias", "daylight saving time offset", "get_dstbias function", "_get_dstbias function"]
---
# `_get_dstbias`

Retrieves the daylight saving time offset in seconds.

## Syntax

```C
error_t _get_dstbias( long* seconds );
```

### Parameters

*`seconds`*\
The offset in seconds of daylight saving time.

## Return value

Zero if successful or an `errno` value if an error occurs.

## Remarks

The **`_get_dstbias`** function retrieves the number of seconds in daylight saving time as an integer. If daylight saving time is in effect, the default offset is 3600 seconds, which is the number of seconds in one hour (though a few regions do observe a two-hour offset).

If *`seconds`* is `NULL`, the invalid parameter handler is invoked as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.

We recommend you use this function instead of the macro **`_dstbias`** or the deprecated function **`__dstbias`**.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_get_dstbias`** | `<time.h>` |

For more information, see [Compatibility](../compatibility.md).

## See also

[Time management](../time-management.md)\
[`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md)\
[`_get_daylight`](get-daylight.md)\
[`_get_timezone`](get-timezone.md)\
[`_get_tzname`](get-tzname.md)
