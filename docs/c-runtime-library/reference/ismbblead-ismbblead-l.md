---
title: "_ismbblead, _ismbblead_l"
ms.date: "11/04/2016"
api_name: ["_ismbblead_l", "_ismbblead"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: "DLLExport"
topic_type: ["apiref"]
f1_keywords: ["ismbblead_l", "istlead", "_ismbblead", "_ismbblead_l", "ismbblead", "_istlead"]
helpviewer_keywords: ["_ismbblead_l function", "ismbblead function", "_ismbblead function", "istlead function", "ismbblead_l function", "_istlead function"]
ms.assetid: 2abc6f75-ed5c-472e-bfd0-e905a1835ccf
---
# _ismbblead, _ismbblead_l

Tests a character to determine whether it is a lead byte of a multibyte character.

## Syntax

```C
int _ismbblead(
   unsigned int c
);
int _ismbblead_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

Returns a nonzero value if the integer *c* is the first byte of a multibyte character.

## Remarks

Multibyte characters consist of a lead byte followed by a trailing byte. Lead bytes are distinguished by being in a particular range for a given character set. For example, in code page 932 only, lead bytes range from 0x81 - 0x9F and 0xE0 - 0xFC.

**_ismbblead** uses the current locale for locale-dependent behavior. **_ismbblead_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_istlead**|Always returns false|**_ismbblead**|Always returns false|

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_ismbblead**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbblead_l**|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* For manifest constants for the test conditions.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
