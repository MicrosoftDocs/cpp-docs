---
description: "Learn more about: isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l"
title: "isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l"
ms.date: "4/2/2020"
api_name: ["_iswxdigit_l", "iswxdigit", "isxdigit", "_isxdigit_l", "_o_iswxdigit", "_o_isxdigit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswxdigit", "isxdigit", "_istxdigit"]
helpviewer_keywords: ["isxdigit function", "istxdigit function", "_iswxdigit_l function", "_istxdigit function", "_isxdigit_l function", "iswxdigit_l function", "isxdigit_l function", "hexadecimal characters", "iswxdigit function"]
ms.assetid: c8bc5146-0b58-4e3f-bee3-f2318dd0f829
---
# isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l

Determines whether an integer represents a character that is a hexadecimal digit.

## Syntax

```C
int isxdigit(
   int c
);
int iswxdigit(
   wint_t c
);
int _isxdigit_l(
   int c,
   _locale_t locale
);
int _iswxdigit_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of a hexadecimal digit. **isxdigit** returns a nonzero value if *c* is a hexadecimal digit (A - F, a - f, or 0 - 9). **iswxdigit** returns a nonzero value if *c* is a wide character that corresponds to a hexadecimal digit character. Each of these routines returns 0 if *c* does not satisfy the test condition.

For the "C" locale, the **iswxdigit** function does not support Unicode full-width hexadecimal characters.

The versions of these functions that have the **_l** suffix use the locale that's passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **isxdigit** and **_isxdigit_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istxdigit**|**isxdigit**|**isxdigit**|**iswxdigit**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isxdigit**|\<ctype.h>|
|**iswxdigit**|\<ctype.h> or \<wchar.h>|
|**_isxdigit_l**|\<ctype.h>|
|**_iswxdigit_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
