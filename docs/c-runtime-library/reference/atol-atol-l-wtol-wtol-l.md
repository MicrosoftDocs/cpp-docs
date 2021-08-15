---
description: "Learn more about: atol, _atol_l, _wtol, _wtol_l"
title: "atol, _atol_l, _wtol, _wtol_l"
ms.date: "4/2/2020"
api_name: ["atol", "_wtol_l", "_wtol", "_atol_l", "_o__atol_l", "_o__wtol", "_o__wtol_l", "_o_atol"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_atol_l", "_ttol_l", "_tstol_l", "_tstol", "_wtol", "_ttol", "_wtol_l"]
helpviewer_keywords: ["tstol function", "atol function", "ttol function", "_atol_l function", "_tstol_l function", "string conversion, to integers", "_tstol function", "_ttol function", "_ttol_l function", "atol_l function", "wtol_l function", "_wtol_l function", "wtol function", "_wtol function"]
ms.assetid: cedfc21c-2d64-4e9c-bd04-bdf60b12db46
---
# atol, _atol_l, _wtol, _wtol_l

Convert a string to a long integer.

## Syntax

```C
long atol(
   const char *str
);
long _atol_l(
   const char *str,
   _locale_t locale
);
long _wtol(
   const wchar_t *str
);
long _wtol_l(
   const wchar_t *str,
   _locale_t locale
);
```

### Parameters

*str*<br/>
String to be converted.

*locale*<br/>
Locale to use.

## Return Value

Each function returns the **`long`** value produced by interpreting the input characters as a number. The return value is 0L for **atol** if the input cannot be converted to a value of that type.

In the case of overflow with large positive integral values, **atol** returns **LONG_MAX**; in the case of overflow with large negative integral values, **LONG_MIN** is returned. In all out-of-range cases, **errno** is set to **ERANGE**. If the parameter passed in is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return 0.

## Remarks

These functions convert a character string to a long integer value (**atol**).

The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. The function stops reading the input string at the first character that it cannot recognize as part of a number. This character may be the null character ('\0' or L'\0') terminating the string.

The *str* argument to **atol** has the following form:

> [*whitespace*] [*sign*] [*digits*]]

A *whitespace* consists of space or tab characters, which are ignored; *sign* is either plus (+) or minus (-); and *digits* are one or more digits.

**_wtol** is identical to **atol** except that it takes a wide character string.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstol**|**atol**|**atol**|**_wtol**|
|**_ttol**|**atol**|**atol**|**_wtol**|

## Requirements

|Routines|Required header|
|--------------|---------------------|
|**atol**|\<stdlib.h>|
|**_atol_l**, **_wtol**, **_wtol_l**|\<stdlib.h> and \<wchar.h>|

## Example

This program shows how numbers stored as strings can be converted to numeric values using the **atol** function.

```C
// crt_atol.c
// This program shows how numbers stored as
// strings can be converted to numeric values
// using the atol functions.
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main( void )
{
    char    *str = NULL;
    long    value = 0;

    // An example of the atol function
    // with leading and trailing white spaces.
    str = "  -2309 ";
    value = atol( str );
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );

    // Another example of the atol function
    // with an arbitrary decimal point.
    str = "314127.64";
    value = atol( str );
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );

    // Another example of the atol function
    // with an overflow condition occurring.
    str = "3336402735171707160320";
    value = atol( str );
    printf( "Function: atol( \"%s\" ) = %d\n", str, value );
    if (errno == ERANGE)
    {
       printf("Overflow condition occurred.\n");
    }
}
```

```Output
Function: atol( "  -2309 " ) = -2309
Function: atol( "314127.64" ) = 314127
Function: atol( "3336402735171707160320" ) = 2147483647
Overflow condition occurred.
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)<br/>
