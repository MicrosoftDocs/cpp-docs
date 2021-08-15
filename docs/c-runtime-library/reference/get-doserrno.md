---
description: "Learn more about: _get_doserrno"
title: "_get_doserrno"
ms.date: "4/2/2020"
api_name: ["_get_doserrno", "_o__get_doserrno"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_doserrno", "get_doserrno"]
helpviewer_keywords: ["get_doserrno function", "_get_doserrno function"]
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
---
# _get_doserrno

Gets the error value returned by the operating system before it is translated into an **errno** value.

## Syntax

```C
errno_t _get_doserrno(
   int * pValue
);
```

### Parameters

*pValue*<br/>
A pointer to an integer to be filled with the current value of the **_doserrno** global macro.

## Return Value

If **_get_doserrno** succeeds, it returns zero; if it fails, it returns an error code. If *pValue* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

## Remarks

The **_doserrno** global macro is set to zero during CRT initialization, before process execution begins. It is set to the operating-system error value returned by any system-level function call that returns an operating-system error, and it is never reset to zero during execution. When you write code to check the error value returned by a function, always clear **_doserrno** by using [_set_doserrno](set-doserrno.md) before the function call. Because another function call may overwrite **_doserrno**, check the value by using **_get_doserrno** immediately after the function call.

We recommend [_get_errno](get-errno.md) instead of **_get_doserrno** for portable error codes.

Possible values of **_doserrno** are defined in \<errno.h>.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_get_doserrno**|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

**_get_doserrno** is a Microsoft extension. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_set_doserrno](set-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
