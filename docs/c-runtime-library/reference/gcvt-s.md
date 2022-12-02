---
description: "Learn more about: _gcvt_s"
title: "_gcvt_s"
ms.date: "4/2/2020"
api_name: ["_gcvt_s", "_o__gcvt_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_gcvt_s", "gcvt_s"]
helpviewer_keywords: ["_gcvt_s function", "_CVTBUFSIZE", "floating-point functions, converting number to string", "gcvt_s function", "numbers, converting to strings", "conversions, floating point to strings", "strings [C++], converting from floating point", "CVTBUFSIZE"]
ms.assetid: 0a8d8a26-5940-4ae3-835e-0aa6ec1b0744
---
# `_gcvt_s`

Converts a floating-point value to a string. This function is a version of [`_gcvt`](gcvt.md) with security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t _gcvt_s(
   char *buffer,
   size_t sizeInBytes,
   double value,
   int digits
);
template <size_t cchStr>
errno_t _gcvt_s(
   char (&buffer)[cchStr],
   double value,
   int digits
); // C++ only
```

### Parameters

*`buffer`*\
Buffer to store the result of the conversion.

*`sizeInBytes`*\
Size of the buffer.

*`value`*\
Value to be converted.

*`digits`*\
Number of significant digits stored.

## Return value

Zero if successful. If a failure occurs due to an invalid parameter (see the following table for invalid values), the invalid parameter handler is invoked as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, an error code is returned. Error codes are defined in Errno.h. For a listing of these errors, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

### Error conditions

| *`buffer`* | *`sizeInBytes`* | *`value`* | *`digits`* | Return | Value in *`buffer`* |
|---|---|---|---|---|---|
| `NULL` | any | any | any | `EINVAL` | Not modified. |
| Not `NULL` (points to valid memory) | zero | any | any | `EINVAL` | Not modified. |
| Not `NULL` (points to valid memory) | any | any | >= *`sizeInBytes`* | `EINVAL` | Not modified. |

**Security Issues**

**`_gcvt_s`** can generate an access violation if *`buffer`* doesn't point to valid memory and isn't `NULL`.

## Remarks

The **`_gcvt_s`** function converts a floating-point *`value`* to a character string (which includes a decimal point and a possible sign byte) and stores the string in *`buffer`*. *`buffer`* should be large enough to accommodate the converted value plus a terminating null character, which is appended automatically. A buffer of length `_CVTBUFSIZE` is sufficient for any floating point value. If a buffer size of *`digits`* + 1 is used, the function won't overwrite the end of the buffer, so be sure to supply a sufficient buffer for this operation. **`_gcvt_s`** attempts to produce *`digits`* digits in decimal format. If it can't, it produces *`digits`* digits in exponential format. Trailing zeros can be suppressed in the conversion.

In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug version of this function first fills the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header | Optional header |
|---|---|---|
| **`_gcvt_s`** | \<stdlib.h> | \<error.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_gcvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char buf[_CVTBUFSIZE];
    int decimal;
    int sign;
    int err;

    err = _gcvt_s(buf, _CVTBUFSIZE, 1.2, 5);

    if (err != 0)
    {
        printf("_gcvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 1.2
```

## See also

[Data conversion](../data-conversion.md)\
[Math and floating-point support](../floating-point-support.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)\
[`_ecvt_s`](ecvt-s.md)\
[`_fcvt_s`](fcvt-s.md)\
[`_gcvt`](gcvt.md)
