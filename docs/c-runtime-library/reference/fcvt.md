---
description: "Learn more about: _fcvt"
title: "_fcvt"
ms.date: "4/2/2020"
api_name: ["_fcvt", "_o__fcvt"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fcvt"]
helpviewer_keywords: ["converting floating point, to strings", "_fcvt function", "floating-point functions, converting number to string", "fcvt function", "floating-point functions"]
ms.assetid: 74584c88-f0dd-4907-8fca-52da5df583f5
---
# _fcvt

Converts a floating-point number to a string. A more secure version of this function is available; see [_fcvt_s](fcvt-s.md).

## Syntax

```C
char *_fcvt(
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
Number of digits after the decimal point.

*dec*<br/>
Pointer to the stored decimal-point position.

*sign*<br/>
Pointer to the stored sign indicator.

## Return Value

**_fcvt** returns a pointer to the string of digits, **NULL** on error.

## Remarks

The **_fcvt** function converts a floating-point number to a null-terminated character string. The *value* parameter is the floating-point number to be converted. **_fcvt** stores the digits of *value* as a string and appends a null character ('\0'). The *count* parameter specifies the number of digits to be stored after the decimal point. Excess digits are rounded off to *count* places. If there are fewer than *count* digits of precision, the string is padded with zeros.

The total number of digits returned by **_fcvt** will not exceed **_CVTBUFSIZE**.

Only digits are stored in the string. The position of the decimal point and the sign of *value* can be obtained from *dec* and sign after the call. The *dec* parameter points to an integer value; this integer value gives the position of the decimal point with respect to the beginning of the string. A zero or negative integer value indicates that the decimal point lies to the left of the first digit. The parameter *sign* points to an integer indicating the sign of *value*. The integer is set to 0 if *value* is positive and is set to a nonzero number if *value* is negative.

The difference between **_ecvt** and **_fcvt** is in the interpretation of the *count* parameter. **_ecvt** interprets *count* as the total number of digits in the output string, whereas **_fcvt** interprets *count* as the number of digits after the decimal point.

**_ecvt** and **_fcvt** use a single statically allocated buffer for the conversion. Each call to one of these routines destroys the results of the previous call.

This function validates its parameters. If *dec* or *sign* is **NULL**, or *count* is 0, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and **NULL** is returned.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fcvt**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fcvt.c
// compile with: /W3
// This program converts the constant
// 3.1415926535 to a string and sets the pointer
// buffer to point to that string.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int  decimal, sign;
   char *buffer;
   double source = 3.1415926535;

   buffer = _fcvt( source, 7, &decimal, &sign ); // C4996
   // Note: _fcvt is deprecated; consider using _fcvt_s instead
   printf( "source: %2.10f   buffer: '%s'   decimal: %d   sign: %d\n",
            source, buffer, decimal, sign );
}
```

```Output
source: 3.1415926535   buffer: '31415927'   decimal: 1   sign: 0
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_gcvt](gcvt.md)<br/>
