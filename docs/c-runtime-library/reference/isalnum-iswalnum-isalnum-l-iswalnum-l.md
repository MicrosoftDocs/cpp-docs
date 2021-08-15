---
description: "Learn more about: isalnum, iswalnum, _isalnum_l, _iswalnum_l"
title: "isalnum, iswalnum, _isalnum_l, _iswalnum_l"
ms.date: "4/2/2020"
api_name: ["_iswalnum_l", "_isalnum_l", "iswalnum", "isalnum", "_o_isalnum", "_o_iswalnum"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_istalnum_l", "_iswalnum_l", "iswalnum", "_isalnum_l", "isalnum", "_istalnum"]
helpviewer_keywords: ["_istalnum function", "_ismbcalnum_l function", "iswalnum function", "isalnum function", "istalnum function", "_isalnum_l function", "_istalnum_l function", "_iswalnum_l function"]
ms.assetid: 0dc51306-ade8-4944-af27-e4176fc89093
---
# isalnum, iswalnum, _isalnum_l, _iswalnum_l

Determines whether an integer represents an alphanumeric character.

## Syntax

```C
int isalnum( int c );
int iswalnum( wint_t c );
int _isalnum_l( int c,  _locale_t locale );
int _iswalnum_l( wint_t c, _locale_t locale );
```

### Parameters

*c*<br/>
Integer to test.

*locale*<br/>
The locale to use.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of an alphanumeric character. **isalnum** returns a nonzero value if either **isalpha** or **isdigit** is nonzero for *c*, that is, if *c* is within the ranges A - Z, a - z, or 0 - 9. **iswalnum** returns a nonzero value if either **iswalpha** or **iswdigit** is nonzero for *c*. Each of these routines returns 0 if *c* does not satisfy the test condition.

The versions of these functions that have the **_l** suffix use the locale parameter that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **isalnum** and **_isalnum_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istalnum**|**isalnum**|[_ismbcalnum](ismbcalnum-functions.md)|**iswalnum**|
|**_istalnum_l**|**_isalnum_l**|**_ismbcalnum_l**|**_iswalnum_l**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isalnum**|\<ctype.h>|
|**iswalnum**|\<ctype.h> or \<wchar.h>|
|**_isalnum_l**|\<ctype.h>|
|**_iswalnum_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
