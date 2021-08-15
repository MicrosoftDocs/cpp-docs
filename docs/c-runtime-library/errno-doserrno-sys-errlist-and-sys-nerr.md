---
description: "Learn more about: errno, _doserrno, _sys_errlist, and _sys_nerr"
title: "errno, _doserrno, _sys_errlist, and _sys_nerr"
ms.date: "11/04/2016"
api_name: ["_errno"]
api_location: ["msvcrt.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_sys_errlist", "errno", "_sys_nerr", "_doserrno"]
helpviewer_keywords: ["error codes, printing", "sys_errlist global variable", "doserrno global variable", "errno global variable", "_doserrno global variable", "_sys_errlist global variable", "_sys_nerr global variable", "sys_nerr global variable"]
ms.assetid: adbec641-6d91-4e19-8398-9a34046bd369
---
# `errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`

Global macros that hold error codes that are set during program execution, and string equivalents of the error codes for display.

## Syntax

```
#define errno   (*_errno())
#define _doserrno   (*__doserrno())
#define _sys_errlist (__sys_errlist())
#define _sys_nerr (*__sys_nerr())
```

## Remarks

Both `errno` and `_doserrno` are set to 0 by the runtime during program startup. `errno` is set on an error in a system-level call. Because `errno` holds the value for the last call that set it, this value may be changed by succeeding calls. Run-time library calls that set `errno` on an error do not clear `errno` on success. Always clear `errno` by calling `_set_errno(0)` immediately before a call that may set it, and check it immediately after the call.

On an error, `errno` is not necessarily set to the same value as the error code returned by a system call. For I/O operations, `_doserrno` stores the operating-system error-code equivalents of `errno` codes. For most non-I/O operations, the value of `_doserrno` is not set.

Each `errno` value is associated with an error message in `_sys_errlist` that can be printed by using one of the [`perror`](../c-runtime-library/reference/perror-wperror.md) functions, or stored in a string by using one of the [`strerror`](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md) or [`strerror_s`](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) functions. The `perror` and `strerror` functions use the `_sys_errlist` array and `_sys_nerr`—the number of elements in `_sys_errlist`—to process error information. Direct access to `_sys_errlist` and `_sys_nerr` is deprecated for code-security reasons. We recommend that you use the more secure, functional versions instead of the global macros, as shown here:

|Global Macro|Functional Equivalents|
|------------------|----------------------------|
|`_doserrno`|[`_get_doserrno`](../c-runtime-library/reference/get-doserrno.md), [`_set_doserrno`](../c-runtime-library/reference/set-doserrno.md)|
|`errno`|[`_get_errno`](../c-runtime-library/reference/get-errno.md), [`_set_errno`](../c-runtime-library/reference/set-errno.md)|
|`_sys_errlist`, `_sys_nerr`|[`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)|

Library math routines set `errno` by calling [`_matherr`](../c-runtime-library/reference/matherr.md). To handle math errors differently, write your own routine according to the `_matherr` reference description and name it `_matherr`.

All `errno` values are predefined constants in `<errno.h>`, and are UNIX-compatible. Only `ERANGE`, `EILSEQ`, and `EDOM` are specified in the ISO C99 standard. For a complete list, see [errno Constants](../c-runtime-library/errno-constants.md).

## Requirements

|Global macro|Required header|Optional header|
|------------------|---------------------|---------------------|
|`errno`|`<errno.h>` or `<stdlib.h>`, `<cerrno>` or `<cstdlib>` (C++)||
|`_doserrno`, `_sys_errlist`, `_sys_nerr`|`<stdlib.h>`, `<cstdlib>` (C++)|`<errno.h>`, `<cerrno>` (C++)|

The `_doserrno`, `_sys_errlist`, and `_sys_nerr` macros are Microsoft extensions. For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).

## See also

[Global Variables](../c-runtime-library/global-variables.md)<br/>
[`errno` Constants](../c-runtime-library/errno-constants.md)<br/>
[`perror`, `_wperror`](../c-runtime-library/reference/perror-wperror.md)<br/>
[`strerror`, `_strerror`, `_wcserror`, `__wcserror`](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)<br/>
[`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)<br/>
[`_get_doserrno`](../c-runtime-library/reference/get-doserrno.md)<br/>
[`_set_doserrno`](../c-runtime-library/reference/set-doserrno.md)<br/>
[`_get_errno`](../c-runtime-library/reference/get-errno.md)<br/>
[`_set_errno`](../c-runtime-library/reference/set-errno.md)
