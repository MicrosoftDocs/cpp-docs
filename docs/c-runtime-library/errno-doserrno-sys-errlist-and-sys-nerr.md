---
description: "Learn more about: errno, _doserrno, _sys_errlist, and _sys_nerr"
title: "errno, _doserrno, _sys_errlist, and _sys_nerr"
ms.date: "11/04/2016"
f1_keywords: ["errno", "ERRNO/errno", "_doserrno", "ERRNO/_doserrno", "_sys_errlist", "STDLIB/_sys_errlist", "_sys_nerr", "STDLIB/_sys_nerr"]
helpviewer_keywords: ["error codes, printing", "sys_errlist global variable", "doserrno global variable", "errno global variable", "_doserrno global variable", "_sys_errlist global variable", "_sys_nerr global variable", "sys_nerr global variable"]
ms.assetid: adbec641-6d91-4e19-8398-9a34046bd369
---
# `errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`

Global macros that hold error codes that are set during program execution, and string equivalents of the error codes for display.

## Syntax

```C
#define errno   (*_errno())
#define _doserrno   (*__doserrno())
#define _sys_errlist (__sys_errlist())
#define _sys_nerr (*__sys_nerr())
```

## Remarks

Both **`errno`** and **`_doserrno`** are set to 0 by the runtime during program startup. **`errno`** is set on an error in a system-level call. Because **`errno`** holds the value for the last call that set it, this value may be changed by succeeding calls. Run-time library calls that set **`errno`** on an error don't clear **`errno`** on success. Always clear **`errno`** by calling `_set_errno(0)` immediately before a call that may set it, and check it immediately after the call.

On an error, **`errno`** isn't necessarily set to the same value as the error code returned by a system call. For I/O operations, **`_doserrno`** stores the operating-system error-code equivalents of **`errno`** codes. For most non-I/O operations, the value of **`_doserrno`** isn't set.

Each **`errno`** value is associated with an error message in **`_sys_errlist`** that can be printed by using one of the [`perror`](./reference/perror-wperror.md) functions, or stored in a string by using one of the [`strerror`](./reference/strerror-strerror-wcserror-wcserror.md) or [`strerror_s`](./reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) functions. The `perror` and `strerror` functions use the **`_sys_errlist`** array and **`_sys_nerr`**—the number of elements in **`_sys_errlist`**—to process error information. Direct access to **`_sys_errlist`** and **`_sys_nerr`** is deprecated for code-security reasons. We recommend that you use the more secure, functional versions instead of the global macros, as shown here:

| Global macro | Functional equivalents |
|---|---|
| **`_doserrno`** | [`_get_doserrno`](./reference/get-doserrno.md), [`_set_doserrno`](./reference/set-doserrno.md) |
| **`errno`** | [`_get_errno`](./reference/get-errno.md), [`_set_errno`](./reference/set-errno.md) |
| **`_sys_errlist`**, **`_sys_nerr`** | [`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](./reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) |

Library math routines set **`errno`** by calling [`_matherr`](./reference/matherr.md). To handle math errors differently, write your own routine according to the `_matherr` reference description and name it `_matherr`.

All **`errno`** values are predefined constants in `<errno.h>`, and are UNIX-compatible. Only `ERANGE`, `EILSEQ`, and `EDOM` are specified in the ISO C99 standard. For a complete list, see [`errno` constants](./errno-constants.md).

## Requirements

| Global macro | Required header | Optional header |
|---|---|---|
| `errno` | `<errno.h>` or `<stdlib.h>`, `<cerrno>` or `<cstdlib>` (C++) |  |
| `_doserrno`, `_sys_errlist`, `_sys_nerr` | `<stdlib.h>`, `<cstdlib>` (C++) | `<errno.h>`, `<cerrno>` (C++) |

The `_doserrno`, `_sys_errlist`, and `_sys_nerr` macros are Microsoft extensions. For more compatibility information, see [Compatibility](./compatibility.md).

## See also

[Global variables](./global-variables.md)\
[`errno` constants](./errno-constants.md)\
[`perror`, `_wperror`](./reference/perror-wperror.md)\
[`strerror`, `_strerror`, `_wcserror`, `__wcserror`](./reference/strerror-strerror-wcserror-wcserror.md)\
[`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](./reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)\
[`_get_doserrno`](./reference/get-doserrno.md)\
[`_set_doserrno`](./reference/set-doserrno.md)\
[`_get_errno`](./reference/get-errno.md)\
[`_set_errno`](./reference/set-errno.md)
