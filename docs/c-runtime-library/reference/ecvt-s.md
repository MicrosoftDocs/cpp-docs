---
description: "Learn more about: _ecvt_s"
title: "_ecvt_s"
ms.date: "4/2/2020"
api_name: ["_ecvt_s", "_o__ecvt_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ecvt_s", "_ecvt_s"]
helpviewer_keywords: ["_ecvt_s function", "ecvt_s function", "numbers, converting", "converting double numbers"]
ms.assetid: d52fb0a6-cb91-423f-80b3-952a8955d914
---
# `_ecvt_s`

Converts a **`double`** number to a string. This function is a version of [`_ecvt`](ecvt.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t _ecvt_s(
   char * buffer,
   size_t sizeInBytes,
   double value,
   int count,
   int *dec,
   int *sign
);
template <size_t size>
errno_t _ecvt_s(
   char (&buffer)[size],
   double value,
   int count,
   int *dec,
   int *sign
); // C++ only
```

### Parameters

*`buffer`*\
Filled with the pointer to the string of digits, the result of the conversion.

*`sizeInBytes`*\
Size of the buffer in bytes.

*`value`*\
Number to be converted.

*`count`*\
Number of digits stored.

*`dec`*\
Stored decimal-point position.

*`sign`*\
Sign of the converted number.

## Return value

Zero if successful. The return value is an error code if there's a failure. Error codes are defined in Errno.h. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

If there's an invalid parameter, as listed in the following table, this function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL`, and returns `EINVAL`.

### Error conditions

| *`buffer`* | *`sizeInBytes`* | *`value`* | *`count`* | *`dec`* | *`sign`* | Return value | Value in *`buffer`* |
|---|---|---|---|---|---|---|---|
| `NULL` | any | any | any | any | any | `EINVAL` | Not modified. |
| Not `NULL` (points to valid memory) | <=0 | any | any | any | any | `EINVAL` | Not modified. |
| any | any | any | any | `NULL` | any | `EINVAL` | Not modified. |
| any | any | any | any | any | `NULL` | `EINVAL` | Not modified. |

## Security issues

**`_ecvt_s`** might generate an access violation if *`buffer`* doesn't point to valid memory and isn't `NULL`.

## Remarks

The **`_ecvt_s`** function converts a floating-point number to a character string. The *`value`* parameter is the floating-point number to be converted. This function stores up to *`count`* digits of *`value`* as a string and appends a null character ('\0'). If the number of digits in *`value`* exceeds *`count`*, the low-order digit is rounded. If there are fewer than *`count`* digits, the string is padded with zeros.

Only digits are stored in the string. The position of the decimal point and the sign of *`value`* can be obtained from *`dec`* and *`sign`* after the call. The *`dec`* parameter points to an integer value giving the position of the decimal point with respect to the beginning of the string. A 0 or negative integer value indicates that the decimal point lies to the left of the first digit. The *`sign`* parameter points to an integer that indicates the sign of the converted number. If the integer value is 0, the number is positive. Otherwise, the number is negative.

A buffer of length `_CVTBUFSIZE` is sufficient for any floating-point value.

The difference between **`_ecvt_s`** and `_fcvt_s` is in the interpretation of the *`count`* parameter. **`_ecvt_s`** interprets *`count`* as the total number of digits in the output string, whereas `_fcvt_s` interprets *`count`* as the number of digits after the decimal point.

In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug version of this function first fills the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header | Optional header |
|---|---|---|
| **`_ecvt_s`** | \<stdlib.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// ecvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( )
{
    char * buf = 0;
    int decimal;
    int sign;
    int err;

    buf = (char*) malloc(_CVTBUFSIZE);
    err = _ecvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);

    if (err != 0)
    {
        printf("_ecvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 12000
```

## See also

[Data conversion](../data-conversion.md)\
[Math and floating-point support](../floating-point-support.md)\
[`atof`, `_atof_l`, `_wtof`, `_wtof_l`](atof-atof-l-wtof-wtof-l.md)\
[`_ecvt`](ecvt.md)\
[`_fcvt_s`](fcvt-s.md)\
[`_gcvt_s`](gcvt-s.md)
