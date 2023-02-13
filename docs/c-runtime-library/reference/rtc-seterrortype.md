---
description: "Learn more about: _RTC_SetErrorType"
title: "_RTC_SetErrorType"
ms.date: "11/04/2016"
api_name: ["_RTC_SetErrorType"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["RTC_SetErrorType", "_RTC_SetErrorType"]
helpviewer_keywords: ["run-time errors", "RTC_SetErrorType function", "_RTC_SetErrorType function"]
ms.assetid: f5f99be7-d357-4b11-b8f5-ddd3428f2b06
---
# `_RTC_SetErrorType`

Associates an error that is detected by run-time error checks (RTCs) with a type. Your error handler processes how to output errors of the specified type.

## Syntax

```C
int _RTC_SetErrorType(
   _RTC_ErrorNumber errnum,
   int ErrType
);
```

### Parameters

*`errnum`*\
A number between zero and one less than the value returned by [`_RTC_NumErrors`](rtc-numerrors.md).

*`ErrType`*\
A value to assign to this *`errnum`*. For example, you might use `_CRT_ERROR`. If you're using `_CrtDbgReport` as your error handler, *`ErrType`* can only be one of the symbols defined in [`_CrtSetReportMode`](crtsetreportmode.md). If you have your own error handler ([`_RTC_SetErrorFunc`](rtc-seterrorfunc.md)), you can have as many *`ErrType`* values as there are *`errnum`* values.

An *`ErrType`* of `_RTC_ERRTYPE_IGNORE` has special meaning to `_CrtSetReportMode`; the error is ignored.

## Return value

The previous value for the error type replaced by *`ErrType`*.

## Remarks

By default, all errors are set to *`ErrType`* = 1, which corresponds to `_CRT_ERROR`. For more information about the default error types such as `_CRT_ERROR`, see [`_CrtDbgReport`](crtdbgreport-crtdbgreportw.md).

Before you can call this function, you must first call one of the run-time error check initialization functions; see [Using runtime checks without the C runtime library](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library)

## Requirements

| Routine | Required header |
|---|---|
| **`_RTC_SetErrorType`** | \<rtcapi.h> |

For more information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[`_RTC_GetErrDesc`](rtc-geterrdesc.md)\
[Runtime error checking](../run-time-error-checking.md)
