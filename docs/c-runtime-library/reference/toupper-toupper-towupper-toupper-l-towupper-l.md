---
description: "Learn more about: toupper, _toupper, towupper, _toupper_l, _towupper_l"
title: "toupper, _toupper, towupper, _toupper_l, _towupper_l"
ms.date: "4/2/2020"
api_name: ["_toupper_l", "towupper", "toupper", "_towupper_l", "_toupper", "_o__toupper", "_o__toupper_l", "_o__towupper_l", "_o_toupper", "_o_towupper"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["towupper", "_toupper", "_totupper", "toupper"]
helpviewer_keywords: ["_toupper function", "towupper function", "uppercase, converting strings to", "totupper function", "string conversion, to different characters", "towupper_l function", "toupper_l function", "string conversion, case", "_toupper_l function", "_towupper_l function", "_totupper function", "case, converting", "characters, converting", "toupper function"]
ms.assetid: cdef1b0f-b19c-4d11-b7d2-cf6334c9b6cc
---
# toupper, _toupper, towupper, _toupper_l, _towupper_l

Convert character to uppercase.

## Syntax

```C
int toupper(
   int c
);
int _toupper(
   int c
);
int towupper(
   wint_t c
);
int _toupper_l(
   int c ,
   _locale_t locale
);
int _towupper_l(
   wint_t c ,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Character to convert.

*locale*<br/>
Locale to use.

## Return Value

Each of these routines converts a copy of *c*, if possible, and returns the result.

If *c* is a wide character for which **iswlower** is nonzero and there is a corresponding wide character for which [iswupper](isupper-isupper-l-iswupper-iswupper-l.md) is nonzero, **towupper** returns the corresponding wide character; otherwise, **towupper** returns *c* unchanged.

There is no return value reserved to indicate an error.

In order for **toupper** to give the expected results, [__isascii](isascii-isascii-iswascii.md) and [islower](islower-iswlower-islower-l-iswlower-l.md) must both return nonzero.

## Remarks

Each of these routines converts a given lowercase letter to an uppercase letter if possible and appropriate. The case conversion of **towupper** is locale-specific. Only the characters relevant to the current locale are changed in case. The functions without the **_l** suffix use the currently set locale. The versions of these functions with the **_l** suffix take the locale as a parameter and use that instead of the currently set locale. For more information, see [Locale](../../c-runtime-library/locale.md).

In order for **toupper** to give the expected results, [__isascii](isascii-isascii-iswascii.md) and [isupper](isupper-isupper-l-iswupper-iswupper-l.md) must both return nonzero.

[Data Conversion Routines](../../c-runtime-library/data-conversion.md)

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_totupper**|**toupper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**_toupper_l**|**_mbctoupper_l**|**_towupper_l**|

> [!NOTE]
> **_toupper_l** and **_towupper_l** have no locale dependence and are not meant to be called directly. They are provided for internal use by **_totupper_l**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**toupper**|\<ctype.h>|
|**_toupper**|\<ctype.h>|
|**towupper**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [to Functions](../../c-runtime-library/to-functions.md).

## See also

[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[to Functions](../../c-runtime-library/to-functions.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
