---
description: "Learn more about: _get_timezone"
title: "_get_timezone"
ms.date: "4/2/2020"
api_name: ["_get_timezone", "_o__get_timezone"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_timezone", "get_timezone"]
helpviewer_keywords: ["time zones", "get_timezone function", "_get_timezone function"]
ms.assetid: 30ab0838-0ae9-4a2f-bfe6-a49ee443b21e
---
# _get_timezone

Retrieves the difference in seconds between coordinated universal time (UTC) and local time.

## Syntax

```C
error_t _get_timezone(
    long* seconds
);
```

### Parameters

*seconds*<br/>
The difference in seconds between UTC and local time.

## Return Value

Zero if successful or an **errno** value if an error occurs.

## Remarks

The **_get_timezone** function retrieves the difference in seconds between UTC and local time as an integer. The default value is 28,800 seconds, for Pacific Standard Time (eight hours behind UTC).

If *seconds* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_timezone**|\<time.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_tzname](get-tzname.md)<br/>
