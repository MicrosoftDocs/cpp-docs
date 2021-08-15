---
description: "Learn more about: _ecvt"
title: "_ecvt"
ms.date: "4/2/2020"
api_name: ["_ecvt", "_o__ecvt"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ecvt"]
helpviewer_keywords: ["_ecvt function", "numbers, converting", "converting double numbers", "ecvt function"]
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
---
# _ecvt

Converts a **`double`** number to a string. A more secure version of this function is available; see [_ecvt_s](ecvt-s.md).

## Syntax

```C
char *_ecvt(
   double value,
   int count,
   int *dec,
   int *sign
);
```

### Parameters

*value*<br/>
Number to be converted.

*count*<br/>
Number of digits stored.

*dec*<br/>
Stored decimal-point position.

*sign*<br/>
Sign of the converted number.

## Return Value

**_ecvt** returns a pointer to the string of digits; **NULL** if an error occurred.

## Remarks

The **_ecvt** function converts a floating-point number to a character string. The *value* parameter is the floating-point number to be converted. This function stores up to *count* digits of *value* as a string and appends a null character ('\0'). If the number of digits in *value* exceeds *count*, the low-order digit is rounded. If there are fewer than *count* digits, the string is padded with zeros.

The total number of digits returned by **_ecvt** will not exceed **_CVTBUFSIZE**.

Only digits are stored in the string. The position of the decimal point and the sign of *value* can be obtained from *dec* and *sign* after the call. The *dec* parameter points to an integer value giving the position of the decimal point with respect to the beginning of the string. A 0 or negative integer value indicates that the decimal point lies to the left of the first digit. The *sign* parameter points to an integer that indicates the sign of the converted number. If the integer value is 0, the number is positive. Otherwise, the number is negative.

The difference between **_ecvt** and **_fcvt** is in the interpretation of the *count* parameter. **_ecvt** interprets *count* as the total number of digits in the output string, whereas **_fcvt** interprets *count* as the number of digits after the decimal point.

**_ecvt** and **_fcvt** use a single statically allocated buffer for the conversion. Each call to one of these routines destroys the result of the previous call.

This function validates its parameters. If *dec* or *sign* is **NULL**, or *count* is 0, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and **NULL** is returned.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_ecvt**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_ecvt.c
// compile with: /W3
// This program uses _ecvt to convert a
// floating-point number to a character string.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int     decimal,   sign;
   char    *buffer;
   int     precision = 10;
   double  source = 3.1415926535;

   buffer = _ecvt( source, precision, &decimal, &sign ); // C4996
   // Note: _ecvt is deprecated; consider using _ecvt_s instead
   printf( "source: %2.10f   buffer: '%s'  decimal: %d  sign: %d\n",
           source, buffer, decimal, sign );
}
```

```Output
source: 3.1415926535   buffer: '3141592654'  decimal: 1  sign: 0
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
