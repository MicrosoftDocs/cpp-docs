---
title: "_RTC_NumErrors"
description: "Learn more about: _RTC_NumErrors"
ms.date: "11/04/2016"
api_name: ["_RTC_NumErrors"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_RTC_NumErrors", "RTC_NumErrors"]
helpviewer_keywords: ["run-time errors", "_RTC_NumErrors function", "RTC_NumErrors function"]
---
# `_RTC_NumErrors`

Returns the total number of errors that can be detected by run-time error checks (RTC). You can use this number as the control in a **`for`** loop, where each value in the loop is passed to [`_RTC_GetErrDesc`](rtc-geterrdesc.md).

## Syntax

```C
int _RTC_NumErrors( void );
```

## Return value

An integer whose value represents the total number of errors that can be detected by the Visual C++ run-time error checks.

## Requirements

| Routine | Required header |
|---|---|
| **`_RTC_NumErrors`** | \<rtcapi.h> |

For more information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[`_RTC_GetErrDesc`](rtc-geterrdesc.md)\
[Runtime error checking](../run-time-error-checking.md)
