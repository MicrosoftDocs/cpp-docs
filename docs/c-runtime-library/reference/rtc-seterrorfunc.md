---
description: "Learn more about: _RTC_SetErrorFunc"
title: "_RTC_SetErrorFunc"
ms.date: "11/04/2016"
api_name: ["_RTC_SetErrorFunc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["RTC_SetErrorFunc", "_RTC_SetErrorFunc"]
helpviewer_keywords: ["RTC_SetErrorFunc function", "_RTC_SetErrorFunc function"]
ms.assetid: b2292722-0d83-4092-83df-3d5b19880666
---
# _RTC_SetErrorFunc

Designates a function as the handler for reporting run-time error checks (RTCs). This function is deprecated; use **_RTC_SetErrorFuncW** instead.

## Syntax

```C
_RTC_error_fn _RTC_SetErrorFunc(
   _RTC_error_fn function
);
```

### Parameters

*function*<br/>
The address of the function that will handle run-time error checks.

## Return Value

The previously defined error function. If there is no previously defined function, returns **NULL**.

## Remarks

Do not use this function; instead, use **_RTC_SetErrorFuncW**. It is retained only for backward compatibility.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_RTC_SetErrorFunc**|\<rtcapi.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md)<br/>
[Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)<br/>
