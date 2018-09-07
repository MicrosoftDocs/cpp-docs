---
title: "_get_daylight | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["__daylight", "_get_daylight"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["get_daylight", "_get_daylight"]
dev_langs: ["C++"]
helpviewer_keywords: ["get_daylight function", "daylight saving time offset", "_get_daylight function"]
ms.assetid: f85a6ba3-e187-4ca7-aed7-ffc694c8ac4c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _get_daylight

Retrieves the daylight saving time offset in hours.

## Syntax

```C
error_t _get_daylight( int* hours );
```

### Parameters

*hours*<br/>
The offset in hours of daylight saving time.

## Return Value

Zero if successful or an **errno** value if an error occurs.

## Remarks

The **_get_daylight** function retrieves the number of hours in daylight saving time as an integer. If daylight saving time is in effect, the default offset is one hour (although a few regions do observe a two-hour offset).

If *hours* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

We recommend you use this function instead of the macro **_daylight** or the deprecated function **__daylight**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_daylight**|\<time.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_timezone](get-timezone.md)<br/>
[_get_tzname](get-tzname.md)<br/>
