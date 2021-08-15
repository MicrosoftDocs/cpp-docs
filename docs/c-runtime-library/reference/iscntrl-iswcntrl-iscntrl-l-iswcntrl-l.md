---
description: "Learn more about: iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l"
title: "iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l"
ms.date: "4/2/2020"
api_name: ["iscntrl", "_iswcntrl_l", "_iscntrl_l", "iswcntrl", "_o_iscntrl", "_o_iswcntrl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_istcntrl_l", "_iswcntrl_l", "iswcntrl", "_iscntrl_l", "iscntrl", "_istcntrl"]
helpviewer_keywords: ["iscntrl function", "_iscntrl_l function", "_iswcntrl_l function", "_istcntrl function", "istcntrl function", "iswcntrl function", "_istcntrl_l function"]
ms.assetid: 616eebf9-aed4-49ba-ba2c-8677c8fe6fb5
---
# iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l

Determines whether an integer represents a control character.

## Syntax

```C
int iscntrl(
   int c
);
int iswcntrl(
   wint_t c
);
int _iscntrl_l(
   int c,
   _locale_t locale
);
int _iswcntrl_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test

*locale*<br/>
The locale to use.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of a control character. **iscntrl** returns a nonzero value if *c* is a control character (0x00 - 0x1F or 0x7F). **iswcntrl** returns a nonzero value if *c* is a control wide character. Each of these routines returns 0 if *c* does not satisfy the test condition.

The versions of these functions that have the **_l** suffix use the locale parameter that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **iscntrl** and **_iscntrl_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istcntrl**|**iscntrl**|**iscntrl**|**iswcntrl**|
|**_istcntrl_l**|**_iscntrl_l**|**_iscntrl_l**|**_iswcntrl_l**|

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**iscntrl**|\<ctype.h>|
|**iswcntrl**|\<ctype.h> or \<wchar.h>|
|**_iscntrl_l**|\<ctype.h>|
|**_iswcntrl_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
