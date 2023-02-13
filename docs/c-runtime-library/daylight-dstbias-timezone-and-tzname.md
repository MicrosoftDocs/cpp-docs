---
description: "Learn more about: _daylight, _dstbias, _timezone, and _tzname"
title: "_daylight, _dstbias, _timezone, and _tzname"
ms.date: "11/04/2016"
f1_keywords: ["_daylight", "TIME/_daylight", "_dstbias", "TIME/_dstbias", "_timezone", "TIME/_timezone", "_tzname", "TIME/_tzname"]
helpviewer_keywords: ["time zones", "time adjustments", "timezone variables", "_daylight global variable", "_dstbias global variable", "_timezone global variable", "_tzname global variable", "local time adjustments", "time-zone variables"]
ms.assetid: d06c7292-6b99-4aba-b284-16a96570c856
---
# `_daylight`, `_dstbias`, `_timezone`, and `_tzname`

**`_daylight`**, **`_dstbias`**, **`_timezone`**, and **`_tzname`** are used in some time and date routines to make local-time adjustments. These global variables have been deprecated for the more secure functional versions, which should be used in place of the global variables.

| Global variable | Functional equivalent |
|---|---|
| **`_daylight`** | [`_get_daylight`](./reference/get-daylight.md) |
| **`_dstbias`** | [`_get_dstbias`](./reference/get-dstbias.md) |
| **`_timezone`** | [`_get_timezone`](./reference/get-timezone.md) |
| **`_tzname`** | [`_get_tzname`](./reference/get-tzname.md) |

They're declared in Time.h as follows.

## Syntax

```C
extern int _daylight;
extern int _dstbias;
extern long _timezone;
extern char *_tzname[2];
```

## Remarks

On a call to `_ftime`, `localtime`, or `_tzset`, the values of **`_daylight`**, **`_dstbias`**, **`_timezone`**, and **`_tzname`** are determined from the value of the `TZ` environment variable. If you don't explicitly set the value of `TZ`, `_tzname[0]` and `_tzname[1]` contain the default settings of "PST" and "PDT" respectively.  The time-manipulation functions ([`_tzset`](./reference/tzset.md), [`_ftime`](./reference/ftime-ftime32-ftime64.md), and [`localtime`](./reference/localtime-localtime32-localtime64.md)) attempt to set the values of **`_daylight`**, **`_dstbias`** and **`_timezone`** by querying the operating system for the default value of each variable. The time-zone global variable values are shown in the following table.

| Variable | Value |
|---|---|
| **`_daylight`** | Nonzero if daylight saving time (DST) zone is specified in `TZ` or determined from the operating system; otherwise, 0. The default value is 1. |
| **`_dstbias`** | Offset for daylight saving time. |
| **`_timezone`** | Difference in seconds between coordinated universal time and local time. The default value is 28,800. |
| `_tzname[0]` | Time-zone name derived from the `TZ` environment variable. The default value is "PST". |
| `_tzname[1]` | DST zone name derived from the `TZ` environment variable. The default value is "PDT" (Pacific daylight time). |

## See also

[Global variables](./global-variables.md)\
[`_get_daylight`](./reference/get-daylight.md)\
[`_get_dstbias`](./reference/get-dstbias.md)\
[`_get_timezone`](./reference/get-timezone.md)\
[`_get_tzname`](./reference/get-tzname.md)
