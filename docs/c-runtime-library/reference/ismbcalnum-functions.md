---
description: "Learn more about: _ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l"
title: "_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l"
ms.date: "4/2/2020"
api_name: ["_ismbcalpha", "_ismbcalnum", "_ismbcdigit", "_ismbcalnum_l", "_ismbcdigit_l", "_ismbcalpha_l", "_o__ismbcalnum", "_o__ismbcalnum_l", "_o__ismbcalpha", "_o__ismbcalpha_l", "_o__ismbcdigit", "_o__ismbcdigit_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbcdigit", "ismbcalnum_l", "_ismbcdigit_l", "_ismbcalpha", "ismbcalnum", "ismbcdigit", "ismbcalpha", "_ismbcalnum_l", "_ismbcalnum", "ismbcdigit_l"]
helpviewer_keywords: ["ismbcalpha function", "_ismbcalnum function", "ismbcdigit_l function", "_ismbcalnum_l function", "_ismbcdigit function", "ismbcalnum function", "_ismbcalpha_l function", "ismbcdigit function", "_ismbcalpha function", "_ismbcdigit_l function", "ismbcalnum_l function", "ismbcalpha_l function"]
ms.assetid: 12d57925-aebe-46e0-80b0-82b84c4c31ec
---
# _ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l

Checks whether a multibyte character is an alphanumeric, alpha, or digit character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbcalnum
(
   unsigned int c
);
int _ismbcalnum_l
(
   unsigned int c,
   _locale_t locale
);
int _ismbcalpha
(
   unsigned int c
);
int _ismbcalpha_l
(
   unsigned int c,
   _locale_t locale
);
int _ismbcdigit
(
   unsigned int c
);
int _ismbcdigit_l
(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Character to be tested.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns a nonzero value if the character satisfies the test condition or 0 if it does not. If *c*<= 255 and there is a corresponding **_ismbb** routine (for example, **_ismbcalnum** corresponds to **_ismbbalnum**), the result is the return value of the corresponding **_ismbb** routine.

## Remarks

Each of these routines tests a given multibyte character for a given condition.

The versions of these functions with the **_l** suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

|Routine|Test condition|Code page 932 example|
|-------------|--------------------|---------------------------|
|**_ismbcalnum**, **_ismbcalnum_l**|Alphanumeric|Returns nonzero if and only if *c* is a single-byte representation of an ASCII English letter: See examples for **_ismbcdigit** and **_ismbcalpha**.|
|**_ismbcalpha**, **_ismbcalpha_l**|Alphabetic|Returns nonzero if and only if *c* is a single-byte representation of an ASCII English letter: 0x41<=*c*<=0x5A or 0x61<=*c*<=0x7A; or a katakana letter: 0xA6<=*c*<=0xDF.|
|**_ismbcdigit**, **_ismbcdigit**|Digit|Returns nonzero if and only if *c* is a single-byte representation of an ASCII digit: 0x30<=*c*<=0x39.|

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbcalnum**, **_ismbcalnum_l**|\<mbstring.h>|
|**_ismbcalpha**, **_ismbcalpha_l**|\<mbstring.h>|
|**_ismbcdigit**, **_ismbcdigit_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
