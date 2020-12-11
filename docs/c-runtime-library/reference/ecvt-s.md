---
description: "Learn more about: _ecvt_s"
title: "_ecvt_s"
ms.date: "4/2/2020"
api_name: ["_ecvt_s", "_o__ecvt_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ecvt_s", "_ecvt_s"]
helpviewer_keywords: ["_ecvt_s function", "ecvt_s function", "numbers, converting", "converting double numbers"]
ms.assetid: d52fb0a6-cb91-423f-80b3-952a8955d914
---
# _ecvt_s

Converts a **`double`** number to a string. This is a version of [_ecvt](ecvt.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _ecvt_s(
   char * _Buffer,
   size_t _SizeInBytes,
   double _Value,
   int _Count,
   int *_Dec,
   int *_Sign
);
template <size_t size>
errno_t _ecvt_s(
   char (&_Buffer)[size],
   double _Value,
   int _Count,
   int *_Dec,
   int *_Sign
); // C++ only
```

### Parameters

*_Buffer*<br/>
Filled with the pointer to the string of digits, the result of the conversion.

*_SizeInBytes*<br/>
Size of the buffer in bytes.

*_Value*<br/>
Number to be converted.

*_Count*<br/>
Number of digits stored.

*_Dec*<br/>
Stored decimal-point position.

*_Sign*<br/>
Sign of the converted number.

## Return Value

Zero if successful. The return value is an error code if there is a failure. Error codes are defined in Errno.h. For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

In the case of an invalid parameter, as listed in the following table, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

### Error Conditions

|*_Buffer*|*_SizeInBytes*|_Value|_Count|_Dec|_Sign|Return value|Value in *buffer*|
|---------------|--------------------|-------------|-------------|-----------|------------|------------------|-----------------------|
|**NULL**|any|any|any|any|any|**EINVAL**|Not modified.|
|Not **NULL** (points to valid memory)|<=0|any|any|any|any|**EINVAL**|Not modified.|
|any|any|any|any|**NULL**|any|**EINVAL**|Not modified.|
|any|any|any|any|any|**NULL**|**EINVAL**|Not modified.|

## Security Issues

**_ecvt_s** might generate an access violation if *buffer* does not point to valid memory and is not **NULL**.

## Remarks

The **_ecvt_s** function converts a floating-point number to a character string. The *_Value* parameter is the floating-point number to be converted. This function stores up to *count* digits of *_Value* as a string and appends a null character ('\0'). If the number of digits in *_Value* exceeds *_Count*, the low-order digit is rounded. If there are fewer than *count* digits, the string is padded with zeros.

Only digits are stored in the string. The position of the decimal point and the sign of *_Value* can be obtained from *_Dec* and *_Sign* after the call. The *_Dec* parameter points to an integer value giving the position of the decimal point with respect to the beginning of the string. A 0 or negative integer value indicates that the decimal point lies to the left of the first digit. The *_Sign* parameter points to an integer that indicates the sign of the converted number. If the integer value is 0, the number is positive. Otherwise, the number is negative.

A buffer of length **_CVTBUFSIZE** is sufficient for any floating-point value.

The difference between **_ecvt_s** and **_fcvt_s** is in the interpretation of the *_Count* parameter. **_ecvt_s** interprets *_Count* as the total number of digits in the output string, whereas **_fcvt_s** interprets *_Count* as the number of digits after the decimal point.

In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug version of this function first fills the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|**_ecvt_s**|\<stdlib.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt_s](fcvt-s.md)<br/>
[_gcvt_s](gcvt-s.md)<br/>
