---
description: "Learn more about: Global Variables"
title: "Global Variables"
ms.date: "11/04/2016"
f1_keywords: ["c.variables"]
helpviewer_keywords: ["global variables", "variables, global", "global variables, Microsoft run-time library"]
ms.assetid: 01d1551c-2f0c-4f72-935c-6442caccf84f
---
# Global variables

The Microsoft C run-time library provides the following global variables or macros. Several of these global variables or macros have been deprecated in favor of more-secure functional versions, which we recommend you use instead of the global variables.

| Variable | Description |
|---|---|
| [`__argc`, `__argv`, `__wargv`](./argc-argv-wargv.md) | Contains the command-line arguments. |
| [`_daylight`, `_dstbias`, `_timezone`, and `_tzname`](./daylight-dstbias-timezone-and-tzname.md) | Deprecated. Instead, use `_get_daylight`, `_get_dstbias`, `_get_timezone`, and `_get_tzname`.<br /><br /> Adjusts for local time; used in some date and time functions. |
| [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](./errno-doserrno-sys-errlist-and-sys-nerr.md) | Deprecated. Instead, use `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` and `strerror`.<br /><br /> Stores error codes and related information. |
| [`_environ`, `_wenviron`](./environ-wenviron.md) | Deprecated. Instead, use `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s`, and `_wputenv_s`.<br /><br /> Pointers to arrays of pointers to the process environment strings; initialized at startup. |
| [`_fmode`](./fmode.md) | Deprecated. Instead, use `_get_fmode` or `_set_fmode`.<br /><br /> Sets default file-translation mode. |
| [`_iob`](./iob.md) | Array of I/O control structures for the console, files, and devices. |
| [`_pctype`, `_pwctype`, `_wctype`, `_mbctype`, `_mbcasemap`](./pctype-pwctype-wctype-mbctype-mbcasemap.md) | Contains information used by the character-classification functions. |
| [`_pgmptr`, `_wpgmptr`](./pgmptr-wpgmptr.md) | Deprecated. Instead, use `_get_pgmptr` or `_get_wpgmptr`.<br /><br /> Based on how the program is invoked, the runtime initializes these values at program startup: either to the fully qualified or relative path of the program, the full program name, or the program name without its file name extension. |

## See also

[C runtime library reference](./c-run-time-library-reference.md)\
[Global constants](./global-constants.md)\
[`__argc`, `__argv`, `__wargv`](./argc-argv-wargv.md)\
[`_get_daylight`](./reference/get-daylight.md)\
[`_get_dstbias`](./reference/get-dstbias.md)\
[`_get_timezone`](./reference/get-timezone.md)\
[`_get_tzname`](./reference/get-tzname.md)\
[`perror`](./reference/perror-wperror.md)\
[`strerror`](./reference/strerror-strerror-wcserror-wcserror.md)\
[`_get_doserrno`](./reference/get-doserrno.md)\
[`_set_doserrno`](./reference/set-doserrno.md)\
[`_get_errno`](./reference/get-errno.md)\
[`_set_errno`](./reference/set-errno.md)\
[`_dupenv_s`, `_wdupenv_s`](./reference/dupenv-s-wdupenv-s.md)\
[`getenv`, `_wgetenv`](./reference/getenv-wgetenv.md)\
[`getenv_s`, `_wgetenv_s`](./reference/getenv-s-wgetenv-s.md)\
[`_putenv`, `_wputenv`](./reference/putenv-wputenv.md)\
[`_putenv_s`, `_wputenv_s`](./reference/putenv-s-wputenv-s.md)\
[`_get_fmode`](./reference/get-fmode.md)\
[`_set_fmode`](./reference/set-fmode.md)
