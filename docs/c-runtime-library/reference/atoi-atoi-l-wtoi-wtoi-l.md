---
description: "Learn more about: atoi, _atoi_l, _wtoi, _wtoi_l"
title: "atoi, _atoi_l, _wtoi, _wtoi_l"
ms.date: "4/2/2020"
api_name: ["_wtoi", "_wtoi_l", "atoi", "_atoi_l", "_o__atoi_l", "_o__wtoi", "_o__wtoi_l", "_o_atoi"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tstoi", "_wtoi", "_ttoi", "atoi", "_atoi_l", "_wtoi_l"]
helpviewer_keywords: ["_atoi_l function", "ttoi function", "atoi_l function", "string conversion, to integers", "_wtoi function", "wtoi_l function", "tstoi function", "_ttoi function", "_tstoi function", "_wtoi_l function", "atoi function", "wtoi function"]
ms.assetid: ad7fda30-28ab-421f-aaad-ef0b8868663a
---
# atoi, _atoi_l, _wtoi, _wtoi_l

Convert a string to integer.

## Syntax

```C
int atoi(
   const char *str
);
int _wtoi(
   const wchar_t *str
);
int _atoi_l(
   const char *str,
   _locale_t locale
);
int _wtoi_l(
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

Each function returns the **`int`** value produced by interpreting the input characters as a number. The return value is 0 for **atoi** and **_wtoi**, if the input cannot be converted to a value of that type.

In the case of overflow with large negative integral values, **LONG_MIN** is returned. **atoi** and **_wtoi** return **INT_MAX** and **INT_MIN** on these conditions. In all out-of-range cases, **errno** is set to **ERANGE**. If the parameter passed in is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return 0.

## Remarks

These functions convert a character string to an integer value (**atoi** and **_wtoi**). The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. The function stops reading the input string at the first character that it cannot recognize as part of a number. This character may be the null character ('\0' or L'\0') terminating the string.

The *str* argument to **atoi** and **_wtoi** has the following form:

> [*whitespace*] [*sign*] [*digits*]]

A *whitespace* consists of space or tab characters, which are ignored; *sign* is either plus (+) or minus (-); and *digits* are one or more digits.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstoi**|**atoi**|**atoi**|**_wtoi**|
|**_ttoi**|**atoi**|**atoi**|**_wtoi**|

## Requirements

|Routines|Required header|
|--------------|---------------------|
|**atoi**|\<stdlib.h>|
|**_atoi_l**, **_wtoi**, **_wtoi_l**|\<stdlib.h> or \<wchar.h>|

## Example

This program shows how numbers stored as strings can be converted to numeric values using the **atoi** functions.

```C
// crt_atoi.c
// This program shows how numbers
// stored as strings can be converted to
// numeric values using the atoi functions.

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main( void )
{
    char    *str = NULL;
    int     value = 0;

    // An example of the atoi function.
    str = "  -2309 ";
    value = atoi( str );
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );

    // Another example of the atoi function.
    str = "31412764";
    value = atoi( str );
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );

    // Another example of the atoi function
    // with an overflow condition occurring.
    str = "3336402735171707160320";
    value = atoi( str );
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );
    if (errno == ERANGE)
    {
       printf("Overflow condition occurred.\n");
    }
}
```

```Output
Function: atoi( "  -2309 " ) = -2309
Function: atoi( "31412764" ) = 31412764
Function: atoi( "3336402735171707160320" ) = 2147483647
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
