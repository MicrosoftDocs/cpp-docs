---
description: "Learn more about: _fcvt_s"
title: "_fcvt_s"
ms.date: "4/2/2020"
api_name: ["_fcvt_s", "_o__fcvt_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fcvt_s", "_fcvt_s"]
helpviewer_keywords: ["fcvt_s function", "converting floating point, to strings", "floating-point functions, converting number to string", "_fcvt_s function"]
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
---
# `_fcvt_s`

Converts a floating-point number to a string. This function is a version of [`_fcvt`](fcvt.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t _fcvt_s(
   char* buffer,
   size_t sizeInBytes,
   double value,
   int count,
   int *dec,
   int *sign
);
template <size_t size>
errno_t _fcvt_s(
   char (&buffer)[size],
   double value,
   int count,
   int *dec,
   int *sign
); // C++ only
```

### Parameters

*`buffer`*\
The supplied buffer that will hold the result of the conversion.

*`sizeInBytes`*\
The size of the buffer in bytes.

*`value`*\
Number to be converted.

*`count`*\
Number of digits after the decimal point.

*`dec`*\
Pointer to the stored decimal-point position.

*`sign`*\
Pointer to the stored sign indicator.

## Return value

Zero if successful. The return value is an error code if there's a failure. Error codes are defined in `errno.h`. For a listing of these errors, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

When there's an invalid parameter, as listed in the following table, this function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.

### Error conditions

| *`buffer`* | *`sizeInBytes`* | *`value`* | *`count`* | *`dec`* | *`sign`* | Return | Value in *`buffer`* |
|---|---|---|---|---|---|---|---|
| `NULL` | any | any | any | any | any | `EINVAL` | Not modified. |
| Not `NULL` (points to valid memory) | <=0 | any | any | any | any | `EINVAL` | Not modified. |
| any | any | any | any | `NULL` | any | `EINVAL` | Not modified. |
| any | any | any | any | any | `NULL` | `EINVAL` | Not modified. |

## Security Issues

**`_fcvt_s`** might generate an access violation if *`buffer`* doesn't point to valid memory and isn't `NULL`.

## Remarks

The **`_fcvt_s`** function converts a floating-point number to a null-terminated character string. The *`value`* parameter is the floating-point number to be converted. **`_fcvt_s`** stores the digits of *`value`* as a string and appends a null character ('\0'). The *`count`* parameter specifies the number of digits to be stored after the decimal point. Excess digits are rounded off to *`count`* places. If there are fewer than *`count`* digits of precision, the string is padded with zeros.

Only digits are stored in the string. The position of the decimal point and the sign of *`value`* can be obtained from *`dec`* and *`sign`* after the call. The *`dec`* parameter points to an integer value; this integer value gives the position of the decimal point with respect to the beginning of the string. A zero or negative integer value indicates that the decimal point lies to the left of the first digit. The parameter *`sign`* points to an integer indicating the sign of *`value`*. The integer is set to 0 if *`value`* is positive and is set to a nonzero number if *`value`* is negative.

A buffer of length `_CVTBUFSIZE` is sufficient for any floating point value.

The difference between `_ecvt_s` and **`_fcvt_s`** is in the interpretation of the *`count`* parameter. `_ecvt_s` interprets *`count`* as the total number of digits in the output string, and **`_fcvt_s`** interprets *`count`* as the number of digits after the decimal point.

In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug version of this function first fills the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header | Optional header |
|---|---|---|
| **`_fcvt_s`** | \<stdlib.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

**Libraries:** All versions of the [C runtime libraries](../crt-library-features.md).

## Example

```C
// fcvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char * buf = 0;
    int decimal;
    int sign;
    int err;

    buf = (char*) malloc(_CVTBUFSIZE);
    err = _fcvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);

    if (err != 0)
    {
        printf("_fcvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 120000
```

## See also

[Data conversion](../data-conversion.md)\
[Math and floating-point support](../floating-point-support.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)\
[`_ecvt_s`](ecvt-s.md)\
[`_gcvt_s`](gcvt-s.md)\
[`_fcvt`](fcvt.md)
