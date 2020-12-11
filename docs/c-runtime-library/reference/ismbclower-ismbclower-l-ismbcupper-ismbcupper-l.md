---
description: "Learn more about: _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l"
title: "_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l"
ms.date: "4/2/2020"
api_name: ["_ismbclower", "_ismbclower_l", "_ismbcupper_l", "_ismbcupper", "_o__ismbclower", "_o__ismbclower_l", "_o__ismbcupper", "_o__ismbcupper_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbcupper", "_ismbclower"]
helpviewer_keywords: ["_ismbcupper function", "ismbclower function", "_ismbclower_l function", "ismbcupper_l function", "_ismbclower function", "ismbcupper function", "ismbclower_l function", "_ismbcupper_l function"]
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
---
# _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l

Checks whether a multibyte character is lowercase or uppercase.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbclower(
   unsigned int c
);
int _ismbclower_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcupper(
   unsigned int c
);
int _ismbcupper_l(
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

Each of these functions tests a given multibyte character for a given condition.

The versions of these functions with the **_l** suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

|Routine|Test condition|Code page 932 example|
|-------------|--------------------|---------------------------|
|**_ismbclower**|Lowercase alphabetic|Returns nonzero if and only if *c* is a single-byte representation of an ASCII lowercase English letter: 0x61<=*c*<=0x7A.|
|**_ismbclower_l**|Lowercase alphabetic|Returns nonzero if and only if *c* is a single-byte representation of an ASCII lowercase English letter: 0x61<=*c*<=0x7A.|
|**_ismbcupper**|Uppercase alphabetic|Returns nonzero if and only if *c* is a single-byte representation of an ASCII uppercase English letter: 0x41<=*c*<=0x5A.|
|**_ismbcupper_l**|Uppercase alphabetic|Returns nonzero if and only if *c* is a single-byte representation of an ASCII uppercase English letter: 0x41<=*c*<=0x5A.|

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbclower**|\<mbstring.h>|
|**_ismbclower_l**|\<mbstring.h>|
|**_ismbcupper**|\<mbstring.h>|
|**_ismbcupper_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
