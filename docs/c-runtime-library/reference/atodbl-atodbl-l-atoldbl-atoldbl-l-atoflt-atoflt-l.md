---
description: "Learn more about: _atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l"
title: "_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l"
ms.date: "4/2/2020"
api_name: ["_atoldbl", "_atoldbl_l", "_atodbl", "_atoflt", "_atoflt_l", "_atodbl_l", "_o__atodbl", "_o__atodbl_l", "_o__atoflt", "_o__atoflt_l", "_o__atoldbl", "_o__atoldbl_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_atoflt", "_atoflt_l", "atodbl_l", "atoflt_l", "_atoldbl", "_atoldbl_l", "atodbl", "_atodbl_l", "atoldbl", "atoflt", "atoldbl_l", "_atodbl"]
helpviewer_keywords: ["_atodbl function", "_atoldbl_l function", "atoflt function", "atoflt_l function", "atoldbl function", "_atoldbl function", "atodbl_l function", "_atoflt_l function", "atoldbl_l function", "atodbl function", "string conversion, to floating point values", "_atoflt function", "_atodbl_l function"]
ms.assetid: 2d2530f4-4bd4-42e3-8083-f2d2fbc8432a
---
# _atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l

Converts a string to a double (**_atodbl**), long double (**_atoldbl**), or float (**_atoflt**).

## Syntax

```C
int _atodbl( _CRT_DOUBLE * value, char * str );
int _atodbl_l ( _CRT_DOUBLE * value, char * str, locale_t locale );
int _atoldbl( _LDOUBLE * value, char * str );
int _atoldbl_l ( _LDOUBLE * value, char * str, locale_t locale );
int _atoflt( _CRT_FLOAT * value, const char * str );
int _atoflt_l( _CRT_FLOAT * value, const char * str, locale_t locale );
```

### Parameters

*value*<br/>
The double, long double, or float value that's produced by converting the string to a floating-point value. These values are wrapped in a structure.

*str*<br/>
The string to be parsed to convert into a floating-point value.

*locale*<br/>
The locale to use.

## Return Value

Returns 0 if successful. Possible error codes are **_UNDERFLOW** or **_OVERFLOW**, which are defined in the header file \<math.h>.

## Remarks

These functions convert a string to a floating-point value. The difference between these functions and the **atof** family of functions is that these functions do not generate floating-point code and do not cause hardware exceptions. Instead, error conditions are reported as error codes.

If a string does not have a valid interpretation as a floating-point value, *value* is set to zero and the return value is zero.

The versions of these functions that have the **_l** suffix are identical the versions that don't have the suffix, except that they use the *locale* parameter that's passed in instead of the current thread locale.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routines|Required header|
|--------------|---------------------|
|**_atodbl**, **_atoldbl**, **_atoflt**<br /><br /> **_atodbl_l**, **_atoldbl_l**, **_atoflt_l**|\<stdlib.h>|

## Example

```C
// crt_atodbl.c
// Uses _atodbl to convert a string to a double precision
// floating point value.

#include <stdlib.h>
#include <stdio.h>

int main()
{
   char str1[256] = "3.141592654";
   char abc[256] = "abc";
   char oflow[256] = "1.0E+5000";
   _CRT_DOUBLE dblval;
   _CRT_FLOAT fltval;
   int retval;

   retval = _atodbl(&dblval, str1);

   printf("Double value: %lf\n", dblval.x);
   printf("Return value: %d\n\n", retval);

   retval = _atoflt(&fltval, str1);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   // A non-floating point value: returns 0.
   retval = _atoflt(&fltval, abc);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   // Overflow.
   retval = _atoflt(&fltval, oflow);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   return 0;
}
```

```Output
Double value: 3.141593
Return value: 0

Float value: 3.141593
Return value: 0

Float value: 0.000000
Return value: 0

Float value: inf
Return value: 3
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
