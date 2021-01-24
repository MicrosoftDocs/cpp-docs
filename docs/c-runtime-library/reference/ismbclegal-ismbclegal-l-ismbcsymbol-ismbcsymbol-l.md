---
description: "Learn more about: _ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l"
title: "_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l"
ms.date: "4/2/2020"
api_name: ["_ismbclegal_l", "_ismbclegal", "_ismbcsymbol", "_ismbcsymbol_l", "_o__ismbclegal", "_o__ismbclegal_l", "_o__ismbcsymbol", "_o__ismbcsymbol_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbcsymbol_l", "_ismbcsymbol_l", "_ismbcsymbol", "_ismbclegal_l", "_ismbclegal", "ismbclegal_l", "ismbcsymbol", "ismbclegal"]
helpviewer_keywords: ["ismbcsymbol function", "ismbclegal_l function", "_istlegal_l function", "istlegal function", "_istlegal function", "_ismbcsymbol function", "_ismbclegal_l function", "ismbclegal function", "ismbcsymbol_l function", "_ismbclegal function", "_ismbcsymbol_l function", "istlegal_l function"]
ms.assetid: 31bf1ea5-b56f-4e28-b21e-b49a2cf93ffc
---
# _ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l

Checks whether a multibyte character is a legal or symbol character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbclegal(
   unsigned int c
);
int _ismbclegal_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcsymbol(
   unsigned int c
);
int _ismbcsymbol_l(
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
|**_ismbclegal**|Valid multibyte|Returns nonzero if and only if the first byte of *c* is within ranges 0x81 - 0x9F or 0xE0 - 0xFC, while the second byte is within ranges 0x40 - 0x7E or 0x80 - FC.|
|**_ismbcsymbol**|Multibyte symbol|Returns nonzero if and only if 0x8141<=*c*<=0x81AC.|

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_istlegal**|Always returns false|**_ismbclegal**|Always returns false.|
|**_istlegal_l**|Always returns false|**_ismbclegal_l**|Always returns false.|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbclegal**, **_ismbclegal_l**|\<mbstring.h>|
|**_ismbcsymbol**, **_ismbcsymbol_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
