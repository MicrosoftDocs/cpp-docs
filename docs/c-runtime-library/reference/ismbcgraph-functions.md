---
description: "Learn more about: _ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l"
title: "_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l"
ms.date: "4/2/2020"
api_name: ["_ismbcpunct_l", "_ismbcblank", "_ismbcprint", "_ismbcgraph_l", "_ismbcblank_l", "_ismbcpunct", "_ismbcprint_l", "_ismbcspace_l", "_ismbcspace", "_ismbcgraph", "_o__ismbcblank", "_o__ismbcblank_l", "_o__ismbcgraph", "_o__ismbcgraph_l", "_o__ismbcprint", "_o__ismbcprint_l", "_o__ismbcpunct", "_o__ismbcpunct_l", "_o__ismbcspace", "_o__ismbcspace_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbcspace", "_ismbcgraph", "_ismbcpunct", "ismbcspace_l", "ismbcgraph", "_ismbcgraph_l", "_ismbcprint", "_ismbcspace_l", "ismbcprint", "ismbcgraph_l", "ismbcspace", "ismbcpunct"]
helpviewer_keywords: ["ismbcspace_l function", "_ismbcprint_l function", "ismbcspace function", "ismbcpunct function", "_ismbcspace_l function", "_ismbcprint function", "ismbcprint function", "_ismbcgraph function", "ismbcgraph_l function", "_ismbcpunct_l function", "ismbcpunct_l function", "ismbcprint_l function", "_ismbcpunct function", "ismbcgraph function", "_ismbcgraph_l function", "_ismbcspace function"]
ms.assetid: 8e0a5f47-ba64-4411-92a3-3c525d16e3be
---
# _ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l

Determines whether character is a graphical character, a display character, a punctuation character, or a space character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbcgraph(
   unsigned int c
);
int _ismbcgraph_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcprint(
   unsigned int c
);
int _ismbcprint_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcpunct(
   unsigned int c
);
int _ismbcpunct_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcblank(
   unsigned int c
);
int _ismbcblank_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcspace(
   unsigned int c
);
int _ismbcspace_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Character to be determined.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines returns a nonzero value if the character satisfies the test condition, or 0 if it does not. If *c* <= 255 and there is a corresponding **_ismbb** routine (for example, **_ismbcalnum** corresponds to **_ismbbalnum**), the result is the return value of the corresponding **_ismbb** routine.

The versions of these functions are identical, except that the ones that have the **_l** suffix use the locale that's passed in for their locale-dependent behavior, instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

## Remarks

Each of these functions tests a given multibyte character for a given condition.

|Routine|Test condition|Code page 932 example|
|-------------|--------------------|---------------------------|
|**_ismbcgraph**|Graphic|Returns nonzero if and only if *c* is a single-byte representation of any ASCII or katakana printable character except a white space ( ).|
|**_ismbcprint**|Printable|Returns nonzero if and only if *c* is a single-byte representation of any ASCII or katakana printable character including a white space ( ).|
|**_ismbcpunct**|Punctuation|Returns nonzero if and only if *c* is a single-byte representation of any ASCII or katakana punctuation character.|
|**_ismbcblank**|Space or horizontal tab|Returns nonzero if and only if *c* is a space or horizontal tab character: *c*=0x20 or *c*=0x09.|
|**_ismbcspace**|White space|Returns nonzero if and only if *c* is a white-space character: *c*=0x20 or 0x09<=*c*<=0x0D.|

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbcgraph**|\<mbstring.h>|
|**_ismbcgraph_l**|\<mbstring.h>|
|**_ismbcprint**|\<mbstring.h>|
|**_ismbcprint_l**|\<mbstring.h>|
|**_ismbcpunct**|\<mbstring.h>|
|**_ismbcpunct_l**|\<mbstring.h>|
|**_ismbcblank**|\<mbstring.h>|
|**_ismbcblank_l**|\<mbstring.h>|
|**_ismbcspace**|\<mbstring.h>|
|**_ismbcspace_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_ismbc Routines](../../c-runtime-library/ismbc-routines.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
