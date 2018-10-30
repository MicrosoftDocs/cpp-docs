---
title: "_set_doserrno"
ms.date: "11/04/2016"
apiname: ["_set_doserrno"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_set_doserrno", "set_doserrno"]
helpviewer_keywords: ["_set_doserrno function", "doserrno global variable", "set_doserrno function", "_doserrno global variable"]
ms.assetid: 8686c159-3797-4705-a53e-7457869ca6f3
---
# _set_doserrno

Sets the value of the [_doserrno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) global variable.

## Syntax

```C
errno_t _set_doserrno( int error_value );
```

### Parameters

*error_value*<br/>
The new value of **_doserrno**.

## Return Value

Returns zero if successful.

## Remarks

Possible values are defined in Errno.h.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_set_doserrno**|\<stdlib.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_doserrno](get-doserrno.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
