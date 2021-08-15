---
description: "Learn more about: atoll, _atoll_l, _wtoll, _wtoll_l"
title: "atoll, _atoll_l, _wtoll, _wtoll_l"
ms.date: "4/2/2020"
api_name: ["_wtoll", "_atoll_l", "_wtoll_l", "atoll", "_o__atoll_l", "_o__wtoll", "_o__wtoll_l", "_o_atoll"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tstoll_l", "_wtoll", "_atoll_l", "_ttoll", "_tstoll", "_wtoll_l", "atoll"]
helpviewer_keywords: ["atoll function", "_wtoll_l function", "_wtoll function", "_atoll_l function"]
ms.assetid: 5e85fcac-b351-4882-bff2-6e7c469b7fa8
---
# atoll, _atoll_l, _wtoll, _wtoll_l

Converts a string to a **`long long`** integer.

## Syntax

```C
long long atoll(
   const char *str
);
long long _wtoll(
   const wchar_t *str
);
long long _atoll_l(
   const char *str,
   _locale_t locale
);
long long _wtoll_l(
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

Each function returns the **`long long`** value that's produced by interpreting the input characters as a number. The return value for **atoll** is 0 if the input cannot be converted to a value of that type.

For overflow with large positive integral values, **atoll** returns **LLONG_MAX**, and for overflow with large negative integral values, it returns **LLONG_MIN**.

In all out-of-range cases, **errno** is set to **ERANGE**. If the parameter that's passed in is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return 0.

## Remarks

These functions convert a character string to a **`long long`** integer value.

The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. The function stops reading the input string at the first character that it cannot recognize as part of a number. This character might be the null character ('\0' or L'\0') that terminates the string.

The *str* argument to **atoll** has the following form:

> [*whitespace*] [*sign*] [*digits*]

A *whitespace* consists of space or tab characters, which are ignored; *sign* is either plus (+) or minus (-); and *digits* are one or more digits.

**_wtoll** is identical to **atoll** except that it takes a wide character string as a parameter.

The versions of these functions that have the **_l** suffix are identical to the versions that don't have it, except that they use the locale parameter that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tstoll**|**atoll**|**atoll**|**_wtoll**|
|**_tstoll_l**|**_atoll_l**|**_atoll_l**|**_wtoll_l**|
|**_ttoll**|**_atoll**|**_atoll**|**_wtoll**|

## Requirements

|Routines|Required header|
|--------------|---------------------|
|**atoll**, **_atoll_l**|\<stdlib.h>|
|**_wtoll**, **_wtoll_l**|\<stdlib.h> or \<wchar.h>|

## Example

This program shows how to use the **atoll** functions to convert numbers stored as strings to numeric values.

```C
// crt_atoll.c
// Build with: cl /W4 /Tc crt_atoll.c
// This program shows how to use the atoll
// functions to convert numbers stored as
// strings to numeric values.
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(void)
{
    char *str = NULL;
    long long value = 0;

    // An example of the atoll function
    // with leading and trailing white spaces.
    str = "  -27182818284 ";
    value = atoll(str);
    printf("Function: atoll(\"%s\") = %lld\n", str, value);

    // Another example of the atoll function
    // with an arbitrary decimal point.
    str = "314127.64";
    value = atoll(str);
    printf("Function: atoll(\"%s\") = %lld\n", str, value);

    // Another example of the atoll function
    // with an overflow condition occurring.
    str = "3336402735171707160320";
    value = atoll(str);
    printf("Function: atoll(\"%s\") = %lld\n", str, value);
    if (errno == ERANGE)
    {
       printf("Overflow condition occurred.\n");
    }
}
```

```Output
Function: atoll("  -27182818284 ") = -27182818284
Function: atoll("314127.64") = 314127
Function: atoll("3336402735171707160320") = 9223372036854775807
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
