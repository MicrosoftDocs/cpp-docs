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
# errno, _doserrno, _sys_errlist, and _sys_nerr

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

Each `errno` value is associated with an error message in `_sys_errlist` that can be printed by using one of the [perror](../c-runtime-library/reference/perror-wperror.md) functions, or stored in a string by using one of the [strerror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md) or [strerror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) functions. The `perror` and `strerror` functions use the `_sys_errlist` array and `_sys_nerr`—the number of elements in `_sys_errlist`—to process error information. Direct access to `_sys_errlist` and `_sys_nerr` is deprecated for code-security reasons. We recommend that you use the more secure, functional versions instead of the global macros, as shown here:

|Global Macro|Functional Equivalents|
|------------------|----------------------------|
|`_doserrno`|[_get_doserrno](../c-runtime-library/reference/get-doserrno.md), [_set_doserrno](../c-runtime-library/reference/set-doserrno.md)|
|`errno`|[_get_errno](../c-runtime-library/reference/get-errno.md), [_set_errno](../c-runtime-library/reference/set-errno.md)|
|`_sys_errlist`, `_sys_nerr`|[strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)|

Library math routines set `errno` by calling [_matherr](../c-runtime-library/reference/matherr.md). To handle math errors differently, write your own routine according to the `_matherr` reference description and name it `_matherr`.

All `errno` values in the following table are predefined constants in \<errno.h>, and are UNIX-compatible. Only `ERANGE`, `EILSEQ`, and `EDOM` are specified in the ISO C99 standard.

|Constant|System error message|Value|
|--------------|--------------------------|-----------|
|`EPERM`|Operation not permitted|1|
|`ENOENT`|No such file or directory|2|
|`ESRCH`|No such process|3|
|`EINTR`|Interrupted function|4|
|`EIO`|I/O error|5|
|`ENXIO`|No such device or address|6|
|`E2BIG`|Argument list too long|7|
|`ENOEXEC`|Exec format error|8|
|`EBADF`|Bad file number|9|
|`ECHILD`|No spawned processes|10|
|`EAGAIN`|No more processes or not enough memory or maximum nesting level reached|11|
|`ENOMEM`|Not enough memory|12|
|`EACCES`|Permission denied|13|
|`EFAULT`|Bad address|14|
|`EBUSY`|Device or resource busy|16|
|`EEXIST`|File exists|17|
|`EXDEV`|Cross-device link|18|
|`ENODEV`|No such device|19|
|`ENOTDIR`|Not a directory|20|
|`EISDIR`|Is a directory|21|
|`EINVAL`|Invalid argument|22|
|`ENFILE`|Too many files open in system|23|
|`EMFILE`|Too many open files|24|
|`ENOTTY`|Inappropriate I/O control operation|25|
|`EFBIG`|File too large|27|
|`ENOSPC`|No space left on device|28|
|`ESPIPE`|Invalid seek|29|
|`EROFS`|Read-only file system|30|
|`EMLINK`|Too many links|31|
|`EPIPE`|Broken pipe|32|
|`EDOM`|Math argument|33|
|`ERANGE`|Result too large|34|
|`EDEADLK`|Resource deadlock would occur|36|
|`EDEADLOCK`|Same as EDEADLK for compatibility with older Microsoft C versions|36|
|`ENAMETOOLONG`|Filename too long|38|
|`ENOLCK`|No locks available|39|
|`ENOSYS`|Function not supported|40|
|`ENOTEMPTY`|Directory not empty|41|
|`EILSEQ`|Illegal byte sequence|42|
|`STRUNCATE`|String was truncated|80|

## Requirements

|Global macro|Required header|Optional header|
|------------------|---------------------|---------------------|
|`errno`|\<errno.h> or \<stdlib.h>, \<cerrno> or \<cstdlib> (C++)||
|`_doserrno`, `_sys_errlist`, `_sys_nerr`|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

The `_doserrno`, `_sys_errlist`, and `_sys_nerr` macros are Microsoft extensions. For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).

## See also

[Global Variables](../c-runtime-library/global-variables.md)<br/>
[errno Constants](../c-runtime-library/errno-constants.md)<br/>
[perror, _wperror](../c-runtime-library/reference/perror-wperror.md)<br/>
[strerror, _strerror, _wcserror, \__wcserror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)<br/>
[strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)<br/>
[_get_doserrno](../c-runtime-library/reference/get-doserrno.md)<br/>
[_set_doserrno](../c-runtime-library/reference/set-doserrno.md)<br/>
[_get_errno](../c-runtime-library/reference/get-errno.md)<br/>
[_set_errno](../c-runtime-library/reference/set-errno.md)
