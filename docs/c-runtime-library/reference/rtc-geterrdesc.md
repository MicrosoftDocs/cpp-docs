---
title: "_RTC_GetErrDesc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_RTC_GetErrDesc"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["RTC_GetErrDesc", "_RTC_GetErrDesc"]
dev_langs: ["C++"]
helpviewer_keywords: ["run-time errors", "_RTC_GetErrDesc function", "RTC_GetErrDesc function"]
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _RTC_GetErrDesc

Returns a brief description of a run-time error check (RTC) type.

## Syntax

```C
const char * _RTC_GetErrDesc(
   _RTC_ErrorNumber errnum
);
```

### Parameters

*errnum*<br/>
A number between zero and one less than the value returned by **_RTC_NumErrors**.

## Return Value

A character string that contains a short description of one of the error types detected by the run-time error check system. If error is less than zero or greater than or equal to the value returned by [_RTC_NumErrors](rtc-numerrors.md), **_RTC_GetErrDesc** returns **NULL**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_RTC_GetErrDesc**|\<rtcapi.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[_RTC_NumErrors](rtc-numerrors.md)<br/>
[Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)<br/>
